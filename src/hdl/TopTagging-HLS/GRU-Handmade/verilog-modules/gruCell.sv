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

    always @(posedge output_valid) begin
        for (int i = 0; i < h_SIZE; i++) begin
            $display(
                "T=%0t | i=%0d | r_t=%0d z_t=%0d h_tilde=%0d | r_t_raw=%0d z_t_raw=%0d | hW=%0d hU=%0d h_raw=%0d r_h_mult=%0d",
                $time, i,
                r_t[i], z_t[i], h_tilde[i],
                r_t_raw[i], z_t_raw[i],
                h_tilde_raw_W[i], h_tilde_raw_U[i],
                h_tilde_raw[i], r_h_mult[i]
            );
        end
    end

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

    logic input_ready, output_ready, input_accepted;
    assign input_ready = input_accepted;
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
    
    // Accept one cell transaction at a time so every branch result can be paired with the same h_t_minus_1.
    // Backpressure holds these payloads until the wrapper consumes h_t.
    logic transaction_valid;
    assign ready = z_dense_ready && r_dense_ready && hU_dense_ready && hW_dense_ready && !transaction_valid;
    assign input_accepted = input_valid && ready;
    assign z_dense_input_ready = input_ready;
    assign r_dense_input_ready = input_ready;
    assign hU_dense_input_ready = input_ready;
    assign hW_dense_input_ready = input_ready;

    logic signed [WIDTH-1:0] r_t_hold [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw_U_hold [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw_W_hold [0:h_SIZE-1];
    logic signed [WIDTH-1:0] z_t_hold [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_hold [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1_hold [0:h_SIZE-1];
    logic h_prev_valid, r_hold_valid, hU_hold_valid, hW_hold_valid, z_hold_valid, tanh_hold_valid;
    logic candidate_inflight, candidate_operands_valid, restart;

    // Reset clears both valid flags and held payloads; reset must win over new valid input.
    // Otherwise a stale branch result can survive into the next transaction.
    assign output_ready = h_prev_valid && z_hold_valid && tanh_hold_valid;
    assign restart = reset || (output_ready && next_layer_ready);
    assign transaction_valid = h_prev_valid || r_hold_valid || hU_hold_valid || hW_hold_valid ||
                               z_hold_valid || tanh_hold_valid || candidate_inflight;

    // The valid bit and payload are registered together; otherwise a later branch result
    // can be combined with an earlier one when pipeline branches finish on different cycles.
    always_ff @(posedge clk) begin
        if (restart) begin
            h_prev_valid <= 1'b0;
            r_hold_valid <= 1'b0;
            hU_hold_valid <= 1'b0;
            hW_hold_valid <= 1'b0;
            z_hold_valid <= 1'b0;
            tanh_hold_valid <= 1'b0;
            candidate_inflight <= 1'b0;
            h_t_minus_1_hold <= '{default: 0};
            r_t_hold <= '{default: 0};
            h_tilde_raw_U_hold <= '{default: 0};
            h_tilde_raw_W_hold <= '{default: 0};
            z_t_hold <= '{default: 0};
            h_tilde_hold <= '{default: 0};
        end else begin
            if (input_accepted) begin
                h_t_minus_1_hold <= h_t_minus_1;
                h_prev_valid <= 1'b1;
            end
            if (r_sig_output_ready && r_sig_next_layer_ready) begin
                r_t_hold <= r_t;
                r_hold_valid <= 1'b1;
            end
            if (hU_dense_output_ready && hU_dense_next_layer_ready) begin
                h_tilde_raw_U_hold <= h_tilde_raw_U;
                hU_hold_valid <= 1'b1;
            end
            if (hW_dense_output_ready && hW_dense_next_layer_ready) begin
                h_tilde_raw_W_hold <= h_tilde_raw_W;
                hW_hold_valid <= 1'b1;
            end
            if (z_sig_output_ready && z_sig_next_layer_ready) begin
                z_t_hold <= z_t;
                z_hold_valid <= 1'b1;
            end
            if (tanh_input_ready) begin
                candidate_inflight <= 1'b1;
            end
            if (tanh_output_ready && tanh_next_layer_ready) begin
                h_tilde_hold <= h_tilde;
                tanh_hold_valid <= 1'b1;
                candidate_inflight <= 1'b0;
            end
        end
    end

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

    // Candidate math uses held operands, not live branch wires.
    // Live wires may already be moving to another transaction by the time all operands are valid.
    genvar i;
    generate
        for (i = 0; i < h_SIZE; i++) begin : pointwise_mult_h_tilde
            always_comb begin
                r_h_mult[i] = mult(r_t_hold[i], h_tilde_raw_U_hold[i]);
            end
        end
    endgenerate

    // add parts together
    generate
        for (i = 0; i < h_SIZE; i++) begin : pointwise_add_h_tilde
            always_comb begin
                h_tilde_raw[i] = r_h_mult[i] + h_tilde_raw_W_hold[i];
            end
        end
    endgenerate

    assign r_sig_next_layer_ready = !r_hold_valid;
    assign hU_dense_next_layer_ready = !hU_hold_valid;
    assign hW_dense_next_layer_ready = !hW_hold_valid;
    assign z_sig_next_layer_ready = !z_hold_valid;
    assign tanh_next_layer_ready = !tanh_hold_valid;
    assign candidate_operands_valid = r_hold_valid && hU_hold_valid && hW_hold_valid;

    // The reset gate, candidate-U, and candidate-W operands must all be held before tanh starts.
    // This prevents the candidate path from using stale W/U data when branch latencies differ.
    assign tanh_input_ready = candidate_operands_valid && tanh_ready && !candidate_inflight && !tanh_hold_valid;

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
    // The final equation uses registered same-transaction operands.
    // This prevents cross-timestep mixing between z_t, h_tilde, and h_t_minus_1.
    generate
        for (i = 0; i < h_SIZE; i++) begin: pointwise_mult_h_t
            always_comb begin
                h_t[i] = mult((ONE_FP - z_t_hold[i]), h_tilde_hold[i]) + mult(z_t_hold[i], h_t_minus_1_hold[i]);
            end
        end
    endgenerate

// `ifndef SYNTHESIS
//     // =====================================================================
//     // DEBUG PRINT BLOCK - r_t / z_t TRACE
//     // Remove after gate values have been verified.
//     // =====================================================================
//     integer dbg_i;
//     integer dbg_call_count;
//     always_ff @(posedge clk) begin
//         if (reset) begin
//             dbg_call_count <= 0;
//         end else if (output_valid) begin
//             if (dbg_call_count < 21) begin
//                 for (dbg_i = 0; dbg_i < 20; dbg_i++) begin
//                     $display(
//                         "DBG_GRUCELL t=%0t i=%0d h_t_minus_1=%0d h_t=%0d r_t=%0d z_t=%0d h_tilde=%0d r_t_raw=%0d z_t_raw=%0d h_tilde_raw_W=%0d h_tilde_raw_U=%0d h_tilde_raw=%0d r_h_mult=%0d",
//                         $time, dbg_i, h_t_minus_1[dbg_i], h_t[dbg_i], r_t[dbg_i], z_t[dbg_i], h_tilde[dbg_i], r_t_raw[dbg_i], z_t_raw[dbg_i], h_tilde_raw_W[dbg_i], h_tilde_raw_U[dbg_i], h_tilde_raw[dbg_i], r_h_mult[dbg_i]
//                     );
//                 end
//                 dbg_call_count <= dbg_call_count + 1;
//             end
//         end
//     end
// `endif

endmodule

// holds high until a reset
module latch(input reset, input clk, input in, output logic out);
    always_ff @(posedge clk) begin
        // Reset is dominant so restart cannot leave a stale valid flag asserted.
        if (reset) out <= 0;
        else if (in) out <= 1;
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
