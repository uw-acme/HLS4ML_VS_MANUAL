`timescale 1ns / 1ps
// Sum the convolution matrix each cycle and multiply by the corresponding weight matrix as well as
// add the corresponding bias. (Caroline's comment)

// Packard's comment: 
// This module takes as input a 'zeroedMatrix'. This is basically the current 3x3 (in this case)
// slice of the model that we're looking at. 
// It also takes in the bias array which are used in the calculation.
// Essentially what happens in this module is we're performing element-wise multiplication
// between the zeroed-matrix and the corresponding weights matrix (accessed via a file). 
// Then we're adding them all up, truncating the result, and outputting this final single value.
module conv2Dsum3D
  #(parameter filtDimension = 3,
  
	 parameter bitWidth = 16, 
	 
	 parameter NFRAC = 10, 
	 
	 parameter whichFilt=0,

	 parameter inputChannels = 1)
	 
	(input logic clock, 
	
	 input logic reset,
    
	 // this is the 'slice' of the input matrix that we're currently working with
	 // it's called zeroedMatrix because it potentially includes padding depending on where we're at
	 input logic signed [bitWidth-1:0] zeroedMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0], 
	 
	 // biases that will eventually be added to the result
	 input logic signed [bitWidth-1:0] bias, 
		 
	 // do we have a valid zeroedMatrix? if not, computations will still be done, but outputValid
	 // won't be asserted
	 input logic validMatrix,
	 
	 input logic advance,
	 
	 // the output for a particular valid zeroedMatrix is valid 4 cycles after it is inputted
	 // due to shiftAdd and adderTree latency
	 output logic outputValid,
	 
	 // output matrix that represents the truncated result WITH bias added
	 output logic signed [bitWidth-1:0] sum
	);

	// latency of shiftAdd + adderTree computations is 4 clock cycles for 1 filter
	// 6 clock cycles for 8 filters
	// remember that i will probably need to mess around 
	localparam COMPUTATION_TIME = (inputChannels == 1) ? 4 : 6;
	localparam NUM_MULTS = filtDimension**2 * inputChannels;

	// non-truncated matrix which holds the multiplied values
	// ex: productArr[0] holds the value of zeroedMatrix[0] * weightsCheck[row]
	logic signed [bitWidth*2-1:0] productArr [NUM_MULTS-1:0];

	// holds the truncated values from productArr
	logic signed [bitWidth-1:0] truncProductArr [NUM_MULTS-1:0];

	// truncated result of adding the elements in truncProductArr WITHOUT bias added yet
	logic signed [bitWidth-1:0] sumNoBias;


	genvar row;
	generate
		for(row=0; row< NUM_MULTS; row++) begin: eachMult
			// multiply the corresponding weight w/zeroed matrix value
			shift_add #(
				test_data8_1::convWeights[
					filtDimension**2 * inputChannels * whichFilt + row
				], 
				3, bitWidth, NFRAC, 5
			) 
				sa (.clk(clock),
					 .advance(advance),
					 .data_in(zeroedMatrix[
						 row/(filtDimension**2)
					 ][
						 (row%(filtDimension**2))/filtDimension
					 ][
						 row%filtDimension
					 ]), 
					 .data_out(productArr[row]));  

			assign truncProductArr[row] = productArr[row][NFRAC+bitWidth-1:NFRAC];
		end
	endgenerate 

	// then go through and sum up the zeroed matrix every clock cycle
	adderTree_1D #(NFRAC, bitWidth, NUM_MULTS) sumEachMatrix ( 
		.clk(clock),
		.reset(1'b0),
		.advance(advance),
		.input_data(truncProductArr), 
		.output_data(sumNoBias));

	// add bias to sum
	assign sum = sumNoBias + bias;

	// handle valid checks
	logic [COMPUTATION_TIME-2:0] validReg;

	// stream in new valid bit and shift others to the right, if there's no downstream pressure
	always_ff @(posedge clock) begin
		if (reset) begin
			validReg <= '0;
			outputValid <= 1'b0;
		end else if (advance) begin
			outputValid <= validReg[0];
			for (int i = 0; i < COMPUTATION_TIME-2; i++) begin
				validReg[i] <= validReg[i+1];
			end	
			validReg[COMPUTATION_TIME-2] <= validMatrix;
		end
	end
endmodule

`timescale 1ns / 1ps

module conv2D_top3D_tb;

  localparam filtDimension = 3;
  localparam bitWidth      = 17;
  localparam inputWidth    = 3;   // try 3 first, then 4
  localparam inputChannels = 2;
  localparam biasWidth     = 2;
  localparam NFRAC         = 10;

  localparam TOTAL_PIXELS = inputWidth * inputWidth;

  logic clk, reset;

  logic signed [bitWidth-1:0] inputPixels [0:inputChannels-1];
  logic signed [bitWidth-1:0] biases [0:biasWidth-1];

  logic inputValid, outputReady;
  logic inputReady, outputValid;

  logic signed [bitWidth-1:0] outputPixels [0:biasWidth-1];

  int nextPixel;
  int outputCount;

  conv2D_top3D #(
    .filtDimension(filtDimension),
    .bitWidth(bitWidth),
    .inputWidth(inputWidth),
    .inputChannels(inputChannels),
    .biasWidth(biasWidth),
    .NFRAC(NFRAC)
  ) dut (
    .clk(clk),
    .reset(reset),
    .inputPixels(inputPixels),
    .biases(biases),
    .inputValid(inputValid),
    .outputReady(outputReady),
    .inputReady(inputReady),
    .outputValid(outputValid),
    .outputPixels(outputPixels)
  );

  initial clk = 0;
  always #5 clk = ~clk;
	
	always @(posedge clk) begin
  if (inputValid && inputReady) begin
    $display("ACCEPT time=%0t in0=%0d in1=%0d", 
             $time, inputPixels[0], inputPixels[1]);
  end
end
  // upstream source model: send one spatial pixel per handshake
  always_ff @(posedge clk) begin
    if (reset) begin
      nextPixel <= 0;
      inputValid <= 0;

      for (int ch = 0; ch < inputChannels; ch++) begin
        inputPixels[ch] <= '0;
      end

    end else begin
      if (nextPixel < TOTAL_PIXELS) begin
        inputValid <= 1;

        if (inputReady) begin
          inputPixels[0] <= nextPixel;
          inputPixels[1] <= nextPixel + 100;
          nextPixel <= nextPixel + 1;
        end

      end else begin
        inputValid <= 0;
        inputPixels[0] <= TOTAL_PIXELS - 1;
        inputPixels[1] <= TOTAL_PIXELS - 1 + 100;
      end
    end
  end

  initial begin
    reset = 1;
    outputReady = 1;
    outputCount = 0;

    for (int i = 0; i < biasWidth; i++) begin
      biases[i] = i;
    end

    repeat (4) @(posedge clk);
    reset = 0;

    while (outputCount < TOTAL_PIXELS) begin
      @(negedge clk);

      outputReady = 1;

      if (outputValid && outputReady) begin
        $display(
          "OUTPUT %0d: out0=%0d out1=%0d  nextPixel=%0d pixelCount=%0d flush=%0b winV=%0b sumV=%0b",
          outputCount,
          outputPixels[0],
          outputPixels[1],
          nextPixel,
          dut.pixelCount,
          dut.flushing,
          dut.windowValid,
          dut.sumValid
        );

        outputCount++;
      end

      $display(
        "DEBUG t=%0t nextPixel=%0d inV=%0b inR=%0b outV=%0b outR=%0b in0=%0d in1=%0d out0=%0d out1=%0d pixelCount=%0d flush=%0b",
        $time,
        nextPixel,
        inputValid,
        inputReady,
        outputValid,
        outputReady,
        inputPixels[0],
        inputPixels[1],
        outputPixels[0],
        outputPixels[1],
        dut.pixelCount,
        dut.flushing
      );
    end

    outputReady = 1;

    repeat (5) @(posedge clk);

    $display("");
    $display("DONE");
    $display("inputWidth    = %0d", inputWidth);
    $display("inputChannels = %0d", inputChannels);
    $display("biasWidth     = %0d", biasWidth);
    $display("nextPixel     = %0d / %0d", nextPixel, TOTAL_PIXELS);
    $display("outputCount   = %0d / %0d", outputCount, TOTAL_PIXELS);

    $stop;
  end

endmodule