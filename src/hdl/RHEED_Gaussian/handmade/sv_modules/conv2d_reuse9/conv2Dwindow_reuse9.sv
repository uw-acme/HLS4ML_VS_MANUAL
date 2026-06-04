/*
	This module creates the convolution window for a no-padding implementation
*/
// At every clock cycle when the shift-enable signal is high, it takes in an input pixel and creates a matrix
// holding the values that will be used for the convolution.
// At each shift, all preexisting pixels get shifted left. The values in the left edge that are
// removed from that matrix go into a buffer for all but the top row as they will be used again.
// The positionValid signal indicates whether the current position of the window is used(valid) for a
// no-padding implementation.

`timescale 1ns / 1ps
module conv2Dwindow_reuse9
#(parameter filtDimension = 3, parameter bitWidth = 16, parameter inputWidth = 8)
(clock, reset, inputPixel, shiftEnable, currConvMatrix, positionValid, nextPositionValid);
	input logic clock, reset;
	input logic signed [bitWidth-1:0] inputPixel;
	input logic shiftEnable; // new for reuse 9

	output logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];
	output logic positionValid; // indicates whether current window produces a valid output
	output logic nextPositionValid;

	// position tracking
	localparam PIXELS_TO_FILL = inputWidth*(filtDimension-1) + filtDimension; // pixels needed to fill up the conv window for the first time
	logic [$clog2(inputWidth)-1:0] currRow, currCol, nextRow, nextCol; // location of the top left pixel of the window
	logic [$clog2(PIXELS_TO_FILL):0] pixelCount;

	logic signed [bitWidth-1:0] outputFifo [filtDimension-2:0]; // collection of buffers (filtDimension-1 many buffers)

	integer row, col;
	// shift values
    always_ff @(posedge clock) begin
		// iterate through the current window
        for(row=0; row<filtDimension; row++) begin
            for(col=0; col<filtDimension; col++) begin
				// shift only if shiftEnable is on (should be on during loading period and then once every 9 cycles after that)
				if(shiftEnable) begin 
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
	
	// position tracker
	// determine nextCol, nextRow
	always_comb begin
		nextCol = currCol;
		nextRow = currRow;
		if ((currCol == inputWidth - filtDimension) && (currRow == inputWidth - filtDimension)) begin // last location
			nextCol = 0;
			nextRow = 0;
		end
		else if (currCol == inputWidth - 1) begin // wrap around
			nextCol = 0;
			nextRow = currRow + 1;
		end else begin
			nextCol = currCol + 1;
		end
	end

	// update 
	always_ff @(posedge clock) begin
		if (reset) begin
			currRow <= 0;
			currCol <= 0;
			pixelCount <= 0;
		end
		else if (shiftEnable) begin
			if (pixelCount < PIXELS_TO_FILL) begin 
				// only increment until pixelCount == PIXELS_TO_FILL
				pixelCount <= pixelCount + 1;
			end
			else begin
				currCol <= nextCol;
				currRow <= nextRow;
				if ((currCol == inputWidth - filtDimension) && (currRow == inputWidth - filtDimension)) begin // last location
					pixelCount <= 0;
				end
			end
		end
	end
	
	assign positionValid = (pixelCount >= PIXELS_TO_FILL) && // invalid output while filling
						   (currCol < (inputWidth - filtDimension + 1)) && 
						   (currRow < (inputWidth - filtDimension + 1));

	assign nextPositionValid = (pixelCount >= PIXELS_TO_FILL - 1) && // invalid output while filling
						   	   (nextCol < (inputWidth - filtDimension + 1)) && 
						       (nextRow < (inputWidth - filtDimension + 1));
	
	// create buffers to hold onto values as they are moved out of one row and into the row above their previous one
	// inputData into FIFO = value stored in leftmost col of each row in current matrix (except the top row)
	genvar i;	// i represents the row
	generate 
	   for(i = 0; i<filtDimension-1; i++) begin: buffers
	       conv2dFIFO_enabled #(filtDimension, bitWidth, inputWidth) bufferEachRow
	       (.inputData(currConvMatrix[i+1][0]), .clock(clock), .en(shiftEnable), .outputData(outputFifo[i]));
	   end
	endgenerate
	
endmodule


module conv2Dwindow_reuse9_tb ();
	logic clock, reset, shiftEnable;
	logic signed [15:0] currConvMatrix[2:0][2:0];
    logic signed [15:0] inputPixel;
	logic positionValid, nextPositionValid;
	
	// test with 8x8 input image size and 3x3 kernel 
	conv2Dwindow_reuse9 #(3,16,8) dut(.*);
	
	// Simulation clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end

	integer i;
	initial begin
		reset <= 1; @(posedge clock);
		reset <= 0; 
		shiftEnable <= 0;

		// nothing should happen to matrix
		$display("%p", currConvMatrix);
		
		inputPixel = 16'd1;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd2;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd3; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		@(posedge clock);

		////////////////////////////////////////////////////////////
		$display("shift enable on");

		reset <= 1; repeat(5) @(posedge clock);
		shiftEnable <= 1;
		inputPixel = 16'd0;
		@(posedge clock);
		$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);

		reset <= 0;
		
		// matrix should shift
		inputPixel = 16'd1;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, pixelCount: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, 
			positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, dut.pixelCount, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd2;
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, pixelCount: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, 
			positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, dut.pixelCount, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd3; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, pixelCount: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, 
			positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, dut.pixelCount, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd4; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, pixelCount: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, 
			positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, dut.pixelCount, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end

		inputPixel = 16'd5; 
		for (i=0; i<8; i++) begin
			@(posedge clock);
			$display("reset: %0d, shiftEnable: %0d, input pixel: %0d, pixelCount: %0d, matrix: %p, currRow: %d, currCol: %d, nextRow: %d, nextCol: %d, 
			positionValid: %b, nextPositionValid: %b", 
			reset, shiftEnable, inputPixel, dut.pixelCount, currConvMatrix, dut.currRow, dut.currCol, dut.nextRow, dut.nextCol,positionValid, nextPositionValid);
		end
		@(posedge clock);


		$stop; // End the simulation.
	end
endmodule 