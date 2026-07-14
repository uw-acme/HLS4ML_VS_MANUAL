`timescale 1ns / 1ps
// Sum the convolution matrix each cycle and multiply by the corresponding weight matrix as well as
// add the corresponding bias. (Caroline's comment)

// Packard's comment: 
// This module takes as input a 'zeroedMatrix'. This is basically the current 3x3 (in this case)
// slice of the model that we're looking at. 
// It also takes in the bias array which are used in the calculation.
// Essentially what happens in this module is we're performing element-wise multiplication
// between the zeroed-matrix and the corresponding weights matrix (accessed via a file). 
// Then we're adding them all up, truncating the result, and outputting this final single value.
module conv2DsumNine
  #(parameter filtDimension = 3,
  
	 parameter bitWidth = 16, 
	 
	 parameter NFRAC = 10, 
	 
	 parameter whichFilt=0)
	 
	(input logic clock, 
	
	 input logic reset,
    
	 // this is the 'slice' of the input matrix that we're currently working with
	 // it's called zeroedMatrix because it potentially includes padding depending on where we're at
	 input logic signed [bitWidth-1:0] zeroedMatrix [filtDimension-1:0][filtDimension-1:0], 
	 
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

	// latency of shiftAdd + adderTree computations is 4 clock cycles
	localparam COMPUTATION_TIME = 4;

	// non-truncated matrix which holds the multiplied values
	// ex: productArr[0] holds the value of zeroedMatrix[0] * weightsCheck[row]
	logic signed [bitWidth*2-1:0] productArr [(filtDimension**2)-1:0];

	// holds the truncated values from productArr
	logic signed [bitWidth-1:0] truncProductArr [(filtDimension**2)-1:0];

	// truncated result of adding the elements in truncProductArr WITHOUT bias added yet
	logic signed [bitWidth-1:0] sumNoBias;


	genvar row,col;
	generate
		for(row=0; row< filtDimension**2; row++) begin: eachMult
			// multiply the corresponding weight w/zeroed matrix value
			shift_add #(test_data::convWeights[filtDimension**2*whichFilt+row], 3, bitWidth, NFRAC, 5) 
				sa (.clk(clock),
					 .advance(advance),
					 .data_in(zeroedMatrix[row/filtDimension][row%filtDimension]), 
					 .data_out(productArr[row]));  

			assign truncProductArr[row] = productArr[row][NFRAC+bitWidth-1:NFRAC];
		end
	endgenerate 

	// then go through and sum up the zeroed matrix every clock cycle
	adderTree_1D #(NFRAC, bitWidth, filtDimension**2) sumEachMatrix ( 
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

`timescale 1ns / 1ps

module conv2DsumNine_tb;

	parameter filtDimension = 3;
	parameter bitWidth = 16;
	parameter NFRAC = 10;
	parameter whichFilt = 0;

	logic clock;
	logic reset;

	logic signed [bitWidth-1:0] zeroedMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] bias;

	logic inputValid;
	logic outputValid;

	logic signed [bitWidth-1:0] sum;

	conv2DsumNine #(
		.filtDimension(filtDimension),
		.bitWidth(bitWidth),
		.NFRAC(NFRAC),
		.whichFilt(whichFilt)
	) dut (
		.clock(clock),
		.reset(reset),
		.zeroedMatrix(zeroedMatrix),
		.bias(bias),
		.inputValid(inputValid),
		.outputValid(outputValid),
		.sum(sum)
	);

	// clock
	initial begin
		clock = 1'b0;
		forever #5 clock = ~clock;
	end

	// print every cycle
	always_ff @(posedge clock) begin
		$display("time=%0t inputValid=%0b outputValid=%0b sum=%0d",
			$time, inputValid, outputValid, sum);
	end

	task automatic clear_matrix;
		begin
			for (int r = 0; r < filtDimension; r++) begin
				for (int c = 0; c < filtDimension; c++) begin
					zeroedMatrix[r][c] = 16'sd0;
				end
			end
		end
	endtask

	task automatic drive_counting_matrix;
		input int startVal;
		begin
			for (int r = 0; r < filtDimension; r++) begin
				for (int c = 0; c < filtDimension; c++) begin
					zeroedMatrix[r][c] = (startVal + r*filtDimension + c) <<< NFRAC;
				end
			end
		end
	endtask

	task automatic drive_constant_matrix;
		input int val;
		begin
			for (int r = 0; r < filtDimension; r++) begin
				for (int c = 0; c < filtDimension; c++) begin
					zeroedMatrix[r][c] = val <<< NFRAC;
				end
			end
		end
	endtask

	task automatic send_valid_matrix;
		input int startVal;
		input int biasVal;
		begin
			drive_counting_matrix(startVal);
			bias = biasVal <<< NFRAC;
			inputValid = 1'b1;
			@(posedge clock);

			inputValid = 1'b0;
		end
	endtask

	initial begin
		reset = 1'b1;
		inputValid = 1'b0;
		bias = 16'sd0;
		clear_matrix();

		repeat (3) @(posedge clock);

		reset = 1'b0;
		@(posedge clock);

		// case 1: one valid matrix, then wait
		send_valid_matrix(1, 0);
		repeat (6) @(posedge clock);

		// case 2: another valid matrix with bias
		send_valid_matrix(10, 2);
		repeat (6) @(posedge clock);

		// case 3: invalid garbage matrix, should not produce outputValid
		drive_counting_matrix(100);
		bias = 16'sd9 <<< NFRAC;
		inputValid = 1'b0;
		repeat (4) @(posedge clock);

		// case 4: two valid matrices back-to-back
		drive_counting_matrix(20);
		bias = 16'sd0;
		inputValid = 1'b1;
		@(posedge clock);

		drive_counting_matrix(30);
		bias = -16'sd1 <<< NFRAC;
		inputValid = 1'b1;
		@(posedge clock);

		inputValid = 1'b0;
		repeat (8) @(posedge clock);

		// case 5: constant matrix
		drive_constant_matrix(1);
		bias = 16'sd0;
		inputValid = 1'b1;
		@(posedge clock);

		inputValid = 1'b0;
		repeat (8) @(posedge clock);

		$stop;
	end

endmodule