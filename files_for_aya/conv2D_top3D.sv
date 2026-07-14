`timescale 1ns / 1ps
// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal calculationsComplete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2D_top3D
  #(
    parameter filtDimension = 3,
    parameter bitWidth      = 17,
    parameter inputWidth    = 8,
    parameter inputChannels = 1,
    parameter biasWidth     = 2,
    parameter NFRAC         = 10,
	 parameter APPLY_RELU    = 1,
	 parameter logic signed [bitWidth-1:0] CONV_WEIGHTS
		[0:(filtDimension*filtDimension*inputChannels*biasWidth)-1] = '{default:'0}
  )
  (
    input logic clk,
    input logic reset,

    // current pixel that is being processed
    input logic signed [bitWidth-1:0] inputPixels [0:inputChannels-1],
    // corresponding biases for each filter
    input logic signed [bitWidth-1:0] biases [0:biasWidth-1],
	 
	 input logic inputValid, outputReady,
	 
	 output logic inputReady, outputValid,

    // changed the dimension from inputWidth*inputWidth*biasWidth / 4 since this is stride 2
    // biasWidth = number of filters basically
    output logic signed [bitWidth-1:0] outputPixels [0:biasWidth-1]
  );

  localparam TOTAL_PIXELS = inputWidth**2;
  // this represents the number of pixels that need to be streamed in 
  // before starting sumNine calculations
  localparam LOAD_PIXELS = (filtDimension-2)*(inputWidth) + filtDimension - 1;
  // extra internal cycles needed to produce the final padded windows
  localparam FLUSH_PIXELS = LOAD_PIXELS;
  // time to compute dot product in sumNine once conv window has been generated
  localparam COMPUTATION_TIME = 4;

  // will count until computations have fully finished
  logic [$clog2(TOTAL_PIXELS+LOAD_PIXELS+COMPUTATION_TIME)-1:0] pixelCount;

  // current slice of the image we're looking at
  logic signed [bitWidth-1:0] paddedMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];
  // most recent 'dot products' computed with the current kernel (number of filters)
  logic signed [bitWidth-1:0] sum [biasWidth-1:0];
	
  logic windowValid;

  // internal flushing state for final padded windows
  logic flushing;
  logic [$clog2(FLUSH_PIXELS+1):0] flushCount;
  logic downstreamReady;
  logic advanceInternal;
  logic signed [bitWidth-1:0] inputPixelsInternal [0:inputChannels-1];
  
  	// when continueCalculations is asserted, it means that this layer is ready to accept 
	// a pixel AND the previous layer is ready to give a pixel. when it's not asserted,
	// the entire layer will essentially be paused.
	assign downstreamReady = outputReady | ~outputValid;
	assign inputReady = downstreamReady & ~flushing;

	logic continueCalculations;
	assign continueCalculations = inputReady & inputValid;

  // advanceInternal is like continueCalculations, except it also advances during
  // the internal flush cycles needed for the final padded windows.
  assign advanceInternal = downstreamReady & (inputValid | flushing);

  // during flushing, feed zeroes internally for padding
  always_comb begin
    for (int ch = 0; ch < inputChannels; ch++) begin
      inputPixelsInternal[ch] = flushing ? '0 : inputPixels[ch];
    end
  end

  // FOR TESTING
  // signal that indicates when the output matrix is updated with a new output pixel.
  logic newValidOutput;

  // FOR TESTING
  // the index within the 1st output channel of the output matrix that just updated with a new output pixel
  // when there are multiple output channels, add TOTAL_PIXELS to this index for however many output channels there are
  // to get all the indices of the new pixels in the clock cycle
  logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;

  // FOR TESTING
  // the list values added to the output matrix during a given clock cycle
  logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];

  // input the current matrix and output the matrix with zeroes
  // for when in the padded region
  conv3D_windowGenerate #(filtDimension, bitWidth, inputWidth, inputChannels) zeroMatrix
    (.clock(clk), .reset, .inputPixels(inputPixelsInternal), .inputValid(advanceInternal), .zeroedMatrix(paddedMatrix));

  /** the following two lines would need to be adjusted based on how many filters are being used,
  since we are using 2 here there are only 2 different needed
   i am not sure how we would split the weights for if there were more than 2 filters        **/

  // this signal is asserted when the sumNine module is finished with the computations 
  logic sumValid;
  // creates 2 sumNine modules which do the 'dot product' with the current
  // paddedMatrix and corresponding weights
  genvar i;
  generate
    for (i = 0; i < biasWidth; i++) begin : eachSumNine
	   // something to keep in mind here is that the sum signal will actually be valid 4 cycles
		// after a padded matrix is sent in. 
		// the purpose of having the if statements here is so that we only have one of these modules
		// driving sumValid - they will all have the same timing
		if (i == 0) begin
			conv2Dsum3D #(filtDimension, bitWidth, NFRAC, i, inputChannels, biasWidth, CONV_WEIGHTS) sumBasedFilter (
				.clock(clk), 
				.reset(reset),
				.zeroedMatrix(paddedMatrix),
				.bias(biases[i]),
				.validMatrix(windowValid & advanceInternal),
				.advance(downstreamReady),
				.outputValid(sumValid),
				.sum(sum[i])
			);
		end else begin
			conv2Dsum3D #(filtDimension, bitWidth, NFRAC, i, inputChannels, biasWidth, CONV_WEIGHTS) sumBasedFilter (
				.clock(clk), 
				.reset(reset),
				.zeroedMatrix(paddedMatrix),
				.bias(biases[i]),
				.validMatrix(windowValid & advanceInternal),
				.advance(downstreamReady),
				.outputValid(),
				.sum(sum[i])
			);
		end
    end
  endgenerate

  // increment counter
  always_ff @(posedge clk) begin
    if (reset) begin
		pixelCount <= 0;
		windowValid <= 1'b0;
		outputValid <= 1'b0;
		flushing <= 1'b0;
		flushCount <= 0;
	 end
    else begin
      // start internal flushing right after the final real input pixel is accepted
      if (continueCalculations && pixelCount == TOTAL_PIXELS - 1) begin
        flushing <= 1'b1;
        flushCount <= 0;
      end

      // count flush cycles and stop once final padded windows have been launched
      if (flushing && downstreamReady) begin
        if (flushCount == FLUSH_PIXELS - 1) begin
          flushing <= 1'b0;
          flushCount <= 0;
        end else begin
          flushCount <= flushCount + 1'b1;
        end
      end

      if (advanceInternal) begin
        pixelCount <= pixelCount + 7'b1;
        validOutputIdx <= pixelCount-LOAD_PIXELS-COMPUTATION_TIME-1;
        newOutputValues <= sum;
      end
    end
  end
  
  // window valid logic 
  always_ff @(posedge clk) begin
	  if (pixelCount >= LOAD_PIXELS - 1 & advanceInternal) begin
		  windowValid <= 1'b1;
	  end
  end

  // assign sum values to output matrix
  always_ff @(posedge clk) begin
	 if (downstreamReady) begin
	 if (sumValid) begin
		outputValid <= 1'b1;
      for (int i = 0; i < biasWidth; i++) begin
			if (APPLY_RELU) begin
				outputPixels[i] <= sum[i] > 0 ? sum[i] : 0;
			end else begin
				outputPixels[i] <= sum[i];
			end
      end
    end else begin
		outputValid <= 1'b0;
	 end
	 end
  end
  
endmodule

`timescale 1ns / 1ps

module conv2D_top3D_tb;

  localparam filtDimension = 3;
  localparam bitWidth      = 16;
  localparam inputWidth    = 300;
  localparam inputChannels = 8;
  localparam biasWidth     = 1;
  localparam NFRAC         = 10;

  localparam TOTAL_PIXELS = inputWidth * inputWidth;
  localparam NUM_TRIALS   = 20;

  logic clk, reset;

  logic signed [bitWidth-1:0] inputPixels [0:inputChannels-1];
  logic signed [bitWidth-1:0] biases      [0:biasWidth-1];

  logic inputValid, outputReady;
  logic inputReady, outputValid;

  logic signed [bitWidth-1:0] outputPixels [0:biasWidth-1];

  logic signed [bitWidth-1:0] inputImage [0:inputChannels-1][0:TOTAL_PIXELS-1];
  logic signed [bitWidth-1:0] expected   [0:TOTAL_PIXELS-1][0:biasWidth-1];

  int nextPixel;
  int outputCount;
  int errors;
  int totalErrors;
  int launchCount;

  logic doneSending;

  conv2D_top3D #(
    .filtDimension(filtDimension),
    .bitWidth(bitWidth),
    .inputWidth(inputWidth),
    .inputChannels(inputChannels),
    .biasWidth(biasWidth),
    .NFRAC(NFRAC),
    .CONV_WEIGHTS(test_data8_1::convWeights)
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

  task set_input_pixel(input int pixel);
    for (int ch = 0; ch < inputChannels; ch++) begin
      inputPixels[ch] <= inputImage[ch][pixel];
    end
  endtask

  task generate_random_inputs;
    for (int pix = 0; pix < TOTAL_PIXELS; pix++) begin
      for (int ch = 0; ch < inputChannels; ch++) begin
        inputImage[ch][pix] = $urandom_range(0, 15);
      end
    end
  endtask

  function automatic int weight_index(
    input int filt,
    input int ch,
    input int kr,
    input int kc
  );
    weight_index =
        filt * (filtDimension * filtDimension * inputChannels)
      + ch   * (filtDimension * filtDimension)
      + kr   * filtDimension
      + kc;
  endfunction

  task compute_expected;
    longint signed accum;
    longint signed prod;
    logic signed [bitWidth-1:0] truncProd;
    logic signed [bitWidth-1:0] convSum;

    int rr;
    int cc;
    int pixIndex;
    int wIndex;

    for (int r = 0; r < inputWidth; r++) begin
      for (int c = 0; c < inputWidth; c++) begin
        pixIndex = r * inputWidth + c;

        for (int filt = 0; filt < biasWidth; filt++) begin
          accum = 0;

          for (int ch = 0; ch < inputChannels; ch++) begin
            for (int kr = 0; kr < filtDimension; kr++) begin
              for (int kc = 0; kc < filtDimension; kc++) begin
                rr = r + kr - (filtDimension / 2);
                cc = c + kc - (filtDimension / 2);

                if (rr >= 0 && rr < inputWidth && cc >= 0 && cc < inputWidth) begin
                  wIndex = weight_index(filt, ch, kr, kc);

                  prod =
                    $signed(inputImage[ch][rr * inputWidth + cc])
                    * $signed(test_data8_1::convWeights[wIndex]);

                  prod = prod >>> NFRAC;
                  truncProd = prod[bitWidth-1:0];

                  accum += truncProd;
                end
              end
            end
          end

          accum += $signed(test_data8_1::convBiases[filt]);
          convSum = accum[bitWidth-1:0];

          // ReLU
          if (convSum > 0) begin
            expected[pixIndex][filt] = convSum;
          end else begin
            expected[pixIndex][filt] = '0;
          end
        end
      end
    end
  endtask

  // input driver with random inputValid gaps
  always_ff @(posedge clk) begin
    if (reset) begin
      nextPixel   <= 0;
      doneSending <= 1'b0;
      inputValid  <= 1'b0;

      for (int ch = 0; ch < inputChannels; ch++) begin
        inputPixels[ch] <= '0;
      end

    end else begin
      if (doneSending) begin
        inputValid <= 1'b0;

      end else if (!inputValid) begin
        if ($urandom_range(0, 3) != 0) begin
          inputValid <= 1'b1;
          set_input_pixel(nextPixel);
        end else begin
          inputValid <= 1'b0;
        end

      end else if (inputValid && inputReady) begin
        if (nextPixel == TOTAL_PIXELS - 1) begin
          inputValid  <= 1'b0;
          doneSending <= 1'b1;
          nextPixel   <= TOTAL_PIXELS;
        end else begin
          nextPixel <= nextPixel + 1;

          if ($urandom_range(0, 3) != 0) begin
            inputValid <= 1'b1;
            set_input_pixel(nextPixel + 1);
          end else begin
            inputValid <= 1'b0;
          end
        end
      end

      // else: inputValid=1 and inputReady=0, so hold same inputPixels
    end
  end

  // random outputReady
  always_ff @(posedge clk) begin
    if (reset) begin
      outputReady <= 1'b1;
    end else begin
      outputReady <= ($urandom_range(0, 3) != 0);
    end
  end

  // optional launch counter/debug
  always @(posedge clk) begin
    if (reset) begin
      launchCount = 0;
    end else if (dut.windowValid && dut.advanceInternal) begin
      launchCount++;
    end
  end

  initial begin
    totalErrors = 0;

    for (int trial = 0; trial < NUM_TRIALS; trial++) begin
      reset = 1;
      outputCount = 0;
      errors = 0;
      launchCount = 0;

      generate_random_inputs();
      compute_expected();

      for (int i = 0; i < biasWidth; i++) begin
        biases[i] = test_data8_1::convBiases[i];
      end

      repeat (4) @(posedge clk);
      reset = 0;

      while (outputCount < TOTAL_PIXELS) begin
        @(posedge clk);

        if (outputValid && outputReady) begin
          for (int filt = 0; filt < biasWidth; filt++) begin
            if (outputPixels[filt] !== expected[outputCount][filt]) begin
              errors++;

              $display(
                "FAIL trial=%0d pixel=%0d filt=%0d DUT=%0d EXP=%0d",
                trial,
                outputCount,
                filt,
                outputPixels[filt],
                expected[outputCount][filt]
              );
            end
          end

          outputCount++;
        end
      end

      totalErrors += errors;

      $display("");
      $display("TRIAL %0d DONE", trial);
      $display("outputCount = %0d / %0d", outputCount, TOTAL_PIXELS);
      $display("errors      = %0d", errors);

      reset = 1;
      repeat (4) @(posedge clk);
    end

    $display("");
    $display("ALL TRIALS DONE");
    $display("NUM_TRIALS  = %0d", NUM_TRIALS);
    $display("totalErrors = %0d", totalErrors);

    $stop;
  end

endmodule