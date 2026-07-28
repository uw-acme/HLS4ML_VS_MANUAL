`timescale 1ns / 1ps
// dense latency layer with inputValid/outputValid indicators

module denseLatencyWithControl_dense1 #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15, BITWIDTH = 16)
( clk, inputValid, biases, inputData, outputData, outputValid );
    input logic clk;
	input logic inputValid;
    input logic signed [WIDTH-1:0]  biases      [0:OUTPUT_SIZE-1];
    input logic signed [WIDTH-1:0]  inputData   [INPUT_SIZE-1:0];
    output logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0];
	output logic outputValid;
	// input logic inputReady, outputReady	// don't need currently since there shouldn't be any backpressure from this point

	// parameters taken from adderTree_1D -----
	localparam integer POW_OF_2   = $clog2(INPUT_SIZE);
    localparam integer POW_OF_4   = (POW_OF_2+1)/2;
	// ----------------------------------------
	localparam integer AT_LATENCY = POW_OF_4 + 1;
	localparam integer SA_LATENCY = (BITWIDTH < 18) ? 1 : 3;
	localparam integer LATENCY = SA_LATENCY + AT_LATENCY;
	

	// delay inputValid by LATENCY cycles to find outputValid
	// don't use counter since we can have multiple computations in the pipeline; use a shift register instead
	logic [LATENCY-1:0] buffer;
	always_ff @(posedge clk) begin
		buffer <= {buffer[LATENCY-2:0], inputValid};
	end
	assign outputValid = buffer[LATENCY-1];
    
   
	genvar i;
	generate
	   for(i = 0; i<OUTPUT_SIZE; i++) begin: denseSums
	       sumOneColumnParameterized_dense1 #(WIDTH, NFRAC, INPUT_SIZE, OUTPUT_SIZE, i) sumColumns
	       (.clk(clk), .data(inputData), .bias(biases[i]), .out(outputData[i]));
	   end
    endgenerate
endmodule