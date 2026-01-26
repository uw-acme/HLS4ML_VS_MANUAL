`timescale 1ns / 1ps
// this implementation is for a convolution with NO PADDING

// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal complete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2Doutput_parameterized  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter weightWidth = 18, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, biases, outputMatrix, complete);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;

	// biasWidth = # of filters = number of biases = number of output channels
	// (1 bias value per filter)
	input logic signed [bitWidth-1:0]  biases [biasWidth-1:0]; 
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// stores the outputs to all the instances of sumNine each clock cycle
    // (result of most recent dot product + added bias )
	logic signed [bitWidth-1:0] sum [biasWidth-1:0];

	// number of pixels in the OUTPUT image
	localparam TOTAL_PIXELS = (inputWidth-2)*(inputWidth-2);

	// number of cycles needed to stream in enough input pixels to fill up the matrix for the first time
	localparam LOAD_TIME = inputWidth*(filtDimension-1);

    // counter to keep track of when conv2DsumNine outputs valid sums so that the sums can be assigned to outputMatrix
	// helps determine when convolution full convolution is complete
	logic [$clog2(TOTAL_PIXELS + LOAD_TIME):0] counter; // 1 bit more that log2(total pixels) to account for load time

    // keeps track of the current column of the input matrix that aligns with the top left pixel of currConvMatrix
    // to determine when NOT to assign sums to the output (logic for no-padding implementation)
    logic [$clog2(inputWidth)-1:0] currCol; 
	
	// output matrix width is inputWidth-2 in case of no padding
	// with padding, use [inputWidth*inputWidth*biasWidth:0] assuming stride 1
	output logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];

	// signal that indicates that the convolution is complete
	output logic complete;
	

	// input the new pixel and output the convolutional matrix
	conv2D_parameterized #(filtDimension, bitWidth, inputWidth) currMatrix 
	(.clock(clk), .reset(reset), .inputPixel(inputPixel), .currConvMatrix(currConvMatrix));


	// multiply the current matrix by the weights and take the sum
	genvar i;
	generate
	   for( i = 0; i < biasWidth; i++) begin: eachSumNine // looping for biasWidth, so assuming biasWidth = number of filters
		   conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, NFRAC, i) sumBasedFilter1
	       (.clock(clk), .currMatrix(currConvMatrix), .bias(biases[i]), .sum(sum[i]));
	   end
	endgenerate 

	// counter to determine when sum outputs from conv2DsumNine_parameterized are valid
	integer j;
	always_ff @(posedge clk) begin
		if (reset) begin
			counter <= 0;
            currCol <= 0;
		end
		else begin
			if (counter > LOAD_TIME) begin

                currCol <= (currCol == inputWidth) ? 0 : (currCol + 1);

                if (currCol < (inputWidth - filtDimension + 2)) begin // while not skipping

                    /* 
                    assign dot products to the output matrix in the format:
			        [(output channel 1 pixel 0~n), (output channel 2 pixel 0~n), ..., (output channel m pixel 0~n)]
			        */
                    for (j=0; j<biasWidth; j++) begin
                        outputMatrix[counter-LOAD_TIME-1 + TOTAL_PIXELS*j] <= sum[j]; 
                    end
                end

			end
            counter <= counter + 1;
		end
	end

	// when counter == LOAD_TIME + TOTAL_PIXELS, currConvMatrix for the last computation is determined
	// when counter > LOAD_TIME + TOTAL_PIXELS, the last sum has been computed
	// when counter > LOAD_TIME + TOTAL_PIXELS + 1, the last pixel has been assigned to the outputMatrix
	assign complete = (counter > (LOAD_TIME + TOTAL_PIXELS + 1));


endmodule
