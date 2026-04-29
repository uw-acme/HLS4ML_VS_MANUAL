// FOR RHEED GAUSSIAN reuse 9 (ready to take an input every 9 cycles)
// no padding

// This module does the bulk of the convolution work. At every clock cycle when the shift-enable signal is high, 
// it takes in an input pixel and creates a matrix that holds the values that will be used for the 
// convolution by shifting all pre-existing pixels to the left. At each shift, the values in the left edge 
// that are removed from that matrix go into a buffer for all but the top row as they will be used again.
`timescale 1ns / 1ps
module conv2Dwindow_reuse9
#(parameter filtDimension = 3, parameter bitWidth = 16, parameter inputWidth = 8)
(clock, reset, inputPixel, shift_enable, currConvMatrix);
	input logic clock, reset;
	input logic signed [bitWidth-1:0] inputPixel;
	input logic shift_enable; // new for reuse 9

	output logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	logic signed [bitWidth-1:0] outputFifo [filtDimension-2:0]; // collection of buffers (filtDimension-1 many buffers)

	integer row, col;
	// shift values
    always_ff @(posedge clock) begin
		// iterate through the current window
        for(row=0; row<filtDimension; row++) begin
            for(col=0; col<filtDimension; col++) begin
                // if(reset) begin // needed??  maybe not ??
                //     currConvMatrix[filtDimension-1][filtDimension-1] <= inputPixel; // even if inputPixel is not ready (garbage data, it'll get pushed out before computation)
                // end 
				// shift only if shift_enable is on (should be on during loading period and then once every 9 cycles after that)
				// else if(shift_enable) begin 
				if(shift_enable) begin 
                        // move in value from buffer
                        if(col==filtDimension-1 && row != filtDimension -1) begin	// right edge of matrix, not bottom row
                            currConvMatrix[row][col] <= outputFifo[row];
                        end else if(row==filtDimension-1 && col==filtDimension-1) begin	// bottom right pixel
                            // bring in new value
                            currConvMatrix[row][col] <= inputPixel;	
                        end else begin
                            // shift normally
                            currConvMatrix[row][col] <= currConvMatrix[row][col+1];
                        end
                end
            end
        end
	end
		
	
	// create buffers to hold onto values as they are moved out of one row and into the row above their previous one
	// inputData into FIFO = value stored in leftmost col of each row in current matrix (except the top row)
	genvar i;	// i represents the row
	generate 
	   for(i = 0; i<filtDimension-1; i++) begin: buffers
	       conv2dFIFO_enabled #(filtDimension, bitWidth, inputWidth) bufferEachRow
	       (.inputData(currConvMatrix[i+1][0]), .clock(clock), .en(shift_enable), .outputData(outputFifo[i]));
	   end
	endgenerate
	
endmodule

module conv2Dwindow_reuse9_tb ();
	logic clock, reset, shift_enable;
	logic signed [15:0] currConvMatrix[2:0][2:0];
    logic signed [15:0] inputPixel;
	
	// test with 8x8 input image size and 3x3 kernel 
	conv2Dwindow_reuse9 #(3,16,8) dut(.*);
	
	// Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end

	integer i;
	initial begin
		reset <= 1; @(posedge clock);
		reset <= 0; 
		shift_enable <= 0;

		// nothing should happen to matrix
		$display("%p", currConvMatrix);
		
		inputPixel = 16'd1;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		inputPixel = 16'd2;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		inputPixel = 16'd3; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		@(posedge clock);

		////////////////////////////////////////////////////////////
		$display("shift enable on");

		reset <= 1; 
		shift_enable <= 1;
		inputPixel = 16'd1;
		@(posedge clock);
		$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);

		reset <= 0; 
		
		// matrix should shift

		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		inputPixel = 16'd2;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		inputPixel = 16'd3; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shift_enable: %0d, input pixel: %0d, matrix: %p", reset, shift_enable, inputPixel, currConvMatrix);
		end

		@(posedge clock);

		$stop; // End the simulation.
	end
endmodule 

