`timescale 1ns / 1ps
// Sum the convolution matrix each cycle and multiply by the corresponding weight matrix as well as
// add the corresponding bias. (Caroline's comment)
// This module specifically uses the 1_8 package for weights (mostly just for testing, couldn't figure out
// a better way to do it)
module conv2Dsum3D1_8
  #(parameter filtDimension = 3,
  
	 parameter bitWidth = 16, 
	 
	 parameter NFRAC = 10, 
	 
	 parameter whichFilt=0,

	 parameter inputChannels = 1)
	 
	(input logic clock, 
	
	 input logic reset,
    
	 // this is the 'slice' of the input matrix that we're currently working with
	 // it's called zeroedMatrix because it potentially includes padding depending on where we're at
	 input logic signed [bitWidth-1:0] zeroedMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0], 
	 
	 // biases that will eventually be added to the result
	 input logic signed [bitWidth-1:0] bias, 
		 
	 // do we have a valid zeroedMatrix? if not, computations will still be done, but outputValid
	 // won't be asserted
	 input logic validMatrix,
	 
	 input logic advance,
	 
	 // the output for a particular valid zeroedMatrix is valid 4 cycles after it is inputted
	 // due to shiftAdd and adderTree latency
	 output logic outputValid,
	 
	 // output matrix that represents the truncated result WITH bias added
	 output logic signed [bitWidth-1:0] sum
	);

	// latency of shiftAdd + adderTree computations is 4 clock cycles for 1 filter
	// 6 clock cycles for 8 filters
	// remember that i will probably need to mess around 
	localparam COMPUTATION_TIME = (inputChannels == 1) ? 4 : 6;
	localparam NUM_MULTS = filtDimension**2 * inputChannels;

	// non-truncated matrix which holds the multiplied values
	// ex: productArr[0] holds the value of zeroedMatrix[0] * weightsCheck[row]
	logic signed [bitWidth*2-1:0] productArr [NUM_MULTS-1:0];

	// holds the truncated values from productArr
	logic signed [bitWidth-1:0] truncProductArr [NUM_MULTS-1:0];

	// truncated result of adding the elements in truncProductArr WITHOUT bias added yet
	logic signed [bitWidth-1:0] sumNoBias;


	genvar row;
	generate
		for(row=0; row< NUM_MULTS; row++) begin: eachMult
			// multiply the corresponding weight w/zeroed matrix value
			shift_add #(
				test_data1_8::convWeights[
					filtDimension**2 * inputChannels * whichFilt + row
				], 
				3, bitWidth, NFRAC, 5
			) 
				sa (.clk(clock),
					 .advance(advance),
					 .data_in(zeroedMatrix[
						 row/(filtDimension**2)
					 ][
						 (row%(filtDimension**2))/filtDimension
					 ][
						 row%filtDimension
					 ]), 
					 .data_out(productArr[row]));  

			assign truncProductArr[row] = productArr[row][NFRAC+bitWidth-1:NFRAC];
		end
	endgenerate 

	// then go through and sum up the zeroed matrix every clock cycle
	adderTree_1D #(NFRAC, bitWidth, NUM_MULTS) sumEachMatrix ( 
		.clk(clock),
		.reset(1'b0),
		.advance(advance),
		.input_data(truncProductArr), 
		.output_data(sumNoBias));

	// add bias to sum
	assign sum = sumNoBias + bias;

	// handle valid checks
	logic [COMPUTATION_TIME-2:0] validReg;

	// stream in new valid bit and shift others to the right, if there's no downstream pressure
	always_ff @(posedge clock) begin
		if (reset) begin
			validReg <= '0;
			outputValid <= 1'b0;
		end else if (advance) begin
			outputValid <= validReg[0];
			for (int i = 0; i < COMPUTATION_TIME-2; i++) begin
				validReg[i] <= validReg[i+1];
			end	
			validReg[COMPUTATION_TIME-2] <= validMatrix;
		end
	end
endmodule