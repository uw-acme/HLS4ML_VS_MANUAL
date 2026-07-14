//`timescale 1ns / 1ps
//// this is the overall connector module for the convolution layer of the 2D CNN.
//// this is the first layer in the model. it takes as input the system clock, clk, the system
//// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
//// for the convolution. it outputs the current output matrix which takes the input data
//// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
//// it also outputs when calculations are complete, the signal calculationsComplete which for an
//// 8x8 input matrix is after 64 clock cycles.
//module conv2D_top
//  #(
//    parameter filtDimension = 3,
//    parameter bitWidth      = 17,
//    parameter inputWidth    = 8,
//    parameter biasWidth     = 2,
//    parameter NFRAC         = 10
//  )
//  (
//    input logic clk,
//    input logic reset,
//
//    // current pixel that is being processed
//    input logic signed [bitWidth-1:0] inputPixel,
//    // corresponding biases for each filter
//    input logic signed [bitWidth-1:0] biases [0:biasWidth-1],
//	 
//	 input logic inputValid, outputReady,
//	 
//	 output logic inputReady, outputValid,
//
//    // changed the dimension from inputWidth*inputWidth*biasWidth / 4 since this is stride 2
//    // biasWidth = number of filters basically
//    output logic signed [bitWidth-1:0] outputPixels [biasWidth-1:0]
//  );
//
//  localparam TOTAL_PIXELS = inputWidth**2;
//  // this represents the number of pixels that need to be streamed in 
//  // before starting sumNine calculations
//  localparam LOAD_PIXELS = (filtDimension-2)*(inputWidth) + filtDimension - 1;
//  // time to compute dot product in sumNine once conv window has been generated
//  localparam COMPUTATION_TIME = 4;
//
//  // will count until computations have fully finished
//  logic [$clog2(TOTAL_PIXELS+LOAD_PIXELS+COMPUTATION_TIME)-1:0] pixelCount;
//
//  // current slice of the image we're looking at
//  logic signed [bitWidth-1:0] paddedMatrix [filtDimension-1:0][filtDimension-1:0];
//  // most recent 'dot products' computed with the current kernel (number of filters)
//  logic signed [bitWidth-1:0] sum [biasWidth-1:0];
//	
//  logic windowValid;
//  
//  	// when continueCalculations is asserted, it means that this layer is ready to accept 
//	// a pixel AND the previous layer is ready to give a pixel. when it's not asserted,
//	// the entire layer will essentially be paused.
//	assign inputReady = outputReady | ~outputValid;
//	logic continueCalculations;
//	assign continueCalculations = inputReady & inputValid;
//
//  // FOR TESTING
//  // signal that indicates when the output matrix is updated with a new output pixel.
//  logic newValidOutput;
//
//  // FOR TESTING
//  // the index within the 1st output channel of the output matrix that just updated with a new output pixel
//  // when there are multiple output channels, add TOTAL_PIXELS to this index for however many output channels there are
//  // to get all the indices of the new pixels in the clock cycle
//  logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;
//
//  // FOR TESTING
//  // the list values added to the output matrix during a given clock cycle
//  logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];
//
//  // input the current matrix and output the matrix with zeroes
//  // for when in the padded region
//  conv2D_windowGenerate #(filtDimension,bitWidth,inputWidth) zeroMatrix
//    (.clock(clk), .reset, .inputPixel(inputPixel), .inputValid(continueCalculations), .zeroedMatrix(paddedMatrix));
//
//  /** the following two lines would need to be adjusted based on how many filters are being used,
//  since we are using 2 here there are only 2 different needed
//   i am not sure how we would split the weights for if there were more than 2 filters        **/
//
//  // this signal is asserted when the sumNine module is finished with the computations 
//  logic sumValid;
//  // creates 2 sumNine modules which do the 'dot product' with the current
//  // paddedMatrix and corresponding weights
//  genvar i;
//  generate
//    for (i = 0; i < biasWidth; i++) begin : eachSumNine
//	   // something to keep in mind here is that the sum signal will actually be valid 4 cycles
//		// after a padded matrix is sent in. 
//		// the purpose of having the if statements here is so that we only have one of these modules
//		// driving sumValid - they will all have the same timing
//		if (i == 0) begin
//			conv2DsumNine #(filtDimension, bitWidth, NFRAC, i) sumBasedFilter (
//				.clock(clk), 
//				.reset(reset),
//				.zeroedMatrix(paddedMatrix),
//				.bias(biases[i]),
//				.validMatrix(windowValid & continueCalculations),
//				.advance(inputReady),
//				.outputValid(sumValid),
//				.sum(sum[i])
//			);
//		end else begin
//			conv2DsumNine #(filtDimension, bitWidth, NFRAC, i) sumBasedFilter (
//				.clock(clk), 
//				.reset(reset),
//				.zeroedMatrix(paddedMatrix),
//				.bias(biases[i]),
//				.validMatrix(windowValid & continueCalculations),
//				.advance(inputReady),
//				.outputValid(),
//				.sum(sum[i])
//			);
//		end
//    end
//  endgenerate
//
//  // increment counter
//  always_ff @(posedge clk) begin
//    if (reset) begin
//		pixelCount <= 0;
//		windowValid <= 1'b0;
//		outputValid <= 1'b0;
//	 end
//    else if (continueCalculations) begin
//      pixelCount <= pixelCount+ 7'b1;
//      validOutputIdx <= pixelCount-LOAD_PIXELS-COMPUTATION_TIME-1;
//      newOutputValues <= sum;
//    end
//  end
//  
//  // window valid logic 
//  always_ff @(posedge clk) begin
//	  if (pixelCount >= LOAD_PIXELS - 1 & continueCalculations) begin
//		  windowValid <= 1'b1;
//	  end
//  end
//  // assign sum values to output matrix
//  always_ff @(posedge clk) begin
//    if (sumValid) begin
//		outputValid <= 1'b1;
//      for (int i = 0; i < biasWidth; i++) begin
//        outputPixels[i] <= sum[i];
//      end
//    end else begin
//		outputValid <= 1'b0;
//	 end
//  end
//  
//endmodule
`timescale 1ns / 1ps
// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal calculationsComplete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2D_top
  #(
    parameter filtDimension = 3,
    parameter bitWidth      = 17,
    parameter inputWidth    = 8,
    parameter biasWidth     = 2,
    parameter NFRAC         = 10
  )
  (
    input logic clk,
    input logic reset,

    // current pixel that is being processed
    input logic signed [bitWidth-1:0] inputPixel,
    // corresponding biases for each filter
    input logic signed [bitWidth-1:0] biases [0:biasWidth-1],
	 
	 input logic inputValid, outputReady,
	 
	 output logic inputReady, outputValid,

    // changed the dimension from inputWidth*inputWidth*biasWidth / 4 since this is stride 2
    // biasWidth = number of filters basically
    output logic signed [bitWidth-1:0] outputPixels [biasWidth-1:0]
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
  logic signed [bitWidth-1:0] paddedMatrix [filtDimension-1:0][filtDimension-1:0];
  // most recent 'dot products' computed with the current kernel (number of filters)
  logic signed [bitWidth-1:0] sum [biasWidth-1:0];
	
  logic windowValid;

  // internal flushing state for final padded windows
  logic flushing;
  logic [$clog2(FLUSH_PIXELS+1):0] flushCount;
  logic downstreamReady;
  logic advanceInternal;
  logic signed [bitWidth-1:0] inputPixelInternal;
  
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
  assign inputPixelInternal = flushing ? '0 : inputPixel;

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
  conv2D_windowGenerate #(filtDimension,bitWidth,inputWidth) zeroMatrix
    (.clock(clk), .reset, .inputPixel(inputPixelInternal), .inputValid(advanceInternal), .zeroedMatrix(paddedMatrix));

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
			conv2DsumNine #(filtDimension, bitWidth, NFRAC, i) sumBasedFilter (
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
			conv2DsumNine #(filtDimension, bitWidth, NFRAC, i) sumBasedFilter (
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
        outputPixels[i] <= sum[i];
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
  localparam bitWidth      = 17;
  localparam NFRAC         = 10;
  localparam whichFilt     = 0;
  localparam inputChannels = 1;

  logic clock;
  logic reset;
  logic advance;
  logic validMatrix;

  logic signed [bitWidth-1:0] zeroedMatrix2D
    [filtDimension-1:0][filtDimension-1:0];

  logic signed [bitWidth-1:0] zeroedMatrix3D
    [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];

  logic signed [bitWidth-1:0] bias;

  logic outputValid2D;
  logic outputValid3D;

  logic signed [bitWidth-1:0] sum2D;
  logic signed [bitWidth-1:0] sum3D;

  int errors;

  conv2DsumNine #(
    .filtDimension(filtDimension),
    .bitWidth(bitWidth),
    .NFRAC(NFRAC),
    .whichFilt(whichFilt)
  ) dut2D (
    .clock(clock),
    .reset(reset),
    .zeroedMatrix(zeroedMatrix2D),
    .bias(bias),
    .validMatrix(validMatrix),
    .advance(advance),
    .outputValid(outputValid2D),
    .sum(sum2D)
  );

  conv2Dsum3D #(
    .filtDimension(filtDimension),
    .bitWidth(bitWidth),
    .NFRAC(NFRAC),
    .whichFilt(whichFilt),
    .inputChannels(inputChannels)
  ) dut3D (
    .clock(clock),
    .reset(reset),
    .zeroedMatrix(zeroedMatrix3D),
    .bias(bias),
    .validMatrix(validMatrix),
    .advance(advance),
    .outputValid(outputValid3D),
    .sum(sum3D)
  );

  initial clock = 0;
  always #5 clock = ~clock;

  task set_window(input int base);
    for (int r = 0; r < filtDimension; r++) begin
      for (int c = 0; c < filtDimension; c++) begin
        zeroedMatrix2D[r][c] = base + r*filtDimension + c;
        zeroedMatrix3D[0][r][c] = base + r*filtDimension + c;
      end
    end
  endtask

  initial begin
    reset = 1;
    advance = 1;
    validMatrix = 0;
    bias = 0;
    errors = 0;

    set_window(0);

    repeat (4) @(posedge clock);
    @(negedge clock);
    reset = 0;

    for (int trial = 0; trial < 8; trial++) begin
      @(negedge clock);
      validMatrix = 1;
      bias = trial;
      set_window(trial * 10);
    end

    @(negedge clock);
    validMatrix = 0;

    repeat (15) @(posedge clock);

    $display("");
    $display("DONE errors=%0d", errors);
    $stop;
  end

  always @(negedge clock) begin
    if (!reset) begin

      $display("");
      $display("------------------------------------------------------------");
      $display("time = %0t", $time);
      $display("2D: valid=%0b  sum=%0d", outputValid2D, sum2D);
      $display("3D: valid=%0b  sum=%0d", outputValid3D, sum3D);

      if (outputValid2D && outputValid3D) begin
        if (sum2D === sum3D) begin
          $display("RESULT: MATCH");
        end else begin
          errors++;
          $display("RESULT: SUM MISMATCH");
          $display("        2D sum = %0d", sum2D);
          $display("        3D sum = %0d", sum3D);
        end
      end else if (outputValid2D !== outputValid3D) begin
        errors++;
        $display("RESULT: VALID MISMATCH");
        $display("        2D valid = %0b", outputValid2D);
        $display("        3D valid = %0b", outputValid3D);
      end else begin
        $display("RESULT: no valid output this cycle");
      end

    end
  end

endmodule