`timescale 1ns / 1ps
// this implementation is for a 2D convolution with NO PADDING

module conv2dOutput_reuse9  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, biases, prevLayerValid, outputMatrix, ready, complete, newValidOutput, validOutputIdx, newOutputValues);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;

	// biasWidth = number of filters = number of biases = number of output channels
	input logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 

	// indicates whether the next input pixel is valid
	input logic prevLayerValid;
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// stores the outputs to all the instances of sumNine each clock cycle
    // (result of most recent dot product + added bias)
	logic signed [bitWidth-1:0] sum [biasWidth-1:0];

	// number of pixels in the OUTPUT image in each channel (for 1 channel)
	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1);

	// number of input pixels needed to fill up the convolution window for the first time
	localparam PIXELS_TO_FILL = inputWidth*(filtDimension-1) + filtDimension;
	localparam LOAD_TIME = 10; // UNUSED AND REPLACED MY PIXELS TO FILL

	// time to compute dot product per location of filter
	localparam COMPUTATION_TIME = filtDimension**2; //9

    // counter to keep track of when conv2DsumNine outputs valid sums so that the sums can be assigned to outputMatrix
	// helps determine when full convolution is complete
	// 						   		9 = reuse factor(cycles per computation)
	logic [$clog2(TOTAL_PIXELS*(filtDimension**2) + PIXELS_TO_FILL):0] counter; // 1 bit more than log2(total pixels) to account for load time

	// keeps track of which cycle of computation (for the dot product) the conv2Dsum module is on
	// we want cycle counter to after convolution window is filled
	logic [filtDimension:0] cycleCounter;

    // keeps track of the current column of the input matrix that aligns with the top left pixel of currConvMatrix
    // to determine when NOT to assign sums to the output (logic for no-padding implementation)
	// should not assign sums to the output (garbage data) when right side of filter exceeds the edge of currMatrix
    logic [$clog2(inputWidth)-1:0] currCol;
	
	// keeps track of which output matrix index to assign the sums to
	logic [$clog2(inputWidth-filtDimension+1)-1:0] currRow; 

	// index of the output matrix that the current sum is assigned to
	logic [$clog2(TOTAL_PIXELS):0] outputIdx;

	// for conv2Dwindow_reuse9
	logic shift_enable;

	// signal for conv2Dsum module to start computation
	logic start;

	// keeps track oc whether all sums are valid from all instances of conv2Dsum_reuse9
	logic [biasWidth-1:0] sumOutValid;
	logic allSumsValid;

	logic convMatrixFilled;
	
	// output matrix width is inputWidth-filtDimension+1 in case of no padding
	// with padding, use [inputWidth*inputWidth*biasWidth:0] assuming stride 1
	output logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];

	// signal indicating that this layer is ready for a new input to be streamed in
	output logic ready;

	// signal that indicates that the convolution is complete (output matrix is full)
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

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// input the new pixel and output the convolutional matrix
	conv2Dwindow_reuse9 #(filtDimension, bitWidth, inputWidth) currMatrix 
	(.clock(clk), .reset(reset), .inputPixel(inputPixel), .shift_enable(shift_enable), .currConvMatrix(currConvMatrix));


	// multiply the current matrix by the weights, take the sum and add the bias
	// takes 9 clock cycles to output each sum
	genvar i;
	generate
	   for(i=0; i<biasWidth; i++) begin: eachSumNine // biasWidth = number of filters
		   conv2Dsum_reuse9 #(filtDimension, bitWidth, inputWidth, NFRAC, i) conv2Dsum
	       (.clock(clk), .reset(reset), .start(start), .currMatrix(currConvMatrix), .bias(biases[i]), .sum(sum[i]), .outputValid(sumOutValid[i]));
	   end
	endgenerate 

	assign allSumsValid = sumOutValid == {biasWidth{1'b1}};
	// register to remove potential hazards
	// logic allSumsValidNext;
	// assign allSumsValidNext = sumOutValid == {biasWidth{1'b1}};
	// always_ff @(posedge clk) begin
	// 	allSumsValid <= allSumsValidNext;
	// end

	// counters
	always_ff @(posedge clk) begin
		if (reset) begin
			counter <= 0;
			cycleCounter <= 0;
		end
		else begin
			if (prevLayerValid) begin///////////////////////
				counter <= counter + 1;
				// start the cycleCounter after matrix is filled
				if (!convMatrixFilled) begin 
					cycleCounter <= 0;
				end
				else if (cycleCounter == COMPUTATION_TIME-1) begin
					cycleCounter <= 0; // value of cycleCounter is 0 when couter == COMPUTATION_TIME
				end
				else begin
					cycleCounter <= cycleCounter + 1; // cycleCounter increments the very first time convMatrix is filled :)
				end
			end////////////////////////////////
		end
	end

	// currMatrix should be shifting while pixels are loading and after every computation
	// doesn't shift when matrix is filled for the first time (at which point cycle_count == 0)
	// because position 0 should be held during very first computation
	assign shift_enable = (counter < LOAD_TIME) || ((counter > LOAD_TIME) && (cycleCounter == COMPUTATION_TIME-1)); 
	assign start = (counter >= LOAD_TIME) && (cycleCounter == 0);
	assign convMatrixFilled = (counter >= LOAD_TIME);

	// in rheed_gaussian connector module that has all the layers of the model, use a non-blocking assignment to
	// assign previous output to input. 
	// otherwise if we want to directly wire output from previous layer to input, use cycleCounter == 0 instead.
	// essentially, this module needs access to the new pixel when cycleCounter == 0.
	assign ready = (counter < LOAD_TIME) || (convMatrixFilled && (cycleCounter == COMPUTATION_TIME-2));

					// currRow * output matrix width + currCol
	assign outputIdx = currRow*(inputWidth-filtDimension+1) + currCol;

	integer j;
	always_ff @(posedge clk) begin
		if (reset) begin
            currCol <= 0;
			currRow <= 0;
		end
		else begin
			// after LOAD_TIME, every COMPUTATION_TIME many cycles(when cycleCounter is 0), update loaction of filter
			// logic below makes sure window doesn't shift before the end of the very first dot product
			if (allSumsValid) begin
                currCol <= (currCol == inputWidth - 1) ? 0 : (currCol + 1);
				currRow <= (currCol == inputWidth - 1) ? currRow + 1 : currRow;

				if (currCol < (inputWidth - filtDimension + 1)) begin // while not skipping & sum is valid
                    /* 
                    assign dot products to the output matrix in the format:
			        [(output channel 1 pixel 0~n), (output channel 2 pixel 0~n), ..., (output channel m pixel 0~n)]
			        */
					// currCol condition above already accounts for skips
                    for (j=0; j<biasWidth; j++) begin
                        outputMatrix[outputIdx + TOTAL_PIXELS*j] <= sum[j]; 
                    end

					// FOR TESTING: 
					newValidOutput <= 1'b1;
					validOutputIdx <= outputIdx; // valid output index of the first feature map (first filter)
					newOutputValues <= sum;
                end
				// FOR TESTING
				else begin // while skipping
					newValidOutput <= 1'b0;
				end
			end
		end
	end

	// assign complete = (counter > (LOAD_TIME + COMPUTATION_TIME + inputWidth*inputWidth + 1));
	// assign complete = !$isunknown(outputMatrix[TOTAL_PIXELS-1]); // only works in simulation(?)
	assign complete = (validOutputIdx == TOTAL_PIXELS-1); // maybe make this counter based

endmodule	


module conv2dOutput_reuse9_tb();
	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, biasWidth = 2, NFRAC = 10;

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1);
	localparam LOAD_TIME = inputWidth*(filtDimension-1);
	localparam COMPUTATION_TIME = filtDimension**2;

	logic clk, reset;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];
	logic complete;
	logic prevLayerValid, ready, newValidOutput;
	logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;
	logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];


	// dut
	conv2dOutput_reuse9 #(filtDimension, bitWidth, inputWidth, biasWidth, NFRAC) dut (.*);

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
		prevLayerValid <= 1; 
		
		for (i=0; i<inputWidth**2; i++) begin
			if(ready)
				inputPixel <= bitWidth'(i);
				@(posedge clk);
		end
		
		@(posedge complete);
		repeat(5) @(posedge clk);
		
		$stop;
	end

endmodule