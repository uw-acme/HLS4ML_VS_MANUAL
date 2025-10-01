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
                             OUTPUT_SIZE = 32
                             ) (
    input logic                         clk,
    input logic                         reset,
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
                             .INPUT_SIZE   ( INPUT_SIZE    )
                             ) column_tree (
	           .clk,
	           .reset,
	           .input_data  ( input_data_transpose[i]   ),
	           .output_data ( temp_output_data[i]       )
	       );
	   end
	endgenerate
	
//	always_ff @(posedge clk) begin
//	   output_data <= temp_output_data;
//	end
    
    // No need to add a pipeline stage since it hits a register
    // at the end of the addder tree
    assign output_data = temp_output_data;
    
endmodule



// Helper module
// =====================
// ***NO LONGER USED***
// =====================
// Replaced with adder tree that sums 4 values per pipline stage
// 
// This module is an adder tree. The module takes in an input 1D array,
// loads the data into a tree and fills any excess nodes with zeros,
// and sum the data in a pipelined manner.
//
// Inputs:
// - clk
// - reset
// - input_data
//
// Outputs:
// - output_data: a single number of size WIDTH
module adderTree_1D #(parameter N = 32, WIDTH = 17, INPUT_SIZE = 32) (
    input logic                     clk,
    input logic                     reset,
    input logic signed  [WIDTH-1:0] input_data [INPUT_SIZE],
    output logic signed [WIDTH-1:0] output_data
);
	localparam POW_OF_2   = $clog2(INPUT_SIZE);
    localparam BASE_LEVEL = 2**POW_OF_2;
	localparam NUM_NODES  = (2*BASE_LEVEL);
    
    logic [WIDTH-1:0] tree [NUM_NODES];
    
    genvar i, j;
    // Load tree
	generate
		for (i = BASE_LEVEL; i < 2*BASE_LEVEL; i++) begin // load in input data to base layer
            if (i < BASE_LEVEL + INPUT_SIZE)
                assign tree[i] = input_data[i-BASE_LEVEL];
            else // fill excess nodes in base layer with zeros
                assign tree[i] = '0;
		end
	endgenerate
	
	// Adder tree
    generate
	   for (i = 0; i < POW_OF_2; i++) begin
	       for (j=2**i; j < 2*(2**i); j++) begin
	           always_ff @(posedge clk) begin
	               tree[j] <= tree[2*j]
	                        + tree[(2*j) + 1];
	           end
	       end
	   end
	endgenerate
	
	// Return the sum from the adder tree root
	always_ff @(posedge clk) begin
        output_data <= tree[1];
    end
endmodule