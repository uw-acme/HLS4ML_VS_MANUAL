// Hand written VNN of GRU ftag model
//
// Architecture:
// _________________________________________________________________
//  Layer (type)                Output Shape              Param #   
// =================================================================
//  input_1 (InputLayer)        [(None, 15, 6)]           0         
                                                                 
//  gru (GRU)                   (None, 120)               46080     
                                                                 
//  dense_0 (Dense)             (None, 50)                6050      
                                                                 
//  dense_1 (Dense)             (None, 10)                510       
                                                                 
//  output_softmax (Dense)      (None, 3)                 33        
                                                                 
// =================================================================
// Total params: 52,673
// Trainable params: 52,673
// Non-trainable params: 0

`timescale 1ns / 1ps
`include "pkg_sel_gru.svh"

import `DENSE_0_PKG::*;
import `DENSE_1_PKG::*;
import `OUTPUT_LAYER_PKG::*;

module ftag_gru #(parameter
    WIDTH               = 4,   // Data width
    NFRAC               = 2,   // Number of fractional bits

    SIGMOID_TABLE_SIZE_POW = 10,
    TANH_TABLE_SIZE_POW    = 9,
    SIGMOID_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
    TANH_BRAM_FILE      = "memw10_size512_tanhBRAM.mem"
)
(
    // Hardcoded model architecture
    localparam x_SIZE = 6,
    localparam h_SIZE = 120,
    localparam OUTPUT_SIZE = 3,
    localparam DENSE_0_INPUT_SIZE = h_SIZE,
    localparam DENSE_0_OUTPUT_SIZE = 50,
    localparam DENSE_1_INPUT_SIZE = DENSE_0_OUTPUT_SIZE,
    localparam DENSE_1_OUTPUT_SIZE = 10,

    input clk,
    input reset,

    // Input of the model, sequence length of 15 and diminsion of 6
    input signed        [WIDTH-1:0] x_t [0:x_SIZE-1],
    output signed       [WIDTH-1:0] output [0:OUTPUT_SIZE]
);

    // Internal signals
    logic signed [WIDTH-1:0] x_t_buffer [0:x_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:h_SIZE-1];       
    logic signed [WIDTH-1:0] h_t [0:h_SIZE-1];
    logic signed [WIDTH-1:0] gru_out [0:h_SIZE-1];
    logic signed [WIDTH-1:0] dense_0_temp [0:DENSE_0_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_0_out [0:DENSE_0_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_1_temp [0:DENSE_1_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] dense_1_out [0:DENSE_1_OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_temp [0:OUTPUT_SIZE-1];

    always_ff @(posedge clk) begin
        if (reset) begin
            x_t_buffer <= 0;
        end else begin
            x_t_buffer <= x_t;
        end
    end

    // This file uses static methods to implement the GRU model
    // One gru cell, reuse 15 times for each sequence of inputs

    // for now, ignore the handshake between layers

    // GRU cell
    gruCell #(
        .WIDTH              ( WIDTH                     ),
        .NFRAC              ( NFRAC                     ),
        .x_SIZE             ( x_SIZE                    ),
        .h_SIZE             ( h_SIZE                    ),
        .SIGMOID_TABLE_SIZE_POW ( SIGMOID_TABLE_SIZE_POW ),
        .TANH_TABLE_SIZE_POW    ( TANH_TABLE_SIZE_POW    ),
        .SIGMOID_BRAM_FILE  ( SIGMOID_BRAM_FILE         ),
        .TANH_BRAM_FILE     ( TANH_BRAM_FILE            )
    ) gru_cell (
        .clk(clk),
        .reset(reset),
        .x_t(x_t),
        .h_t_minus_1(h_t_minus_1),
        .h_t(h_t)
    );

    // logics counter that keeps track of the sequence length
    logic [4:0] seq_counter = 0;

    always_ff @(posedge clk) begin
        if (reset) begin
            seq_counter <= 0;
        end else begin
            if (seq_counter == 15) begin
                seq_counter <= 0;
            end else begin
                seq_counter <= seq_counter + 1;
            end
        end
    end

    // Feed x and h_t_minus_1 to the gru cell for 15 times, update h_t_minus_1 with h_t
    always_ff @(posedge clk) begin
        if (reset) begin
            h_t_minus_1 <= 0;
        end else begin
            if (seq_counter == 0) begin
                h_t_minus_1 <= 0;
                gru_out <= h_t;
            end else begin
                h_t_minus_1 <= h_t;
                // set output of gru to random value
                gru_out <= {h_SIZE{1'bx}};
            end
        end
    end

    // Dense 0 
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_0_INPUT_SIZE                    ),
        .OUTPUT_SIZE    ( DENSE_0_OUTPUT_SIZE                   ),
        .WEIGHTS        ( `DENSE_0_PKG::weights                 ),
        .BIAS           ( `DENSE_0_PKG::bias                    )
    ) dense_0 (
        .clk(clk),
        .reset(reset),
        .input_data(gru_out),
        .output_data(dense_0_temp)
    );

    // relu activation
    reluLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( DENSE_0_OUTPUT_SIZE       ),
        .OUTPUT_SIZE    ( DENSE_0_OUTPUT_SIZE       )
    ) relu_0 (
        .clk(clk),
        .reset(reset),
        .input_data(dense_0_temp),
        .output_data(dense_0_out)
    );
    
    // Dense 1
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_1_INPUT_SIZE                    ),
        .OUTPUT_SIZE    ( DENSE_1_OUTPUT_SIZE                   ),
        .WEIGHTS        ( `DENSE_1_PKG::weights                 ),
        .BIAS           ( `DENSE_1_PKG::bias                    )
    ) dense_1 (
        .clk(clk),
        .reset(reset),
        .input_data(dense_0_out),
        .output_data(dense_1_temp)
    );

    // relu activation
    reluLayer #(
        .WIDTH          ( WIDTH             ),
        .NFRAC          ( NFRAC             ),
        .INPUT_SIZE     ( DENSE_1_OUTPUT_SIZE       ),
        .OUTPUT_SIZE    ( DENSE_1_OUTPUT_SIZE       )
    ) relu_1 (
        .clk(clk),
        .reset(reset),
        .input_data(dense_1_temp),
        .output_data(dense_1_out)
    );

    // Output layer (dense followed by softmax)
    denseLayer #(
        .WIDTH          ( WIDTH                                 ),
        .NFRAC          ( NFRAC                                 ),
        .INPUT_SIZE     ( DENSE_1_OUTPUT_SIZE                   ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE                           ),
        .WEIGHTS        ( `OUTPUT_LAYER_PKG::weights            ),
        .BIAS           ( `OUTPUT_LAYER_PKG::bias               )
    ) output_layer (
        .clk(clk),
        .reset(reset),
        .input_data(dense_1_out),
        .output_data(output_temp)
    );

    // TODO: the softmax layer is not implemented yet, temporarily remove this layer
    // softmaxLayer #(
    //     .WIDTH          ( WIDTH             ),
    //     .NFRAC          ( NFRAC             ),
    //     .INPUT_SIZE     ( OUTPUT_SIZE        ),
    //     .OUTPUT_SIZE    ( OUTPUT_SIZE       )
    // ) softmax (
    //     .clk(clk),
    //     .reset(reset),
    //     .input_data(output_temp),
    //     .output_data(output)
    // );

    always_ff @(posedge clk) begin
        output <= output_temp;
    end

endmodule