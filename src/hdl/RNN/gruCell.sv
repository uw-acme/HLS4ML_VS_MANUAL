
// Single GRU cell
// reset gate:
// r_t = sigmoid(W_r * [x_t, h_t-1] + b_r)
//
// update gate:
// z_t = sigmoid(W_z * [x_t, h_t-1] + b_z)
//
// candidate hidden state:
// h_tilde = tanh(W_h * [x_t, r_t * h_t-1] + b_h)
//
// hidden state (output):
// h_t = (1 - z_t) * h_t-1 + z_t * h_tilde
//
// Notice we concatenate W and U matrices into a single matrix for the dense layer
// Matrix W comes first so x should be the first in concatenated input.

// ------------------------------------ */
//


`timescale 1ns / 1ps
`include "pkg_sel_gru.svh"

import `RESET_GATE_PKG::*;
import `UPDATE_GATE_PKG::*;
import `CANDIDATE_HIDDEN_STATE_PKG::*;

module gruCell #(parameter
    WIDTH               = 11,   // Data width
    NFRAC               = 6,   // Number of fractional bits
    x_SIZE              = 6,   // diminsion: d
    h_SIZE              = 120,    // diminsion: e
    SIGMOID_TABLE_SIZE_POW = 10,
    TANH_TABLE_SIZE_POW    = 9,
    SIGMOID_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
    TANH_BRAM_FILE      = "memw10_size512_tanhBRAM.mem"
)
(
    input clk,
    input reset,
    input signed        [WIDTH-1:0] x_t [0:x_SIZE-1],               // x_t: R^{d}
    input signed        [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1],       // h_t_minus_1: R^{e}

    output logic signed       [WIDTH-1:0] h_t [0:h_SIZE-1]          // h_t: R^{e}
);

    logic signed [WIDTH-1:0] r_t [0:h_SIZE-1];                      // r_t: R^{e}
    logic signed [WIDTH-1:0] z_t [0:h_SIZE-1];                      // z_t: R^{e}
    logic signed [WIDTH-1:0] r_t_raw [0:h_SIZE-1];                  // r_t: R^{e} before sigmoid activation
    logic signed [WIDTH-1:0] z_t_raw [0:h_SIZE-1];                  // z_t: R^{e} before sigmoid activation

    logic signed [WIDTH-1:0] h_tilde_raw [0:h_SIZE-1];              // h_tilde: R^{e} without tanh activation
    logic signed [WIDTH-1:0] h_tilde [0:h_SIZE-1];                  // h_tilde: R^{e}

    logic signed [WIDTH-1:0] r_h_mult [0:h_SIZE-1];                 // r_t pointwise multiply h_t_minus_1: R^{e}

    logic signed [WIDTH-1:0] tanh_out [0:h_SIZE-1];                 // tanh_out: R^{e}

    // Reset gate weights and biases
    wire signed [WIDTH-1:0] W_r [0:x_SIZE+h_SIZE-1][0:h_SIZE-1];   // W_r: R^{e x (e+d)}
    wire signed [WIDTH-1:0] b_r [0:h_SIZE-1];                      // b_r: R^{e}

    // Update gate weights and biases
    wire signed [WIDTH-1:0] W_z [0:x_SIZE+h_SIZE-1][0:h_SIZE-1];   // W_z: R^{e x (e+d)}
    wire signed [WIDTH-1:0] b_z [0:h_SIZE-1];                      // b_z: R^{e}

    // Candidate hidden state weights and biases
    wire signed [WIDTH-1:0] W_h [0:x_SIZE+h_SIZE-1][0:h_SIZE-1];   // W_h: R^{e x (e+d)}
    wire signed [WIDTH-1:0] b_h [0:h_SIZE-1];                       // b_h: R^{e}

    // Reset gate
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                     ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE             ),
        .OUTPUT_SIZE    ( h_SIZE                    ),
        .WEIGHTS        ( `RESET_GATE_PKG::weights  ),
        .BIAS           ( `RESET_GATE_PKG::bias  )
    ) reset_gate_dense (
        .clk(clk),
        .reset(reset),
        .input_data({x_t, h_t_minus_1}),
        .output_data(r_t_raw)
    );

    sigmoidActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( h_SIZE            ),
        .TABLE_SIZE_POW ( SIGMOID_TABLE_SIZE_POW    ),
        .BRAM_FILE      ( SIGMOID_BRAM_FILE )
    ) reset_gate_sigmoid (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( r_t_raw           ),
        .output_data    ( r_t               )
    );

    // Update gate
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE                         ),
        .OUTPUT_SIZE    ( h_SIZE                                ),
        .WEIGHTS        ( `UPDATE_GATE_PKG::weights  ),
        .BIAS           ( `UPDATE_GATE_PKG::bias       )
    ) update_gate_dense (
        .clk(clk),
        .reset(reset),
        .input_data({x_t, h_t_minus_1}),
        .output_data(z_t_raw)
    );

    sigmoidActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( h_SIZE            ),
        .TABLE_SIZE_POW ( SIGMOID_TABLE_SIZE_POW    ),
        .BRAM_FILE      ( SIGMOID_BRAM_FILE )
    ) update_gate_sigmoid (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( z_t_raw        ),
        .output_data    ( z_t       )
    );


    // Candidate hidden state
    genvar i;
    generate
        for (i = 0; i < h_SIZE; i++) begin : pointwise_mult_h_tilte
            always_comb begin
                r_h_mult[i] = r_t[i] * h_t_minus_1[i];
            end
        end
    
    endgenerate

    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE                         ),
        .OUTPUT_SIZE    ( h_SIZE                                ),
        .WEIGHTS        ( `CANDIDATE_HIDDEN_STATE_PKG::weights  ),
        .BIAS           ( `CANDIDATE_HIDDEN_STATE_PKG::bias     )
    ) candidate_hidden_state_dense (
        .clk(clk),
        .reset(reset),
        .input_data({x_t, r_h_mult}),
        .output_data(h_tilde_raw)
    );

    tanhActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .SIZE           ( h_SIZE            ),
        .TABLE_SIZE_POW ( TANH_TABLE_SIZE_POW    ),
        .BRAM_FILE      ( TANH_BRAM_FILE    )
    ) candidate_hidden_state_tanh (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( h_tilde_raw       ),
        .output_data    ( h_tilde           )
    );

    generate
        // compute hidden state (output):
        for (i = 0; i < h_SIZE; i++) begin: pointwise_mult_h_t
            always_comb begin
                h_t[i] = (1 - z_t[i]) * h_t_minus_1[i] + z_t[i] * h_tilde[i];
            end
        end
    endgenerate

endmodule

//module gruCell_tb();

//    localparam  WIDTH           = 4,
//                NFRAC           = 2,
//                x_SIZE          = 6,
//                h_SIZE          = 120,
//                MEM_WIDTH       = 10,
//                sigmoid_TABLE_SIZE_POW  = 10,
//                tanh_TABLE_SIZE_POW = 9,
//                sigmoid_BRAM_FILE = "U:/home/jiuyal2/HLS4ML_VS_MANUAL/src/hdl/RNN/pkg_gen_gru/binaries/sigmoid_BRAM_binaries/memw10_size1024_sigmoidBRAM.mem",
//                tanh_BRAM_FILE = "U:/home/jiuyal2/HLS4ML_VS_MANUAL/src/hdl/RNN/pkg_gen_gru/binaries/tanh_BRAM_binaries/memw10_size512_tanhBRAM.mem";
//    logic clk;
//    logic reset;
//    logic signed [WIDTH-1:0] x_t [0:x_SIZE-1];
//    logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];
//    logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
//    integer i;

//    localparam PERIOD = 10;
//    initial begin
//        clk <= 1'b1;
//        forever #(PERIOD/2) clk <= ~clk;
//    end

//    gruCell #(
//        .WIDTH              ( WIDTH             ),
//        .NFRAC              ( NFRAC             ),
//        .x_SIZE             ( x_SIZE            ),
//        .h_SIZE             ( h_SIZE            ),
//        .SIGMOID_TABLE_SIZE_POW     (sigmoid_TABLE_SIZE_POW                 ),
//        .TANH_TABLE_SIZE_POW        (tanh_TABLE_SIZE_POW                    ),
//        .SIGMOID_BRAM_FILE  (sigmoid_BRAM_FILE  ),
//        .TANH_BRAM_FILE     (tanh_BRAM_FILE     )
//    ) dut (
//        .clk(clk),  .reset(reset),
//        .x_t(x_t),  .h_t_minus_1(h_t_minus_1),
//        .h_t(h_t)
//    );

//    initial begin
//        reset <= 0;
//        x_t <= {{-8'd1},
//                {8'd2},
//                {-8'd3},
//                {8'd4},
//                {-8'd5},
//                {8'd6}
//                };
        
//        for (i = 0; i < h_SIZE; i = i + 1) begin
//            h_t_minus_1[i] = 4'b0001;
//        end
        
//        repeat(30) @(posedge clk);

//    end


//endmodule