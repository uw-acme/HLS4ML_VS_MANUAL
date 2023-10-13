// Sub Layer Packed Version
//
// This module represents the dense latency layer of the
// neural network. In this layer, the input matrix is multiplied
// with weight matrix. Then the result of the matrix multiplication
// is added with a matrix of biases.
//
// Inputs:
// - clk
// - reset
// - input_data
// - weights
// - biases
//
// Outputs:
// - output_data
//
// - Computes the dot product of the inputs and weights then adds that to the biases
// - Uses different set of weigths than sigmoidDenseLatencyLayer_PACKED,
// otherwise identical modules
// - Same function as reluDenseLatencyLayer, but packs multiplications into
// DSP slices instead of LUT logic
// NOTE: Limited to bitwidths of 8 and lower


`timescale 1ns / 1ps
`include "pkg_sel.svh"

import `RELU_PKG::*;

module reluDenseLatencyLayer_PACKED 
    #(parameter WIDTH           = 17,
                NFRAC           = 10,
                INPUT_SIZE      = 32,
                OUTPUT_SIZE     = 1
                )  (
    // input_data is a vector with 32 elements, each element is a 16-bit fixed point #
    input  logic                    clk,
                                    reset,
    input  logic signed [WIDTH-1:0] input_data  [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    
    localparam bit signed [WIDTH-1:0] ZERO [INPUT_SIZE] = '{ default: '0};
    
    // Weights and Bias
    logic signed [WIDTH-1:0] weights     [INPUT_SIZE*OUTPUT_SIZE];
    logic signed [WIDTH-1:0] biases      [OUTPUT_SIZE];
    
    // Load in weights and biases as constants
    assign weights = `RELU_PKG::weights;
    assign biases = `RELU_PKG::bias;
    
    
    logic signed [WIDTH-1:0] output_vals        [0:OUTPUT_SIZE];
    logic signed [WIDTH-1:0] weight_transpose   [0:INPUT_SIZE*OUTPUT_SIZE-1];
    
    logic signed [WIDTH-1:0] out_bias_buf       [0:OUTPUT_SIZE-1];
    
    
    
    logic signed [WIDTH-1:0]   mult         [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    wire     [(2*WIDTH-1):0]   mult_ji_tmp  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    wire     [(2*WIDTH-1):0]   mult_ki_tmp  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   mult_out     [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    
    logic signed [WIDTH-1:0]   accumulator  [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   result       [0:OUTPUT_SIZE-1];
    
    genvar col;
    genvar row;
    localparam TOP = WIDTH+NFRAC-1;
    localparam BOTTOM = NFRAC;
    // Generate mulipier packing modules
    generate
        for(row=0; row<INPUT_SIZE; row++) begin : INPUT_SIZE_rows
            for(col=0; col<OUTPUT_SIZE; col = col + 2) begin : OUTPUT_SIZE_cols
//                mult_temp = input_data[row] * weights[row*OUTPUT_SIZE + col];
//                mult[row][col] = mult_temp[WIDTH+NFRAC-1:NFRAC];
                if (col + 1 == OUTPUT_SIZE) begin // in case of odd output size
                    macc #(.WIDTH(WIDTH), .SIGN(1)) slice (
                        .weight_j   ( '0                                ),
                        .weight_k   ( weights[row*OUTPUT_SIZE + col]    ),
                        .input_i    ( input_data[row]                   ),
                        .clk        ( clk                               ),
                        .ji         (                                   ),
                        .ki         ( mult_ki_tmp[row][col]             )
                    );
                    assign mult[row][col] = mult_ki_tmp[row][col][TOP:BOTTOM];
                end else begin
                    macc #(.WIDTH(WIDTH), .SIGN(1)) slice (
                        .weight_j   ( weights[row*OUTPUT_SIZE + col + 1]),
                        .weight_k   ( weights[row*OUTPUT_SIZE + col]    ),
                        .input_i    ( input_data[row]                   ),
                        .clk        ( clk                               ),
                        .ji         ( mult_ji_tmp[row][col+1]           ),
                        .ki         ( mult_ki_tmp[row][col]             )
                    );
                    assign mult[row][col+1] = mult_ji_tmp[row][col+1][TOP:BOTTOM];
                    assign mult[row][col]   = mult_ki_tmp[row][col][TOP:BOTTOM];
                end
            end
        end
    endgenerate
    
    always_ff @(posedge clk) begin
        mult_out <= mult;
    end
    
    // Pipelined adder tree to accumulate the values in mult_out
    adderTree #(.WIDTH      ( WIDTH         ),
                .INPUT_SIZE ( INPUT_SIZE    ),
                .OUTPUT_SIZE( OUTPUT_SIZE   )
                ) sum_all (
        .clk,
        .reset,
        .input_data ( mult_out      ),
        .output_data( accumulator   )
    );
    // Add biases to result
    integer i;
    always_comb begin
        for (i=0; i < OUTPUT_SIZE;i++) begin
            result[i] = accumulator[i] + biases[i];
        end
    end
    
    always_ff @(posedge clk) begin
        output_data <= result;
    end
    
endmodule








module denseLatencyLayer_PACKED_testbench();
    parameter WIDTH = 4, NFRAC = 2, INPUT_SIZE = 7, OUTPUT_SIZE = 5;
    logic clk, reset;
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] weights [0:INPUT_SIZE*OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] biases [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];
    
    localparam PERIOD = 10;
    initial begin
        clk <= 1'b1;
        forever #(PERIOD/2) clk <= ~clk;
    end
    
    denseLatencyLayer_PACKED #(.WIDTH(WIDTH), .NFRAC(NFRAC), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE)) dut (
        .clk        ( clk           ),
        .reset      ( reset         ),
        .input_data ( input_data    ),
        .weights    ( weights       ),
        .biases     ( biases        ),
        .output_data( output_data   )
    );
    
    initial begin
        reset = 0;
        input_data = {{-4'd1},
                      {4'd2},
                      {-4'd3},
                      {4'd4},
                      {-4'd5},
                      {4'd6},
                      {-4'd7}
                      };
                      
        weights = {{4'd1}, {4'd2}, {4'd3}, {4'd4}, {4'd5}, //{4'd6}, {4'd7},
                   {4'd3}, {4'd4}, {4'd5}, {4'd6}, {4'd7}, //{4'd8}, {4'd9},
                   {4'd5}, {4'd6}, {4'd7}, {4'd8}, {4'd9}, //{4'd0}, {4'd1},
                   {4'd7}, {4'd8}, {4'd9}, {4'd0}, {4'd1}, //{4'd2}, {4'd3},
                   {4'd9}, {4'd0}, {4'd1}, {4'd2}, {4'd3}, //{4'd4}, {4'd5},
                   {4'd1}, {4'd2}, {4'd3}, {4'd4}, {4'd5}, //{4'd6}, {4'd7},
                   {4'd3}, {4'd4}, {4'd5}, {4'd6}, {4'd7}//, //{4'd8}, {4'd9}
                   };
                   
        biases = {{4'd0}, 
                  {4'd0}, 
                  {4'd0}, 
                  {4'd0}, 
                  //{4'd0}, 
                  //{4'd0}, 
                  {4'd0}};
                  
        repeat(30) @(posedge clk);
        $stop;
        
    end
    
    
endmodule

