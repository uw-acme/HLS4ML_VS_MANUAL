`timescale 1ns / 1ps
`include "./pkg_sel_btag_benchmark.svh"
import `DENSE_LAYER_1_PKG::*;
import `DENSE_LAYER_2_PKG::*;
import `DENSE_LAYER_3_PKG::*;
// import `DENSE_LAYER_4_PKG::*;

module btag_benchmark #(
    parameter WIDTH = 16, NFRAC = 6, 
    parameter INPUT_SIZE = 15, //120
    parameter OUTPUT_SIZE = 3,
    // Parameter controlling how sparse the pipelines in the adder trees are. 1 is the minimum value (most pipelines)
    parameter PIPELINING = 1, 
    // Parameter controlling whether there is an output pipeline from dense layers. 1 means there is a pipeline
    parameter PIPE_OUT = 1 
) (
    input logic clk,
    input logic reset,
    input logic input_ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_data [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [OUTPUT_SIZE-1:0]
);
    
    //localparam OUTPUT_SIZE_1 = 64;
    //localparam INPUT_SIZE_2 = 64;
    //localparam OUTPUT_SIZE_2 = 32;
    //localparam INPUT_SIZE_3 = 32;
    //localparam OUTPUT_SIZE_3 = 32;
    //localparam INPUT_SIZE_4 = 32;

    localparam OUTPUT_SIZE_1 = 50;
    localparam INPUT_SIZE_2 = 50;
    localparam OUTPUT_SIZE_2 = 10;
    localparam INPUT_SIZE_3 = 10;
    localparam OUTPUT_SIZE_3 = 3;
    localparam INPUT_SIZE_4 = 3;

    
    // Declare real signals for the outputs to visualize as floating-point numbers
    `ifndef SYNTHESIS 
        real input_data_real [0:INPUT_SIZE-1];
        real dense1_output_real [0:OUTPUT_SIZE_1-1];
        real dense2_input_real [0:OUTPUT_SIZE_1-1];
        real dense2_output_real [0:OUTPUT_SIZE_2-1];
        real dense3_input_real [0:OUTPUT_SIZE_2-1];
        real dense3_output_real [0:OUTPUT_SIZE_3-1];
        real dense4_input_real [0:OUTPUT_SIZE_3-1];
        real dense4_output_real [0:OUTPUT_SIZE-1];
        real softmax_output_real [0:OUTPUT_SIZE-1];
    `endif
    // Fixed-point signals for each layer's outputs
    logic signed [WIDTH-1:0] dense1_output_data [OUTPUT_SIZE_1-1:0];
    logic signed [WIDTH-1:0] dense2_input_data [INPUT_SIZE_2-1:0];
    logic signed [WIDTH-1:0] dense2_output_data [OUTPUT_SIZE_2-1:0];
    logic signed [WIDTH-1:0] dense3_input_data [INPUT_SIZE_3-1:0];
    logic signed [WIDTH-1:0] dense3_output_data [OUTPUT_SIZE_3-1:0];
    logic signed [WIDTH-1:0] softmax_output_data [OUTPUT_SIZE-1:0];

    // Input and output ready signals for each layer
    logic input_ready_1, output_ready_1;
    logic input_ready_2, output_ready_2;
    logic input_ready_3, output_ready_3;
    logic input_ready_4, output_ready_4;

    assign input_ready_1 = input_ready;
    
    always_comb begin
        input_ready_2 = output_ready_1;
        input_ready_3 = output_ready_2;
        input_ready_4 = output_ready_3;
    end

    assign output_ready = output_ready_4;

    localparam use_relu = 1'b1;

    // GRU Layer
    // ------------- not implemented yet -----------------
    /*
    gru_basic #(
        .x_SIZE              = 6,
        .h_SIZE              = 120,
        .OUTPUT_SIZE         = 3,
        .DENSE_0_INPUT_SIZE  = h_SIZE,
        .DENSE_0_OUTPUT_SIZE = 50,
        .DENSE_1_INPUT_SIZE  = DENSE_0_OUTPUT_SIZE,
        .DENSE_1_OUTPUT_SIZE = 10,

        .WIDTH               = 16,   // Data width
        .NFRAC               = 10,   // Number of fractional bits

        .SIGMOID_TABLE_SIZE_POW = 10,
        .TANH_TABLE_SIZE_POW    = 9,
        .SIGMOID_BRAM_FILE   = "memw10_size1024_sigmoidBRAM.mem",
        .TANH_BRAM_FILE      = "memw10_size512_tanhBRAM.mem"
    ) gruLayer (
        .clk,
        .reset,
    // Input of the model, sequence length of 15 and diminsion of 6
    // For now the x_t should be change every 18 cycles
        .x_t (), // problematic try to figure out  what to replace
        .y_t () // problematic try to figure out what to replace
    );
    */

    // Dense Layer 1
    denseLayer #(
        .WIDTH       ( WIDTH         ),
        .NFRAC       ( NFRAC         ),
        .INPUT_SIZE  ( INPUT_SIZE    ),
        .OUTPUT_SIZE ( OUTPUT_SIZE_1 ),
        .WEIGHTS     ( `DENSE_LAYER_1_PKG::weights ),
        .BIAS        ( `DENSE_LAYER_1_PKG::bias    ),
        .PIPELINING  (PIPELINING                   ),
        .PIPE_OUT    (PIPE_OUT)
    ) denselayer1 (
        .clk,
        .reset,
        .input_ready  (  input_ready_1),
        .output_ready ( output_ready_1),
        .input_data   (  input_data ),
        .output_data  (  dense1_output_data)
    );

    logic signed [WIDTH-1:0] relu1_output [OUTPUT_SIZE_1-1:0];
    // ReLU Layer 1
    reluActivationLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .SIZE       ( OUTPUT_SIZE_1 )
    ) relulayer1 (
        .clk,
        .input_data ( dense1_output_data ),
        .output_data( relu1_output )
    );

    assign dense2_input_data = use_relu ? relu1_output : dense1_output_data;
    // Dense Layer 2
    denseLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .INPUT_SIZE ( INPUT_SIZE_2  ),
        .OUTPUT_SIZE( OUTPUT_SIZE_2 ),
        .WEIGHTS    ( `DENSE_LAYER_2_PKG::weights ),
        .BIAS       ( `DENSE_LAYER_2_PKG::bias  ),
        .PIPELINING(PIPELINING),
        .PIPE_OUT    (PIPE_OUT)
    ) denselayer2 (
        .clk,
        .reset,
        .input_ready(input_ready_2),
        .output_ready(output_ready_2),
        .input_data ( dense2_input_data ),
        .output_data( dense2_output_data)
    );

    logic signed [WIDTH-1:0] relu2_output [OUTPUT_SIZE_2-1:0];
    // ReLU Layer 2
    reluActivationLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .SIZE       ( OUTPUT_SIZE_2 )
    ) relulayer2 (
        .clk,
        .input_data ( dense2_output_data ),
        .output_data( relu2_output )
    );

    assign dense3_input_data = use_relu ? relu2_output : dense2_output_data;
    // Dense Layer 3
    denseLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .INPUT_SIZE ( INPUT_SIZE_3  ),
        .OUTPUT_SIZE( OUTPUT_SIZE_3 ),
        .WEIGHTS    ( `DENSE_LAYER_3_PKG::weights ),
        .BIAS       ( `DENSE_LAYER_3_PKG::bias  ),
        .PIPELINING(PIPELINING),
        .PIPE_OUT    (PIPE_OUT)
    ) denselayer3 (
        .clk,
        .reset,
        .input_ready(input_ready_3),
        .output_ready(output_ready_3),
        .input_data ( dense3_input_data ),
        .output_data( dense3_output_data)
    );

    softmaxLayerNeg #(
        .N          ( OUTPUT_SIZE ),
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         )
    ) softmax (
        .dataIn(dense3_output_data),
        .clk(clk),
        .reset(reset),
        .dataOut(softmax_output_data),
        .input_ready(input_ready_4),
        .output_ready(output_ready_4)
    );
    localparam use_softmax = 0; // 1;
    always_comb begin
        if (use_softmax) begin
            output_data = softmax_output_data;
        end else begin
            output_data =  dense3_output_data; // : '{default: 0};
        end
    end
     //assign output_data = output_ready_3 ? dense3_output_data : '{default: 0};
     
    // Real section for visualizing numbers
    `ifndef SYNTHESIS
    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction

    function real to_real_unsigned(input logic [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction

    always_comb begin
        foreach (input_data_real[i]) input_data_real[i] = to_real(input_data[i]);
        foreach (softmax_output_real[i]) softmax_output_real[i] = to_real_unsigned(softmax_output_data[i]);
        foreach (dense1_output_real[i]) dense1_output_real[i] = to_real(dense1_output_data[i]);
        foreach (dense2_input_real[i]) dense2_input_real[i] = to_real(dense2_input_data[i]);
        foreach (dense2_output_real[i]) dense2_output_real[i] = to_real(dense2_output_data[i]);
        foreach (dense3_input_real[i]) dense3_input_real[i] = to_real(dense3_input_data[i]);
        foreach (dense3_output_real[i]) dense3_output_real[i] = to_real(dense3_output_data[i]);
    end
    `endif
endmodule