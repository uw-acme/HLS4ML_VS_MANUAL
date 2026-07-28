// Simplified FIFO for use within max pooling 2x2 layer.
// The only use case is writing values until it's full, and then reading values
// until it's empty.
// Assumes that the FIFO will never be read while empty or written while full,
// and that there will never be a read and write at the same time.
module FIFO
 #(
	parameter inputWidth = 8,
	parameter bitWidth   = 16
  )
				
  (
	input logic clk,
	input logic reset,
	input logic read,
	input logic write,

  	input logic signed [bitWidth-1:0]  writeData,
 
	output logic signed [bitWidth-1:0] readData
  );
	
	// FIFO needs to hold inputWidth/2 pixels for 2x2 max pooling
	localparam CAPACITY = inputWidth/2;
	logic signed [bitWidth-1:0] data [CAPACITY-1:0];
	
	// Pointers to the next place to be written or read to. 
	logic [$clog2(CAPACITY-1):0] writeIndex;
	logic [$clog2(CAPACITY-1):0] readIndex;
	
	assign readData = data[readIndex];
	
	// Sequential logic which updates values depending if we're reading, writing, or neither.
	always_ff @(posedge clk) begin
		if (reset) begin
			writeIndex <= '0;
			readIndex  <= '0;
		end else begin
			if (read) begin
				//readData  <= data[readIndex];
				readIndex <= readIndex == CAPACITY-1 ? 0 : readIndex + 1;
			end
			if (write) begin
				data[writeIndex] <= writeData;
				writeIndex <= writeIndex == CAPACITY-1 ? 0 : writeIndex + 1;
			end
		end
	end
endmodule

// This testbench tests the scenario that it will be used for in the max pooling layer,
// which is writing values until it's full, and then reading values until it's empty. 
module FIFO_testbench();

	parameter inputWidth = 8;
	parameter bitWidth   = 16;
	localparam CAPACITY = inputWidth/2;
	
	logic clk, reset, read, write;
	logic signed [bitWidth-1:0]  writeData;
	logic signed [bitWidth-1:0] readData;
	
	FIFO #(inputWidth, bitWidth) dut (.*);
	
	parameter CLK_Period = 100;
	initial begin
		clk <= 1'b0;
		forever #(CLK_Period/2) clk <= ~clk;
	end
	
	initial begin
		reset = 1; @(posedge clk);
		reset = 0; read = 0; write = 0; @(posedge clk);
		
		// write until FIFO is full
		for (int i = 0; i < CAPACITY; i++) begin
			write = 1;
			writeData = 100*i;
			@(posedge clk);
			write = 0; @(posedge clk);
		end
		
		// read and make sure we're getting back the correct values
		for (int i = 0; i < CAPACITY; i++) begin
			read = 1;
			@(posedge clk);
			read = 0; @(posedge clk);
		end
		
		// write until FIFO is full
		for (int i = 0; i < CAPACITY; i++) begin
			write = 1;
			writeData = 200*i+1;
			@(posedge clk);
			write = 0; @(posedge clk);
		end
		
		// read and make sure we're getting back the correct values
		for (int i = 0; i < CAPACITY; i++) begin
			read = 1;
			@(posedge clk);
			read = 0; @(posedge clk);
		end
		$stop;
	end


endmodule
