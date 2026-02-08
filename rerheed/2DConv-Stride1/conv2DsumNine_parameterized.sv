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
module conv2DsumNine_parameterized
#(parameter filtDimension = 3,parameter bitWidth = 16, parameter NFRAC = 10, parameter whichFilt=0)
	(clock, zeroedMatrix, sum, bias);
	input logic clock;
	// this is the 'slice' of the input matrix that we're currently working with
	// it's called zeroedMatrix because it potentially includes padding depending on where we're at
	input logic signed [bitWidth-1:0] zeroedMatrix [filtDimension-1:0][filtDimension-1:0];

	// biases that will eventually be added to the result
	input logic signed [bitWidth-1:0] bias;
	
	// filled with the weights from a .sv file
	//logic signed [bitWidth-1:0] weightsArr [8:0];

	// non-truncated matrix which holds the multiplied values
	// ex: productArr[0] holds the value of zeroedMatrix[0] * weightsCheck[row]
	logic signed [bitWidth*2-1:0] productArr [(filtDimension**2)-1:0];
	
	// holds the truncated values from productArr
	logic signed [bitWidth-1:0] truncProductArr [(filtDimension**2)-1:0];
	
	// truncated result of adding the elements in truncProductArr WITHOUT bias added yet
	logic signed [bitWidth-1:0] sumNoBias;
	
	// output matrix that represents the truncated result WITH bias added
	output logic signed [bitWidth-1:0] sum; 
	
    genvar row,col;
    generate
        for(row=0; row< filtDimension**2; row++) begin: eachMult
				// populate weights matrix 
                //assign weightsArr[row] = data16_10::convWeights[filtDimension**2*whichFilt+row];

				// change parameter to weightsCheck[row] (?)
				// multiply the corresponding weight w/zeroed matrix value
              // shift_add_with_mult #(weightsArr[row], 3, bitWidth, NFRAC) 
					shift_add #(data16_10::convWeights[filtDimension**2*whichFilt+row], 3, bitWidth, NFRAC, 5) 
               //shift_add_with_mult #(data16_10::convWeights[8*even+row], 3, bitWidth, NFRAC)
                sa (.clk(clock),.data_in(zeroedMatrix[row/filtDimension][row%filtDimension]), .data_out(productArr[row]));  

			   // does this account for the sign bit? maybe not 
			   // possibly need to concacenate temp1[row][bitWidth*2-1] and then have [24:10]
//			   assign truncProductArr[row] = 
//			   		{productArr[row][bitWidth*2-1], productArr[row][NFRAC+bitWidth-2:NFRAC]};
				assign truncProductArr[row] = 
			   		productArr[row][NFRAC+bitWidth-1:NFRAC];
        end
   endgenerate 

    // then go through and sum up the zeroed matrix every clock cycle
	// something to think about: handling potential overflow 
    adderTree_1D #(NFRAC, bitWidth, filtDimension**2) sumEachMatrix ( 
		.clk(clock),
		.reset(1'b0),
	    .input_data(truncProductArr), 
		.output_data(sumNoBias));
   // assign tempSum = temp1[0] + temp1[1] + temp1[2] + temp1[3] + temp1[4] + temp1[5] + temp1[6] + temp1[7] + temp1[8];
    
 
    // add bias to sum
    assign sum = sumNoBias + bias;
    
endmodule
 
//module conv2DsumNine_parameterized_testbench();
//
//	parameter filtDimension = 3, bitWidth = 17, inputWidth = 8, weightWidth = 9;
//
//	logic clock, reset;
//	logic signed [bitWidth-1:0] zeroedMatrix [filtDimension-1:0][filtDimension-1:0];
//	logic signed [bitWidth-1:0] weights [weightWidth-1:0];
//	logic signed [bitWidth-1:0] bias;
//	logic signed [bitWidth-1:0] sum;
//	
//	conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, 10) dut (.*);
//	
//	// Set up a simulated clock.
//	parameter CLOCK_PERIOD=100;
//	initial begin
//		clock <= 0;
//		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
//	end
//	
//	integer i,j;
//	
//	initial begin
//	reset <= 1; @(posedge clock);
//	reset <= 0;
//	zeroedMatrix[0][0] <= 3'd6; zeroedMatrix[0][1] <= 3'd6; zeroedMatrix[0][2] <= 3'd6; zeroedMatrix[1][0] <= 3'd7; 
//	zeroedMatrix[1][1] <= 3'd7; zeroedMatrix[1][2] <= 3'd7; zeroedMatrix[2][0] <= 3'd0; zeroedMatrix[2][1] <= 3'd0; 
//	zeroedMatrix[2][2] <= 3'd0;  
//	bias <= 17'b00000000010001010; 
//    weights = { 17'b11111111100110111,
//	17'b00000000000100010,
//	17'b11111111110101111,
//	17'b11111111111111001,
//	17'b00000000010111101,
//	17'b00000000011001010,
//	17'b00000000001000101,
//	17'b11111111110110011,
//	17'b00000000110001111
//	}; @(posedge clock);
//	//zeroedMatrix[0][0] <= 3'd1; @(posedge clock);
//	//zeroedMatrix[0][1] <= 3'd2; @(posedge clock);
//	$stop; // End the simulation.
//	end
//endmodule 
