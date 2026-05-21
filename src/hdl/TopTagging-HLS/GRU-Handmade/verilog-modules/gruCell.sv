/*
single GRU cell
processes input x and previous hidden state h_t-1 to produce new hidden state h_t

reset gate:
r_t = sigmoid(W_r * [x_t, h_t-1] + b_r)

update gate:
z_t = sigmoid(W_z * [x_t, h_t-1] + b_z)

candidate hidden state:
h_tilde = tanh(W_h * x_t + b_h + (r_t • (h_t-1 * U_h + b_h_rec)))

hidden state (output):
h_t = (1 - z_t) • h_tilde + z_t • h_t-1

- where * is matrix multiplication and • is hadamard product (pointwise multiplication)
- note that W and U matrices are concatenated into single matrix for reset/update gates
- concatenated in order W, U so input should be concatenated as x, h_t-1
- static GRU implementation
- order of hidden state computation reflects keras version
*/


`timescale 1ns / 1ps

// pkg_sel defines the weight to be used in the model
`include "pkg_sel_gru.svh"

import `RESET_GATE_PKG::*;
import `UPDATE_GATE_PKG::*;
import `CANDIDATE_W_PKG::*;
import `CANDIDATE_U_PKG::*;

module gru_cell #(parameter
    WIDTH               = 10,   // data width
    NFRAC               = 6,    // number of fractional bits in data
    x_SIZE              = 6,    // input dimensionality (d)
    h_SIZE              = 120,  // hidden state / output dimensionality (e)

    // lookup table parameters - should just leave these as defaults unless you want to get fancy with it
    MEM_WIDTH           = 18,   // precision of BRAM entries
    MEM_NFRAC           = 18,   // number of fractional bits in BRAM entries
    LOOKUP_WIDTH        = 10,   // width of lookup indices
    LOOKUP_NFRAC        = 7,    // fractional bits in lookup indices
    SIGMOID_BRAM_FILE   = "../weights_n_tables/sigmoid_table_18_18_10_7.dat",
    TANH_BRAM_FILE      = "../weights_n_tables/tanh_table_18_18_10_7.dat"
)(
    input logic clk,
    input logic reset,

    // handshake signals
    input logic input_valid,        // input data valid
    output logic output_valid,      // GRU cell output is valid
    output logic ready,             // GRU cell is ready to accept new data from previous layer
    input logic next_layer_ready,   // next layer is ready for input

    // data input/output
    input logic signed [WIDTH-1:0] x_t [0:x_SIZE-1],                // x_t: R^{d}
    input logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1],        // h_t_minus_1: R^{e}
    output logic signed [WIDTH-1:0] h_t [0:h_SIZE-1]                // h_t: R^{e}
);

    function automatic logic signed [WIDTH*2-1:0] mult (
        input logic signed [WIDTH-1:0] in1,
        input logic signed [WIDTH-1:0] in2
    );
        return (in1 * in2) >>> (NFRAC);
    endfunction

    localparam PIPELINING = 4;
    localparam PIPE_OUT = 0;
    localparam REMOVE_PIPELINES = 0;
    localparam logic signed [WIDTH-1:0] ONE_FP = 1 <<< NFRAC;       // fixed point equivalent of 1

    // gate outputs
    logic signed [WIDTH-1:0] r_t [0:h_SIZE-1];                      // r_t: R^{e}
    logic signed [WIDTH-1:0] z_t [0:h_SIZE-1];                      // z_t: R^{e}
    logic signed [WIDTH-1:0] h_tilde [0:h_SIZE-1];                  // h_tilde: R^{e}

    // gate intermediates
    logic signed [WIDTH-1:0] r_t_raw [0:h_SIZE-1];                  // r_t before sigmoid activation
    logic signed [WIDTH-1:0] z_t_raw [0:h_SIZE-1];                  // z_t before sigmoid activation
    logic signed [WIDTH-1:0] h_tilde_raw_W [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw_U [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw [0:h_SIZE-1];              // h_tilde before tanh activation
    logic signed [WIDTH-1:0] r_h_mult [0:h_SIZE-1];                 // r_t pointwise multiply

    logic input_ready, output_ready;
    assign input_ready = input_valid;
    assign output_valid = output_ready;

    // handshake signals between parts
    //    new data          input ok                output ok               next layer new data
    logic z_dense_ready,    z_dense_input_ready,    z_dense_output_ready,   z_dense_next_layer_ready;
    logic z_sig_ready,      z_sig_input_ready,      z_sig_output_ready,     z_sig_next_layer_ready;
    logic r_dense_ready,    r_dense_input_ready,    r_dense_output_ready,   r_dense_next_layer_ready;
    logic r_sig_ready,      r_sig_input_ready,      r_sig_output_ready,     r_sig_next_layer_ready;
    logic hU_dense_ready,   hU_dense_input_ready,   hU_dense_output_ready,  hU_dense_next_layer_ready;
    logic hW_dense_ready,   hW_dense_input_ready,   hW_dense_output_ready,  hW_dense_next_layer_ready;
    logic tanh_ready,       tanh_input_ready,       tanh_output_ready,      tanh_next_layer_ready;
    
    // first layers
    assign ready = z_dense_ready && r_dense_ready && hU_dense_ready && hW_dense_ready;
    assign z_dense_input_ready = input_ready;
    assign r_dense_input_ready = input_ready;
    assign hU_dense_input_ready = input_ready;
    assign hW_dense_input_ready = input_ready;

    // last layers
    assign tanh_next_layer_ready = next_layer_ready;
    assign z_sig_next_layer_ready = next_layer_ready;

    // check that output is good to go
    logic tanh_latch, z_sig_latch, restart;
    latch latch_tanh (.reset(restart), .clk(clk), .in(tanh_output_ready), .out(tanh_latch));
    latch latch_z_sig (.reset(restart), .clk(clk), .in(z_sig_output_ready), .out(z_sig_latch));
    assign output_ready = z_sig_latch && tanh_latch;
    assign restart = reset || (z_sig_latch && tanh_latch && next_layer_ready);

    // ----- RESET GATE -----
    // r_t = sigmoid(W_r * [x_t, h_t-1] + b_r)

    // new
    denseLayer #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .INPUT_SIZE         ( x_SIZE + h_SIZE           ),
        .OUTPUT_SIZE        ( h_SIZE                    ),
        .WEIGHTS            ( `RESET_GATE_PKG::weights  ),
        .BIAS               ( `RESET_GATE_PKG::bias     ),
        .PIPELINING         ( PIPELINING                ),
        .PIPE_OUT           ( PIPE_OUT                  )
    ) reset_gate_dense (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( r_dense_input_ready       ),
        .ready              ( r_dense_ready             ),
        .output_ready       ( r_dense_output_ready      ),
        .next_layer_ready   ( r_dense_next_layer_ready  ),
        .input_data         ( {x_t, h_t_minus_1}        ),
        .output_data        ( r_t_raw                   )
    );

    assign r_sig_input_ready = r_dense_output_ready;
    assign r_dense_next_layer_ready = r_sig_ready;

    // new
    sigmoid #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .SIZE               ( h_SIZE            ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .MEM_NFRAC          ( MEM_NFRAC         ),
        .LOOKUP_WIDTH       ( LOOKUP_WIDTH      ),
        .LOOKUP_NFRAC       ( LOOKUP_NFRAC      ),
        .BRAM_FILE          ( SIGMOID_BRAM_FILE ),
        .REMOVE_PIPELINES   ( REMOVE_PIPELINES  )
    ) reset_gate_sigmoid (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_ready        ( r_sig_input_ready         ),
        .output_ready       ( r_sig_output_ready        ),
        .ready              ( r_sig_ready               ),
        .next_layer_ready   ( r_sig_next_layer_ready    ),
        .input_data         ( r_t_raw           ),
        .output_data        ( r_t               )
    );


    // ----- UPDATE GATE -----
    // z_t = sigmoid(W_z * [x_t, h_t-1] + b_z)

    // new
    denseLayer #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .INPUT_SIZE         ( x_SIZE + h_SIZE           ),
        .OUTPUT_SIZE        ( h_SIZE                    ),
        .WEIGHTS            ( `UPDATE_GATE_PKG::weights ),
        .BIAS               ( `UPDATE_GATE_PKG::bias    ),
        .PIPELINING         ( PIPELINING                ),
        .PIPE_OUT           ( PIPE_OUT                  )
    ) update_gate_dense (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( z_dense_input_ready       ),
        .ready              ( z_dense_ready             ),
        .output_ready       ( z_dense_output_ready      ),
        .next_layer_ready   ( z_dense_next_layer_ready  ),
        .input_data         ( {x_t, h_t_minus_1}        ),
        .output_data        ( z_t_raw                   )
    );

    assign z_sig_input_ready = z_dense_output_ready;
    assign z_dense_next_layer_ready = z_sig_ready;

    // new
    sigmoid #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .SIZE               ( h_SIZE            ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .MEM_NFRAC          ( MEM_NFRAC         ),
        .LOOKUP_WIDTH       ( LOOKUP_WIDTH      ),
        .LOOKUP_NFRAC       ( LOOKUP_NFRAC      ),
        .BRAM_FILE          ( SIGMOID_BRAM_FILE ),
        .REMOVE_PIPELINES   ( REMOVE_PIPELINES  )
    ) update_gate_sigmoid (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_ready        ( z_sig_input_ready         ),
        .output_ready       ( z_sig_output_ready        ),
        .ready              ( z_sig_ready               ),
        .next_layer_ready   ( z_sig_next_layer_ready    ),
        .input_data         ( z_t_raw           ),
        .output_data        ( z_t               )
    );


    // ----- CANDIDATE HIDDEN STATE -----
    // h_tilde = tanh(W_h * x_t + b_h + (r_t • (h_t-1 * U_h + b_h_rec)))

    // inner dense layer: h_tilde_raw_U = h_t-1 * U_h + b_h_rec
    denseLayer #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .INPUT_SIZE         ( h_SIZE                    ),
        .OUTPUT_SIZE        ( h_SIZE                    ),
        .WEIGHTS            ( `CANDIDATE_U_PKG::weights ),
        .BIAS               ( `CANDIDATE_U_PKG::bias    ),
        .PIPELINING         ( PIPELINING                ),
        .PIPE_OUT           ( PIPE_OUT                  )
    ) candidate_gate_dense_U (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( hU_dense_input_ready      ),
        .ready              ( hU_dense_ready            ),
        .output_ready       ( hU_dense_output_ready     ),
        .next_layer_ready   ( hU_dense_next_layer_ready ),
        .input_data         ( h_t_minus_1               ),
        .output_data        ( h_tilde_raw_U             )
    );

    // outer dense layer: h_tilde_raw_W = W_h * x_t + b_h
    denseLayer #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .INPUT_SIZE         ( x_SIZE                    ),
        .OUTPUT_SIZE        ( h_SIZE                    ),
        .WEIGHTS            ( `CANDIDATE_W_PKG::weights ),
        .BIAS               ( `CANDIDATE_W_PKG::bias    ),
        .PIPELINING         ( PIPELINING                ),
        .PIPE_OUT           ( PIPE_OUT                  )
    ) candidate_gate_dense_W (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( hW_dense_input_ready      ),
        .ready              ( hW_dense_ready            ),
        .output_ready       ( hW_dense_output_ready     ),
        .next_layer_ready   ( hW_dense_next_layer_ready ),
        .input_data         ( x_t                       ),
        .output_data        ( h_tilde_raw_W             )
    );

    // applying reset gate: r_h_mult = r_t • h_tilde_raw_U
    genvar i;
    generate
        for (i = 0; i < h_SIZE; i++) begin : pointwise_mult_h_tilde
            always_comb begin
                r_h_mult[i] = mult(r_t[i], h_tilde_raw_U[i]);
            end
        end
    endgenerate

    // add parts together
    generate
        for (i = 0; i < h_SIZE; i++) begin : pointwise_add_h_tilde
            always_comb begin
                h_tilde_raw[i] = r_h_mult[i] + h_tilde_raw_W[i];
            end
        end
    endgenerate

    assign r_sig_next_layer_ready = tanh_ready;
    assign hU_dense_next_layer_ready = tanh_ready;
    assign hW_dense_next_layer_ready = tanh_ready;
    assign tanh_input_ready = r_sig_output_ready && hU_dense_next_layer_ready && hW_dense_next_layer_ready;

    // apply tanh activation
    tanh #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( h_SIZE            ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .MEM_NFRAC      ( MEM_NFRAC         ),
        .LOOKUP_WIDTH   ( LOOKUP_WIDTH      ),
        .LOOKUP_NFRAC   ( LOOKUP_NFRAC      ),
        .BRAM_FILE      ( TANH_BRAM_FILE    ),
        .REMOVE_PIPELINES   ( REMOVE_PIPELINES  )
    ) candidate_hidden_state_tanh (
        .clk                ( clk           ),
        .reset              ( reset         ),
        .input_ready        ( tanh_input_ready      ),
        .output_ready       ( tanh_output_ready     ),
        .ready              ( tanh_ready            ),
        .next_layer_ready   ( tanh_next_layer_ready ),
        .input_data         ( h_tilde_raw   ),
        .output_data        ( h_tilde       )
    );


    // ----- HIDDEN STATE / OUTPUT -----
    // h_t = (1 - z_t) • h_tilde + z_t • h_t-1
    generate
        for (i = 0; i < h_SIZE; i++) begin: pointwise_mult_h_t
            always_comb begin
                h_t[i] = mult((ONE_FP - z_t[i]), h_tilde[i]) + mult(z_t[i], h_t_minus_1[i]);
            end
        end
    endgenerate

`ifndef SYNTHESIS
    // =====================================================================
    // DEBUG PRINT BLOCK - r_t / z_t TRACE
    // Remove after gate values have been verified.
    // =====================================================================
    integer dbg_i;
    integer dbg_call_count;
    always_ff @(posedge clk) begin
        if (reset) begin
            dbg_call_count <= 0;
        end else if (output_valid) begin
            if (dbg_call_count < 21) begin
                for (dbg_i = 0; dbg_i < 20; dbg_i++) begin
                    $display(
                        "DBG_GRUCELL t=%0t i=%0d h_t_minus_1=%0d h_t=%0d r_t=%0d z_t=%0d h_tilde=%0d r_t_raw=%0d z_t_raw=%0d h_tilde_raw_W=%0d h_tilde_raw_U=%0d h_tilde_raw=%0d r_h_mult=%0d",
                        $time, dbg_i, h_t_minus_1[dbg_i], h_t[dbg_i], r_t[dbg_i], z_t[dbg_i], h_tilde[dbg_i], r_t_raw[dbg_i], z_t_raw[dbg_i], h_tilde_raw_W[dbg_i], h_tilde_raw_U[dbg_i], h_tilde_raw[dbg_i], r_h_mult[dbg_i]
                    );
                end
                dbg_call_count <= dbg_call_count + 1;
            end
        end
    end
`endif

endmodule

// holds high until a reset
module latch(input reset, input clk, input in, output logic out);
    always_ff @(posedge clk) begin
        if (reset) out <= 0;
        if (in) out <= 1;
    end
endmodule

module gru_cell_tb();

   localparam  WIDTH           = 32,
               NFRAC           = 16,
               x_SIZE          = 6,
               h_SIZE          = 120;
   logic clk;
   logic reset;
   logic signed [WIDTH-1:0] x_t [0:x_SIZE-1];
   logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];
   logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
   integer i, j;

   logic input_valid;        // input data valid
   logic output_valid;      // GRU cell output is valid
   logic ready;             // GRU cell is ready to accept new data from previous layer
   logic next_layer_ready;   // next layer is ready for input

   localparam PERIOD = 10;
   initial begin
       clk <= 1'b1;
       forever #(PERIOD/2) clk <= ~clk;
   end

   gruCell1 #(
       .WIDTH              ( WIDTH             ),
       .NFRAC              ( NFRAC             ),
       .x_SIZE             ( x_SIZE            ),
       .h_SIZE             ( h_SIZE            )
   ) dut (.*);

   initial begin
       reset <= 0;
       input_valid <= 1;
       next_layer_ready <= 1;

/*
        x_t <= {{16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111}
               };
*/

        x_t <= {{32'b0},
               {32'b0},
               {32'b0},
               {32'b0},
               {32'b0},
               {32'b0}
               };
        
       for (i = 0; i < h_SIZE; i = i + 1) begin
           h_t_minus_1[i] = 4'b0;
       end
        
       repeat(50) @(posedge clk);

       input_valid <= 0;
       repeat(200) @(posedge clk);
       

       for (j = 0; j < 14; j++) begin
          input_valid <= 1;
          for (i = 0; i < h_SIZE; i = i + 1) begin
             h_t_minus_1[i] = h_t[i];
          end
        
          repeat(15) @(posedge clk);

          input_valid <= 0;

          repeat(15) @(posedge clk);
       end

        // for (j = 0; j < 14; j++) begin
        //     for (i = 0; i < h_SIZE; i = i + 1) begin
        //         h_t_minus_1[i] = h_t[i];
        //     end
        
        //     repeat(30) @(posedge clk);
        // end

    //    x_t <= {{-16'd1},
    //            {16'd2},
    //            {-16'd3},
    //            {16'd4},
    //            {-16'd5},
    //            {16'd6}
    //            };
        
    //    for (i = 0; i < h_SIZE; i = i + 1) begin
    //        h_t_minus_1[i] = 4'b0001;
    //    end
        
    //    repeat(30) @(posedge clk);

    //    x_t <= {{-16'd2},
    //            {16'd2},
    //            {-16'd3},
    //            {16'd4},
    //            {-16'd5},
    //            {16'd6}
    //            };

    //     for (i = 0; i < h_SIZE; i = i + 1) begin
    //         h_t_minus_1[i] <= h_t[i];
    //     end

    //     repeat(30) @(posedge clk);

        $stop;

   end


endmodule