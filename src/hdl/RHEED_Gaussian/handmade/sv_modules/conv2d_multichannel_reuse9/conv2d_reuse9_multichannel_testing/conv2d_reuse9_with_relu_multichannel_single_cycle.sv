// This module will be used to calculate the expected output of a 2D-conv layer based on the 
// given input matrix and biases. These calculations are done completely seperately from the 
// conv2Doutput_noRelu module. 
// ***no-padding version***
module conv2d_reuse9_with_relu_multichannel_single_cycle
	#(parameter inputChannels = 1,
	  parameter inputWidth = 8,
	  parameter filtDimension = 3,
	  parameter bitWidth = 16,
	  parameter biasWidth = 2,
	  parameter NFRAC = 10
    )
	 
	 (//input logic signed [bitWidth-1:0] inputMatrix [inputWidth-1:0] [inputWidth-1:0],
      input logic signed [bitWidth-1:0] inputMatrix [0:inputChannels-1][0:inputWidth**2-1], // 1d array easier to stream in
	  input logic signed [bitWidth-1:0] biases [0:biasWidth-1],
	  // without padding the output matrix shrinks by 2 in each dimension
	  output logic signed [bitWidth-1:0] outputMatrix_sc [biasWidth*(inputWidth-filtDimension+1)**2-1:0]
	 );
	 
    // total pixels in the output image
	localparam TOTAL_PIXELS = (inputWidth-filtDimension+1)**2;
	 
	// stores each dot product + bias
	logic signed [2*bitWidth+$clog2((filtDimension**2)*inputChannels)-1:0] accumulator;
	logic signed [bitWidth-1:0] pixel;
	logic signed [bitWidth-1:0] weight;
	logic signed [bitWidth-1:0] trunc_accum;
	logic signed [bitWidth-1:0] relu_out;


	 always_comb begin
		// for each filter
		for (int filt = 0; filt < biasWidth; filt++) begin
			// for each output row
			for (int output_row = 0; output_row <= inputWidth-filtDimension; output_row++) begin 
				// for each output col
				for (int output_col = 0; output_col <= inputWidth-filtDimension; output_col++) begin 

					accumulator = biases[filt] <<< NFRAC; // initialize to bias, then start accumulating products

					// for each input channel
					for (int ch = 0; ch < inputChannels; ch++) begin
						// for each location in filter
						for (int kernel_row= 0; kernel_row < filtDimension; kernel_row++) begin
							for (int kernel_col = 0; kernel_col < filtDimension; kernel_col++) begin

								pixel = inputMatrix[ch][inputWidth*(output_row + kernel_row) + (output_col + kernel_col)];
								// weight = conv2d_reuse9_test_data::convWeights[filtDimension**2*filt + kernel_row*filtDimension + kernel_col];
								weight = conv2d_reuse9_multichannel_test_data::convWeights[(filt*inputChannels+ch)*filtDimension**2+(kernel_row*filtDimension)+kernel_col];
								accumulator = accumulator + pixel * weight;

							end
						end
					end
					// truncate
					trunc_accum = accumulator[NFRAC+bitWidth-1:NFRAC];
					relu_out = trunc_accum[bitWidth-1] ? '0 : trunc_accum;
					outputMatrix_sc[TOTAL_PIXELS*filt + output_row*(inputWidth-filtDimension+1) + output_col] = relu_out;
 
				end
			end
		end
		
	 end
	 
endmodule 
