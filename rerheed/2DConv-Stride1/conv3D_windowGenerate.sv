// This module does the bulk of the convolution work. It goes through and takes the inputs from the input matrix
// once every clock cycle. It creates a matrix that holds the values that are currently being used for the 
// convolution and after each clock cycle, the values that are removed from that matrix go in to a buffer
// for all but the top row as they will be used again.
`timescale 1ns / 1ps
module conv3D_windowGenerate
  #(parameter filtDimension = 3,
	 parameter bitWidth = 16, 
	 parameter inputWidth = 8,
	 parameter inputChannels = 1)
	 
   (input logic clock, 
	
	 input logic reset, 
	 
	 input logic signed [bitWidth-1:0] inputPixels [0:inputChannels-1], 
	 
	 input logic inputValid,
	 
	 output logic signed [bitWidth-1:0] zeroedMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0]
	);
	
	logic signed [bitWidth-1:0] currentConvMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] outputFifo [0:inputChannels-1][filtDimension-2:0];
//	logic [filtDimension-1:0] counterRow;
//	logic [filtDimension-1:0] counterCol;
logic [$clog2(inputWidth)-1:0] counterRow;
logic [$clog2(inputWidth)-1:0] counterCol;
	logic [$clog2(inputWidth + 3)-1:0] initialCounter;
	
	// control counters
	// allows to know which row and column should be brought into bottom right
	// spot of the matrix
	// used to basically detect when to add padding to the output matrix
	always_ff @(posedge clock) begin
		if(reset) begin
			counterRow <= '0;
			counterCol <= '0;
			initialCounter <= '0;
		end else if (inputValid) begin
		    if(initialCounter == inputWidth+2) begin
                counterCol <= counterCol + 1'b1;
                if(counterCol == inputWidth-1) begin // if reaches end of row go to next column
					counterCol <= '0; // make sure we explicitly set counterCol back to 0
                	counterRow <= counterRow + 1'b1;
                end
            end else begin
                initialCounter <= initialCounter + 1'b1;
            end
   		end
	end
	
	integer ch,row,col;
	// shift values
    always_ff @(posedge clock) begin
		for(ch=0; ch<inputChannels; ch++) begin
			for(row=0; row<filtDimension; row++) begin
				for(col=0; col<filtDimension; col++) begin
					if(reset) begin
						currentConvMatrix[ch][filtDimension-1][filtDimension-1] <= inputPixels[ch];
					end else if (inputValid) begin
							// move in value from buffer
							if(col==filtDimension-1 && row!= filtDimension -1)begin
								currentConvMatrix[ch][row][col] <= outputFifo[ch][row];
							end else if(row==filtDimension-1 && col==filtDimension-1) begin
								// bringing in new value
								currentConvMatrix[ch][row][col] <= inputPixels[ch];
							end else begin
								// shift normally
								currentConvMatrix[ch][row][col]<= currentConvMatrix[ch][row][col+1];
							end
					end
				end
			end
		end
	end
		
	//put zeroes into 3x3 matrix
	// either we're outputting the currentConvMatrix, OR if we're on an edge, add padding
	integer c,a,b;
	always_comb begin
		for(c=0; c<inputChannels; c++) begin
			for(a=0; a<filtDimension; a++) begin
				for(b=0; b<filtDimension; b++) begin
					zeroedMatrix[c][a][b] = currentConvMatrix[c][a][b];
					if(counterCol == 0) begin
						zeroedMatrix[c][a][0] = 17'd0; // why is this 17 bits? 
					end
					if (counterCol == inputWidth - 1) begin
						zeroedMatrix[c][a][filtDimension-1] = 17'd0;
					end 
					if(counterRow == 0) begin
						zeroedMatrix[c][0][b] = 17'd0;
					end
					if(counterRow == inputWidth-1) begin
						zeroedMatrix[c][filtDimension-1][b] = 17'd0;
					end
				end
			end
		end
	end
	
	// create buffers to hold onto values as they are moved out of one row and into the row above
	// their previous one
	genvar i,j;
	generate 
	   for(j = 0; j<inputChannels; j++) begin: channelBuffers
		   for(i = 0; i<filtDimension-1; i++) begin: buffers
			   conv2dFIFO #(filtDimension,bitWidth,inputWidth) bufferEachRow
			   (.clock(clock),
				  .inputValid(inputValid),
				  .inputData(currentConvMatrix[j][i+1][0]), 
				  .outputData(outputFifo[j][i]));
		   end
	   end
	endgenerate
	
endmodule