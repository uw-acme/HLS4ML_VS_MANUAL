// Top level module for max pooling 2D layer. 
module MaxPool2D
 #(
	parameter inputWidth = 8,
	parameter bitWidth   = 16
  )
				
  (
	input logic clk,
	input logic reset,
	input logic inputReady,

  	input logic signed [bitWidth-1:0]  inputPixel,
 
	output logic signed [bitWidth-1:0] outputMatrix [((inputWidth/2)**2) - 1:0],
	output logic complete
  );
   
	localparam NUM_PIXELS = inputWidth**2;
	localparam ODD = inputWidth % 2 == 1;
	localparam TRIM = inputWidth - ODD;

	// 1 cycle AFTER inputReady is asserted for the first time, we'll start the process
	// note that this is probably not the final implementation of this feature. This assumes
	// that inputReady is asserted when the first inputPixel is ready, and that after that,
	// there will be a continuous stream of input pixels, which may not be the case.
	logic inputReady_reg;
	always_ff @(posedge clk) begin
		inputReady_reg <= inputReady;
	end
	
   // 2 pixel buffer which input pixels will pass through each cycle
   logic signed [bitWidth-1:0] pixelBuf [1:0];
   
   // Pixel shift register
   always_ff @(posedge clk) begin
		pixelBuf[0] <= inputPixel;
		pixelBuf[1] <= pixelBuf[0];
   end
	
	// counter which will increment every cycle to count how many pixels have been streamed in
	logic [$clog2(NUM_PIXELS):0] counter;
	always_ff @(posedge clk) begin
		if (reset) counter <= '0;
		else if (inputReady_reg) counter <= counter + 1;
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
		end else if (inputReady_reg) begin // if (inputReady) begin
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
	assign bufMax = pixelBuf[0] > pixelBuf[1] ? pixelBuf[0] : pixelBuf[1];
	
	// If we're at an even row and odd col, we're going to write to the FIFO. 
	// If we're at an odd row and even col, we're going to read from the FIFO.
	logic FIFO_write, FIFO_read;
	assign FIFO_write = evenRow & ~evenCol & ~skipPixel;
	assign FIFO_read = ~evenRow & evenCol & ~skipPixel;
	
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
	assign overallMax = maxOf3 > pixelBuf[0] ? maxOf3 : pixelBuf[0];
	
	// signals for testing
	logic newValidOutput;
	logic signed [bitWidth-1:0] newOutputVal;
	// the bitwidth here is not exact but doesn't really matter
	logic [inputWidth-1:0] validOutputIdx;
	
	// When we're on an odd row and even col, this means we're on the 3rd pixel of a given pool.
	// The output read from the FIFO will be the max pixel from the first two.
	// We need to take the pixel read from the FIFO and the pixel just streamed in, and compare the two.
	// Then, the next cycle, we'll take this max value, compare it with the next pixel streamed in,
	// and output the max to the output matrix. 
	always_ff @(posedge clk) begin
		if (FIFO_read) begin
			maxOf3 <= pixelBuf[0] > FIFO_output ? pixelBuf[0] : FIFO_output;
		end
		if (~evenRow & ~evenCol & ~skipPixel & ~complete) begin
			outputMatrix[((row-1)*TRIM/4) + (col-1)/2] <= overallMax;
			// assign values for testing
			newValidOutput <= 1'b1;
			newOutputVal <= overallMax;
			validOutputIdx <= ((row-1)*TRIM/4) + (col-1)/2;
		end else begin
			newValidOutput <= 1'b0;
		end
	end
endmodule
