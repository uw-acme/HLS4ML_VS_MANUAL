// MODEL_SIM_TEST_CHANGE_123


`timescale 1ns / 1ps
// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal calculationsComplete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2Doutput_noRelu  
	#(parameter filtDimension = 3,
	  parameter bitWidth = 17,
	  parameter inputWidth = 8, 
	  parameter weightWidth = 18, 
	  parameter biasWidth = 2, 
	  parameter NFRAC = 10)
		
	 (clk, 
	  reset, 
	  inputPixel, 
	  outputMatrix, 
	  biases, 
	  complete,
	  counter,
	  paddedMatrix, 
	  sum,
	  currentConvMatrix);

	localparam TOTAL_PIXELS = inputWidth**2;
	// this represents the number of clock cycles until enough pixels have been 
	// streamed in to start sumNine computations
	localparam LOAD_TIME = (filtDimension-2)*(inputWidth) + filtDimension +3;//- 1;
	// will count until computations have fully finished
	output logic [$clog2(TOTAL_PIXELS+LOAD_TIME)-1:0] counter;

	input logic clk, reset;
	// current pixel that is being processed
	input logic signed [bitWidth-1:0]  inputPixel;
	// corresponding biases for each filter
	input logic signed [bitWidth-1:0]   biases [biasWidth-1:0];
	
	// current slice of the image we're looking at
	output logic signed [bitWidth-1:0] paddedMatrix       [filtDimension-1:0][filtDimension-1:0];
	// most recent 'dot products' computed with the current kernel (number of filters)
	output logic signed [bitWidth-1:0] sum 			   [biasWidth-1:0];
	
	// changed the dimension from inputWidth*inputWidth*biasWidth / 4 since this is stride 2
	// biasWidth = number of filters basically
	output logic signed [bitWidth-1:0] outputMatrix [inputWidth*inputWidth*biasWidth-1:0]; 
	output logic complete;
	
	
	output logic signed [bitWidth-1:0] currentConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// input the current matrix and output the matrix with zeroes
	// for when in the padded region
	conv2D_parameterized #(filtDimension,bitWidth,inputWidth) zeroMatrix 
		(.clock(clk), .reset, .inputPixel(inputPixel), .zeroedMatrix(paddedMatrix), .currentConvMatrix);
	
	/** the following two lines would need to be adjusted based on how many filters are being used,
	since we are using 2 here there are only 2 different needed 
	 i am not sure how we would split the weights for if there were more than 2 filters        **/

	// creates 2 sumNine modules which do the 'dot product' with the current 
	// paddedMatrix and corresponding weights
	genvar i;
	generate
	   for( i = 0; i < biasWidth; i++) begin: eachSumNine
	       conv2DsumNine_parameterized #(filtDimension, bitWidth,NFRAC, i) sumBasedFilter1 
	       (.clock(clk), .zeroedMatrix(paddedMatrix), .sum(sum[i]), .bias(biases[i]));
	   end
	endgenerate 

	// increment counter 
	always_ff @(posedge clk) begin
		if (reset) counter <= 0;
		else counter <= counter + 1;
	end

	// assign sum values to output matrix 
	always_ff @(posedge clk) begin
		if (counter > LOAD_TIME && !complete) begin
			for (int i = 0; i < biasWidth; i++) begin
				outputMatrix[counter-LOAD_TIME-1 + TOTAL_PIXELS*i] <= sum[i];
			end
		end	
	end

	// true once the last sumNine computation has been completed
	assign complete = counter > (TOTAL_PIXELS + LOAD_TIME + 1);
endmodule

module conv2Doutput_noRelu_testbench();

	logic clk, reset;
	// current pixel that is being processed
	logic signed [16:0]  inputPixel;
	// corresponding biases for each filter
	logic signed [16:0]  biases [1:0];

	logic signed [16:0] outputMatrix [127:0]; 
	logic complete;
	logic [6:0] counter;
	logic signed [16:0] paddedMatrix       [2:0][2:0];
	logic signed [16:0] sum 			   [1:0];
	
	logic signed [16:0] currentConvMatrix [2:0][2:0];
	
	parameter ClockDelay = 20000;

	initial begin // Set up the clock
		clk <= 0;
		forever #(ClockDelay/2) clk <= ~clk;
	end
		
	conv2Doutput_noRelu #(3,17,8,18,2,10) dut (.*);
	
	initial begin
		reset = 1; @(posedge clk);
		reset = 0;
		for (int i = 0; i < 100; i++) begin
			inputPixel = i;
			biases[0] = 2;
			biases[1] = 1;
			@(posedge clk);
		end
		$stop;
	end
	

endmodule
