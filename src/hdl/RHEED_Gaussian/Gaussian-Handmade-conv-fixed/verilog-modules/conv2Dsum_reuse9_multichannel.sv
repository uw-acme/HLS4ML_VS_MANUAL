`timescale 1ns / 1ps
// Multichannel Implementation
// This module multiplies each pixel in the current convolution matrix with its corresponding weight from the (3D) kernel,
// sums the products and adds the bias.
/* convWeights data (in the data file) should be in a list in the following format:
   filter1_weights[0], ..., filter1_weights[(filterDiminsion^2)*inputChannels - 1], filter2_weights[0], ..., filter2_weights[(filterDiminsion^2)*inputChannels - 1], etc. 
   until the last filter
*/
// Computation starts when the "start" signal is asserted by the top level module. "start" should be asserted every filterDimension**2 clock cycles.
// Parameter whichFilt (ranges from 0 to however many filters being used in the covolution) indicatates which kernel (which weights)
// is being used in the module instance
module conv2Dsum_reuse9_multichannel
	#(parameter inputChannels = 1, parameter filtDimension = 3, parameter bitWidth = 16, parameter NFRAC = 10, parameter whichFilt=0, parameter biasWidth, parameter PIPE = 0)
	(clock, reset, start, currMatrix, counter, bias, convWeights, sum, outputValid);
	input logic clock;
	input logic reset, start;
	input logic signed [bitWidth-1:0] currMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];
	input logic signed [bitWidth-1:0] convWeights [0:biasWidth*inputChannels*filtDimension*filtDimension-1];
	input logic signed [bitWidth-1:0] bias;	
	input logic [$clog2(filtDimension*filtDimension)-1:0] counter;

	// PIPE = number of register stages between the window and the accumulator (0 = the original, fully combinational path)
	//   PIPE >= 1: register the selected pixel (and the counter used to pick the weight)
	//   PIPE >= 2: also register the products
	//   PIPE >= 3: also register the sum across input channels
	// Every stage adds one cycle before sum/outputValid appear; the schedule (one window per 9 cycles) does not change.

	logic signed [2*bitWidth-1:0] parallelProds [0:inputChannels-1]; // stores all raw products for current [row][col] index
	logic signed [2*bitWidth-1:0] alignedBias; // decimal aligned to rawProd
	logic started;
	logic signed [2*bitWidth+$clog2(inputChannels)-1:0] spatialSum; // sum of products across input channels 
	logic signed [2*bitWidth+$clog2((filtDimension**2)*inputChannels)-1:0] accumulator;
	output logic signed [bitWidth-1:0] sum; 
	output logic outputValid;


	// align decimal with rawProd
    assign alignedBias = bias <<< NFRAC;


	// ---- Stage 0 (combinational): pick this cycle's tap out of the window
	logic signed [bitWidth-1:0] tapPixel [0:inputChannels-1];
	always_comb begin
		for (int c = 0; c < inputChannels; c++) begin
			tapPixel[c] = currMatrix[c][counter/filtDimension][counter%filtDimension];
		end
	end

	// ---- Stage 1 (registered if PIPE >= 1): the pixel and the counter that goes with it
	logic signed [bitWidth-1:0] mulPixel [0:inputChannels-1];
	logic [$clog2(filtDimension*filtDimension)-1:0] mulCounter;
	if (PIPE >= 1) begin : stage1
		always_ff @(posedge clock) begin
			for (int c = 0; c < inputChannels; c++) begin
				mulPixel[c] <= tapPixel[c];
			end
			mulCounter <= counter;
		end
	end else begin : stage1_bypass
		always_comb begin
			for (int c = 0; c < inputChannels; c++) begin
				mulPixel[c] = tapPixel[c];
			end
			mulCounter = counter;
		end
	end

	// the weight for that tap (a constant lookup, indexed by the counter that matches mulPixel)
	logic signed [bitWidth-1:0] mulWeight [0:inputChannels-1];
	always_comb begin
		for (int c = 0; c < inputChannels; c++) begin
			mulWeight[c] = convWeights[(whichFilt*inputChannels+c)*filtDimension**2+mulCounter];
		end
	end

	// ---- Stage 2 (registered if PIPE >= 2): the products
	logic signed [2*bitWidth-1:0] prodNow [0:inputChannels-1];
	always_comb begin
		for (int c = 0; c < inputChannels; c++) begin
			prodNow[c] = mulPixel[c] * mulWeight[c];
		end
	end
	if (PIPE >= 2) begin : stage2
		always_ff @(posedge clock) begin
			for (int c = 0; c < inputChannels; c++) begin
				parallelProds[c] <= prodNow[c];
			end
		end
	end else begin : stage2_bypass
		always_comb begin
			for (int c = 0; c < inputChannels; c++) begin
				parallelProds[c] = prodNow[c];
			end
		end
	end

	// ---- Stage 3 (registered if PIPE >= 3): sum across input channels
	logic signed [2*bitWidth+$clog2(inputChannels)-1:0] spatialNow;
	always_comb begin
		spatialNow = '0;
		for (int c = 0; c < inputChannels; c++) begin
			spatialNow = spatialNow + parallelProds[c]; // accumulate sums accross depth
		end
	end
	if (PIPE >= 3) begin : stage3
		always_ff @(posedge clock) begin
			spatialSum <= spatialNow;
		end
	end else begin : stage3_bypass
		always_comb begin
			spatialSum = spatialNow;
		end
	end


	// ---- start / last-tap flags, delayed by PIPE cycles so they line up with spatialSum
	logic startAligned, lastAligned;
	if (PIPE == 0) begin : ctl_nodelay
		assign startAligned = start;
		assign lastAligned  = (counter == filtDimension**2-1);
	end else begin : ctl_delay
		logic [PIPE-1:0] startSh, lastSh;
		always_ff @(posedge clock) begin
			if (reset) begin
				startSh <= '0;
				lastSh  <= '0;
			end
			else begin
				startSh <= (startSh << 1) | start;
				lastSh  <= (lastSh  << 1) | (counter == filtDimension**2-1);
			end
		end
		assign startAligned = startSh[PIPE-1];
		assign lastAligned  = lastSh[PIPE-1];
	end


	// accumulate the bias and products
	// add bias on very first cycle (before accumulator has a value)
	always_ff @(posedge clock) begin
		if (reset) begin
			accumulator <= '0;
			outputValid <= 0;
			started <= 0;
		end
		else begin
			if (startAligned) begin 
				accumulator <= alignedBias + spatialSum;
				started <= 1;
				outputValid <= 0;
			end
			else if (started) begin
				accumulator <= accumulator + spatialSum;

				if (lastAligned) begin
					outputValid <= 1;
					started <= 0;
				end
				else begin
					outputValid <= 1'b0;
				end
			end
			else begin
				outputValid <= 0;
			end
		end
	end
	
	assign sum = accumulator[NFRAC+bitWidth-1:NFRAC];

endmodule

// module conv2Dsum_reuse9_tb();
// 	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, whichFilt = 0;

// 	logic clock; 
// 	logic reset, start; // new for reuse 9
// 	logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
// 	logic signed [bitWidth-1:0] bias;
// 	logic signed [bitWidth-1:0] sum;
// 	logic outputValid;
	
// 	logic [$clog2(filtDimension**2)-1:0] counter;

// 	conv2Dsum_reuse9_multichannel #(filtDimension, bitWidth, inputWidth, 10, 0) dut (.*);

// 	// simulation clock.
// 	parameter CLOCK_PERIOD=100;
// 	initial begin
// 		clock <= 0;
// 		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
// 	end
	
// 	integer i, j;
// 	initial begin
// 	@(posedge clock);
// 	reset <= 1; start <= 0; @(posedge clock);
// 	reset <= 0; @(posedge clock);

// 	currMatrix[0][0] <= 16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
// 	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
// 	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
// 	bias <= 16'sd0; 

// 	for (i=0; i<filtDimension; i++) begin
// 		for (j=0; j<filtDimension; j++) begin
// 			counter <= (i*filtDimension+j);
// 			@(posedge clock);
// 			// #10; // for counter non-blocking assignment to settle
// 			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
// 					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter], bias,
// 					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
// 		end
// 	end


// 	// fiter 0
// 	for (i=0; i<filtDimension; i++) begin // row
// 		for (j=0; j<filtDimension; j++) begin // col
// 			if (i == 0 && j == 0) begin
// 				start <= 1;
// 			end
// 			counter <= (i*filtDimension+j);
// 			@(posedge clock);
// 			// #10; // for counter non-blocking assignment to settle
// 			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
// 					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter], bias,
// 					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
// 			start <= 0;
// 		end
// 	end

// 	// bias = 1
// 	currMatrix[0][0] <= 16'sd1; currMatrix[0][1] <= 16'sd2; currMatrix[0][2] <= 16'sd3; 
// 	currMatrix[1][0] <= 16'sd4; currMatrix[1][1] <= 16'sd5; currMatrix[1][2] <= 16'sd6; 
// 	currMatrix[2][0] <= 16'sd7; currMatrix[2][1] <= 16'sd8; currMatrix[2][2] <= 16'sd9;  
// 	bias <= 16'sd1;


// 	for (i=0; i<filtDimension; i++) begin
// 		for (j=0; j<filtDimension; j++) begin
// 			if (i == 0 && j == 0) begin
// 				start <= 1;
// 			end
// 			counter <= (i*filtDimension+j);
// 			@(posedge clock);
// 			// #10; // for counter non-blocking assignment to settle
// 			$display("start: %b, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
// 					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
// 					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
// 			start <= 0;
// 		end
// 	end

// 	@(posedge clock);
// 	$display("start: %0d, pixel value: %0d, weight: %0d, bias: %0d, rawProd: %0d, accumulator: %0d, sum: %0d, counter: %0d, outputValid: %0b", 
// 					 start, currMatrix[i][j], conv2d_reuse9_test_data::convWeights[filtDimension**2*whichFilt+dut.counter]/(2**10), bias,
// 					 dut.rawProd, dut.accumulator, sum, dut.counter, outputValid);
// 	$stop; // End the simulation.
// 	end
// endmodule