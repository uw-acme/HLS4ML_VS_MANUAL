`timescale 1ns / 1ps
// this implementation is for a convolution with NO PADDING

// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal complete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2dOutput_no_relu  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, biases, outputMatrix, complete, newValidOutput, validOutputIdx, newOutputValues);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;

	// biasWidth = # of filters = number of biases = number of output channels
	// (1 bias value per filter)
	input logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// stores the outputs to all the instances of sumNine each clock cycle
    // (result of most recent dot product + added bias )
	logic signed [bitWidth-1:0] sum [biasWidth-1:0];

	// number of pixels in the OUTPUT image
	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1);

	// number of cycles needed to stream in enough input pixels to fill up the matrix for the first time
	localparam LOAD_TIME = inputWidth*(filtDimension-1) + filtDimension;

	// time to compute dot product after load time
	localparam COMPUTATION_TIME = 3;

    // counter to keep track of when conv2DsumNine outputs valid sums so that the sums can be assigned to outputMatrix
	// helps determine when convolution full convolution is complete
	logic [$clog2(TOTAL_PIXELS + LOAD_TIME):0] counter; // 1 bit more than log2(total pixels) to account for load time

    // keeps track of the current column of the input matrix that aligns with the top left pixel of currConvMatrix
    // to determine when NOT to assign sums to the output (logic for no-padding implementation)
    logic [$clog2(inputWidth)-1:0] currCol;
	
	// keeps track of which output matrix index to assign the sums to
	logic [$clog2(inputWidth-filtDimension+1)-1:0] currRow; 
	
	// output matrix width is inputWidth-filtDimension+1 in case of no padding
	// with padding, use [inputWidth*inputWidth*biasWidth:0] assuming stride 1
	output logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];

	// signal that indicates that the convolution is complete
	output logic complete;

	// FOR TESTING
	// signal that indicates when the output matrix is updated with a new output pixel.
	output logic newValidOutput;

	// FOR TESTING
	// the index within the 1st output channel of the output matrix that just updated with a new output pixel
	// when there are multiple output channels, add TOTAL_PIXELS to this index for however many output channels there are
	// to get all the indices of the new pixels in the clock cycle
	output logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;

	// FOR TESTING
	// the list values added to the output matrix during a given clock cycle
	output logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];
	

	// input the new pixel and output the convolutional matrix
	conv2D_parameterized #(filtDimension, bitWidth, inputWidth) currMatrix 
	(.clock(clk), .reset(reset), .inputPixel(inputPixel), .currConvMatrix(currConvMatrix));


	// multiply the current matrix by the weights and take the sum
	// takes 3 clock cycles to output a sum
	genvar i;
	generate
	   for( i = 0; i < biasWidth; i++) begin: eachSumNine // looping for biasWidth, so assuming biasWidth = number of filters
		   conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, NFRAC, i) sumBasedFilter1
	       (.clock(clk), .currMatrix(currConvMatrix), .bias(biases[i]), .sum(sum[i]));
	   end
	endgenerate 

	// counter to determine when sum outputs from conv2DsumNine_parameterized are valid
	always_ff @(posedge clk) begin
		if (reset) begin
			counter <= 0;
		end
		else begin
			counter <= counter + 1;
		end
	end


	integer j;
	always_ff @(posedge clk) begin
		if (reset) begin
            currCol <= 0;
			currRow <= 0;
		end
		else begin
			if (counter > (LOAD_TIME + COMPUTATION_TIME) && !complete) begin

                currCol <= (currCol == inputWidth - 1) ? 0 : (currCol + 1);
				currRow <= (currCol == inputWidth - 1) ? currRow + 1 : currRow;

                // if (currCol < (inputWidth - filtDimension + 2)) begin // while not skipping
				if (currCol < (inputWidth - filtDimension + 1)) begin // while not skipping
                    /* 
                    assign dot products to the output matrix in the format:
			        [(output channel 1 pixel 0~n), (output channel 2 pixel 0~n), ..., (output channel m pixel 0~n)]
			        */
					// subtracting (filtDimension-1)*currRow accounts for skips in pixel assignments to the output due to no-padding implementation
                    for (j=0; j<biasWidth; j++) begin
                        outputMatrix[counter-LOAD_TIME-COMPUTATION_TIME-1 - (filtDimension-1)*currRow + TOTAL_PIXELS*j] <= sum[j]; 
                    end

					// FOR TESTING: 
					newValidOutput <= 1'b1;
					validOutputIdx <= counter-LOAD_TIME-COMPUTATION_TIME-1 - (filtDimension-1)*currRow;
					newOutputValues <= sum;
                end
				// FOR TESTING
				else begin // while skipping
					newValidOutput <= 1'b0;
				end
			end
		end
	end

	//assign complete = (counter > (LOAD_TIME + COMPUTATION_TIME + inputWidth*inputWidth + 1));
	assign complete = !$isunknown(outputMatrix[TOTAL_PIXELS-1]);

endmodule


module conv2dOutput_no_relu_testbench();
	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, biasWidth = 2, NFRAC = 10;

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1);
	localparam LOAD_TIME = inputWidth*(filtDimension-1);
	localparam COMPUTATION_TIME = 3;

	logic clk, reset;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];
	logic complete;


	// dut
	conv2dOutput_no_relu #(filtDimension, bitWidth, inputWidth, biasWidth, NFRAC) dut (.*);

	assign biases = data16_10::convBiases;

	// set up simulated clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end

	integer i;
	initial begin
		reset <= 1'b1;	@(posedge clk);
		reset <= 1'b0;  
		
		for (i=0; i<inputWidth**2; i++) begin
			inputPixel <= bitWidth'(i);
			@(posedge clk);
		end
		
		@(posedge complete);
		repeat(5) @(posedge clk);
		
		$stop;
	end

endmodule