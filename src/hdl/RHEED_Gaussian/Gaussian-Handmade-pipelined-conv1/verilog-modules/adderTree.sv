`timescale 1ns / 1ps
// Helper module
// 
// This module implements a submodule called adderTree_1D to
// sum the columns of a 2D input array. This module transposes
// the input data before iterating through each column to sum.
//
// Inputs:
// - clk
// - reset
// - input_data
//
// Outputs:
// - output_data: an array of size OUTPUT_SIZE
`timescale 1ns / 1ps

module adderTree #(parameter WIDTH       = 17,
                             INPUT_SIZE  = 10,
                             OUTPUT_SIZE = 32,
							 int PIPELINING  = 1
                             ) (
    input logic                         clk,
    input logic                         reset,
	input logic 						ce,
    input logic signed  [WIDTH-1 : 0]   input_data  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1],
    output logic signed [WIDTH-1 : 0]   output_data [0:OUTPUT_SIZE-1]
);
	
	logic signed [WIDTH-1 : 0] temp_output_data     [0:OUTPUT_SIZE-1];
	logic signed [WIDTH-1 : 0] input_data_transpose [0:OUTPUT_SIZE-1][0:INPUT_SIZE-1];
	
	// Define the transpose of input_data in order to sum the columns later
	// (makes for simpler syntax)
	always_comb begin
	   for (int j = 0; j < INPUT_SIZE; j++) begin
	       for (int k = 0; k < OUTPUT_SIZE; k++) begin
	           input_data_transpose[k][j] = input_data[j][k];
	       end
	   end
	end
	
	
	// Sum the columns of the input data matrix via adder trees
	genvar i;
	generate
	   for (i = 0; i < OUTPUT_SIZE; i++) begin : col_trees
	       // adder tree sums 4 terms at a time
	       adderTree_1D_p4 #(.WIDTH        ( WIDTH         ),
                             .INPUT_SIZE   ( INPUT_SIZE    ),
							 .PIPELINING   ( PIPELINING  )
                             ) column_tree (
	           .clk,
	           .reset,
			   .ce,
	           .input_data  ( input_data_transpose[i]   ),
	           .output_data ( temp_output_data[i]       )
	       );
	   end
	endgenerate
	
//	always_ff @(posedge clk) begin
//	   output_data <= temp_output_data;
//	end
    
    // No need to add a pipeline stage since it hits a register
    // at the end of the adder tree
    assign output_data = temp_output_data;
    
endmodule
