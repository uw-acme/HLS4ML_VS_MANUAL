`timescale 1ns / 1ps
`include "./pkg_sel_waiz_benchmark.svh"
import `DENSE_LAYER_1_PKG::*;
import `DENSE_LAYER_2_PKG::*;
import `DENSE_LAYER_3_PKG::*;
import `DENSE_LAYER_4_PKG::*;

module waiz_benchmark #(
    parameter WIDTH = 25, NFRAC = 16,
    parameter INPUT_SIZE = 16,
    parameter OUTPUT_SIZE = 5
) (
    input logic clk,
    input logic reset,
    input logic input_ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_data [16-1:0],
    output logic signed [WIDTH-1:0] output_data [5-1:0]
    // input logic signed [10-1:0] input_data [0:16-1],
    // output logic signed [5-1:0] output_data [0:5-1]
    // output real softmax_output_real [0:4]
);
    
    localparam OUTPUT_SIZE_1 = 64;
    localparam INPUT_SIZE_2 = 64;
    localparam OUTPUT_SIZE_2 = 32;
    localparam INPUT_SIZE_3 = 32;
    localparam OUTPUT_SIZE_3 = 32;
    localparam INPUT_SIZE_4 = 32;

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
    logic signed [WIDTH-1:0] dense4_input_data [INPUT_SIZE_4-1:0];
    logic signed [WIDTH-1:0] dense4_output_data [OUTPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] softmax_output_data [OUTPUT_SIZE-1:0];

    // Input and output ready signals for each layer
    logic input_ready_1, output_ready_1;
    logic input_ready_2, output_ready_2;
    logic input_ready_3, output_ready_3;
    logic input_ready_4, output_ready_4;
    logic input_ready_5, output_ready_5;

    assign input_ready_1 = input_ready;
    
    always_comb begin
        input_ready_2 = output_ready_1;
        input_ready_3 = output_ready_2;
        input_ready_4 = output_ready_3;
        input_ready_5 = output_ready_4;
    end
    // always_ff @(posedge clk) begin
    //     if (reset) begin
    //         input_ready_2 <= 0;
    //         input_ready_3 <= 0;
    //         input_ready_4 <= 0;
    //         input_ready_5 <= 0;
    //     end else begin
    //         input_ready_2 <= output_ready_1;
    //         input_ready_3 <= output_ready_2;
    //         input_ready_4 <= output_ready_3;
    //         input_ready_5 <= output_ready_4;
    //     end
    // end


    // assign input_ready_2 = output_ready_1;
    // assign input_ready_3 = output_ready_2;
    // assign input_ready_4 = output_ready_3;



    assign output_ready = output_ready_4;

    localparam use_relu = 1'b1;

    // Dense Layer 1
    denseLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .INPUT_SIZE ( INPUT_SIZE  ),
        .OUTPUT_SIZE( OUTPUT_SIZE_1 ),
        .WEIGHTS    ( `DENSE_LAYER_1_PKG::weights ),
        .BIAS       ( `DENSE_LAYER_1_PKG::bias  )
    ) denselayer1 (
        .clk,
        .reset,
        .input_ready(input_ready_1),
        .output_ready(output_ready_1),
        .input_data ( input_data ),
        .output_data( dense1_output_data)
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
        .BIAS       ( `DENSE_LAYER_2_PKG::bias  )
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
        .BIAS       ( `DENSE_LAYER_3_PKG::bias  )
    ) denselayer3 (
        .clk,
        .reset,
        .input_ready(input_ready_3),
        .output_ready(output_ready_3),
        .input_data ( dense3_input_data ),
        .output_data( dense3_output_data)
    );

    logic signed [WIDTH-1:0] relu3_output [OUTPUT_SIZE_3-1:0];
    // ReLU Layer 3
    reluActivationLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .SIZE       ( OUTPUT_SIZE_3 )
    ) relulayer3 (
        .clk,
        .input_data ( dense3_output_data ),
        .output_data( relu3_output )
    );

    assign dense4_input_data = use_relu ? relu3_output : dense3_output_data;
    // Dense Layer 4
    denseLayer #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         ),
        .INPUT_SIZE ( INPUT_SIZE_4  ),
        .OUTPUT_SIZE( OUTPUT_SIZE ),
        .WEIGHTS    ( `DENSE_LAYER_4_PKG::weights ),
        .BIAS       ( `DENSE_LAYER_4_PKG::bias  )
    ) denselayer4 (
        .clk,
        .reset,
        .input_ready(input_ready_4),
        .output_ready(output_ready_4),
        .input_data ( dense4_input_data ),
        .output_data( dense4_output_data)
    );


    softmaxLayer #(
        .N          ( OUTPUT_SIZE ),
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( NFRAC         )
    ) softmax (
        .dataIn(dense4_output_data),
        .clk(clk),
        .reset(reset),
        .dataOut(softmax_output_data)
    );
    logic use_softmax;
    assign use_softmax = 1'b1;

    always_comb begin
        if (use_softmax) begin
            output_data = softmax_output_data;
        end else begin
            output_data = output_ready_4 ? dense4_output_data : '{default: 0};
        end
    end
     //assign output_data = output_ready_4 ? dense4_output_data : '{default: 0};
     
     
     
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
        foreach (dense4_input_real[i]) dense4_input_real[i] = to_real(dense4_input_data[i]);
        foreach (dense4_output_real[i]) dense4_output_real[i] = to_real(dense4_output_data[i]);
    end
    `endif
endmodule