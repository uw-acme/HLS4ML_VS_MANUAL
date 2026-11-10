`timescale 1ns / 1ps
import q_dense_0::*;
// Adapter: keeps the old dense module name and ports, runs new denseLayer inside

module denseLatencyWithControl_dense0 #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15, BITWIDTH = 16)
(
    input  logic                    clk,
    input  logic                    reset,
    input  logic                    inputValid,
    input  logic signed [WIDTH-1:0] biases      [0:OUTPUT_SIZE-1],
    input  logic signed [WIDTH-1:0] inputData   [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0],
    output logic                    outputValid
);
    // Ascending copies: connecting [N-1:0] to [0:N-1] directly would reverse the order
    logic signed [WIDTH-1:0] in_asc  [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] out_asc [0:OUTPUT_SIZE-1];

    // flip the buses
    genvar i;
    generate 
        for (i = 0; i < INPUT_SIZE; i++) begin : in_map
            assign in_asc[i] = inputData[i];
        end
        for (i = 0; i < OUTPUT_SIZE; i++) begin : out_map
            assign outputData[i] = out_asc[i];
        end
    endgenerate

    denseLayer #(
        .WIDTH       ( WIDTH       ),
        .NFRAC       ( NFRAC       ),
        .INPUT_SIZE  ( INPUT_SIZE  ),
        .OUTPUT_SIZE ( OUTPUT_SIZE ),
        .WEIGHTS     ( q_dense_0::dlWeights )
    ) dense (
        .clk,
        .reset,
        .input_ready      ( inputValid  ),
        .ready            (             ), // nothing downstream can stall for Rheed-Gaussian
        .output_ready     ( outputValid ),
        .next_layer_ready ( 1'b1        ),
        .input_data       ( in_asc      ),
        .biases           ( biases      ),
        .output_data      ( out_asc     )
    );
endmodule
