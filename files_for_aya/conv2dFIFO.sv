// this module creates line buffers using SRL 16 to hold onto data as it is moved from one row onto the one above it.
// therefore it only taks as input the system clock and the current inputData, or the data being moved out of a given row
// and it outputs the outputData or what should be moved into the row above 
`timescale 1ns / 1ps
module conv2dFIFO 
  #(parameter filtDimension = 3,
	 parameter bitWidth = 8, 
	 parameter inputWidth = 8) 
	
	(input logic clock, 
	
	 input logic inputValid,
	 
	 input logic signed [bitWidth-1:0] inputData, 
	 
	 output logic signed [bitWidth-1:0] outputData
	);
		
	logic [inputWidth-filtDimension-1:0][bitWidth-1:0] sr_data;

	// each cycle shift all bits to the left by one and shift in the inputData
	always_ff @(posedge clock) begin
		if (inputValid) begin
			sr_data <= {sr_data[inputWidth-filtDimension-2:0], inputData};
		end
	end

	// output the rightmost bit (msb) which is getting shifted out of the sr_data the following cycle
	assign outputData = sr_data[inputWidth-filtDimension-1];

endmodule 