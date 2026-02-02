`timescale 1ns / 1ps
// Sum the convolution matrix each cycle and multiply by the corresponding weight matrix as well as
// add the corresponding bias.
/* convWeights data (in the data file) should be in a list in the following format:
   filter1_weights[0], ..., filter1_weights[filterDiminsion^2 - 1], filter2_weights[0], ..., filter2_weights[filterDiminsion^2 - 1], etc. 
   until the last filter
*/
// Parameter whichFilt (ranges from 0 to however many filters being used in the covolution) indicatates which kernel (which weights) are 
// being used in the current iteration
module conv2DsumNine_parameterized
	#(parameter filtDimension = 3, parameter bitWidth = 16, parameter inputWidth = 8, parameter NFRAC = 10, parameter whichFilt=0)
	(clock, currMatrix, sum, bias);
	input logic clock;
	input logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	input logic signed [bitWidth-1:0] bias;	
	
												
	// stores values in the kernel (the weights) corresponding to each pixel in current matrix
													 //[(filtDimension**2)-1:0]
	// logic signed [bitWidth-1:0] weightsArr [8:0];	

	// stores results of each multiplication of pixel value and corresponding weight
													   //[(filtDimension**2)-1:0]
	logic signed [bitWidth*2-1:0] productArr [(filtDimension**2)-1:0];

	// stores truncated values of each multiplication (truncated to bitwidth-many bits,
	// preserving NFRAC fractional bits)
													 //	  [(filtDimension**2)-1:0]
	logic signed [bitWidth-1:0] truncProductArr [(filtDimension**2)-1:0];

	// sum of all truncated products in the current matrix before adding the bias
	logic signed [bitWidth-1:0] tempSum; 
	//logic signed [bitWidth*2-1:0] tempSum; 
	// ^^ SOLUTION TO OVERFLOW (make bitwidth of tempSum larger, then check if there would be
	// overflow with the desired bitWidth. If there is overflow, output the max value that can be
	// made with that bitwidth. otherwise, truncate normally.
	
	// sum of all truncated products and the bias
	output logic signed [bitWidth-1:0] sum; 

	// for testing
	// logic signed [bitWidth-1:0] weights [weightWidth-1:0];
	
    genvar row;
    generate
        for(row=0; row<filtDimension**2; row++) begin: eachMult

			// pull out specific wieght needed to multiply the current matrix pixel by (from data file) and 
			// assign it to a designated spot in weightsArr
         // assign weightsArr[row] = data16_10::convWeights[filtDimension**2*whichFilt+row];

			// actual
			shift_add #(data16_10::convWeights[filtDimension**2*whichFilt+row], 3, bitWidth, NFRAC, 5) // 3 = shift add depth, 5=DEPTH_FRAC
			// for testing
			// shift_add_with_mult #(weights[filtDimension**2*whichFilt+row], 3, bitWidth, NFRAC) 

			// shift_add #(data16_10::convWeights[filtDimension**2*whichFilt+row], 3, bitWidth, NFRAC) // 3 = shift add depth
            // shift_add_with_mult #(data16_10::convWeights[(8*row)+whichFilt], 3, bitWidth, NFRAC) // Caroline's version
            // shift_add_with_mult #(data16_10::convWeights[8*whichFilt+row], 3, bitWidth, NFRAC) // past version (Caroline)

			// row/3: 000111222 (row #)
			// row%3: 012012012 (col #)
			// generate a shift add module for each spot within the filter
            sa (.clk(clock), .data_in(currMatrix[row/filtDimension][row%filtDimension]), .data_out(productArr[row]));  // store product in productArr

			// NEW VERSION that preserves MSB from non-truncated version (MSB + productArr[NFRAC+bitWidth-2:NFRAC])
			assign truncProductArr[row] = {productArr[row][bitWidth*2-1], productArr[row][NFRAC+bitWidth-2:NFRAC]}; 

			// the line below truncates the value to the correct number of bits, but the MSB of the truncated version is NOT
			// the MSB in the non-truncated version, which isn't how it's supposed to be. The MSB of the truncated version
			// should be the MSB of the non-truncated version because that's the sign bit.
            // assign truncProductArr[row] = productArr[row][NFRAC+bitWidth-1:NFRAC];	// truncation to keep original number of integer and fractional bits
        end
   endgenerate 

	// DO WE NEED TO DEAL WITH OVERFLOW???
    // then go through and sum up the current matrix every clock cycle
    adderTree_1D #(NFRAC, bitWidth, filtDimension**2) sumEachMatrix ( .clk(clock), .input_data(truncProductArr), .output_data(tempSum));
    // assign tempSum = productArr[0] + productArr[1] + productArr[2] + productArr[3] + productArr[4] + productArr[5] + productArr[6] + productArr[7] + productArr[8];
 
    // add bias to sum
    assign sum = tempSum + bias;
    
endmodule
 
module conv2DsumNine_parameterized_testbench();

	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8;//, weightWidth = 9;

	logic clock; //, reset;
	logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	// logic signed [bitWidth-1:0] weights [weightWidth-1:0];
	logic signed [bitWidth-1:0] bias;
	logic signed [bitWidth-1:0] sum;
	
	// conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, 10, 0) dut (.*);
	conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, 10, 0) dut (.*);

	
	// Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	
	// test using the first 9 weights in the convWeights package in data16_10.sv
	initial begin
	// reset <= 1; @(posedge clock);
	// reset <= 0;
	currMatrix[0][0] <= 3'd6; currMatrix[0][1] <= 3'd6; currMatrix[0][2] <= 3'd6; 
	currMatrix[1][0] <= 3'd7; currMatrix[1][1] <= 3'd7; currMatrix[1][2] <= 3'd7; 
	currMatrix[2][0] <= 3'd0; currMatrix[2][1] <= 3'd0; currMatrix[2][2] <= 3'd0;  
	bias <= 16'b0000000010001010; 
	
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

	repeat(10) @(posedge clock);
	//currMatrix[0][0] <= 3'd1; @(posedge clock);
	//currMatrix[0][1] <= 3'd2; @(posedge clock);
	$stop; // End the simulation.
	end
endmodule 
