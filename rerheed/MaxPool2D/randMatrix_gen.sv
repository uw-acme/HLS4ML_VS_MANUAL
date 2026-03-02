// This module generates a random inputWidth x inputWidth matrix when the generateMatrix
// signal is asserted.
module randMatrix_gen  
 #(
	parameter inputWidth = 8,
	parameter bitWidth   = 16
  )
				
  (
	input logic generateMatrix, 
	
	output logic signed [bitWidth-1:0] randMatrix [inputWidth-1:0][inputWidth-1:0]
  );
  
  always_comb begin
		if (generateMatrix) begin
			for (int i = 0; i < inputWidth; i++) begin
				for (int j = 0; j < inputWidth; j++) begin
					randMatrix[i][j] = $urandom;
				end
			end
		end	
	end
endmodule
