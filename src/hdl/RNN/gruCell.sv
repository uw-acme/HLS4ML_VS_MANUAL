
// Single GRU cell
// reset gate:
// r_t = sigmoid(W_r * [h_t-1, x_t] + b_r)
//
// update gate:
// z_t = sigmoid(W_z * [h_t-1, x_t] + b_z)
//
// candidate hidden state:
// h_tilde = tanh(W_h * [r_t * h_t-1, x_t] + b_h)
//
// hidden state (output):
// h_t = (1 - z_t) * h_t-1 + z_t * h_tilde

// ------------------------------------ */
//


`timescale 1ns / 1ps
`include "pkg_sel_gru.svh"

import `RESET_GATE_PKG::*;
import `UPDATE_GATE_PKG::*;
import `CANDIDATE_HIDDEN_STATE_PKG::*;

module gruCell #(parameter
    WIDTH               = 32,   // Data width
    NFRAC               = 10,   // Number of fractional bits
    x_SIZE              = 32,   // diminsion: d
    h_SIZE              = 32,    // diminsion: e
    MEM_WIDTH           = 10,   // Precision of BRAM entries
    TABLE_SIZE_POW      = 10,   // Power of 2 of the number of table entries (e.g. 5 = 32 entries)
    sigmoid_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
    tanh_BRAM_FILE      = "memw10_size1024_tanhBRAM.mem"
)
(
    input clk,
    input reset,
    input signed        [WIDTH-1:0] x_t [0:x_SIZE-1],               // x_t: R^{d}
    input signed        [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1],       // h_t_minus_1: R^{e}

    output logic signed       [WIDTH-1:0] h_t [0:h_SIZE-1],         // h_t: R^{e}
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
    logic signed [WIDTH-1:0] W_r [0:h_SIZE-1][0:x_SIZE+h_SIZE-1],   // W_r: R^{e x (e+d)}
    logic signed [WIDTH-1:0] b_r [0:h_SIZE-1],                      // b_r: R^{e}

    // Update gate weights and biases
    logic signed [WIDTH-1:0] W_z [0:h_SIZE-1][0:x_SIZE+h_SIZE-1],   // W_z: R^{e x (e+d)}
    logic signed [WIDTH-1:0] b_z [0:h_SIZE-1],                      // b_z: R^{e}

    // Candidate hidden state weights and biases
    logic signed [WIDTH-1:0] W_h [0:h_SIZE-1][0:x_SIZE+h_SIZE-1],   // W_h: R^{e x (e+d)}
    logic signed [WIDTH-1:0] b_h [0:h_SIZE-1]                       // b_h: R^{e}


    // Assign weights and biases from packages
    assign W_r = `RESET_GATE_PKG::weights;
    assign b_r = `RESET_GATE_PKG::biases;

    assign W_z = `UPDATE_GATE_PKG::weights;
    assign b_z = `UPDATE_GATE_PKG::biases;

    assign W_h = `CANDIDATE_HIDDEN_STATE_PKG::weights;
    assign b_h = `CANDIDATE_HIDDEN_STATE_PKG::biases;

    // Reset gate
    DenseLatencyLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE     ),
        .OUTPUT_SIZE    ( h_SIZE            ),
    ) reset_gate (
        .clk(clk),
        .reset(reset),
        .input_data({h_t_minus_1, x_t}),
        .output_data(r_t_raw),
        .weights(W_r),
        .biases(b_r)
    );

    ActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE     ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .TABLE_SIZE_POW ( TABLE_SIZE_POW    ),
        .BRAM_FILE      ( sigmoid_BRAM_FILE )
    ) reset_gate_sigmoid (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( input_data        ),
        .output_data    ( output_data       )
    );

    // Update gate
    DenseLatencyLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE     ),
        .OUTPUT_SIZE    ( h_SIZE            ),
    ) update_gate (
        .clk(clk),
        .reset(reset),
        .input_data({h_t_minus_1, x_t}),
        .output_data(z_t_raw),
        .weights(W_z),
        .biases(b_z)
    );

    ActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE     ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .TABLE_SIZE_POW ( TABLE_SIZE_POW    ),
        .BRAM_FILE      ( sigmoid_BRAM_FILE )
    ) update_gate_sigmoid (
        .clk            ( clk               ),
        .reset          ( reset             ),
        .input_data     ( input_data        ),
        .output_data    ( output_data       )
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

    DenseLatencyLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( x_SIZE+h_SIZE     ),
        .OUTPUT_SIZE    ( h_SIZE            ),  
    ) candidate_hidden_state (
        .clk(clk),
        .reset(reset),
        .input_data({r_h_mult, x_t}),
        .output_data(h_tilde_raw),
        .weights(W_h),
        .biases(b_h)
    );

    ActivationLayer #( 
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( h_SIZE            ),
        .MEM_WIDTH      ( MEM_WIDTH         ),
        .TABLE_SIZE_POW ( TABLE_SIZE_POW    ),
        .BRAM_FILE      ( tanh_BRAM_FILE    )
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

module gruCell_tb();

    localparam  WIDTH           = 16,
                NFRAC           = 12,
                x_SIZE          = 8,
                h_SIZE          = 8,
                MEM_WIDTH       = 10,
                TABLE_SIZE_POW  = 10,
                sigmoid_BRAM_FILE = "memw10_size1024_sigmoidBRAM.mem",
                tanh_BRAM_FILE = "memw10_size1024_tanhBRAM.mem";
    logic clk;
    logic reset;
    logic signed [WIDTH-1:0] x_t [0:x_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];
    logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];

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
        .TABLE_SIZE_POW     ( TABLE_SIZE_POW    ),
        .sigmoid_BRAM_FILE  ( sigmoid_BRAM_FILE ),
        .tanh_BRAM_FILE     ( tanh_BRAM_FILE    )
    ) dut (
        .clk(clk),  .reset(reset),
        .x_t(x_t),  .h_t_minus_1(h_t_minus_1),
        .h_t(h_t)
    );

    initial begin
        reset <= 0;
        x_t = {{-8'd1},
                {8'd2},
                {-8'd3},
                {8'd4},
                {-8'd5},
                {8'd6},
                {-8'd7}
                };
    end


endmodule