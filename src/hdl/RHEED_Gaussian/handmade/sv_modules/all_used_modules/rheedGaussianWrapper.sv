`timescale 1ns / 1ps
import q_conv2d_batchnorm_0_8_0::*;
import q_conv2d_batchnorm_1_0_8_2::*;
import q_conv2d_batchnorm_2_0_8_2::*;
import q_dense_0_8_2::*;
import q_dense_1_0_8_2::*;
import q_dense_2_0_8_2::*;

module rheedGaussianWrapper #(
    parameter bitWidth = 8,
    parameter inputWidth = 48,
    parameter NFRAC_first = 7,
    parameter NFRAC = 5,
    parameter outputSize = 5
) (
    input  logic clk,
    input  logic reset,
    input  logic signed [bitWidth-1:0] inputPixel,
    input  logic inputValid,
    output logic inputReady,
    output logic signed [bitWidth-1:0] finalOutput [outputSize-1:0],
    output logic finalOutputValid
);

    // kernel width for all conv2D layers
    localparam int CONV_FILT_DIMENSION = 3;

    // number of output channels for each conv2D layer
    localparam int OUTPUT_CHANNELS_CONV0 = 6;
    localparam int OUTPUT_CHANNELS_CONV1 = 8;
    localparam int OUTPUT_CHANNELS_CONV2 = 10;

    // output sizes
    localparam int CONV0_OUT_WIDTH = inputWidth - 2;  // -2 for no padding
    localparam int POOL0_MID_WIDTH = CONV0_OUT_WIDTH / 2;  // after first 2x2 stage of cascaded 4x4 pool
    localparam int POOL0_OUT_WIDTH = POOL0_MID_WIDTH / 2;  // after second 2x2 stage -> equivalent /4 overall
    localparam int CONV1_OUT_WIDTH = POOL0_OUT_WIDTH - 2;
    localparam int POOL1_OUT_WIDTH = CONV1_OUT_WIDTH / 2;
    localparam int CONV2_OUT_WIDTH = POOL1_OUT_WIDTH - 2;
    localparam int POOL2_OUT_WIDTH = CONV2_OUT_WIDTH / 2;
    localparam int FLATTEN_SIZE = OUTPUT_CHANNELS_CONV2 * POOL2_OUT_WIDTH * POOL2_OUT_WIDTH;
    localparam int DENSE0_OUT = 15;
    localparam int DENSE1_OUT = 10;
    localparam int DENSE2_OUT = outputSize;


    // ----------------------------------------------------------
    // Frist Stage
    // ----------------------------------------------------------
    logic outputValidConv0;
    logic inputReadyConv0;
    logic outputReadyConv0;
    logic signed [bitWidth-1:0] outputPixelConv0 [OUTPUT_CHANNELS_CONV0-1:0];

    // convert 'logic signed[15:0]' to 'logic signed[15:0]$[0:0]' 
    // since first layer is just 1 channel and the data for it is 1D as a default
    logic signed [bitWidth-1:0] inputPixelConv0 [0:0];
    assign inputPixelConv0[0] = inputPixel;

    conv2d_output_with_relu_reuse9_multichannel #(
        .inputChannels (1), // always 1 for first stage conv
        .filtDimension (CONV_FILT_DIMENSION),
        .bitWidth      (bitWidth),
        .inputWidth    (inputWidth),
        .biasWidth     (OUTPUT_CHANNELS_CONV0),
        .NFRAC         (NFRAC_first)
    ) conv0 (
        .clk         (clk),
        .reset       (reset),
        .inputPixel  (inputPixelConv0),
        .biases      (q_conv2d_batchnorm_0_8_0::convBiases),
        .convWeights (q_conv2d_batchnorm_0_8_0::convWeights),
        .inputValid  (inputValid),
        .inputReady  (inputReadyConv0),
        .outputReady (outputReadyConv0),
        .outputPixel (outputPixelConv0),
        .outputValid (outputValidConv0)
    );

    assign inputReady = inputReadyConv0;

    // pool0 stage A: first 2x2/stride2 pass, one instance per channel
    logic signed [bitWidth-1:0] outputPixelPool0A [OUTPUT_CHANNELS_CONV0-1:0];
    logic [OUTPUT_CHANNELS_CONV0-1:0] inputReadyPool0A;
    logic [OUTPUT_CHANNELS_CONV0-1:0] outputValidPool0A;
    logic outputReadyPool0A;

    // unary operator to check that all inputReady signals are true from the parallel MaxPools
    assign outputReadyConv0 = &inputReadyPool0A; 

    genvar i;
    generate
        for (i = 0; i < OUTPUT_CHANNELS_CONV0; i++) begin: pool0Stage1
            MaxPool2D #(
                .inputWidth (CONV0_OUT_WIDTH),
                .bitWidth   (bitWidth)
            ) mp (
                .clk         (clk),
                .reset       (reset),
                .inputPixel  (outputPixelConv0[i]),
                .inputValid  (outputValidConv0),
                .outputReady (outputReadyPool0A),
                .outputPixel (outputPixelPool0A[i]),
                .inputReady  (inputReadyPool0A[i]),
                .outputValid (outputValidPool0A[i])
            );
        end
    endgenerate

    // -- pool0 stage B: second 2x2/stride2 pass -> completes the equivalent 4x4/stride4 pool --
    logic signed [bitWidth-1:0] outputPixelMaxPool0 [OUTPUT_CHANNELS_CONV0-1:0];
    logic [OUTPUT_CHANNELS_CONV0-1:0] inputReadyPool0B;
    logic [OUTPUT_CHANNELS_CONV0-1:0] outputValidPool0B;
    logic outputReadyPool0B;
    logic outputValidMaxPool0;

    assign outputReadyPool0A = &inputReadyPool0B;
    assign outputValidMaxPool0 = &outputValidPool0B;

    generate
        for (i = 0; i < OUTPUT_CHANNELS_CONV0; i++) begin: pool0Stage2
            MaxPool2D #(
                .inputWidth (POOL0_MID_WIDTH),
                .bitWidth   (bitWidth)
            ) mp (
                .clk         (clk),
                .reset       (reset),
                .inputPixel  (outputPixelPool0A[i]),
                .inputValid  (outputValidPool0A[i]),
                .outputReady (outputReadyPool0B),
                .outputPixel (outputPixelMaxPool0[i]),
                .inputReady  (inputReadyPool0B[i]),
                .outputValid (outputValidPool0B[i])
            );
        end
    endgenerate

    // ----------------------------------------------------------
    // Second Stage
    // ----------------------------------------------------------
    logic outputValidConv1;
    logic inputReadyConv1;
    logic outputReadyConv1;
    logic signed [bitWidth-1:0] outputPixelConv1 [OUTPUT_CHANNELS_CONV1-1:0];

    assign outputReadyPool0B = inputReadyConv1;

    conv2d_output_with_relu_reuse9_multichannel #(
        .inputChannels (OUTPUT_CHANNELS_CONV0),
        .filtDimension (CONV_FILT_DIMENSION),
        .bitWidth      (bitWidth),
        .inputWidth    (POOL0_OUT_WIDTH),
        .biasWidth     (OUTPUT_CHANNELS_CONV1),
        .NFRAC         (NFRAC)
    ) conv1 (
        .clk         (clk),
        .reset       (reset),
        .inputPixel  (outputPixelMaxPool0),
        .biases      (q_conv2d_batchnorm_1_0_8_2::convBiases),
        .convWeights (q_conv2d_batchnorm_1_0_8_2::convWeights),
        .inputValid  (outputValidMaxPool0),
        .inputReady  (inputReadyConv1),
        .outputReady (outputReadyConv1),
        .outputPixel (outputPixelConv1),
        .outputValid (outputValidConv1)
    );

    logic signed [bitWidth-1:0] outputPixelMaxPool1 [OUTPUT_CHANNELS_CONV1-1:0];
    logic [OUTPUT_CHANNELS_CONV1-1:0] inputReadyPool1;
    logic [OUTPUT_CHANNELS_CONV1-1:0] outputValidPool1;
    logic outputReadyPool1;
    logic outputValidMaxPool1;

    assign outputReadyConv1 = &inputReadyPool1;
    assign outputValidMaxPool1 = &outputValidPool1;

    generate
        for (i = 0; i < OUTPUT_CHANNELS_CONV1; i++) begin: pool1
            MaxPool2D #(
                .inputWidth (CONV1_OUT_WIDTH),
                .bitWidth   (bitWidth)
            ) mp (
                .clk         (clk),
                .reset       (reset),
                .inputPixel  (outputPixelConv1[i]),
                .inputValid  (outputValidConv1),
                .outputReady (outputReadyPool1),
                .outputPixel (outputPixelMaxPool1[i]),
                .inputReady  (inputReadyPool1[i]),
                .outputValid (outputValidPool1[i])
            );
        end
    endgenerate

    // ----------------------------------------------------------
    // Third Stage
    // ----------------------------------------------------------
    logic outputValidConv2;
    logic inputReadyConv2;
    logic outputReadyConv2;
    logic signed [bitWidth-1:0] outputPixelConv2 [OUTPUT_CHANNELS_CONV2-1:0];

    assign outputReadyPool1 = inputReadyConv2;

    conv2d_output_with_relu_reuse9_multichannel #(
        .inputChannels (OUTPUT_CHANNELS_CONV1),
        .filtDimension (CONV_FILT_DIMENSION),
        .bitWidth      (bitWidth),
        .inputWidth    (POOL1_OUT_WIDTH),
        .biasWidth     (OUTPUT_CHANNELS_CONV2),
        .NFRAC         (NFRAC)
    ) conv2 (
        .clk         (clk),
        .reset       (reset),
        .inputPixel  (outputPixelMaxPool1),
        .biases      (q_conv2d_batchnorm_2_0_8_2::convBiases),
        .convWeights (q_conv2d_batchnorm_2_0_8_2::convWeights),
        .inputValid  (outputValidMaxPool1),
        .inputReady  (inputReadyConv2),
        .outputReady (outputReadyConv2),
        .outputPixel (outputPixelConv2),
        .outputValid (outputValidConv2)
    );

    logic signed [bitWidth-1:0] outputPixelMaxPool2 [OUTPUT_CHANNELS_CONV2-1:0];
    logic [OUTPUT_CHANNELS_CONV2-1:0] inputReadyPool2;
    logic [OUTPUT_CHANNELS_CONV2-1:0] outputValidPool2;
    logic outputReadyPool2; // driven from Flatten/Dense0
    logic outputValidMaxPool2;

    assign outputReadyConv2 = &inputReadyPool2;
    assign outputValidMaxPool2 = &outputValidPool2;

    generate
        for (i = 0; i < OUTPUT_CHANNELS_CONV2; i++) begin: pool2
            MaxPool2D #(
                .inputWidth (CONV2_OUT_WIDTH),
                .bitWidth   (bitWidth)
            ) mp (
                .clk         (clk),
                .reset       (reset),
                .inputPixel  (outputPixelConv2[i]),
                .inputValid  (outputValidConv2),
                .outputReady (outputReadyPool2),
                .outputPixel (outputPixelMaxPool2[i]),
                .inputReady  (inputReadyPool2[i]),
                .outputValid (outputValidPool2[i])
            );
        end
    endgenerate

    // ----------------------------------------------------------
    // ----------------------------------------------------------

    // flatten/dense always accepts new pixels (fixed latency & no backpressure)
    assign outputReadyPool2 = 1'b1;

    // Assumes POOL2_OUT_WIDTH == 1, breaks if inputWidth changes because the 
    // current flatten layer accepts a full 3d array while maxpool only outputs 1 pixel at a time.
    // Currently works only because the final MaxPool only outputs 1 pixel.
    // But otherwise, would need accumulator buffer after MaxPool that feeds into flatten.
    logic signed [bitWidth-1:0] featureMapConv2 [OUTPUT_CHANNELS_CONV2-1:0][POOL2_OUT_WIDTH-1:0][POOL2_OUT_WIDTH-1:0];
    generate
        for (i = 0; i < OUTPUT_CHANNELS_CONV2; i++) begin: featureMapReshape
            assign featureMapConv2[i][0][0] = outputPixelMaxPool2[i];
        end
    endgenerate


    // Flatten
    logic signed [bitWidth-1:0] flattenedOut [FLATTEN_SIZE-1:0];

    flatten #(
        .inputChannels (OUTPUT_CHANNELS_CONV2),
        .height        (POOL2_OUT_WIDTH),
        .width         (POOL2_OUT_WIDTH),
        .bitWidth      (bitWidth)
    ) flat (
        .featureMap   (featureMapConv2),
        .flattenedOut (flattenedOut)
    );

    // flatten is combinational, so valid passes straight through
    logic flattenValid;
    assign flattenValid = outputValidMaxPool2;

    // First Dense
    logic signed [bitWidth-1:0] outputDataDense0 [DENSE0_OUT-1:0];
    logic outputValidDense0;

    denseLatencyWithControl_dense0 #(
        .WIDTH      (bitWidth),
        .NFRAC      (NFRAC),
        .INPUT_SIZE (FLATTEN_SIZE),
        .OUTPUT_SIZE(DENSE0_OUT),
        .BITWIDTH   (bitWidth)
    ) dense0 (
        .clk         (clk),
        .inputValid  (flattenValid),
        .biases      (q_dense_0_8_2::bias), 
        .inputData   (flattenedOut),
        .outputData  (outputDataDense0),
        .outputValid (outputValidDense0)
    );

    // First RELU
    logic signed [bitWidth-1:0] outputDataRelu0 [DENSE0_OUT-1:0];
    logic outputValidRelu0;

    reluActivationLayer #(
        .WIDTH(bitWidth),
        .NFRAC(NFRAC),
        .SIZE (DENSE0_OUT)
    ) relu0 (
        .clk         (clk),
        .inputValid  (outputValidDense0),
        .input_data  (outputDataDense0),
        .output_data (outputDataRelu0),
        .outputValid (outputValidRelu0)
    );

    // Second Dense
    logic signed [bitWidth-1:0] outputDataDense1 [DENSE1_OUT-1:0];
    logic outputValidDense1;

    denseLatencyWithControl_dense1 #(
        .WIDTH      (bitWidth),
        .NFRAC      (NFRAC),
        .INPUT_SIZE (DENSE0_OUT),
        .OUTPUT_SIZE(DENSE1_OUT),
        .BITWIDTH   (bitWidth)
    ) dense1 (
        .clk         (clk),
        .inputValid  (outputValidRelu0),
        .biases      (q_dense_1_0_8_2::bias),
        .inputData   (outputDataRelu0),
        .outputData  (outputDataDense1),
        .outputValid (outputValidDense1)
    );

    // Second RELU
    logic signed [bitWidth-1:0] outputDataRelu1 [DENSE1_OUT-1:0];
    logic outputValidRelu1;

    reluActivationLayer #(
        .WIDTH(bitWidth),
        .NFRAC(NFRAC),
        .SIZE (DENSE1_OUT)
    ) relu1 (
        .clk         (clk),
        .inputValid  (outputValidDense1),
        .input_data  (outputDataDense1),
        .output_data (outputDataRelu1),
        .outputValid (outputValidRelu1)
    );

    // Third Dense -> final output, no activation after this one
    denseLatencyWithControl_dense2 #(
        .WIDTH      (bitWidth),
        .NFRAC      (NFRAC),
        .INPUT_SIZE (DENSE1_OUT),
        .OUTPUT_SIZE(DENSE2_OUT),
        .BITWIDTH   (bitWidth)
    ) dense2 (
        .clk         (clk),
        .inputValid  (outputValidRelu1),
        .biases      (q_dense_2_0_8_2::bias),
        .inputData   (outputDataRelu1),
        .outputData  (finalOutput),
        .outputValid (finalOutputValid)
    );

endmodule
