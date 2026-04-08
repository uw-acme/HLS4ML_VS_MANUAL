`include "weights_sel.svh"
`include "defines.svh"

import `LSTM_X_WEIGHTS::*;

import `LSTM_H_WEIGHTS::*;

import `DENSE2_WEIGHTS::*;

import `DENSE1_WEIGHTS::*;
`define MODELSIM
`timescale 1ns / 1ps
module Toptagging #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    OUTPUT_SIZE = 20,
    TIMESTEPS = 20
)
(
    input clk,
    input reset,
    input input_ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);


    localparam LSTM_INPUT_SIZE=6, LSTM_OUTPUT_SIZE=20;
    logic signed[WIDTH-1:0] LSTM_input_data [TIMESTEPS-1:0][LSTM_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] LSTM_output_data [LSTM_OUTPUT_SIZE-1:0];

    logic dense1_input_ready, dense1_output_ready;
    localparam DENSE1_INPUT_SIZE=20, DENSE1_OUTPUT_SIZE=64;
    logic signed[WIDTH-1:0] dense1_input_data [DENSE1_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense1_output_data [DENSE1_OUTPUT_SIZE-1:0];

    logic dense2_input_ready, dense2_output_ready;
    localparam DENSE2_INPUT_SIZE=64, DENSE2_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] dense2_input_data [DENSE2_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense2_output_data [DENSE2_OUTPUT_SIZE-1:0];

    logic signed[WIDTH-1:0] relu_output_data [DENSE1_OUTPUT_SIZE-1:0];

    localparam SIGMOID_INPUT_SIZE=1, SIGMOID_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] sigmoid_input_data [SIGMOID_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] sigmoid_output_data [SIGMOID_OUTPUT_SIZE-1:0];
    logic sigmoid_input_ready, sigmoid_output_ready;


    assign LSTM_input_data = input_v;
    assign LSTM_input_ready = input_ready;
    logic LSTM_ready;
    logic dense1_ready;
    logic dense2_ready;
    logic sigmoid_ready;
    LSTM #(.WIDTH(WIDTH), .NINT(NINT)) lstm_layer (
        .clk,
        .reset,
        .ready(LSTM_ready),
        .next_layer_ready(dense1_ready),
        .input_ready  (  LSTM_input_ready),
        .output_ready (  LSTM_output_ready),
        .input_v   (  LSTM_input_data ),
        .ht  (  LSTM_output_data)
    );
    always_latch begin : next_dense
        if (LSTM_output_ready)
            dense1_input_data = LSTM_output_data;
    end
    assign dense1_input_ready = LSTM_output_ready;
    // assign dense1_input_data = LSTM_output_data;
    denseLayer #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT), 
        .INPUT_SIZE(DENSE1_INPUT_SIZE), 
        .OUTPUT_SIZE(DENSE1_OUTPUT_SIZE),
        .WEIGHTS     ( `DENSE1_WEIGHTS::weights ),
        .BIAS        ( `DENSE1_WEIGHTS::bias    )
        ) dense1 (
        .clk,
        .reset,
        .ready(dense1_ready),
        .next_layer_ready(dense2_ready),
        .input_ready  (  dense1_input_ready),
        .output_ready (  dense1_output_ready),
        .input_data   (  dense1_input_data ),
        .output_data  (  dense1_output_data)
        );
    relu #(
        .WIDTH      ( WIDTH         ),
        .NFRAC      ( WIDTH-NINT         ),
        .SIZE       ( DENSE1_OUTPUT_SIZE )
    ) relulayer1 (
        .clk,
        .input_data ( dense1_output_data ),
        .output_data( relu_output_data )
    );
    
        
    assign dense2_input_data = relu_output_data;
    assign dense2_input_ready = dense1_output_ready;
    denseLayer #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT), 
        .INPUT_SIZE(DENSE2_INPUT_SIZE), 
        .OUTPUT_SIZE(DENSE2_OUTPUT_SIZE),
        .WEIGHTS     ( `DENSE2_WEIGHTS::weights ),
        .BIAS        ( `DENSE2_WEIGHTS::bias    )
        ) dense2 (
        .clk,
        .reset,
        .ready(dense2_ready),
        .next_layer_ready(sigmoid_ready),
        .input_ready  (  dense2_input_ready),
        .output_ready (  dense2_output_ready),
        .input_data   (  dense2_input_data ),
        .output_data  (  dense2_output_data)
    );
    assign sigmoid_input_data = dense2_output_data;
    assign sigmoid_input_ready = dense2_output_ready;
    sigmoid #(
        .WIDTH(WIDTH), 
        .NFRAC(WIDTH-NINT),  
        .SIZE(DENSE2_OUTPUT_SIZE)
    ) sig_layer
    (
        .clk,
        .reset,
        .ready(sigmoid_ready),
        .next_layer_ready(1'b1),
        .input_ready  (  sigmoid_input_ready),
        .output_ready (  sigmoid_output_ready),
        .input_data   (  sigmoid_input_data ),
        .output_data  (  sigmoid_output_data));


    assign output_ready = sigmoid_output_ready;
    assign output_data = sigmoid_output_data[0];
endmodule
`define STRINGIFY(x) `"x`"
`ifndef SYNTHESIS

module Toptagging_tb;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 1;
    parameter WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] output_data;
    Toptagging #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        forever #1 clk<=~clk;
    end
    // max_tests = 19951;
    localparam num_tests = 5;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    integer i, j, k, fd;
    `ifndef TESTFILE
        `define TESTFILE "X_test_16_6.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "gen_results.csv"
    `endif
    
    initial begin
        `ifndef MODELSIM
        $readmemb(`STRINGIFY(`TESTFILE), flat_mem);
        `else
            $readmemb("../testing_data/X_test_16_6.txt", flat_mem);
        `endif
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<TIMESTEPS; j++) begin : steps
                for (k=0; k<INPUT_SIZE; k++) begin : nums
                    x_test[i][j][k] = flat_mem[i*INPUT_SIZE*TIMESTEPS+(j+1)*INPUT_SIZE-k-1];
                end
            end
        end
    end
    localparam write_file=1;
    real out;
    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction
    genvar g;
    generate
    // for (g=0; g<OUTPUT_SIZE; g++) begin
    //     assign out[g] = to_real(ht[g]);
    // end
    assign out=to_real(output_data);
    endgenerate
    always_ff @(posedge clk) begin
        if (write_file&&output_ready) begin
            // for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
            //     $fwrite(fd, "%.15f,",  out[ii]);
            // end
            $fwrite(fd, "%.15f\n", out);
        end
    end
    initial begin
        if (write_file) begin
            `ifndef MODELSIM
                fd = $fopen(`STRINGIFY(`RESULTSFILE), "w");  // "w" = write mode, "a" = append
            `else
                fd = $fopen("gen_results.csv", "w");  // "w" = write mode, "a" = append
            `endif
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        reset=1;
        input_ready<=0;
        @(posedge clk);
        @(posedge clk);
        reset=0;
        i=0;
        input_ready<=1;
        repeat(num_tests) begin
            input_v<=x_test[i];
            @(posedge output_ready)
            i++;
        end
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif