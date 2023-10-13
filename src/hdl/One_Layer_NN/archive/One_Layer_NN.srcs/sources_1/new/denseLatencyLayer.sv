`timescale 1ns / 1ps

// Computes the dot product of the inputs and weights then adds that to the biases
module denseLatencyLayer #(parameter WIDTH = 17, NFRAC = 10, INPUT_SIZE = 32, OUTPUT_SIZE = 1)  (
    // input_data is a vector with 32 elements, each element is a 16-bit fixed point #
    input logic clk, reset,
    input logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1],
    input logic signed [WIDTH-1:0] weights [0:INPUT_SIZE*OUTPUT_SIZE-1],
    input logic signed [WIDTH-1:0] biases [0:OUTPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    
    logic signed [WIDTH-1:0] mult [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1]; //how to handle that they are 16-bit fixed point #
    logic signed [WIDTH*2-1:0] mult_temp;
    logic signed [WIDTH-1:0] accumulator [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] result [0:OUTPUT_SIZE-1];
    
    // Fixed point matrix multiplication on inputs and weights array
    // creates INPUT_SIZE x OUTPUT_SIZE array
    integer  col, row;
    always_comb begin 
        for(row=0; row<INPUT_SIZE; row++) begin//going through INPUT_SIZE rows
            for(col=0; col<OUTPUT_SIZE; col++) begin //going through OUTPUT_SIZE to make columns
                mult_temp = input_data[row] * weights[row*OUTPUT_SIZE + col];
                mult[row][col] = mult_temp[WIDTH+NFRAC-1:NFRAC];
           end 
        end
    end
    
    // 3 stage pipeline after DSP slice is recommended for best performance
    logic signed [WIDTH-1:0] mult_out [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1], mult1 [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1], mult2 [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    DFF_3D #(WIDTH, OUTPUT_SIZE, INPUT_SIZE) dff_mult1 (.clk, .reset, .d(mult), .q(mult1));
    DFF_3D #(WIDTH, OUTPUT_SIZE, INPUT_SIZE) dff_mult2 (.clk, .reset, .d(mult1), .q(mult2));
    DFF_3D #(WIDTH, OUTPUT_SIZE, INPUT_SIZE) dff_mult (.clk, .reset, .d(mult2), .q(mult_out));
   
    localparam N = (INPUT_SIZE < 16) ? 16 : 32;

    // Pipelined adder tree to accumulate the values in mult_out
    adder_tree #(N, WIDTH, INPUT_SIZE, OUTPUT_SIZE) adder32 (.clk, .reset, .input_data(mult_out), .output_data(accumulator));

    // Add biases to result
    integer i;
    always_comb begin
        for (i=0; i<OUTPUT_SIZE;i++) begin
            result[i] = accumulator[i] + biases[i];
        end
    end
    
    // 3 stage pipeline after DSP slice is recommended for best performance
    logic signed [WIDTH-1:0] result1 [0:OUTPUT_SIZE-1], result2 [0:OUTPUT_SIZE-1];
    DFF_2D #(WIDTH, OUTPUT_SIZE) dff_result1 (.clk, .reset, .d(result), .q(result1));
    DFF_2D #(WIDTH, OUTPUT_SIZE) dff_result2 (.clk, .reset, .d(result1), .q(result2));
    DFF_2D #(WIDTH, OUTPUT_SIZE) dff_out (.clk, .reset, .d(result2), .q(output_data));
endmodule