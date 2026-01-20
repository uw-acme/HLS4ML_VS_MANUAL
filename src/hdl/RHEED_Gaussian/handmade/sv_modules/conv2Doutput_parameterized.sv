`timescale 1ns / 1ps
// this is the overall connector module for the convolution layer of the 2D CNN.
// this is the first layer in the model. it takes as input the system clock, clk, the system
// reset, as well as the current inputPixel. it also takes as inputs the weights and biases
// for the convolution. it outputs the current output matrix which takes the input data
// and makes a matrix of it and the previous 63 inputPixels and computes the convolution of that.
// it also outputs when calculations are complete, the signal calculationsComplete which for an
// 8x8 input matrix is after 64 clock cycles.
module conv2Doutput_parameterized  #(parameter filtDimension = 3, parameter bitWidth = 17,
parameter inputWidth = 8, parameter weightWidth = 18, parameter biasWidth = 2, parameter NFRAC = 10)
(clk, reset, inputPixel, outputMatrix, biases);

	input logic clk, reset;
	input logic signed [bitWidth-1:0]  inputPixel;

	// biasWidth = # of filters = number of biases = number of output channels
	// (1 bias value per filter)
	input logic signed [bitWidth-1:0]  biases [biasWidth-1:0]; 
	
	logic signed [bitWidth-1:0] currConvMatrix [filtDimension-1:0][filtDimension-1:0];

	// output to sumNine (result of most recent dot product + added bias )
	logic signed [bitWidth-1:0] sum [biasWidth-1:0];


    // counter to keep track of how far we are into computing(how many pixels have streamed in)
	// helps determine when convolution results are valid
	localparam BASE_LEVEL = ($clog2(inputWidth*inputWidth)) + 1; // +1 padding since we need to count up to more than inputWidth^2 to account for latency, etc.
	logic [BASE_LEVEL:0] counter;
	logic [bitWidth-1:0] reluOutput [biasWidth-1:0];

	// to know that we need to read data in before we start counting
	logic firstTime; // delays first convolution until enough pixels have streamed in to fill currConvMatrix
	logic reset_copy;
	logic oscillator; // for relu
	
	// FIX_COUNT is used to keep track of progress through the convolution
	// for an input size of 8x8, the convolution will take:
	// 64 cycles(for input pixels being streamed in 1 at a time) + FIX_COUNT,
	// FIX_COUNT being the additional clock cycles needed to compute the dot product for each currConvMatrix
	localparam FIX_COUNT = (bitWidth>20) ? ($clog2(weightWidth/2)+2) : ($clog2(weightWidth/2)+1) ;
	logic signed [bitWidth-1:0] tempSum [biasWidth-1:0]; // for relu
	
	// output matrix width is inputWidth-2 in case of no padding
	// with padding, use [inputWidth*inputWidth*biasWidth/(stride^2)-1:0]
	// dividing output matrix size reflects stride length (ex. /4 for stride 2)
	output logic signed [bitWidth-1:0] outputMatrix [(inputWidth-2)*(inputWidth-2)*biasWidth-1:0];

	logic firstTimeFullyThrough; // keeps track of when to start the relu computation
	
	always_ff @(posedge clk) begin
	   reset_copy <= reset; // registered reset to avoid timing issues(?)
	end
	
	// for the first time going through, the convolution should not start until the
	// first zero from the padding reaches the middle of the matrix //GAUSSIAN DOESN'T USE PADDING
	// the counter and first time delay this so the convolution will not start happening until then
	always_ff @(posedge clk) begin
		if(reset_copy) begin
			counter <= 0;
			firstTime <= 1;
			firstTimeFullyThrough <= 1;
		end else begin
			/*
			conditions:
			1) counter == inputWidth && firstTime:	top row of currConvMatrix is filled & 2nd row is starting to fill
			2) 
			*/
			if(counter == inputWidth && firstTime || firstTimeFullyThrough && counter == (FIX_COUNT+1)+inputWidth**2 || counter == inputWidth**2-1) begin
				// counter restarts after gone through fully
				counter <= 0;
				firstTime <= 0;

				if(counter == (FIX_COUNT+1)+inputWidth**2)// WHY ADD THE FIX_COUNT??
					firstTimeFullyThrough <= 0;
			end else begin
				counter <= counter + 1;
			end
		end
	end
	

	// input the new pixel and output the convolutional matrix
	conv2D_parameterized #(filtDimension,bitWidth,inputWidth) currMatrix 
	(.clock(clk), .reset(reset_copy), .inputPixel(inputPixel), .currConvMatrix(currConvMatrix));
	
	/** the following two lines would need to be adjusted based on how many filters are being used,
	since we are using 2 here there are only 2 different needed 
	 i am not sure how we would split the weights for if there were more than 2 filters        **/// <- MUST CHANGE FOR GAUSSIAN
	 
	//  always_ff @ (posedge clk) begin
	//    currConvMatrixCopy <= currConvMatrix; // currConvMatrixCopy is never used???? is line 88 supposed to use the copy???                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	//  end
	
	// multiply the current matrix by the weights and take the sum
	genvar i;
	generate
	   for( i = 0; i < biasWidth; i++) begin // looping for biasWidth, so assuming biasWidth = number of filters
		   conv2DsumNine_parameterized #(filtDimension, bitWidth, inputWidth, weightWidth, NFRAC, i) sumBasedFilter1
	       (.clock(clk), .currConvMatrix(currConvMatrix), .sum(sum[i]), .bias(biases[i]));
	   end
	endgenerate 

	// this is relu layer!!!!

	// if the current dot product is negative, assign the current relu output to zero,
	// otherwise directly assign the current sum to the relu output
	// always_comb begin
	//    for( int i = 0; i < biasWidth; i++) begin
    //        if (sum[i][bitWidth-1] == 1'b1) begin
    //           reluOutput[i] = {bitWidth{1'b0}};
    //        end else begin
    //            reluOutput[i] = sum[i];
    //        end
    //     end
	// end
	
	// tempSum is the same as reluOutput, but delayed 1 clock cycle
	// always_ff @(posedge clk) begin
	//    for( int i = 0; i < biasWidth; i++) begin
    //        tempSum[i] <= reluOutput[i];
    //     end
	// end
	
	// always_ff @(posedge clk) begin
	//    if (reset) oscillator <= 0;
	//    else oscillator <= oscillator + 1;
	// end

	// always_ff @(posedge clk) begin
    //     if(firstTimeFullyThrough && oscillator) begin
    //     outputMatrix[(counter-13)*4] <= reluOutput[0];
    //     outputMatrix[(counter-13)*4+1] <= reluOutput[1];
    //     outputMatrix[(counter-13)*4+2] <= reluOutput[2];
    //     outputMatrix[(counter-13)*4+3] <= reluOutput[3];
    //     outputMatrix[(counter-13)*4+4] <= reluOutput[4];
    //     outputMatrix[(counter-13)*4+5] <= reluOutput[5];
    //     outputMatrix[(counter-13)*4+6] <= reluOutput[6];
    //     outputMatrix[(counter-13)*4+7] <= reluOutput[7];
    //     end else if (oscillator) begin
    //     outputMatrix[2*counter +1] <= tempSum[0];
    //     end
	// end
	
endmodule
