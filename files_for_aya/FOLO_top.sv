`timescale 1ns / 1ps

// Top level module for the FOLO CNN. 
module FOLO_top
  #(
    parameter bitWidth = 16,
    parameter NFRAC    = 10,
	 parameter inputWidth = 300
  )
  (
    input logic clk,
    input logic reset,

    input  logic signed [bitWidth-1:0] inputPixel,
    input  logic inputValid,
    output logic inputReady,

    input  logic outputReady,
    output logic outputValid,
    output logic signed [bitWidth-1:0] outputPixels [0:0]
  );

  localparam POOL1_WIDTH = inputWidth / 2;
  localparam POOL2_WIDTH = POOL1_WIDTH / 2;
  localparam POOL3_WIDTH = POOL2_WIDTH / 2;

  // Layer 1:
  // This first layer takes a 300x300 input image, and outputs 8 300x300 matricies. 
  // It is a combined conv2D and ReLU layer. 
  
  logic signed [bitWidth-1:0] conv1InputPixel [0:0];
  logic signed [bitWidth-1:0] convBiases      [0:7];
  
  logic convOutputValid;
  logic convOutputReady;

  logic signed [bitWidth-1:0] convOutputPixels [0:7];
  logic signed [bitWidth-1:0] convOutputPixelsQuant [0:7];

  assign conv1InputPixel[0] = inputPixel;

  always_comb begin
    for (int i = 0; i < 8; i++) begin
      convBiases[i] = test_data1_8::convBiases[i];
    end
  end

  conv2D_top3D #(
    .filtDimension(3),
    .bitWidth(bitWidth),
    .inputWidth(inputWidth),
    .inputChannels(1),
    .biasWidth(8),
    .NFRAC(NFRAC),
	 .APPLY_RELU(1),
	 .CONV_WEIGHTS(test_data1_8::convWeights)
  ) conv1 (
    .clk(clk),
    .reset(reset),

    .inputPixels(conv1InputPixel),
    .biases(convBiases),

    .inputValid(inputValid),
    .outputReady(convOutputReady),

    .inputReady(inputReady),
    .outputValid(convOutputValid),

    .outputPixels(convOutputPixels)
  );

  genvar q1;
  generate
    for (q1 = 0; q1 < 8; q1++) begin : conv1_quantizers
      quantize_fixed #(
        .bitWidth(bitWidth),
        .IN_FRAC(NFRAC),
        .OUT_BITS(8),
        .OUT_INT(2),
        .RELU(1)
      ) q (
        .in(convOutputPixels[q1]),
        .out(convOutputPixelsQuant[q1])
      );
    end
  endgenerate

  // ============================================================
  // Layer 2:
  // 300x300x8 -> MaxPool2D(2x2) -> 150x150x8
  // Implemented as 8 independent single-channel maxpools
  // ============================================================

  logic poolInputReady  [0:7];
  logic poolOutputValid [0:7];

  logic signed [bitWidth-1:0] poolOutputPixels [0:7];
  logic poolOutputReady;

  assign convOutputReady = poolInputReady[0];

  genvar ch;
  generate
    for (ch = 0; ch < 8; ch++) begin : pool_channels

			MaxPool2D #(
				.inputWidth(inputWidth),
				.bitWidth(bitWidth)
			) pool (
				.clk(clk),
				.reset(reset),

				.inputPixel(convOutputPixelsQuant[ch]),
				.inputValid(convOutputValid),
				.outputReady(poolOutputReady),

				.outputPixel(poolOutputPixels[ch]),
				.inputReady(poolInputReady[ch]),
				.outputValid(poolOutputValid[ch])
			);

    end
  endgenerate

  // ============================================================
  // Layer 3:
  // 150x150x8 -> Conv2D/ReLU -> 150x150x8
  // ============================================================

  logic signed [bitWidth-1:0] conv2Biases [0:7];

  logic conv2InputReady;
  logic conv2OutputValid;
  logic conv2OutputReady;

  logic signed [bitWidth-1:0] conv2OutputPixels [0:7];
  logic signed [bitWidth-1:0] conv2OutputPixelsQuant [0:7];

  assign poolOutputReady = conv2InputReady;

  always_comb begin
    for (int i = 0; i < 8; i++) begin
      conv2Biases[i] = test_data8_8_conv2::convBiases[i];
    end
  end

  conv2D_top3D #(
    .filtDimension(3),
    .bitWidth(bitWidth),
    .inputWidth(POOL1_WIDTH),
    .inputChannels(8),
    .biasWidth(8),
    .NFRAC(NFRAC),
	 .APPLY_RELU(1),
	 .CONV_WEIGHTS(test_data8_8_conv2::convWeights)
  ) conv2 (
    .clk(clk),
    .reset(reset),

    .inputPixels(poolOutputPixels),
    .biases(conv2Biases),

    .inputValid(poolOutputValid[0]),
    .outputReady(conv2OutputReady),

    .inputReady(conv2InputReady),
    .outputValid(conv2OutputValid),

    .outputPixels(conv2OutputPixels)
  );

  genvar q2;
  generate
    for (q2 = 0; q2 < 8; q2++) begin : conv2_quantizers
      quantize_fixed #(
        .bitWidth(bitWidth),
        .IN_FRAC(NFRAC),
        .OUT_BITS(8),
        .OUT_INT(2),
        .RELU(1)
      ) q (
        .in(conv2OutputPixels[q2]),
        .out(conv2OutputPixelsQuant[q2])
      );
    end
  endgenerate

  // ============================================================
  // Layer 4:
  // 150x150x8 -> MaxPool2D(2x2) -> 75x75x8
  // Implemented as 8 independent single-channel maxpools
  // ============================================================

  logic pool2InputReady  [0:7];
  logic pool2OutputValid [0:7];

  logic signed [bitWidth-1:0] pool2OutputPixels [0:7];
  logic pool2OutputReady;

  assign conv2OutputReady = pool2InputReady[0];

  genvar ch2;
  generate
    for (ch2 = 0; ch2 < 8; ch2++) begin : pool2_channels

			MaxPool2D #(
				.inputWidth(POOL1_WIDTH),
				.bitWidth(bitWidth)
			) pool2 (
				.clk(clk),
				.reset(reset),

				.inputPixel(conv2OutputPixelsQuant[ch2]),
				.inputValid(conv2OutputValid),
				.outputReady(pool2OutputReady),

				.outputPixel(pool2OutputPixels[ch2]),
				.inputReady(pool2InputReady[ch2]),
				.outputValid(pool2OutputValid[ch2])
			);

    end
  endgenerate

  // ============================================================
  // Layer 5:
  // 75x75x8 -> Conv2D/ReLU -> 75x75x8
  // ============================================================

  logic signed [bitWidth-1:0] conv3Biases [0:7];

  logic conv3InputReady;
  logic conv3OutputValid;
  logic conv3OutputReady;

  logic signed [bitWidth-1:0] conv3OutputPixels [0:7];
  logic signed [bitWidth-1:0] conv3OutputPixelsQuant [0:7];

  assign pool2OutputReady = conv3InputReady;

  always_comb begin
    for (int i = 0; i < 8; i++) begin
      conv3Biases[i] = test_data8_8_conv3::convBiases[i];
    end
  end

  conv2D_top3D #(
    .filtDimension(3),
    .bitWidth(bitWidth),
    .inputWidth(POOL2_WIDTH),
    .inputChannels(8),
    .biasWidth(8),
    .NFRAC(NFRAC),
	 .APPLY_RELU(1),
	 .CONV_WEIGHTS(test_data8_8_conv3::convWeights)
  ) conv3 (
    .clk(clk),
    .reset(reset),

    .inputPixels(pool2OutputPixels),
    .biases(conv3Biases),

    .inputValid(pool2OutputValid[0]),
    .outputReady(conv3OutputReady),

    .inputReady(conv3InputReady),
    .outputValid(conv3OutputValid),

    .outputPixels(conv3OutputPixels)
  );

  genvar q3;
  generate
    for (q3 = 0; q3 < 8; q3++) begin : conv3_quantizers
      quantize_fixed #(
        .bitWidth(bitWidth),
        .IN_FRAC(NFRAC),
        .OUT_BITS(8),
        .OUT_INT(2),
        .RELU(1)
      ) q (
        .in(conv3OutputPixels[q3]),
        .out(conv3OutputPixelsQuant[q3])
      );
    end
  endgenerate

  // ============================================================
  // Layer 6:
  // 75x75x8 -> MaxPool2D(2x2) -> 37x37x8
  // Implemented as 8 independent single-channel maxpools
  // ============================================================

  logic pool3InputReady  [0:7];
  logic pool3OutputValid [0:7];

  logic signed [bitWidth-1:0] pool3OutputPixels [0:7];
  logic pool3OutputReady;

  assign conv3OutputReady = pool3InputReady[0];

  genvar ch3;
  generate
    for (ch3 = 0; ch3 < 8; ch3++) begin : pool3_channels

			MaxPool2D #(
				.inputWidth(POOL2_WIDTH),
				.bitWidth(bitWidth)
			) pool3 (
				.clk(clk),
				.reset(reset),

				.inputPixel(conv3OutputPixelsQuant[ch3]),
				.inputValid(conv3OutputValid),
				.outputReady(pool3OutputReady),

				.outputPixel(pool3OutputPixels[ch3]),
				.inputReady(pool3InputReady[ch3]),
				.outputValid(pool3OutputValid[ch3])
			);

    end
  endgenerate

  // ============================================================
  // Layer 7:
  // 37x37x8 -> Conv2D/no ReLU -> 37x37x1
  // ============================================================

  logic signed [bitWidth-1:0] finalBiases [0:0];

  logic finalInputReady;
  logic finalOutputValid;
  logic finalOutputReady;

  logic signed [bitWidth-1:0] finalOutputPixels [0:0];
  logic signed [bitWidth-1:0] finalOutputPixelsQuant [0:0];

  assign pool3OutputReady = finalInputReady;

  always_comb begin
    finalBiases[0] = test_data8_1::convBiases[0];
  end

  conv2D_top3D #(
    .filtDimension(3),
    .bitWidth(bitWidth),
    .inputWidth(POOL3_WIDTH),
    .inputChannels(8),
    .biasWidth(1),
    .NFRAC(NFRAC),
	 .APPLY_RELU(0),
	 .CONV_WEIGHTS(test_data8_1::convWeights)
  ) finalConv (
    .clk(clk),
    .reset(reset),

    .inputPixels(pool3OutputPixels),
    .biases(finalBiases),

    .inputValid(pool3OutputValid[0]),
    .outputReady(finalOutputReady),

    .inputReady(finalInputReady),
    .outputValid(finalOutputValid),

    .outputPixels(finalOutputPixels)
  );

  quantize_fixed #(
    .bitWidth(bitWidth),
    .IN_FRAC(NFRAC),
    .OUT_BITS(8),
    .OUT_INT(4),
    .RELU(0)
  ) final_quant (
    .in(finalOutputPixels[0]),
    .out(finalOutputPixelsQuant[0])
  );

  // ============================================================
  // Layer 8:
  // Sigmoid
  // ============================================================

  logic sigmoidOutputValid;
  logic sigmoidReady;

  logic signed [bitWidth-1:0] sigmoidOutputPixels [0:0];

  assign finalOutputReady = sigmoidReady;

  assign outputValid = sigmoidOutputValid;
  assign outputPixels[0] = sigmoidOutputPixels[0];

  sigmoid #(
    .WIDTH(bitWidth),
    .NFRAC(NFRAC),
    .SIZE(1),
    .MEM_WIDTH(18),
    .MEM_NFRAC(18),
    .LOOKUP_WIDTH(10),
    .LOOKUP_NFRAC(7),
    .BRAM_FILE("sigmoid_table_18_18_10_7.dat"),
    .REMOVE_PIPELINES(0)
  ) sigmoidFinal (
    .clk(clk),
    .reset(reset),

    .input_ready(finalOutputValid),
    .output_ready(sigmoidOutputValid),
    .ready(sigmoidReady),
    .next_layer_ready(outputReady),

    .input_data(finalOutputPixelsQuant),
    .output_data(sigmoidOutputPixels)
  );

endmodule

//
//`timescale 1ns / 1ps
//
//module FOLO_top_tb;
//
//  localparam bitWidth        = 16;
//  localparam NFRAC           = 10;
//
//  localparam INPUT_WIDTH     = 300;
//  localparam POOL1_WIDTH     = INPUT_WIDTH / 2;
//  localparam POOL2_WIDTH     = POOL1_WIDTH / 2;
//  localparam POOL3_WIDTH     = POOL2_WIDTH / 2;
//
//  localparam OUT_CHANNELS    = 8;
//
//  localparam TOTAL_INPUT_PIXELS = INPUT_WIDTH * INPUT_WIDTH;
//  localparam TOTAL_POOL1_PIXELS = POOL1_WIDTH * POOL1_WIDTH;
//  localparam TOTAL_POOL2_PIXELS = POOL2_WIDTH * POOL2_WIDTH;
//  localparam TOTAL_POOL3_PIXELS = POOL3_WIDTH * POOL3_WIDTH;
//
//  localparam SIG_MEM_WIDTH    = 18;
//  localparam SIG_MEM_NFRAC    = 18;
//  localparam SIG_LOOKUP_WIDTH = 10;
//  localparam SIG_LOOKUP_NFRAC = 7;
//  localparam SIG_TABLE_SIZE   = 2 ** SIG_LOOKUP_WIDTH;
//
//  logic clk, reset;
//
//  logic signed [bitWidth-1:0] inputPixel;
//  logic inputValid;
//  logic inputReady;
//
//  logic outputReady;
//  logic outputValid;
//  logic signed [bitWidth-1:0] outputPixels [0:0];
//
//  logic signed [bitWidth-1:0] inputImage [0:TOTAL_INPUT_PIXELS-1];
//
//  logic signed [bitWidth-1:0] conv1Expected [0:TOTAL_INPUT_PIXELS-1][0:OUT_CHANNELS-1];
//  logic signed [bitWidth-1:0] pool1Expected [0:TOTAL_POOL1_PIXELS-1][0:OUT_CHANNELS-1];
//
//  logic signed [bitWidth-1:0] conv2Expected [0:TOTAL_POOL1_PIXELS-1][0:OUT_CHANNELS-1];
//  logic signed [bitWidth-1:0] pool2Expected [0:TOTAL_POOL2_PIXELS-1][0:OUT_CHANNELS-1];
//
//  logic signed [bitWidth-1:0] conv3Expected [0:TOTAL_POOL2_PIXELS-1][0:OUT_CHANNELS-1];
//  logic signed [bitWidth-1:0] pool3Expected [0:TOTAL_POOL3_PIXELS-1][0:OUT_CHANNELS-1];
//
//  logic signed [bitWidth-1:0] finalExpected   [0:TOTAL_POOL3_PIXELS-1][0:0];
//  logic signed [bitWidth-1:0] sigmoidExpected [0:TOTAL_POOL3_PIXELS-1][0:0];
//
//  logic unsigned [SIG_MEM_WIDTH-1:0] sigmoidBram [0:SIG_TABLE_SIZE-1];
//
//  int nextPixel;
//  int outputCount;
//  int errors;
//  logic doneSending;
//
//  FOLO_top #(
//    .bitWidth(bitWidth),
//    .NFRAC(NFRAC),
//    .inputWidth(INPUT_WIDTH)
//  ) dut (
//    .clk(clk),
//    .reset(reset),
//
//    .inputPixel(inputPixel),
//    .inputValid(inputValid),
//    .inputReady(inputReady),
//
//    .outputReady(outputReady),
//    .outputValid(outputValid),
//    .outputPixels(outputPixels)
//  );
//
//  initial clk = 0;
//  always #5 clk = ~clk;
//
//  initial begin
//    $readmemb("sigmoid_table_18_18_10_7.dat", sigmoidBram);
//  end
//
//  task set_input_pixel(input int pixel);
//    inputPixel <= inputImage[pixel];
//  endtask
//
//  task generate_random_input_image;
//    for (int pix = 0; pix < TOTAL_INPUT_PIXELS; pix++) begin
//      inputImage[pix] = $urandom_range(0, 15);
//    end
//  endtask
//
//  function automatic int weight_index_1_8(input int filt, input int kr, input int kc);
//    weight_index_1_8 = filt * 9 + kr * 3 + kc;
//  endfunction
//
//  function automatic int weight_index_8_8(input int filt, input int ch, input int kr, input int kc);
//    weight_index_8_8 = filt * (3 * 3 * OUT_CHANNELS) + ch * 9 + kr * 3 + kc;
//  endfunction
//
//  function automatic int weight_index_8_1(input int filt, input int ch, input int kr, input int kc);
//    weight_index_8_1 = filt * (3 * 3 * OUT_CHANNELS) + ch * 9 + kr * 3 + kc;
//  endfunction
//
//  function automatic logic signed [bitWidth-1:0] quantize_expected(
//    input logic signed [bitWidth-1:0] in,
//    input int out_bits,
//    input int out_int,
//    input int relu
//  );
//    int out_frac;
//    int shift;
//    logic signed [bitWidth-1:0] max_relu;
//    logic signed [bitWidth-1:0] max_signed;
//    logic signed [bitWidth-1:0] min_signed;
//    logic signed [bitWidth-1:0] clipped;
//    begin
//      out_frac = out_bits - out_int;
//      shift = NFRAC - out_frac;
//
//      max_relu   = ((1 << out_bits) - 1) <<< shift;
//      max_signed = ((1 << (out_bits-1)) - 1) <<< shift;
//      min_signed = -((1 << (out_bits-1)) <<< shift);
//
//      if (relu) begin
//        if (in <= 0)
//          clipped = '0;
//        else if (in > max_relu)
//          clipped = max_relu;
//        else
//          clipped = in;
//      end else begin
//        if (in > max_signed)
//          clipped = max_signed;
//        else if (in < min_signed)
//          clipped = min_signed;
//        else
//          clipped = in;
//      end
//
//      if (shift > 0)
//        quantize_expected = (clipped >>> shift) <<< shift;
//      else
//        quantize_expected = clipped;
//    end
//  endfunction
//
//  task compute_conv1_expected;
//    longint signed accum;
//    longint signed prod;
//    logic signed [bitWidth-1:0] truncProd;
//    logic signed [bitWidth-1:0] convSum;
//    int rr, cc, pixIndex, wIndex;
//
//    for (int r = 0; r < INPUT_WIDTH; r++) begin
//      for (int c = 0; c < INPUT_WIDTH; c++) begin
//        pixIndex = r * INPUT_WIDTH + c;
//        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
//          accum = 0;
//          for (int kr = 0; kr < 3; kr++) begin
//            for (int kc = 0; kc < 3; kc++) begin
//              rr = r + kr - 1;
//              cc = c + kc - 1;
//              if (rr >= 0 && rr < INPUT_WIDTH && cc >= 0 && cc < INPUT_WIDTH) begin
//                wIndex = weight_index_1_8(filt, kr, kc);
//                prod = $signed(inputImage[rr * INPUT_WIDTH + cc]) * $signed(test_data1_8::convWeights[wIndex]);
//                prod = prod >>> NFRAC;
//                truncProd = prod[bitWidth-1:0];
//                accum += truncProd;
//              end
//            end
//          end
//          accum += $signed(test_data1_8::convBiases[filt]);
//          convSum = accum[bitWidth-1:0];
//          conv1Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
//        end
//      end
//    end
//  endtask
//
//  task compute_pool1_expected;
//    logic signed [bitWidth-1:0] v0, v1, v2, v3;
//    logic signed [bitWidth-1:0] maxVal;
//    int inR, inC, outPix;
//
//    for (int r = 0; r < POOL1_WIDTH; r++) begin
//      for (int c = 0; c < POOL1_WIDTH; c++) begin
//        outPix = r * POOL1_WIDTH + c;
//        inR = 2 * r;
//        inC = 2 * c;
//        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//          v0 = conv1Expected[(inR    ) * INPUT_WIDTH + (inC    )][ch];
//          v1 = conv1Expected[(inR    ) * INPUT_WIDTH + (inC + 1)][ch];
//          v2 = conv1Expected[(inR + 1) * INPUT_WIDTH + (inC    )][ch];
//          v3 = conv1Expected[(inR + 1) * INPUT_WIDTH + (inC + 1)][ch];
//          maxVal = v0;
//          if (v1 > maxVal) maxVal = v1;
//          if (v2 > maxVal) maxVal = v2;
//          if (v3 > maxVal) maxVal = v3;
//          pool1Expected[outPix][ch] = maxVal;
//        end
//      end
//    end
//  endtask
//
//  task compute_conv2_expected;
//    longint signed accum;
//    longint signed prod;
//    logic signed [bitWidth-1:0] truncProd;
//    logic signed [bitWidth-1:0] convSum;
//    int rr, cc, pixIndex, wIndex;
//
//    for (int r = 0; r < POOL1_WIDTH; r++) begin
//      for (int c = 0; c < POOL1_WIDTH; c++) begin
//        pixIndex = r * POOL1_WIDTH + c;
//        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
//          accum = 0;
//          for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//            for (int kr = 0; kr < 3; kr++) begin
//              for (int kc = 0; kc < 3; kc++) begin
//                rr = r + kr - 1;
//                cc = c + kc - 1;
//                if (rr >= 0 && rr < POOL1_WIDTH && cc >= 0 && cc < POOL1_WIDTH) begin
//                  wIndex = weight_index_8_8(filt, ch, kr, kc);
//                  prod = $signed(pool1Expected[rr * POOL1_WIDTH + cc][ch]) * $signed(test_data8_8::convWeights[wIndex]);
//                  prod = prod >>> NFRAC;
//                  truncProd = prod[bitWidth-1:0];
//                  accum += truncProd;
//                end
//              end
//            end
//          end
//          accum += $signed(test_data8_8::convBiases[filt]);
//          convSum = accum[bitWidth-1:0];
//          conv2Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
//        end
//      end
//    end
//  endtask
//
//  task compute_pool2_expected;
//    logic signed [bitWidth-1:0] v0, v1, v2, v3;
//    logic signed [bitWidth-1:0] maxVal;
//    int inR, inC, outPix;
//
//    for (int r = 0; r < POOL2_WIDTH; r++) begin
//      for (int c = 0; c < POOL2_WIDTH; c++) begin
//        outPix = r * POOL2_WIDTH + c;
//        inR = 2 * r;
//        inC = 2 * c;
//        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//          v0 = conv2Expected[(inR    ) * POOL1_WIDTH + (inC    )][ch];
//          v1 = conv2Expected[(inR    ) * POOL1_WIDTH + (inC + 1)][ch];
//          v2 = conv2Expected[(inR + 1) * POOL1_WIDTH + (inC    )][ch];
//          v3 = conv2Expected[(inR + 1) * POOL1_WIDTH + (inC + 1)][ch];
//          maxVal = v0;
//          if (v1 > maxVal) maxVal = v1;
//          if (v2 > maxVal) maxVal = v2;
//          if (v3 > maxVal) maxVal = v3;
//          pool2Expected[outPix][ch] = maxVal;
//        end
//      end
//    end
//  endtask
//
//  task compute_conv3_expected;
//    longint signed accum;
//    longint signed prod;
//    logic signed [bitWidth-1:0] truncProd;
//    logic signed [bitWidth-1:0] convSum;
//    int rr, cc, pixIndex, wIndex;
//
//    for (int r = 0; r < POOL2_WIDTH; r++) begin
//      for (int c = 0; c < POOL2_WIDTH; c++) begin
//        pixIndex = r * POOL2_WIDTH + c;
//        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
//          accum = 0;
//          for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//            for (int kr = 0; kr < 3; kr++) begin
//              for (int kc = 0; kc < 3; kc++) begin
//                rr = r + kr - 1;
//                cc = c + kc - 1;
//                if (rr >= 0 && rr < POOL2_WIDTH && cc >= 0 && cc < POOL2_WIDTH) begin
//                  wIndex = weight_index_8_8(filt, ch, kr, kc);
//                  prod = $signed(pool2Expected[rr * POOL2_WIDTH + cc][ch]) * $signed(test_data8_8::convWeights[wIndex]);
//                  prod = prod >>> NFRAC;
//                  truncProd = prod[bitWidth-1:0];
//                  accum += truncProd;
//                end
//              end
//            end
//          end
//          accum += $signed(test_data8_8::convBiases[filt]);
//          convSum = accum[bitWidth-1:0];
//          conv3Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
//        end
//      end
//    end
//  endtask
//
//  task compute_pool3_expected;
//    logic signed [bitWidth-1:0] v0, v1, v2, v3;
//    logic signed [bitWidth-1:0] maxVal;
//    int inR, inC, outPix;
//
//    for (int r = 0; r < POOL3_WIDTH; r++) begin
//      for (int c = 0; c < POOL3_WIDTH; c++) begin
//        outPix = r * POOL3_WIDTH + c;
//        inR = 2 * r;
//        inC = 2 * c;
//        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//          v0 = conv3Expected[(inR    ) * POOL2_WIDTH + (inC    )][ch];
//          v1 = conv3Expected[(inR    ) * POOL2_WIDTH + (inC + 1)][ch];
//          v2 = conv3Expected[(inR + 1) * POOL2_WIDTH + (inC    )][ch];
//          v3 = conv3Expected[(inR + 1) * POOL2_WIDTH + (inC + 1)][ch];
//          maxVal = v0;
//          if (v1 > maxVal) maxVal = v1;
//          if (v2 > maxVal) maxVal = v2;
//          if (v3 > maxVal) maxVal = v3;
//          pool3Expected[outPix][ch] = maxVal;
//        end
//      end
//    end
//  endtask
//
//  task compute_final_expected;
//    longint signed accum;
//    longint signed prod;
//    logic signed [bitWidth-1:0] truncProd;
//    logic signed [bitWidth-1:0] convSum;
//    int rr, cc, pixIndex, wIndex;
//
//    for (int r = 0; r < POOL3_WIDTH; r++) begin
//      for (int c = 0; c < POOL3_WIDTH; c++) begin
//        pixIndex = r * POOL3_WIDTH + c;
//        accum = 0;
//        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
//          for (int kr = 0; kr < 3; kr++) begin
//            for (int kc = 0; kc < 3; kc++) begin
//              rr = r + kr - 1;
//              cc = c + kc - 1;
//              if (rr >= 0 && rr < POOL3_WIDTH && cc >= 0 && cc < POOL3_WIDTH) begin
//                wIndex = weight_index_8_1(0, ch, kr, kc);
//                prod = $signed(pool3Expected[rr * POOL3_WIDTH + cc][ch]) * $signed(test_data8_1::convWeights[wIndex]);
//                prod = prod >>> NFRAC;
//                truncProd = prod[bitWidth-1:0];
//                accum += truncProd;
//              end
//            end
//          end
//        end
//        accum += $signed(test_data8_1::convBiases[0]);
//        convSum = accum[bitWidth-1:0];
//        finalExpected[pixIndex][0] = quantize_expected(convSum, 8, 3, 0);
//      end
//    end
//  endtask
//
//  task compute_sigmoid_expected;
//    logic signed [bitWidth-1:0] inVal;
//    logic signed [bitWidth-1:0] absVal;
//    logic [SIG_LOOKUP_WIDTH-1:0] index;
//    logic unsigned [bitWidth-1:0] unsignedVal;
//
//    for (int pix = 0; pix < TOTAL_POOL3_PIXELS; pix++) begin
//      inVal = finalExpected[pix][0];
//
//      if (inVal[bitWidth-1])
//        absVal = -inVal;
//      else
//        absVal = inVal;
//
//      if (SIG_LOOKUP_NFRAC == NFRAC)
//        index = absVal;
//      else if (SIG_LOOKUP_NFRAC < NFRAC)
//        index = absVal >>> (NFRAC - SIG_LOOKUP_NFRAC);
//      else
//        index = absVal << (SIG_LOOKUP_NFRAC - NFRAC);
//
//      if ($unsigned(index) > $unsigned(SIG_TABLE_SIZE - 1))
//        index = SIG_TABLE_SIZE - 1;
//
//      if (SIG_MEM_NFRAC == NFRAC)
//        unsignedVal = sigmoidBram[index];
//      else if (SIG_MEM_NFRAC < NFRAC)
//        unsignedVal = sigmoidBram[index] << (NFRAC - SIG_MEM_NFRAC);
//      else
//        unsignedVal = sigmoidBram[index] >> (SIG_MEM_NFRAC - NFRAC);
//
//      if (inVal[bitWidth-1])
//        sigmoidExpected[pix][0] = (2**(NFRAC-1)) - unsignedVal;
//      else
//        sigmoidExpected[pix][0] = (2**(NFRAC-1)) + unsignedVal;
//    end
//  endtask
//
//  // randomized inputValid, but holds pixel stable until accepted
//  always_ff @(posedge clk) begin
//    if (reset) begin
//      nextPixel   <= 0;
//      doneSending <= 1'b0;
//      inputValid  <= 1'b0;
//      inputPixel   <= '0;
//
//    end else begin
//      if (doneSending) begin
//        inputValid <= 1'b0;
//
//      end else if (!inputValid) begin
//        if ($urandom_range(0, 3) != 0) begin
//          inputValid <= 1'b1;
//          set_input_pixel(nextPixel);
//        end else begin
//          inputValid <= 1'b0;
//        end
//
//      end else if (inputValid && inputReady) begin
//        if (nextPixel == TOTAL_INPUT_PIXELS - 1) begin
//          inputValid  <= 1'b0;
//          doneSending <= 1'b1;
//          nextPixel   <= TOTAL_INPUT_PIXELS;
//        end else begin
//          nextPixel <= nextPixel + 1;
//
//          if ($urandom_range(0, 3) != 0) begin
//            inputValid <= 1'b1;
//            set_input_pixel(nextPixel + 1);
//          end else begin
//            inputValid <= 1'b0;
//          end
//        end
//      end
//
//      // else: inputValid=1 and inputReady=0, hold current inputPixel
//    end
//  end
//
//  // randomized outputReady
//  always_ff @(posedge clk) begin
//    if (reset) begin
//      outputReady <= 1'b1;
//    end else begin
//      outputReady <= ($urandom_range(0, 3) != 0);
//    end
//  end
//
//  initial begin
//    reset = 1;
//    outputCount = 0;
//    errors = 0;
//
//    generate_random_input_image();
//
//    compute_conv1_expected();
//    compute_pool1_expected();
//    compute_conv2_expected();
//    compute_pool2_expected();
//    compute_conv3_expected();
//    compute_pool3_expected();
//    compute_final_expected();
//    compute_sigmoid_expected();
//
//    repeat (4) @(posedge clk);
//    reset = 0;
//
//    while (outputCount < TOTAL_POOL3_PIXELS) begin
//      @(posedge clk);
//
//      if (outputValid && outputReady) begin
//        if (outputPixels[0] !== sigmoidExpected[outputCount][0]) begin
//          errors++;
//
//          $display(
//            "FAIL pixel=%0d DUT=%0d EXP=%0d preSigmoid=%0d",
//            outputCount,
//            outputPixels[0],
//            sigmoidExpected[outputCount][0],
//            finalExpected[outputCount][0]
//          );
//        end
//
//        outputCount++;
//      end
//    end
//
//    repeat (10) @(posedge clk);
//
//    $display("");
//    $display("DONE");
//    $display("input pixels  = %0d / %0d", nextPixel, TOTAL_INPUT_PIXELS);
//    $display("output pixels = %0d / %0d", outputCount, TOTAL_POOL3_PIXELS);
//    $display("errors        = %0d", errors);
//
//    $stop;
//  end
//
//endmodule
`timescale 1ns / 1ps

module FOLO_top_tb;

  localparam bitWidth        = 16;
  localparam NFRAC           = 10;

  localparam INPUT_WIDTH     = 300;
  localparam POOL1_WIDTH     = INPUT_WIDTH / 2;
  localparam POOL2_WIDTH     = POOL1_WIDTH / 2;
  localparam POOL3_WIDTH     = POOL2_WIDTH / 2;

  localparam OUT_CHANNELS    = 8;

  localparam TOTAL_INPUT_PIXELS = INPUT_WIDTH * INPUT_WIDTH;
  localparam TOTAL_POOL1_PIXELS = POOL1_WIDTH * POOL1_WIDTH;
  localparam TOTAL_POOL2_PIXELS = POOL2_WIDTH * POOL2_WIDTH;
  localparam TOTAL_POOL3_PIXELS = POOL3_WIDTH * POOL3_WIDTH;

  localparam SIG_MEM_WIDTH    = 18;
  localparam SIG_MEM_NFRAC    = 18;
  localparam SIG_LOOKUP_WIDTH = 10;
  localparam SIG_LOOKUP_NFRAC = 7;
  localparam SIG_TABLE_SIZE   = 2 ** SIG_LOOKUP_WIDTH;

  logic clk, reset;

  logic signed [bitWidth-1:0] inputPixel;
  logic inputValid;
  logic inputReady;

  logic outputReady;
  logic outputValid;
  logic signed [bitWidth-1:0] outputPixels [0:0];

  logic signed [bitWidth-1:0] inputImage [0:TOTAL_INPUT_PIXELS-1];

  logic signed [bitWidth-1:0] conv1Expected [0:TOTAL_INPUT_PIXELS-1][0:OUT_CHANNELS-1];
  logic signed [bitWidth-1:0] pool1Expected [0:TOTAL_POOL1_PIXELS-1][0:OUT_CHANNELS-1];

  logic signed [bitWidth-1:0] conv2Expected [0:TOTAL_POOL1_PIXELS-1][0:OUT_CHANNELS-1];
  logic signed [bitWidth-1:0] pool2Expected [0:TOTAL_POOL2_PIXELS-1][0:OUT_CHANNELS-1];

  logic signed [bitWidth-1:0] conv3Expected [0:TOTAL_POOL2_PIXELS-1][0:OUT_CHANNELS-1];
  logic signed [bitWidth-1:0] pool3Expected [0:TOTAL_POOL3_PIXELS-1][0:OUT_CHANNELS-1];

  logic signed [bitWidth-1:0] finalExpected   [0:TOTAL_POOL3_PIXELS-1][0:0];
  logic signed [bitWidth-1:0] sigmoidExpected [0:TOTAL_POOL3_PIXELS-1][0:0];

  logic unsigned [SIG_MEM_WIDTH-1:0] sigmoidBram [0:SIG_TABLE_SIZE-1];

  int nextPixel;
  int outputCount;
  int errors;
  logic doneSending;

  integer rtlOutFile;

  FOLO_top #(
    .bitWidth(bitWidth),
    .NFRAC(NFRAC),
    .inputWidth(INPUT_WIDTH)
  ) dut (
    .clk(clk),
    .reset(reset),

    .inputPixel(inputPixel),
    .inputValid(inputValid),
    .inputReady(inputReady),

    .outputReady(outputReady),
    .outputValid(outputValid),
    .outputPixels(outputPixels)
  );

  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    $readmemb("sigmoid_table_18_18_10_7.dat", sigmoidBram);
  end

  task set_input_pixel(input int pixel);
    inputPixel <= inputImage[pixel];
  endtask

  task generate_random_input_image;
    for (int pix = 0; pix < TOTAL_INPUT_PIXELS; pix++) begin
      inputImage[pix] = $urandom_range(0, 15);
    end
  endtask

  function automatic int weight_index_1_8(input int filt, input int kr, input int kc);
    weight_index_1_8 = filt * 9 + kr * 3 + kc;
  endfunction

  function automatic int weight_index_8_8(input int filt, input int ch, input int kr, input int kc);
    weight_index_8_8 = filt * (3 * 3 * OUT_CHANNELS) + ch * 9 + kr * 3 + kc;
  endfunction

  function automatic int weight_index_8_1(input int filt, input int ch, input int kr, input int kc);
    weight_index_8_1 = filt * (3 * 3 * OUT_CHANNELS) + ch * 9 + kr * 3 + kc;
  endfunction

  function automatic logic signed [bitWidth-1:0] quantize_expected(
    input logic signed [bitWidth-1:0] in,
    input int out_bits,
    input int out_int,
    input int relu
  );
    int out_frac;
    int shift;
    logic signed [bitWidth-1:0] max_relu;
    logic signed [bitWidth-1:0] max_signed;
    logic signed [bitWidth-1:0] min_signed;
    logic signed [bitWidth-1:0] clipped;
    begin
      out_frac = out_bits - out_int;
      shift = NFRAC - out_frac;

      max_relu   = ((1 << out_bits) - 1) <<< shift;
      max_signed = ((1 << (out_bits-1)) - 1) <<< shift;
      min_signed = -((1 << (out_bits-1)) <<< shift);

      if (relu) begin
        if (in <= 0)
          clipped = '0;
        else if (in > max_relu)
          clipped = max_relu;
        else
          clipped = in;
      end else begin
        if (in > max_signed)
          clipped = max_signed;
        else if (in < min_signed)
          clipped = min_signed;
        else
          clipped = in;
      end

      if (shift > 0)
        quantize_expected = (clipped >>> shift) <<< shift;
      else
        quantize_expected = clipped;
    end
  endfunction

  task compute_conv1_expected;
    longint signed accum;
    longint signed prod;
    logic signed [bitWidth-1:0] truncProd;
    logic signed [bitWidth-1:0] convSum;
    int rr, cc, pixIndex, wIndex;

    for (int r = 0; r < INPUT_WIDTH; r++) begin
      for (int c = 0; c < INPUT_WIDTH; c++) begin
        pixIndex = r * INPUT_WIDTH + c;
        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
          accum = 0;
          for (int kr = 0; kr < 3; kr++) begin
            for (int kc = 0; kc < 3; kc++) begin
              rr = r + kr - 1;
              cc = c + kc - 1;
              if (rr >= 0 && rr < INPUT_WIDTH && cc >= 0 && cc < INPUT_WIDTH) begin
                wIndex = weight_index_1_8(filt, kr, kc);
                prod = $signed(inputImage[rr * INPUT_WIDTH + cc]) * $signed(test_data1_8::convWeights[wIndex]);
                prod = prod >>> NFRAC;
                truncProd = prod[bitWidth-1:0];
                accum += truncProd;
              end
            end
          end
          accum += $signed(test_data1_8::convBiases[filt]);
          convSum = accum[bitWidth-1:0];
          conv1Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
        end
      end
    end
  endtask

  task compute_pool1_expected;
    logic signed [bitWidth-1:0] v0, v1, v2, v3;
    logic signed [bitWidth-1:0] maxVal;
    int inR, inC, outPix;

    for (int r = 0; r < POOL1_WIDTH; r++) begin
      for (int c = 0; c < POOL1_WIDTH; c++) begin
        outPix = r * POOL1_WIDTH + c;
        inR = 2 * r;
        inC = 2 * c;
        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
          v0 = conv1Expected[(inR    ) * INPUT_WIDTH + (inC    )][ch];
          v1 = conv1Expected[(inR    ) * INPUT_WIDTH + (inC + 1)][ch];
          v2 = conv1Expected[(inR + 1) * INPUT_WIDTH + (inC    )][ch];
          v3 = conv1Expected[(inR + 1) * INPUT_WIDTH + (inC + 1)][ch];
          maxVal = v0;
          if (v1 > maxVal) maxVal = v1;
          if (v2 > maxVal) maxVal = v2;
          if (v3 > maxVal) maxVal = v3;
          pool1Expected[outPix][ch] = maxVal;
        end
      end
    end
  endtask

  task compute_conv2_expected;
    longint signed accum;
    longint signed prod;
    logic signed [bitWidth-1:0] truncProd;
    logic signed [bitWidth-1:0] convSum;
    int rr, cc, pixIndex, wIndex;

    for (int r = 0; r < POOL1_WIDTH; r++) begin
      for (int c = 0; c < POOL1_WIDTH; c++) begin
        pixIndex = r * POOL1_WIDTH + c;
        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
          accum = 0;
          for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
            for (int kr = 0; kr < 3; kr++) begin
              for (int kc = 0; kc < 3; kc++) begin
                rr = r + kr - 1;
                cc = c + kc - 1;
                if (rr >= 0 && rr < POOL1_WIDTH && cc >= 0 && cc < POOL1_WIDTH) begin
                  wIndex = weight_index_8_8(filt, ch, kr, kc);
                  prod = $signed(pool1Expected[rr * POOL1_WIDTH + cc][ch]) * $signed(test_data8_8_conv2::convWeights[wIndex]);
                  prod = prod >>> NFRAC;
                  truncProd = prod[bitWidth-1:0];
                  accum += truncProd;
                end
              end
            end
          end
          accum += $signed(test_data8_8_conv2::convBiases[filt]);
          convSum = accum[bitWidth-1:0];
          conv2Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
        end
      end
    end
  endtask

  task compute_pool2_expected;
    logic signed [bitWidth-1:0] v0, v1, v2, v3;
    logic signed [bitWidth-1:0] maxVal;
    int inR, inC, outPix;

    for (int r = 0; r < POOL2_WIDTH; r++) begin
      for (int c = 0; c < POOL2_WIDTH; c++) begin
        outPix = r * POOL2_WIDTH + c;
        inR = 2 * r;
        inC = 2 * c;
        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
          v0 = conv2Expected[(inR    ) * POOL1_WIDTH + (inC    )][ch];
          v1 = conv2Expected[(inR    ) * POOL1_WIDTH + (inC + 1)][ch];
          v2 = conv2Expected[(inR + 1) * POOL1_WIDTH + (inC    )][ch];
          v3 = conv2Expected[(inR + 1) * POOL1_WIDTH + (inC + 1)][ch];
          maxVal = v0;
          if (v1 > maxVal) maxVal = v1;
          if (v2 > maxVal) maxVal = v2;
          if (v3 > maxVal) maxVal = v3;
          pool2Expected[outPix][ch] = maxVal;
        end
      end
    end
  endtask

  task compute_conv3_expected;
    longint signed accum;
    longint signed prod;
    logic signed [bitWidth-1:0] truncProd;
    logic signed [bitWidth-1:0] convSum;
    int rr, cc, pixIndex, wIndex;

    for (int r = 0; r < POOL2_WIDTH; r++) begin
      for (int c = 0; c < POOL2_WIDTH; c++) begin
        pixIndex = r * POOL2_WIDTH + c;
        for (int filt = 0; filt < OUT_CHANNELS; filt++) begin
          accum = 0;
          for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
            for (int kr = 0; kr < 3; kr++) begin
              for (int kc = 0; kc < 3; kc++) begin
                rr = r + kr - 1;
                cc = c + kc - 1;
                if (rr >= 0 && rr < POOL2_WIDTH && cc >= 0 && cc < POOL2_WIDTH) begin
                  wIndex = weight_index_8_8(filt, ch, kr, kc);
                  prod = $signed(pool2Expected[rr * POOL2_WIDTH + cc][ch]) * $signed(test_data8_8_conv3::convWeights[wIndex]);
                  prod = prod >>> NFRAC;
                  truncProd = prod[bitWidth-1:0];
                  accum += truncProd;
                end
              end
            end
          end
          accum += $signed(test_data8_8_conv3::convBiases[filt]);
          convSum = accum[bitWidth-1:0];
          conv3Expected[pixIndex][filt] = quantize_expected(convSum, 8, 2, 1);
        end
      end
    end
  endtask

  task compute_pool3_expected;
    logic signed [bitWidth-1:0] v0, v1, v2, v3;
    logic signed [bitWidth-1:0] maxVal;
    int inR, inC, outPix;

    for (int r = 0; r < POOL3_WIDTH; r++) begin
      for (int c = 0; c < POOL3_WIDTH; c++) begin
        outPix = r * POOL3_WIDTH + c;
        inR = 2 * r;
        inC = 2 * c;
        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
          v0 = conv3Expected[(inR    ) * POOL2_WIDTH + (inC    )][ch];
          v1 = conv3Expected[(inR    ) * POOL2_WIDTH + (inC + 1)][ch];
          v2 = conv3Expected[(inR + 1) * POOL2_WIDTH + (inC    )][ch];
          v3 = conv3Expected[(inR + 1) * POOL2_WIDTH + (inC + 1)][ch];
          maxVal = v0;
          if (v1 > maxVal) maxVal = v1;
          if (v2 > maxVal) maxVal = v2;
          if (v3 > maxVal) maxVal = v3;
          pool3Expected[outPix][ch] = maxVal;
        end
      end
    end
  endtask

  task compute_final_expected;
    longint signed accum;
    longint signed prod;
    logic signed [bitWidth-1:0] truncProd;
    logic signed [bitWidth-1:0] convSum;
    int rr, cc, pixIndex, wIndex;

    for (int r = 0; r < POOL3_WIDTH; r++) begin
      for (int c = 0; c < POOL3_WIDTH; c++) begin
        pixIndex = r * POOL3_WIDTH + c;
        accum = 0;
        for (int ch = 0; ch < OUT_CHANNELS; ch++) begin
          for (int kr = 0; kr < 3; kr++) begin
            for (int kc = 0; kc < 3; kc++) begin
              rr = r + kr - 1;
              cc = c + kc - 1;
              if (rr >= 0 && rr < POOL3_WIDTH && cc >= 0 && cc < POOL3_WIDTH) begin
                wIndex = weight_index_8_1(0, ch, kr, kc);
                prod = $signed(pool3Expected[rr * POOL3_WIDTH + cc][ch]) * $signed(test_data8_1::convWeights[wIndex]);
                prod = prod >>> NFRAC;
                truncProd = prod[bitWidth-1:0];
                accum += truncProd;
              end
            end
          end
        end
        accum += $signed(test_data8_1::convBiases[0]);
        convSum = accum[bitWidth-1:0];
        finalExpected[pixIndex][0] = quantize_expected(convSum, 8, 4, 0);
      end
    end
  endtask

  task compute_sigmoid_expected;
    logic signed [bitWidth-1:0] inVal;
    logic signed [bitWidth-1:0] absVal;
    logic [SIG_LOOKUP_WIDTH-1:0] index;
    logic unsigned [bitWidth-1:0] unsignedVal;

    for (int pix = 0; pix < TOTAL_POOL3_PIXELS; pix++) begin
      inVal = finalExpected[pix][0];

      if (inVal[bitWidth-1])
        absVal = -inVal;
      else
        absVal = inVal;

      if (SIG_LOOKUP_NFRAC == NFRAC)
        index = absVal;
      else if (SIG_LOOKUP_NFRAC < NFRAC)
        index = absVal >>> (NFRAC - SIG_LOOKUP_NFRAC);
      else
        index = absVal << (SIG_LOOKUP_NFRAC - NFRAC);

      if ($unsigned(index) > $unsigned(SIG_TABLE_SIZE - 1))
        index = SIG_TABLE_SIZE - 1;

      if (SIG_MEM_NFRAC == NFRAC)
        unsignedVal = sigmoidBram[index];
      else if (SIG_MEM_NFRAC < NFRAC)
        unsignedVal = sigmoidBram[index] << (NFRAC - SIG_MEM_NFRAC);
      else
        unsignedVal = sigmoidBram[index] >> (SIG_MEM_NFRAC - NFRAC);

      if (inVal[bitWidth-1])
        sigmoidExpected[pix][0] = (2**(NFRAC-1)) - unsignedVal;
      else
        sigmoidExpected[pix][0] = (2**(NFRAC-1)) + unsignedVal;
    end
  endtask

  // randomized inputValid, but holds pixel stable until accepted
  always_ff @(posedge clk) begin
    if (reset) begin
      nextPixel   <= 0;
      doneSending <= 1'b0;
      inputValid  <= 1'b0;
      inputPixel   <= '0;

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
        if (nextPixel == TOTAL_INPUT_PIXELS - 1) begin
          inputValid  <= 1'b0;
          doneSending <= 1'b1;
          nextPixel   <= TOTAL_INPUT_PIXELS;
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

      // else: inputValid=1 and inputReady=0, hold current inputPixel
    end
  end

  // randomized outputReady
  always_ff @(posedge clk) begin
    if (reset) begin
      outputReady <= 1'b1;
    end else begin
      outputReady <= ($urandom_range(0, 3) != 0);
    end
  end

  initial begin
    reset = 1;
    outputCount = 0;
    errors = 0;

    rtlOutFile = $fopen("folo_rtl_output_0.txt", "w");

    $readmemb("folo_input_0.txt", inputImage);

    compute_conv1_expected();
    compute_pool1_expected();
    compute_conv2_expected();
    compute_pool2_expected();
    compute_conv3_expected();
    compute_pool3_expected();
    compute_final_expected();
    compute_sigmoid_expected();

    repeat (4) @(posedge clk);
    reset = 0;

    while (outputCount < TOTAL_POOL3_PIXELS) begin
      @(posedge clk);

      if (outputValid && outputReady) begin
        $fwrite(rtlOutFile, "%0d\n", outputPixels[0]);

        if (outputPixels[0] !== sigmoidExpected[outputCount][0]) begin
          errors++;

          $display(
            "FAIL pixel=%0d DUT=%0d EXP=%0d preSigmoid=%0d",
            outputCount,
            outputPixels[0],
            sigmoidExpected[outputCount][0],
            finalExpected[outputCount][0]
          );
        end

        outputCount++;
      end
    end

    repeat (10) @(posedge clk);

    $display("");
    $display("DONE");
    $display("input pixels  = %0d / %0d", nextPixel, TOTAL_INPUT_PIXELS);
    $display("output pixels = %0d / %0d", outputCount, TOTAL_POOL3_PIXELS);
    $display("errors        = %0d", errors);

    $fclose(rtlOutFile);

    $stop;
  end

endmodule