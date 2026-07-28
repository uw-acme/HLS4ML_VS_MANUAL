// Top level module for max pooling 2D layer. 
module MaxPool2D
 #(
	parameter inputWidth = 8,
	parameter bitWidth   = 16
  )
				
  (
	input logic clk,
	input logic reset,
	
  	input logic signed [bitWidth-1:0]  inputPixel,
	input logic inputValid, outputReady,
 
	output logic signed [bitWidth-1:0] outputPixel,
	output logic inputReady, outputValid 
	
	// output logic complete
  );
	logic complete;	// EDITED
   
	localparam NUM_PIXELS = inputWidth**2;
	localparam ODD = inputWidth % 2 == 1;
	localparam TRIM = inputWidth - ODD;
	
	// when continueCalculations is asserted, it means that this layer is ready to accept 
	// a pixel AND the previous layer is ready to give a pixel. when it's not asserted,
	// the entire layer will essentially be paused.
	assign inputReady = outputReady | ~outputValid;
	logic continueCalculations;
	assign continueCalculations = inputReady & inputValid;
	
   // pixel buffer which input pixels will pass through each cycle
   logic signed [bitWidth-1:0] pixelBuf;
   
   // Pixel shift register
   always_ff @(posedge clk) begin
		if (continueCalculations) begin
			pixelBuf <= inputPixel;
		end
   end
	
	// values which tell us the current row and column of the pixel that was just streamed in
	logic [$clog2(inputWidth):0] row, col;
	
	// is the current row/col at an even index (0, 2, 4, etc)? (high signal means yes)
	logic evenRow, evenCol;
	
	// Updating row and col values.
	always_ff @(posedge clk) begin
		if (reset) begin
			row <= '0;
			col <= '0;
			evenRow <= 1'b1;
			evenCol <= 1'b1;
		end else if (continueCalculations) begin 
			if (col == inputWidth - 1) begin
				col <= '0;
				row <= row + 1;
				evenRow <= ~evenRow;
				evenCol <= 1'b1;
			end else begin
				col <= col + 1;
				evenCol <= ~evenCol;
			end
		end	
	end
	
	assign complete = row > (TRIM - 1);
	
	// logic to handle skipping pixels for odd input sizes
	logic skipPixel;
	assign skipPixel = ODD && (row == inputWidth-1 || col == inputWidth-1);
	
	// This signal holds the largest of the 2 values from the pixel buffer
	logic signed [bitWidth-1:0] bufMax;
	assign bufMax = inputPixel > pixelBuf ? inputPixel : pixelBuf;
	
	// If we're at an even row and odd col, we're going to write to the FIFO. 
	// If we're at an odd row and even col, we're going to read from the FIFO.
	logic FIFO_write, FIFO_read;
	assign FIFO_write = continueCalculations & evenRow & ~evenCol & ~skipPixel;
	assign FIFO_read =  continueCalculations & ~evenRow & evenCol & ~skipPixel;
	
	// Holds the data read from the FIFO.
	logic signed [bitWidth-1:0] FIFO_output;
	
	FIFO #(inputWidth, bitWidth) fifo
		  (.clk(clk),
			.reset(reset),
			.read(FIFO_read),
			.write(FIFO_write),
			.writeData(bufMax),
			.readData(FIFO_output));

	logic signed [bitWidth-1:0] maxOf3, overallMax;
	assign overallMax = maxOf3 > inputPixel ? maxOf3 : inputPixel;
	
	// signals for testing
	logic signed [bitWidth-1:0] newOutputVal;
	// the bitwidth here is not exact but doesn't really matter
	logic [inputWidth-1:0] validOutputIdx;
	
	// When we're on an odd row and even col, this means we're on the 3rd pixel of a given pool.
	// The output read from the FIFO will be the max pixel from the first two.
	// We need to take the pixel read from the FIFO and the pixel just streamed in, and compare the two.
	// Then, the next cycle, we'll take this max value, compare it with the next pixel streamed in,
	// and output the max to the output matrix. 
	always_ff @(posedge clk) begin
		if (reset) begin
			outputValid <= 1'b0;
		end else begin
			// make sure to clear outputValid once the pixel has been accepted
			if (outputValid && outputReady) begin
				outputValid <= 1'b0;
			end
			// only do all this stuff if we're actually doing calculations
			if (continueCalculations) begin
				if (FIFO_read) begin
					maxOf3 <= inputPixel > FIFO_output ? inputPixel : FIFO_output;
				end
				
				if (~evenRow & ~evenCol & ~skipPixel & ~complete) begin
					outputPixel <= overallMax;
					outputValid <= 1'b1;
					newOutputVal <= overallMax;
					validOutputIdx <= ((row-1)*TRIM/4) + (col-1)/2;
				end
			end
		end
	end

endmodule
