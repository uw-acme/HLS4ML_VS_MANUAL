`timescale 1ns / 1ps
// this implementation is for a 2D convolution with NO PADDING

module conv2dOutput_v4  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, biases, inputValid, inputReady, outputReady, outputPixel, outputValid);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  biases [0:biasWidth-1]; 

	// upstream handshake
	input logic signed [bitWidth-1:0]  inputPixel;
	input logic inputValid;
    output logic inputReady; // this layer is ready for a new input to be streamed in

    // downstream handshake
    output logic signed [bitWidth-1:0] outputPixel [biasWidth-1:0]; // 1 value for each output channel
	output logic outputValid; // indicates new output values are produced
    input logic outputReady;
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] sum [biasWidth-1:0]; // stores the outputs to all the instances of sumNine each clock cycle

	localparam COMPUTATION_TIME = filtDimension**2; // number of clk cycles to compute dot product per location of filter

	logic [$clog2(COMPUTATION_TIME)-1:0]  counter;// keeps track of which cycle of computation sum module is on
   
    logic shiftEnable; 
    logic positionValid, nextPositionValid;
	logic startSum; // asserted for 1 cycle only at the start of each computation
	logic [biasWidth-1:0] sumOutValid; 
	logic allSumsValid; // sums are valid from all instances of conv2Dsum
	logic sumWaiting; // high if next pixel is computed before previous pixel is consumed

	// Takes the new inputPixel and outputs the convolutional matrix (window)
	conv2Dwindow_reuse9 #(filtDimension, bitWidth, inputWidth) currMatrix 
	(.clock(clk), .reset(reset), .inputPixel(inputPixel), .shiftEnable(shiftEnable), .currConvMatrix(currConvMatrix),
     .positionValid(positionValid), .nextPositionValid(nextPositionValid));

	// multiplies the current matrix by the each set of weights(for each output channel), takes the sum and adds the bias
	// takes filtDimention^2 many clock cycles to output each sum
	genvar i;
	generate
	   for(i=0; i<biasWidth; i++) begin: eachSumNine // biasWidth = number of filters
		   conv2Dsum_reuse9 #(filtDimension, bitWidth, NFRAC, i) conv2Dsum
	       (.clock(clk), .reset(reset), .start(startSum), .currMatrix(currConvMatrix), .counter(counter), .bias(biases[i]), .sum(sum[i]), .outputValid(sumOutValid[i]));
	   end
	endgenerate 

	assign allSumsValid = (sumOutValid == {biasWidth{1'b1}});

	// sumWaiting
	always_ff @(posedge clk) begin
		if (allSumsValid && outputValid && !outputReady) begin
			sumWaiting <= 1;
		end
		else if (sumWaiting && outputReady) begin
			sumWaiting <= 0;
		end
	end


	// Control FSM
    typedef enum logic [1:0] {FILL, COMPUTE, STALL} states;
	states ps, ns;

	// next-state logic / state-based output logic
	always_comb begin
		// defaults
		ns = ps;
		inputReady = 0;
		shiftEnable = 0;
		startSum = 0;
		case (ps) 
			FILL: begin
				inputReady = 1;
				if (inputValid) begin
					shiftEnable = 1;
					if (nextPositionValid) begin
						ns = COMPUTE;
					end
				end
			end
			COMPUTE: begin
				inputReady = 0;
				if (counter == 0) begin
					startSum = 1;
					shiftEnable = 0;
				end
				else if (counter == COMPUTATION_TIME -1) begin
					// outputReady ensures previous pixel was consumed
					// even if outputValid is still true at this time, the fact that outputReady is true means
					// that the previous pixel will be consumed the next cycle, making room for the next computation
					if (outputReady && inputValid) begin
						shiftEnable = 1;
						inputReady = 1;
						if (nextPositionValid) begin 
							ns = COMPUTE;
						end	
						else begin
							ns = FILL;
						end
					end
					else begin
						ns = STALL;
					end
				end
			end
			STALL: begin
				inputReady = 0;
				// if (!outputValid || outputReady) begin  // otherwise stall: current pixel is not yet consumed
					if (outputReady && outputValid) begin // added outputValid condition
						inputReady = 1;
						if (inputValid) begin
							shiftEnable = 1;
							if (nextPositionValid) begin
								ns = COMPUTE;
								// startSum = 1;
							end
							else begin
								ns = FILL;
							end
						end
						else begin
							ns = FILL;
						end
					end
				// end
			end
		endcase
	end

	// state update logic
	always_ff @(posedge clk) begin
		if (reset) begin
			ps <= FILL;
		end
		else begin
			ps <= ns;
		end
	end

// Counter
	always_ff @(posedge clk) begin
		if (reset) begin
			counter <= 0;
		end
		else begin
			if (ps == COMPUTE) begin 
				if (counter == COMPUTATION_TIME - 1) begin
					counter <= 0;
				end
				else begin
					counter <= counter + 1;
				end
			end
			else begin
				counter <= 0;
			end
		end
	end
  
	//--------------
	// Remedy for positionValid bug (updating too quickly)
	logic positionValid_delayed;
	always_ff @(posedge clk) begin
		positionValid_delayed <= positionValid;
	end
	//--------------
	// Downstream handshake / output assignment
	always_ff @(posedge clk) begin
		if (reset) begin
            outputValid <= 0;
		end
		else begin
			if (allSumsValid && (positionValid || positionValid_delayed)) begin // while not skipping & sum is valid
				if (!outputValid || outputReady) begin // if output is empty or currently clearing out
					outputValid <= 1;
					outputPixel <= sum;
				end
			end
			else if (sumWaiting && outputReady) begin
				outputValid <= 1;
				outputPixel <= sum;
			end
            else if (outputValid && outputReady && (!allSumsValid)) begin // existing output is consumed by next layer
                outputValid <= 0; // inputValid signal
            end
		end
	end
endmodule