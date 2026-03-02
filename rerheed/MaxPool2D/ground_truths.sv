// This module will be used to calculate the expected output of the max pooling 2D layer
// given an input matrix.
module ground_truths
 #(
	parameter inputWidth = 8,
	parameter bitWidth   = 16
  )
				
  (
  	input logic signed [bitWidth-1:0]  inputMatrixGT [inputWidth-1:0][inputWidth-1:0],

	output logic signed [bitWidth-1:0] outputMatrixGT [((inputWidth/2)**2) - 1:0]
  );
	
	// Returns the max value from the inputted 4 values.
	function automatic logic signed [bitWidth-1:0] max4
	  (
		logic signed [bitWidth-1:0] a, b, c, d
	  );

		logic signed [bitWidth-1:0] max_ab;
		logic signed [bitWidth-1:0] max_cd;

		max_ab = (a > b) ? a : b;
		max_cd = (c > d) ? c : d;
		max4   = (max_ab > max_cd) ? max_ab : max_cd;
	endfunction 
	
	localparam TOTAL_PIXELS = inputWidth**2;
	localparam ODD = inputWidth % 2 == 1;
	localparam TRIM = inputWidth - ODD;
	
	always_comb begin
		for (int row = 1; row < TRIM; row+=2) begin
			for (int col = 1; col < TRIM; col+=2) begin
				logic signed [bitWidth-1:0] max;
				max = 
					 max4(inputMatrixGT[row-1][col-1],
							inputMatrixGT[row-1][col],
							inputMatrixGT[row][col-1], 
							inputMatrixGT[row][col]);
				outputMatrixGT[((row-1)*TRIM/4) + (col-1)/2] = max;
			end
		end
	end  // always_comb
endmodule
