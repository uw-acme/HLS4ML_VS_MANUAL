`timescale 1ns / 1ps
// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal calculationsComplete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2Doutput_parameterized  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter weightWidth = 18, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, outputMatrix, biases);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;

	// biasWidth = # of filters = number of biases = number of output channels
	// (1 bias value per filter)
	input logic signed [bitWidth-1:0]  biases [biasWidth-1:0]; 
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// output to sumNine (result of most recent dot product + added bias )
	logic signed [bitWidth-1:0] sum [biasWidth-1:0];

    // counter to keep track of how far we are into computing(how many pixels have streamed in)
	// helps determine when convolution results are valid
	localparam BASE_LEVEL = ($clog2(inputWidth*inputWidth)) + 1; // +1 padding since we need to count up to more than inputWidth^2 to account for latency, etc.
	logic [BASE_LEVEL:0] counter;
	
	// output matrix width is inputWidth-2 in case of no padding
	// with padding, use [inputWidth*inputWidth*biasWidth/(stride^2)-1:0]
	// dividing output matrix size reflects stride length (ex. /4 for stride 2)
	output logic signed [bitWidth-1:0] outputMatrix [(inputWidth-2)*(inputWidth-2)*biasWidth-1:0];
	

	// input the new pixel and output the convolutional matrix
	conv2D_parameterized #(filtDimension,bitWidth,inputWidth) currMatrix 
	(.clock(clk), .reset(reset_copy), .inputPixel(inputPixel), .currConvMatrix(currConvMatrix));


	// multiply the current matrix by the weights and take the sum
	genvar i;
	generate
	   for( i = 0; i < biasWidth; i++) begin // looping for biasWidth, so assuming biasWidth = number of filters
		   conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, NFRAC, i) sumBasedFilter1
	       (.clock(clk), .currConvMatrix(currConvMatrix), .bias(biases[i]), .sum(sum[i]));
	   end
	endgenerate 

endmodule
