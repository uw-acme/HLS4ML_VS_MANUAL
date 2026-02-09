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

    assign inputMatrix = test_data::inputMatrix;
    assign biases = test_data::convBiases;
    assign weights = test_data::convWeights;

    // true output generation
    ground_truths #(inputWidth, filtDimension, bitWidth, biasWidth, NFRAC) true_outputs (.*);


	// set up simulated clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end

    // check that the output is correct at the time it shows up
    integer i, idx;
    always_ff @(posedge clk) begin
        if (dut.newValidOutput) begin
            for (i=0; i<biasWidth; i++) begin
                idx = TOTAL_PIXELS*i+ dut.validOutputIdx;
                assert(dut.newOutputValues[i] == true_outputs.outputMatrixGT[idx])
                    $display("PASS      dut: %0d, expected: %0d", dut.newOutputValues[i], true_outputs.outputMatrixGT[idx]);
                else 
                    $error("FAIL      dut: %0d, expected: %0d", dut.newOutputValues[i], true_outputs.outputMatrixGT[idx]);
            end
        end 
    end

    // NOW: check that the outputs are produced at the correct timing
    logic [$clog2(TOTAL_PIXELS+1):0] counter;
    always_ff @(posedge clk) begin
        if (reset) begin
            counter <= 0;
        end
        else begin
            counter <= counter + 1;
            // make sure the first valid output pixel is produced at the correct time
            if(((counter <= LOAD_TIME + COMPUTATION_TIME) && dut.newValidOutput))
                $error("output produced too early");
            if((counter == LOAD_TIME + COMPUTATION_TIME + 1) && !dut.newValidOutput)
                $error("initial output produced too late");
        end
    end
    // check valid output sequence with correct pauses for no-padding implementation
    logic [$clog2(inputWidth):0] validHighCount, validLowCount;
    logic validHigh, firstTime; 
    always_ff @(posedge clk) begin
        if (reset) begin
            firstTime <= 1'b1;
            validHighCount <= 0;
            validLowCount <= 0;
        end
        else begin
            if (!validHigh && dut.newValidOutput) begin // positive edge of dut.newValidOutput, low count still 0
                validHigh <= 1'b1;
                validHighCount <= 1;
                if (firstTime) begin
                    firstTime <= 1'b0;
                end 
                else begin
                    assert(validLowCount == filtDimension-1);
                end
            end
            else if (validHigh && dut.newValidOutput) begin // dut.newValidOutput already low
                    validHighCount <= validHighCount + 1;
            end
            else if (validHigh && !dut.newValidOutput) begin // negative edge of dut.newValidOutput
                validHigh <= 1'b0;
                validLowCount <= 1;
                assert(validHighCount == inputWidth-filtDimension+1);
            end
            else if (!validHigh && !dut.newValidOutput) begin // dut.newValidOutput already low
                validLowCount <= validLowCount + 1;
            end
        end
    end


    /////////////////NOT SUPPORTED BY MODELSIM////////////////////
    // // timing of valid output values to the output matrix resulting from no-padding implementation
    // // (skipping at the end of every row)
    // // high for inputWidth-filtDimension+1 cycles, low for filDimension-1 cycles
    // sequence validOutputSeq;
    //     dut.newValidOutput[*inputWidth-filtDimension+1] ##1 !dut.newValidOutput[*filtDimension-1];
    // endsequence

    // property noPaddingDelay;
    //     @(posedge clk)
    //     $rose(dut.newValidOutput) |=> validOutputSeq;
    // endproperty

    // assert property(noPaddingDelay) 
    //     $display("PASS: noPAddingDelay");
    // else 
    //     $error("FAIL: noPaddingDelay");

    // // check that valid outputs start after the correct delay
    // property initialDelay;
    //     @(posedge clk)
    //     $fell(reset) |-> ##(LOAD_TIME + COMPUTATION_TIME) dut.newValidOutput;
    // endproperty

    // assert property(initialDelay) 
    //     $display("PASS: initialDelay");
    // else 
    //     $error("FAIL: initialDelay");


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