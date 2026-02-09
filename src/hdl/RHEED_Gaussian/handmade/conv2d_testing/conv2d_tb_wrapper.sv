// wrapper module for the conv2d testbench (stride 1, no padding)
`timescale 1ns / 1ps
module conv2d_tb_wrapper();
    parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, biasWidth = 2, NFRAC = 10;

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1);
	localparam LOAD_TIME = inputWidth*(filtDimension-1);
	localparam COMPUTATION_TIME = 3;

	logic clk, reset;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	logic signed [bitWidth-1:0]  outputMatrix [TOTAL_PIXELS*biasWidth-1:0];
	logic complete;
    // conv2dOutput_no_relu outputs specifically for testing
    logic newValidOutput;
	logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;
	logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];

	// dut
	conv2dOutput_no_relu #(filtDimension, bitWidth, inputWidth, biasWidth, NFRAC) dut (.*);

    // additional inputs for ground_truths
    logic signed [bitWidth-1:0] inputMatrix [0:inputWidth-1][0:inputWidth-1];
    logic signed [bitWidth-1:0] weights [0:filtDimension**2*biasWidth-1];
    logic signed [bitWidth-1:0] outputMatrixGT [TOTAL_PIXELS*biasWidth-1:0];

    assign inputMatrix = '{
    '{16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0},
    '{16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1, 16'd1},
    '{16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2, 16'd2},
    '{16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3, 16'd3},
    '{16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4, 16'd4},
    '{16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5, 16'd5},
    '{16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6, 16'd6},
    '{16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7, 16'd7}
    };
    assign biases = data16_10::convBiases;
    assign weights = data16_10::convWeights;

    // true output generation
    ground_truths #(inputWidth, filtDimension, bitWidth, biasWidth, NFRAC) true_outputs (.*);


	// set up simulated clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end

    integer i, idx;
    // check that the output is correct at the time it shows up
    always_ff @(posedge clk) begin
        if (dut.newValidOutput) begin
            for (i=0; i<biasWidth; i++) begin
                idx = TOTAL_PIXELS*i+ dut.validOutputIdx;
                assert(dut.outputMatrix[idx] == true_outputs.outputMatrixGT[idx])
                    $display("PASS      dut: %0d, expected: %0d", dut.outputMatrix[idx], true_outputs.outputMatrixGT[idx]);
                else 
                    $error("FAIL      dut: %0d, expected: %0d", dut.outputMatrix[idx], true_outputs.outputMatrixGT[idx]);
            end
        end 
    end
 

    // stimulus
    integer j, k;
    initial begin
        reset <= 1'b1;	@(posedge clk);
		reset <= 1'b0;

        // send a pixel to DUT every clock cycle
        for (j=0; j<inputWidth; j++) begin // row counter
            for (k=0; k<inputWidth; k++) begin // col counter
                inputPixel <= inputMatrix[j][k];
                @(posedge clk);
            end
        end

        @(posedge dut.complete);
        $stop;
    end


endmodule