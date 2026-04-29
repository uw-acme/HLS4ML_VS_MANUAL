`timescale 1ns / 1ps
// This module multiplies each pixel in the current convolution matrix with its corresponding weight from the kernel,
// sums the products results and adds the bias.
/* convWeights data (in the data file) should be in a list in the following format:
   filter1_weights[0], ..., filter1_weights[filterDiminsion^2 - 1], filter2_weights[0], ..., filter2_weights[filterDiminsion^2 - 1], etc. 
   until the last filter
*/
// Computation starts when the "start" signal is asserted by the top level module. "start" should be asserted every 9 clock cycles.
// Parameter whichFilt (ranges from 0 to however many filters being used in the covolution) indicatates which kernel (which weights)
// are being used in the module instance
module conv2Dsum_reuse9
	#(parameter filtDimension = 3, parameter bitWidth = 16, parameter inputWidth = 8, parameter NFRAC = 10, parameter whichFilt=0)
	(clock, reset, start, currMatrix, counter, bias, sum, outputValid);
	input logic clock;
	input logic reset, start; // new inputs for reuse 9
	input logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	input logic signed [bitWidth-1:0] bias;	

	// to index the correct pixel/weight from currMarix and convweights
	// cycles from 0 through filDimension**2
	input logic [$clog2(filtDimension*filtDimension)-1:0] counter;

	// product of current input pixel and weight (in the current cycle)
	logic signed [2*bitWidth-1:0] raw_prod;

	// keeps track of whether in the middle of a computation
	logic started;

	logic lastCycle; // NEW TO MAKE OUTPUTVALID GO DOWN AFTER LAST COMPUTATION
	
	// sum of all (untruncated) products in the current matrix, plus the bias
	//			 [raw_prod dimension + log2(number of accumulations = filtDimension**2)-1:0]
	logic signed [2*bitWidth+$clog2(filtDimension**2)-1:0] accumulator;
	
	// truncated sum of accumulator and the bias
	output logic signed [bitWidth-1:0] sum; 

	// high when sum output is valid (not in the middle of accumulation)
	output logic outputValid;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// multiply each input with its corresponding weight (combinational multiply)
	assign raw_prod = currMatrix[counter/filtDimension][counter%filtDimension] * (conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+counter]);

	// accumulate the bias and products
	// add bias on very first cycle (before accumulator has a value)
	always_ff @(posedge clock) begin
		if (reset) begin
			accumulator <= '0;
			outputValid <= 0;
			started <= 0;
			lastCycle <= 0;
		end
		else begin
			if (start) begin
				accumulator <= bias + raw_prod;
				started <= 1;
				outputValid <= 0;
			end
			else if (started) begin
				accumulator <= accumulator + raw_prod;

				if (counter == filtDimension**2-1 && started) begin
					outputValid <= 1;
					started <= 0;
					lastCycle <= 1; // 	NEW TO MAKE OUTPUTVALID LOW AFTER 1 CLK CYCLE AFTER THE VERY LAST PIXEL
				end
			end
			else if (lastCycle) begin
				outputValid <= 0;
			end
		end
	end

	// truncate the accumulator (the sum)
	assign sum = accumulator[NFRAC+bitWidth-1:NFRAC];

endmodule

module conv2Dsum_reuse9_tb();
	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, whichFilt = 0;

	logic clock; 
	logic reset, start; // new for reuse 9
	logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	// logic signed [bitWidth-1:0] weights [weightWidth-1:0];
	logic signed [bitWidth-1:0] bias;
	logic signed [bitWidth-1:0] sum;
	logic outputValid;
	
	// conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, 10, 0) dut (.*);
	conv2Dsum_reuse9 #(filtDimension, bitWidth, inputWidth, 10, 0) dut (.*);

	
	// Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	
	// test using the first 9 weights in the convWeights package in data16_10.sv
	integer i, j;
	initial begin
	// @(posedge clock)
	reset <= 1; @(posedge clock);
	reset <= 0; @(posedge clock);

	start <= 0;
	currMatrix[0][0] <= 16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
	bias <= 16'sd0; 
	
	// don't need to set weights since they're directly accessed from test data file
    // weights = { 17'b11111111100110111,
	// 17'b00000000000100010,
	// 17'b11111111110101111,
	// 17'b11111111111111001,
	// 17'b00000000010111101,
	// 17'b00000000011001010,
	// 17'b00000000001000101,
	// 17'b11111111110110011,
	// 17'b00000000110001111
	// }; 

	for (i=0; i<filtDimension; i++) begin
		for (j=0; j<filtDimension; j++) begin
			@(posedge clock);
			$display("pixel value: %0d, weight: %0d, bias: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.accumulator, sum, dut.counter, outputValid);
		end
	end

	start <= 1;
	// fiter 0
	for (i=0; i<filtDimension; i++) begin
		for (j=0; j<filtDimension; j++) begin
			@(posedge clock);
			start <= 0;
			$display("pixel value: %0d, weight: %0d, bias: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.accumulator, sum, dut.counter, outputValid);
		end
	end

	// bias = 1
	currMatrix[0][0] <= -16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
	bias <= 16'b0000010000000000; 

	start <= 1;
	for (i=0; i<filtDimension; i++) begin
		for (j=0; j<filtDimension; j++) begin
			@(posedge clock);
			start <= 0;
			$display("pixel value: %0d, weight: %0d, bias: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.accumulator, sum, dut.counter, outputValid);
		end
	end

	@(posedge clock);
	$display("pixel value: %0d, weight: %0d, bias: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.accumulator, sum, dut.counter, outputValid);
	$stop; // End the simulation.
	end
endmodule