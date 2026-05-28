// wrapper module for the conv2d testbench (stride 1, no padding)
`timescale 1ns / 1ps
module conv2d_reuse9_tb_wrapper();
    parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, biasWidth = 2, NFRAC = 10;

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)**2;

	logic clk, reset;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0]  biases [0:biasWidth-1];
    // upstream handshake
	logic inputValid;
    logic inputReady;
    // downstream handshake
    logic signed [bitWidth-1:0] outputPixel [biasWidth-1:0]; 
	logic outputValid; 
    logic outputReady;

    // additional I/Os for golden model
    logic signed [bitWidth-1:0] inputMatrix [0:inputWidth**2-1];
    logic signed [bitWidth-1:0] outputMatrix_sc [TOTAL_PIXELS*biasWidth-1:0];

    assign inputMatrix = conv2d_reuse9_test_data::inputMatrix;
    assign biases = conv2d_reuse9_test_data::convBiases;


	// dut
	conv2dOutput_v4 #(filtDimension, bitWidth, inputWidth, biasWidth, NFRAC) dut (.*);

    // true output generation
    conv2d_reuse9_single_cycle #(inputWidth, filtDimension, bitWidth, biasWidth, NFRAC) true_outputs (.*);


	// simulation clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end

    logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;
    logic outputValidPrev;
    logic outputValidRisingEdge;


    // random control signals (inputValid)
    always_ff @(posedge clk) begin
        if (reset) begin
            inputValid <= 0;
            outputReady <= 1;
        end
        else begin
            inputValid <= $urandom_range(0, 1);
            outputReady <= $urandom_range(0, 1);
            // inputValid <= 1;
            // outputReady <= 1;
        end
    end

    // stimulus: stream in pixels
    integer j;
    initial begin
        reset <= 1'b1;	repeat(5) @(posedge clk);
		reset <= 1'b0;

        // send a pixel from inputMatrix to DUT if inputReady AND inputValid
        j = 0;
        inputPixel <= inputMatrix[j]; // first pixel

        while (j<inputWidth**2) begin
			@(posedge clk); 
			if (inputReady && inputValid) begin // pixel  accepted
                j++;
                if (j < inputWidth**2) begin
				    inputPixel <= inputMatrix[j];  // next pixel
                end
			end
        end

        repeat(500) @(posedge clk);
        $display("End of simulation");
        $stop;
    end

    // check that the dut output is correct at outputValid signal
    
    always_ff @(posedge clk) begin
        outputValidPrev <= outputValid;
    end
    assign outputValidRisingEdge = !outputValidPrev && outputValid;

    logic checked; // indicates whether pixel was checked
    integer i, idx;
    always_ff @(posedge clk) begin
        if (reset) begin
            validOutputIdx <= 0;
            checked <= 0;
        end
        // else if (outputValidRisingEdge) begin
        else begin
            if (outputValid && outputReady && !checked) begin
                $display("time: %0t, validOutputIdx: %0d, outputValid: %b,  outputReady: %b, checked: %b, ps: %s, counter: %0d", 
                         $time, validOutputIdx, outputValid, outputReady, checked, dut.ps, dut.counter);
                for (i=0; i<biasWidth; i++) begin
                    idx = TOTAL_PIXELS*i+ validOutputIdx;
                    assert(outputPixel[i] == outputMatrix_sc[idx])
                        $display("PASS      dut: %0d, expected: %0d", outputPixel[i], outputMatrix_sc[idx]);
                    else begin
                        $error("FAIL      dut: %0d, expected: %0d", outputPixel[i], outputMatrix_sc[idx]);
                        // display_sum9_signals(i);
                    end
                end
                validOutputIdx <= validOutputIdx + 1;
                checked <= 1;
            end
            if (!outputValid) begin // dut moved on to next window
                checked <= 0;
            end
        end
    end

endmodule
