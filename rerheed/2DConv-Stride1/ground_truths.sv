// This module will be used to calculate the expected output of a 2D-conv layer based on the 
// given input matrix, biases, and weights. These calculations are done completely seperately from the 
// conv2Doutput_noRelu module. 
module ground_truths
	#(parameter inputWidth = 8,
	  parameter filtDimension = 3,
	  parameter bitWidth = 16,
	  parameter biasWidth = 2,
	  parameter NFRAC = 10
    )
	 
	 (input logic signed [bitWidth-1:0] inputMatrix [inputWidth-1:0] [inputWidth-1:0],
	 
	  input logic signed [bitWidth-1:0] biases [biasWidth-1:0],
	  
	  // for each filter we're going to have a filtDimension x filtDimension matrix of weights
	  input logic signed [bitWidth-1:0] weights [(filtDimension**2 * biasWidth)-1:0],
	   
	  // with padding the output matrix is the same size as the input 
	  output logic signed [bitWidth-1:0] outputMatrix [biasWidth*inputWidth**2-1:0]
	 );
	 
	 localparam TOTAL_PIXELS = inputWidth**2;
	 
	 logic signed [bitWidth-1:0] paddedMatrix [inputWidth+1:0] [inputWidth+1:0];
	 // add 0's to all the edges of the input matrix
	 always_comb begin
		for (int i = 0; i < inputWidth+2; i++) begin
			for (int j = 0; j < inputWidth+2; j++) begin
				if (i == 0 || i == inputWidth + 1 || j == 0 || j == inputWidth + 1)
					paddedMatrix[i][j] = '0;
				else 
					paddedMatrix[i][j] = inputMatrix[i-1][j-1];
			end
		end
	 end
	 
	 logic signed [bitWidth*2-1:0] products       [filtDimension**2-1:0];
	 logic signed [bitWidth-1:0]   trunc_products [filtDimension**2-1:0];
	 logic signed [bitWidth-1:0]   sum;
	 always_comb begin
		// outer for loop goes through each filter
		for (int filt = 0; filt < biasWidth; filt++) begin
			// start at coords (0, 0) and go to (inputWidth+2-filtDimension, inputWidth+2-filtDimension)
			// (i, j) represents the top left of the current kernel
			for (int i = 0; i <= inputWidth+2-filtDimension; i++) begin
				for (int j = 0; j <= inputWidth+2-filtDimension; j++) begin
					// we're now working with a filtDimension x filtDimension window of the padded matrix
					// need to perform element wise multiplication on the kernel & filter
					// then need to do truncation stuff
					for (int row = 0; row < filtDimension; row++) begin
						for (int col = 0; col < filtDimension; col++) begin
							products[row*filtDimension+col] = 
								paddedMatrix[i+row][j+col] * weights[filt*filtDimension**2 + row*filtDimension+col];
							// right shift every element in paddedMatrix (so we're not just doing the 
							// exact same computation as in sumNine
							products[row*filtDimension+col] = products[row*filtDimension+col] >>> NFRAC;
							trunc_products[row*filtDimension+col] = 
								products[row*filtDimension+col][bitWidth-1:0];
						end
					end
					// once we have filled up our trunc_products, add them up w/bias
					sum = '0;
					for (int q = 0; q < filtDimension**2; q++) begin
						sum += trunc_products[q];
					end	
					sum += biases[filt];
					outputMatrix[TOTAL_PIXELS*filt + inputWidth*i + j] = sum;
				end
			end
		end
		
	 end
	 
endmodule 