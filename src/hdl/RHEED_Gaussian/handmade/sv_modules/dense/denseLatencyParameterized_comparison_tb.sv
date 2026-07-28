`timescale 1ns / 1ps
module denseLatencyParameterized_comparison_tb();
    parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15;
    // dut signals
	logic clk;
	logic signed [WIDTH-1:0]  biases      [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]  inputData   [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0];
    // single cycle module signals
    logic signed [WIDTH-1:0] outputDataSingleCycle  [OUTPUT_SIZE-1:0];

    

	// simulation clock
	parameter PERIOD = 10;
	initial begin
		clk <= 0;
		forever #(PERIOD/2) clk <= ~clk;
	end

	// dut
	denseLatencyParameterized #(.WIDTH(WIDTH), .NFRAC(NFRAC), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE))
    dut (clk, biases, inputData, outputData);

    // single cycle module
    dense_single_cycle #(.WIDTH(WIDTH), .NFRAC(NFRAC), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE))
    singleCycleModule (biases, inputData, outputDataSingleCycle);

	initial begin
		inputData = dense_test_data::inputVector;
		biases = dense_test_data::biases;

		repeat(30) @(posedge clk);

		for (int i = 0; i < OUTPUT_SIZE; i++) begin
            $display("outputData[%0d] = %0d", i, outputData[i]);
            if (outputData[i] !== outputDataSingleCycle[i]) begin
                $display("FAIL: at output[%0d]: dut=%0d singleCycle=%0d", i, outputData[i], outputDataSingleCycle[i]);
            end else begin
                $display("PASS: output[%0d]", i);
            end
        end

		$stop;
	end

endmodule
