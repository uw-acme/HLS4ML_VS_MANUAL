`timescale 1ns / 1ps
// Sum the convolution matrix each cycle and multiply by the corresponding weight matrix as well as
// add the corresponding bias.
module conv2DsumNine_parameterized
#(parameter filtDimension = 3,parameter bitWidth = 16, parameter inputWidth = 8, parameter weightWidth = 9, parameter NFRAC = 10, parameter even=0)
(clock, currMatrix, sum, bias);
	input logic clock;
	input logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	input logic signed [bitWidth-1:0] bias;
	
	
	logic signed [bitWidth-1:0] temp [(filtDimension**2)-1:0];	// stores truncated values of each multiplication (truncated to bitwidth-many bits, 
																// preserving NFRAC fractional bits)
	logic signed [bitWidth-1:0] weightsCheck [8:0];	// stores values in the kernel (the weights) corresponding to each pixel in current matrix

	output logic signed [bitWidth-1:0] sum;
	
	logic signed [bitWidth-1:0] tempSum;
	//logic signed [bitWidth*2-1:0] tempSum;
	logic signed [bitWidth*2-1:0] temp1 [(filtDimension**2)-1:0];	// stores results of each multiplication
	
	
    genvar row,col;
    generate
        for(row=0; row<filtDimension**2; row++) begin

			// pull out specific wieght needed to multiply the current matrix pixel by and assign it to a designated spot in weightsCheck
            assign weightsCheck[row] = data16_10::convWeights[9*even+row]; 
            shift_add_with_mult #(data16_10::convWeights[(8*row)+even], 3, bitWidth, NFRAC) 
            // shift_add_with_mult #(data16_10::convWeights[8*even+row], 3, bitWidth, NFRAC)
			// row/3: 000111222
			// row%3: 012012012
            sa (.clk(clock),.data_in(currMatrix[row/3][row%3]), .data_out(temp1[row]));  // store product in temp1
            assign temp[row] = temp1[row][NFRAC+bitWidth-1:NFRAC];	// truncation to keep original number of integer and fractional bits
        end
   endgenerate 

    // then go through and sum up the zeroed matrix every clock cycle
    adderTree_1D #(NFRAC, bitWidth, filtDimension**2) sumEachMatrix ( .clk(clock), .input_data(temp), .output_data(tempSum));
   // assign tempSum = temp1[0] + temp1[1] + temp1[2] + temp1[3] + temp1[4] + temp1[5] + temp1[6] + temp1[7] + temp1[8];
    
 
    // add bias to sum
    assign sum = tempSum + bias;
    
endmodule
 
module conv2DsumNine_parameterized_testbench();

	parameter filtDimension = 3, bitWidth = 17, inputWidth = 8, weightWidth = 9;

	logic clock, reset;
	logic signed [bitWidth-1:0] currMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] weights [weightWidth-1:0];
	logic signed [bitWidth-1:0] bias;
	logic signed [bitWidth-1:0] sum;
	
	conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, 10) dut (.*);
	
	// Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	
	integer i,j;
	
	initial begin
	reset <= 1; @(posedge clock);
	reset <= 0;
	currMatrix[0][0] <= 3'd6; currMatrix[0][1] <= 3'd6; currMatrix[0][2] <= 3'd6; currMatrix[1][0] <= 3'd7; 
	currMatrix[1][1] <= 3'd7; currMatrix[1][2] <= 3'd7; currMatrix[2][0] <= 3'd0; currMatrix[2][1] <= 3'd0; 
	currMatrix[2][2] <= 3'd0;  
	bias <= 17'b00000000010001010; 
    weights = { 17'b11111111100110111,
	17'b00000000000100010,
	17'b11111111110101111,
	17'b11111111111111001,
	17'b00000000010111101,
	17'b00000000011001010,
	17'b00000000001000101,
	17'b11111111110110011,
	17'b00000000110001111
	}; @(posedge clock);
	//currMatrix[0][0] <= 3'd1; @(posedge clock);
	//currMatrix[0][1] <= 3'd2; @(posedge clock);
	$stop; // End the simulation.
	end
endmodule 
