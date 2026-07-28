`timescale 1ns / 1ps
import q_dense_1_0_8_2::*;
// sumOneColumnParameterized is intented to be used n times for a dense latency layer that has n outputs.
// This module goes through and multiplies the input data by the corresponding weight and then sums
// all of that data and the corresponding bias.

module sumOneColumnParameterized_dense1 #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15, ITER=0)
(clk, data, bias, out);
    input logic clk;
    input logic signed [WIDTH-1:0] data     [INPUT_SIZE-1:0];
    input logic signed [WIDTH-1:0] bias;
    logic signed [WIDTH*2-1:0] tempMult     [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] mult           [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] result;
    
    output logic signed [WIDTH-1:0] out;
    
    // multiply input by corresponding weight
    genvar y;
    generate
        for (y=0; y < INPUT_SIZE; y++) begin: shift_adds
            // uses shift add
            shift_add_with_mult #(q_dense_1_0_8_2::dlWeights[(y*OUTPUT_SIZE+(ITER))], 3, WIDTH,NFRAC) 
            sa (.clk(clk),.data_in(data[y]), .data_out(tempMult[y]));

            // does not use shift add
            // assign tempMult[y] = data[y]*data18_9::dlWeights[(y*OUTPUT_SIZE+(ITER))];   
        end
    endgenerate 
    
    always_comb begin
        for (int i = 0; i<INPUT_SIZE; i++) begin
            mult[i] = tempMult[i][NFRAC+WIDTH-1:NFRAC];
        end
    end
    
    // sum the column
    adderTree_1D  #(NFRAC, WIDTH, INPUT_SIZE) sums (.clk(clk), .input_data(mult), .output_data(result));

    // add bias
    assign out = result + bias;


endmodule
