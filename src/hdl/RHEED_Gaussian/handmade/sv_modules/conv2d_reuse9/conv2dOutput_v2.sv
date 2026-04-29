`timescale 1ns / 1ps
// this implementation is for a 2D convolution with NO PADDING

module conv2dOutput_v2  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, biases, prevLayerValid, outputMatrix, ready, complete, outputValid, validOutputIdx, newOutputValues);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;
	input logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	input logic prevLayerValid;
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] sum [biasWidth-1:0]; // stores the outputs to all the instances of sumNine each clock cycle

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)**2; // number of pixels in the OUTPUT image in each channel
	localparam PIXELS_TO_FILL = inputWidth*(filtDimension-1) + filtDimension; // number of input pixels needed to fill up the convolution window for the first time
	localparam COMPUTATION_TIME = filtDimension**2; // number of clk cycles to compute dot product per location of filter

	logic [$clog2(inputWidth**2)-1:0] pixelCount; // keeps track of number of pixels streamed in 
	logic [$clog2(filtDimension**2)-1:0] cycleCount;// keeps track of which cycle of computation sum module is on
    // logic convMatrixFilled;

    // keeps track of the current column of the input matrix that aligns with the top left pixel of currConvMatrix
    // to determine when NOT to assign sums to the output (logic for no-padding implementation)
	// should not assign sums to the output (garbage data) when right side of filter exceeds the edge of currMatrix
    logic [$clog2(inputWidth)-1:0] currCol;
	logic [$clog2(inputWidth-filtDimension+1)-1:0] currRow; // keeps track of which output matrix index to assign the sums to
	logic [$clog2(TOTAL_PIXELS):0] outputIdx; // index of the output matrix that the current sum is assigned to

	logic shiftEnable; // for conv2Dwindow_reuse9

	logic startSum; // signal for conv2Dsum module to start computation, must be asserted for 1 cycle only at the start of each computation
	logic summing; // signal that indicates a computation is in progress
	logic [biasWidth-1:0] sumOutValid; // keeps track of whether all sums are valid from all instances of conv2Dsum_reuse9
	logic allSumsValid;

	output logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0]; 
    output logic ready; // signal indicating that this layer is ready for a new input to be streamed in
	output logic complete; // signals when outputMatrix is full

	output logic outputValid; // signal that indicates when the output matrix is updated with a set of new output pixels.
	output logic [$clog2(TOTAL_PIXELS):0] validOutputIdx; // index within 1st output channel of outputMatrix that just updated with new output pixel
	output logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0]; // list values added to the output matrix during a given clock cycle

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Takes the new inputPixel and outputs the convolutional matrix (window)
	conv2Dwindow_reuse9 #(filtDimension, bitWidth, inputWidth) currMatrix 
	(.clock(clk), .reset(reset), .inputPixel(inputPixel), .shift_enable(shiftEnable), .currConvMatrix(currConvMatrix));

	// multiplies the current matrix by the each set of weights(for each output channel), takes the sum and adds the bias
	// takes filtDimention^2 many clock cycles to output each sum
	genvar i;
	generate
	   for(i=0; i<biasWidth; i++) begin: eachSumNine // biasWidth = number of filters
		   conv2Dsum_reuse9 #(filtDimension, bitWidth, inputWidth, NFRAC, i) conv2Dsum
	       (.clock(clk), .reset(reset), .start(startSum), .currMatrix(currConvMatrix), .counter(cycleCount), .bias(biases[i]), .sum(sum[i]), .outputValid(sumOutValid[i]));
	   end
	endgenerate 

	assign allSumsValid = (sumOutValid == {biasWidth{1'b1}});


	/* 
	counters/control
	*/ 
    always_ff @(posedge clk) begin
        if (reset) begin
            pixelCount <= 0;
            cycleCount <= 0;
            ready <= 1;
        end
        else begin
            if (ready && prevLayerValid) begin // shiftEnable condition
				if (pixelCount < PIXELS_TO_FILL-1) begin
					pixelCount <= pixelCount + 1; 
				end
                else begin// if (pixelCount >= PIXELS_TO_FILL-1) begin // >= cycle before convMatrix is filled for the first time
					ready <= 0;
					startSum <= 1;
					summing <= 1;
					cycleCount <= 0;
                end
			end
			else if (ready) begin // prevLayerValid is false
				if (cycleCount == COMPUTATION_TIME-1) begin
					cycleCount <= 0;
					summing <= 0;
				end
			end
			else begin // update every cycle 
				if (summing) begin
					if (startSum) begin
						startSum <= 0; // set to 0 so that startSum is never asserted for more that 1 clk cycle
					end
					//									   && not the last pixel --- so that module stop accepting new pixels
					if ((cycleCount == COMPUTATION_TIME-2) && (outputIdx < TOTAL_PIXELS-1)) begin
						ready <= 1;
					end
					cycleCount <= cycleCount + 1;
				end
			end
        end
    end // always_ff
	assign shiftEnable = (ready && prevLayerValid);
	

    /*
	Logic for assigning values to the outputMatrix
	*/
	assign outputIdx = currRow*(inputWidth-filtDimension+1) + currCol;

	integer j;
	always_ff @(posedge clk) begin
		if (reset) begin
            currCol <= 0;
			currRow <= 0;
			complete <= 0;
		end
		else begin
			// after LOAD_TIME, every COMPUTATION_TIME many cycles(when cycleCounter is 0), update loaction of filter
			// logic below makes sure window doesn't shift before the end of the very first dot product
			if (allSumsValid) begin
                currCol <= (currCol == inputWidth - 1) ? 0 : (currCol + 1);
				currRow <= (currCol == inputWidth - 1) ? currRow + 1 : currRow;

				if ((currCol < (inputWidth - filtDimension + 1)) && currRow < (inputWidth - filtDimension + 1)) begin // while not skipping & sum is valid
                    /* 
                    assign dot products to the output matrix in the format:
			        [(output channel 1 pixel 0~n), (output channel 2 pixel 0~n), ..., (output channel m pixel 0~n)]
			        */
					// currCol condition above already accounts for skips
                    for (j=0; j<biasWidth; j++) begin
                        outputMatrix[outputIdx + TOTAL_PIXELS*j] <= sum[j]; 
                    end

					outputValid <= 1'b1;
					validOutputIdx <= outputIdx; // valid output index of the first feature map (first filter)
					newOutputValues <= sum;
					
					if (outputIdx == TOTAL_PIXELS-1) begin
						complete <= 1;
					end
                end
			end
			else begin // while skipping
				outputValid <= 1'b0;
			end
		end
	end
	// assign complete = validOutputIdx == TOTAL_PIXELS-1;
endmodule


module conv2dOutput_v2_tb ();
	parameter filtDimension = 3, bitWidth = 16, inputWidth = 8, biasWidth = 2, NFRAC = 10;

	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)**2;
	localparam PIXELS_TO_FILL = inputWidth*(filtDimension-1) + filtDimension;
	localparam COMPUTATION_TIME = filtDimension**2;

	logic clk, reset;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 
	logic signed [bitWidth-1:0] outputMatrix [TOTAL_PIXELS*biasWidth-1:0];
	logic complete;
	logic prevLayerValid, ready, outputValid;
	logic [$clog2(TOTAL_PIXELS):0] validOutputIdx;
	logic signed [bitWidth-1:0] newOutputValues [biasWidth-1:0];

	// dut
	conv2dOutput_v2 #(filtDimension, bitWidth, inputWidth, biasWidth, NFRAC) dut (.*);

	assign biases = data16_10::convBiases;

	// simulation clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end

	integer i;
	initial begin
		reset <= 1'b1;	repeat(5) @(posedge clk);
		reset = 1'b0;
		prevLayerValid = 1'b1; 

		i=0;
		while (i<inputWidth**2) begin
			@(negedge clk);
			if (ready && prevLayerValid) begin
				inputPixel = bitWidth'(i);
				i++; 
			end
			@(posedge clk);
			$display("inputPixel: %d, currConvMatrix: %p, outputMatrix: %p", inputPixel, dut.currConvMatrix, outputMatrix);
		end

		@(posedge complete);
		repeat(5) @(posedge clk);
		
		$stop;
	end
endmodule




// /* 
// 	counters/control
// 	*/ 
//     always_ff @(posedge clk) begin
//         if (reset) begin
//             pixelCount <= 0;
//             cycleCount <= 0;
//             ready <= 1;
//         end
//         else begin
//             if (ready && prevLayerValid) begin // shiftEnable condition
// 				// if ([pixelCount < PIXELS_TO_FILL-1])
// 				pixelCount <= pixelCount + 1; 

//                 if (pixelCount >= PIXELS_TO_FILL-1) begin // >= cycle before convMatrix is filled for the first time
// 					ready <= 0;
// 					if (cycleCount == COMPUTATION_TIME-1) begin
// 						cycleCount <= 0;
// 						// summing <= 1; // unnecessary since summing is already 1
// 					end
// 					else begin
// 						startSum <= 1;
// 						summing <= 1;
// 					end
//                 end
// 			end
// 			else if (ready) begin // prevLayerValid is false
// 				if (cycleCount == COMPUTATION_TIME-1) begin
// 					summing <= 0;
// 				end
// 			end
// 			else begin // update every cycle 
// 				if (summing) begin
// 					if (startSum) begin
// 						startSum <= 0; // set to 0 so that startSum is never asserted for more that 1 clk cycle
// 					end
// 					if (cycleCount == COMPUTATION_TIME-2) begin
// 						ready <= 1;
// 					end
// 					// if (cycleCount == COMPUTATION_TIME-1) begin
// 					// 	cycleCount <= 0;
// 					// 	// ready <= 1;
// 					// 	summing <= 0; // overridden if (prevlayervalid & ready) is true
// 					// end
// 					// else begin
// 						cycleCount <= cycleCount + 1;
// 					// end
// 				end
// 			end
//         end
//     end // always_ff
// 	assign shiftEnable = (ready && prevLayerValid);