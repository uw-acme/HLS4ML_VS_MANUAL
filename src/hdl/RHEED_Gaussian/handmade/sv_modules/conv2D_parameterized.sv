// FOR RHEED GAUSSIAN
// no padding

// This module does the bulk of the convolution work. It goes through and takes the inputs from the input matrix
// once every clock cycle. It creates a matrix that holds the values that are currently being used for the 
// convolution and after each clock cycle, the values in the left side of the matrix that are removed from that matrix 
// go in to a buffer for all but the top row as they will be used again.
`timescale 1ns / 1ps
module conv2D_parameterized 
#(parameter filtDimension = 3,parameter bitWidth = 16, parameter inputWidth = 8)
(clock, reset, inputPixel, currentConvMatrix);
	input logic clock, reset;
	input logic signed [bitWidth-1:0] inputPixel;
	
	output logic signed [bitWidth-1:0] currentConvMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] outputFifo [filtDimension-2:0]; // collection of buffers (filtDimension-1 many buffers)

	

	integer row,col;
	// shift values
    always_ff @(posedge clock) begin
		// iterate through the current window
        for(row=0; row<filtDimension; row++) begin
            for(col=0; col<filtDimension; col++) begin
                if(reset) begin
                    currentConvMatrix[filtDimension-1][filtDimension-1] <= inputPixel;
                end else begin
                        // move in value from buffer
                        if(col==filtDimension-1 && row != filtDimension -1) begin	// right edge of matrix, not bottom row
                            currentConvMatrix[row][col] <= outputFifo[row];
                        end else if(row==filtDimension-1 && col==filtDimension-1) begin	// bottom right pixel
                            // bring in new value
                            currentConvMatrix[row][col] <= inputPixel;	
                        end else begin
                            // shift normally
                            currentConvMatrix[row][col] <= currentConvMatrix[row][col+1];
                        end
                end
            end
        end
	end
		
		
	
	// create buffers to hold onto values as they are moved out of one row and into the row above
	// their previous one
	// inputData = value stored in leftmost col of each row in current matrix (except the top row)
	genvar i;	// i represents the row
	generate 
	   for(i = 0; i<filtDimension-1; i++) begin: buffers
	       conv2dFIFO_parameterized #(filtDimension,bitWidth,inputWidth) bufferEachRow
	       (.inputData(currentConvMatrix[i+1][0]), .clock(clock), .outputData(outputFifo[i]));
	   end
	endgenerate
	
endmodule

module conv2D_parameterized_testbench();
	logic clock, reset;
	logic signed [15:0] currentConvMatrix[2:0][2:0];
    logic signed [15:0] inputPixel;
	
	// test with 8x8 input image size and 3x3 kernel (changed from 10x10 input image size)
	conv2D_parameterized #(3,16,8) dut(.*);
	
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
		inputPixel = 16'd1;
		repeat(8) @(posedge clock);
		inputPixel = 16'd2; repeat(8) @(posedge clock);
		inputPixel = 16'd3; repeat(8) @(posedge clock);
		@(posedge clock);
		$stop; // End the simulation.
	end
endmodule 
	
	
	
	
	

