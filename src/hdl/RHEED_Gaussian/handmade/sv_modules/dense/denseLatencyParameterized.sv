`timescale 1ns / 1ps
// dense latency layer

module denseLatencyParameterized #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15)
( clk, biases, inputData, outputData );
    input logic clk;
    input logic signed [WIDTH-1:0]  biases      [0:OUTPUT_SIZE-1];
    input logic signed [WIDTH-1:0]  inputData   [INPUT_SIZE-1:0];
    output logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0];
    
   
	genvar i;
	generate
	   for(i = 0; i<OUTPUT_SIZE; i++) begin: denseSums
	       sumOneColumnParameterized #(WIDTH, NFRAC, INPUT_SIZE, OUTPUT_SIZE, i) sumColumns
	       (.clk(clk), .data(inputData), .bias(biases[i]), .out(outputData[i]));
	   end
    endgenerate
endmodule


module denseLatencyParameterized_tb();
	parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15;
	logic clk;
	logic signed [WIDTH-1:0]  biases      [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]  inputData   [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0]  outputData  [OUTPUT_SIZE-1:0];

	// simulation clock
	parameter PERIOD = 10;
	initial begin
		clk <= 0;
		forever #(PERIOD/2) clk <= ~clk;
	end

	// dut
	denseLatencyParameterized #(.WIDTH(WIDTH), .NFRAC(NFRAC), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE))
    dut (clk, biases, inputData, outputData);

	initial begin
		inputData = dense_test_data::inputVector;
		biases = dense_test_data::biases;

		repeat(10) @(posedge clk);

		for (int i = 0; i < OUTPUT_SIZE; i++) begin
            $display("outputData[%0d] = %0d", i, outputData[i]);
        end

		$stop;
	end

endmodule
