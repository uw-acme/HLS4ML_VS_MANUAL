
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
h_t = (1 - z_t) • h_t-1 + z_t • h_tilde

- where * is matrix multiplication and • is hadamard product (pointwise multiplication)
- note that W and U matrices are concatenated into single matrix for reset/update gates
- concatenated in order W, U so input should be concatenated as x, h_t-1
*/


`timescale 1ns / 1ps

// pkg_sel defines the weight to be used in the model
`include "pkg_sel_gru.svh"

import `RESET_GATE_PKG::*;
import `UPDATE_GATE_PKG::*;
import `CANDIDATE_W_PKG::*;
import `CANDIDATE_U_PKG::*;

module gruCell #(parameter
    WIDTH               = 10,   // data width
    NFRAC               = 6,    // number of fractional bits in data
    x_SIZE              = 6,    // input dimensionality (d)
    h_SIZE              = 120,  // hidden state / output dimensionality (e)
    MEM_WIDTH           = 10,   // precision of BRAM entries
    MEM_NFRAC           = 6,    // number of fractional bits in BRAM entries
    SIGMOID_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
    TANH_BRAM_FILE      = "memw10_size512_tanhBRAM.mem"
)(
    input clk,
    input reset,
    input input_ready,          // input data valid
    output logic output_ready,  // GRU output is valid
    output logic ready,         // GRU is ready to accept new data from previous layer
    input next_layer_ready,     // next layer is ready for input
    input signed        [WIDTH-1:0] x_t [0:x_SIZE-1],               // x_t: R^{d}
    input signed        [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1],       // h_t_minus_1: R^{e}

    output logic signed       [WIDTH-1:0] h_t [0:h_SIZE-1]          // h_t: R^{e}
);

    function automatic logic signed [WIDTH*2-1:0] mult (
        input logic signed [WIDTH-1:0] in1,
        input logic signed [WIDTH-1:0] in2
    );
        return (in1 * in2) >>> (NFRAC);
    endfunction

    localparam PIPELINING = 4;
    localparam PIPE_OUT = 0;
    localparam logic signed [WIDTH-1:0] ONE_FP = 1 <<< NFRAC;       // fixed point equivalent of 1

    logic signed [WIDTH-1:0] r_t [0:h_SIZE-1];                      // r_t: R^{e}
    logic signed [WIDTH-1:0] z_t [0:h_SIZE-1];                      // z_t: R^{e}
    logic signed [WIDTH-1:0] r_t_raw [0:h_SIZE-1];                  // r_t: R^{e} before sigmoid activation
    logic signed [WIDTH-1:0] z_t_raw [0:h_SIZE-1];                  // z_t: R^{e} before sigmoid activation

    logic signed [WIDTH-1:0] h_tilde_raw_W [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw_U [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw_gate [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_tilde_raw [0:h_SIZE-1];              // h_tilde: R^{e} without tanh activation
    logic signed [WIDTH-1:0] h_tilde [0:h_SIZE-1];                  // h_tilde: R^{e}

    logic signed [WIDTH-1:0] r_h_mult [0:h_SIZE-1];                 // r_t pointwise multiply


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
        .input_ready        ( ),
        .ready              ( ),
        .output_ready       ( ),
        .next_layer_ready   ( ),
        .input_data         ( {x_t, h_t_minus_1}        ),
        .output_data        ( r_t_raw                   )
    );

    // new
    sigmoid #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .SIZE               ( h_SIZE            ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .MEM_NFRAC          ( MEM_NFRAC         ),
        .LOOKUP_WIDTH       ( WIDTH             ),
        .LOOKUP_NFRAC       ( NFRAC             ),
        .BRAM_FILE          ( SIGMOID_BRAM_FILE )
    ) reset_gate_sigmoid (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_ready        ( ),
        .output_ready       ( ),
        .ready              ( ),
        .next_layer_ready   ( ),
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
    ) reset_gate_dense (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( ),
        .ready              ( ),
        .output_ready       ( ),
        .next_layer_ready   ( ),
        .input_data         ( {x_t, h_t_minus_1}        ),
        .output_data        ( z_t_raw                   )
    );

    // new
    sigmoid #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .SIZE               ( h_SIZE            ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .MEM_NFRAC          ( MEM_NFRAC         ),
        .LOOKUP_WIDTH       ( WIDTH             ),
        .LOOKUP_NFRAC       ( NFRAC             ),
        .BRAM_FILE          ( SIGMOID_BRAM_FILE )
    ) reset_gate_sigmoid (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_ready        ( ),
        .output_ready       ( ),
        .ready              ( ),
        .next_layer_ready   ( ),
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
    ) reset_gate_dense (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( ),
        .ready              ( ),
        .output_ready       ( ),
        .next_layer_ready   ( ),
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
    ) reset_gate_dense (
        .clk                ( clk                       ),
        .reset              ( reset                     ),
        .input_ready        ( ),
        .ready              ( ),
        .output_ready       ( ),
        .next_layer_ready   ( ),
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
                h_tilde_raw[i] = r_h_mult + h_tilde_raw_W;
            end
        end
    endgenerate

    // apply tanh activation
    tanh #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( h_SIZE            ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .MEM_NFRAC      ( MEM_NFRAC         ),
        .LOOKUP_WIDTH   ( WIDTH             ),
        .LOOKUP_NFRAC   ( NFRAC             ),
        .BRAM_FILE      ( TANH_BRAM_FILE    )
    ) candidate_hidden_state_tanh (
        .clk                ( clk           ),
        .reset              ( reset         ),
        .input_ready        ( ),
        .output_ready       ( ),
        .ready              ( ),
        .next_layer_ready   ( ),
        .input_data         ( h_tilde_raw   ),
        .output_data        ( h_tilde       )
    )


    // ----- HIDDEN STATE / OUTPUT -----
    // h_t = (1 - z_t) • h_t-1 + z_t • h_tilde
    generate
        for (i = 0; i < h_SIZE; i++) begin: pointwise_mult_h_t
            always_comb begin
                h_t[i] = mult((ONE_FP - z_t[i]), h_t_minus_1[i]) + mult(z_t[i], h_tilde[i]);
            end
        end
    endgenerate

endmodule

module gruCell_tb();

   localparam  WIDTH           = 16,
               NFRAC           = 6,
               x_SIZE          = 6,
               h_SIZE          = 120,
               MEM_WIDTH       = 10,
               sigmoid_TABLE_SIZE_POW  = 10,
               tanh_TABLE_SIZE_POW = 9,
               sigmoid_BRAM_FILE = "./pkg_gen_gru/binaries/sigmoid_BRAM_binaries/memw10_size1024_sigmoidBRAM.mem",
               tanh_BRAM_FILE = "./pkg_gen_gru/binaries/tanh_BRAM_binaries/memw10_size512_tanhBRAM.mem";
   logic clk;
   logic reset;
   logic signed [WIDTH-1:0] x_t [0:x_SIZE-1];
   logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];
   logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
   integer i, j;

   localparam PERIOD = 10;
   initial begin
       clk <= 1'b1;
       forever #(PERIOD/2) clk <= ~clk;
   end

   gruCell #(
       .WIDTH              ( WIDTH             ),
       .NFRAC              ( NFRAC             ),
       .x_SIZE             ( x_SIZE            ),
       .h_SIZE             ( h_SIZE            ),
       .MEM_WIDTH          ( MEM_WIDTH         ),
       .SIGMOID_TABLE_SIZE_POW     (sigmoid_TABLE_SIZE_POW                 ),
       .TANH_TABLE_SIZE_POW        (tanh_TABLE_SIZE_POW                    ),
       .SIGMOID_BRAM_FILE  (sigmoid_BRAM_FILE  ),
       .TANH_BRAM_FILE     (tanh_BRAM_FILE     )
   ) dut (
       .clk(clk),  .reset(reset),
       .x_t(x_t),  .h_t_minus_1(h_t_minus_1),
       .h_t(h_t)
   );

   initial begin
       reset <= 0;

/*
        x_t <= {{16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111},
               {16'b1111111111111111}
               };
*/

        x_t <= {{16'b0},
               {16'b0},
               {16'b0},
               {16'b0},
               {16'b0},
               {16'b0}
               };
        
       for (i = 0; i < h_SIZE; i = i + 1) begin
           h_t_minus_1[i] = 4'b0;
       end
        
       repeat(30) @(posedge clk);

        for (j = 0; j < 14; j++) begin
            for (i = 0; i < h_SIZE; i = i + 1) begin
                h_t_minus_1[i] = h_t[i];
            end
        
            repeat(30) @(posedge clk);
        end

       x_t <= {{-16'd1},
               {16'd2},
               {-16'd3},
               {16'd4},
               {-16'd5},
               {16'd6}
               };
        
       for (i = 0; i < h_SIZE; i = i + 1) begin
           h_t_minus_1[i] = 4'b0001;
       end
        
       repeat(30) @(posedge clk);

       x_t <= {{-16'd2},
               {16'd2},
               {-16'd3},
               {16'd4},
               {-16'd5},
               {16'd6}
               };

        for (i = 0; i < h_SIZE; i = i + 1) begin
            h_t_minus_1[i] <= h_t[i];
        end

        repeat(30) @(posedge clk);

        $stop;

   end


endmodule