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
	input logic [$clog2(filtDimension*filtDimension)-1:0] counter;

	logic signed [2*bitWidth-1:0] rawProd;
	logic signed [2*bitWidth-1:0] alignedBias; // decimal aligned to rawProd
	logic started;
	logic lastCycle;
	logic signed [2*bitWidth+$clog2(filtDimension**2)-1:0] accumulator;
	output logic signed [bitWidth-1:0] sum; 
	output logic outputValid;


	// align decimal with rawProd
    assign alignedBias = bias <<< NFRAC;

	// multiply each input with its corresponding weight (combinational multiply)
	assign rawProd = currMatrix[counter/filtDimension][counter%filtDimension] * (conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+counter]);

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
				accumulator <= alignedBias + rawProd;
				started <= 1;
				outputValid <= 0;
			end
			if (started) begin // changed from else-if 
				accumulator <= accumulator + rawProd;

				if (counter == filtDimension**2-1) begin
					outputValid <= 1;
					if (!start) begin
						started <= 0;
					end
				end
				else begin
					outputValid <= 1'b0;
				end
			end
			else begin
				outputValid <= 0;
			end
			// for very beginning
			if (started && (counter == 0)) begin // counter == 0 makes sure very first cycle sum doesn't get a head start
				accumulator <= alignedBias + rawProd;
			end
		end
	end
	
	assign sum = accumulator[NFRAC+bitWidth-1:NFRAC];

endmodule

module conv2Dsum_reuse9_tb();
	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, whichFilt = 0;

	logic clock; 
	logic reset, start; // new for reuse 9
	logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] bias;
	logic signed [bitWidth-1:0] sum;
	logic outputValid;
	
	logic [$clog2(filtDimension**2)-1:0] counter;

	conv2Dsum_reuse9 #(filtDimension, bitWidth, inputWidth, 10, 0) dut (.*);

	// simulation clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	
	integer i, j;
	initial begin
	@(posedge clock);
	reset <= 1; start <= 0; @(posedge clock);
	reset <= 0; @(posedge clock);

	currMatrix[0][0] <= 16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
	bias <= 16'sd0; 

	for (i=0; i<filtDimension; i++) begin
		for (j=0; j<filtDimension; j++) begin
			counter <= (i*filtDimension+j);
			@(posedge clock);
			// #10; // for counter non-blocking assignment to settle
			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter], bias,
					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
		end
	end


	// fiter 0
	for (i=0; i<filtDimension; i++) begin // row
		for (j=0; j<filtDimension; j++) begin // col
			if (i == 0 && j == 0) begin
				start <= 1;
			end
			counter <= (i*filtDimension+j);
			@(posedge clock);
			// #10; // for counter non-blocking assignment to settle
			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter], bias,
					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
			start <= 0;
		end
	end

	// bias = 1
	currMatrix[0][0] <= 16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
	bias <= 16'sd1;


	for (i=0; i<filtDimension; i++) begin
		for (j=0; j<filtDimension; j++) begin
			if (i == 0 && j == 0) begin
				start <= 1;
			end
			counter <= (i*filtDimension+j);
			@(posedge clock);
			// #10; // for counter non-blocking assignment to settle
			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
			start <= 0;
		end
	end

	@(posedge clock);
	$display("start: %0d, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
	$stop; // End the simulation.
	end
endmodule