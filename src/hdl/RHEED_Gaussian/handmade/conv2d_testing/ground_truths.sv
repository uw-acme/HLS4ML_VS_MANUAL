// This module will be used to calculate the expected output of a 2D-conv layer based on the 
// given input matrix, biases, and weights. These calculations are done completely seperately from the 
// conv2Doutput_noRelu module. 
// ***no-padding version***
module ground_truths
	#(parameter inputWidth = 8,
	  parameter filtDimension = 3,
	  parameter bitWidth = 16,
	  parameter biasWidth = 2,
	  parameter NFRAC = 10
    )
	 
	 (//input logic signed [bitWidth-1:0] inputMatrix [inputWidth-1:0] [inputWidth-1:0],
      input logic signed [bitWidth-1:0] inputMatrix [0:inputWidth-1] [0:inputWidth-1],
	 
	  input logic signed [bitWidth-1:0] biases [0:biasWidth-1],
	  
	  // for each filter we're going to have a filtDimension x filtDimension matrix of weights
	  input logic signed [bitWidth-1:0] weights [(filtDimension**2 * biasWidth)-1:0],
	   
	  // without padding the output matrix shrinks by 2 in each dimension
	  output logic signed [bitWidth-1:0] outputMatrixGT [biasWidth*(inputWidth-filtDimension+1)**2-1:0]
	 );
	 
     // total pixels in the output image
	 localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)**2;
	 
	 logic signed [bitWidth*2-1:0] products       [filtDimension**2-1:0];
	 logic signed [bitWidth-1:0]   trunc_products [filtDimension**2-1:0];
	 logic signed [bitWidth-1:0]   sum;

	 always_comb begin
		// outer for loop executes for each filter
		for (int filt = 0; filt < biasWidth; filt++) begin
			// start at coords (0, 0) and go until (inputWidth-filtDimension, inputWidth-filtDimension)
			// (i, j) represents the top left of the current kernel
			for (int i = 0; i <= inputWidth-filtDimension; i++) begin // row counter
				for (int j = 0; j <= inputWidth-filtDimension; j++) begin // col counter
					// we're now working with a filtDimension x filtDimension window of the input matrix
					// need to perform element wise multiplication on the kernel & filter
					// then need to do truncation stuff
					for (int row = 0; row < filtDimension; row++) begin
						for (int col = 0; col < filtDimension; col++) begin
							products[row*filtDimension+col] = 
								inputMatrix[i+row][j+col] * weights[filt*filtDimension**2 + row*filtDimension+col];
							// right shift every element in inputMatrix (so we're not just doing the 
							// exact same computation as in sumNine
							products[row*filtDimension+col] = products[row*filtDimension+col] >>> NFRAC;
							trunc_products[row*filtDimension+col] = 
								products[row*filtDimension+col][bitWidth-1:0]; // ASSUMING WE DON'T NEED MSB
						end
					end
					// once we have filled up our trunc_products, add them up w/bias
					sum = '0;
					for (int q = 0; q < filtDimension**2; q++) begin
						sum += trunc_products[q];
					end	
					sum += biases[filt];
					outputMatrixGT[TOTAL_PIXELS*filt + (inputWidth-filtDimension+1)*i + j] = sum;
				end
			end
		end
		
	 end
	 
endmodule 
