// Wrapper module for MaxPool2D testbench.
module maxPool2D_tb_wrapper();
	parameter inputWidth = 300;
	parameter bitWidth   = 16;
	
	localparam CAPACITY = inputWidth**2;
	localparam ODD = inputWidth % 2 == 1;
	localparam TRIM = inputWidth - ODD;
	
	logic clk, reset, inputReady;
	logic signed [bitWidth-1:0]  inputPixel;
	logic signed [bitWidth-1:0] outputMatrix [((inputWidth/2)**2) - 1:0];
	logic complete;
	
	// dut
	MaxPool2D #(inputWidth, bitWidth) dut (.*);
	
	// input for ground truths module
	logic signed [bitWidth-1:0]  inputMatrixGT [inputWidth-1:0][inputWidth-1:0];
	logic signed [bitWidth-1:0] outputMatrixGT [((inputWidth/2)**2) - 1:0];
	
	// generate correct output
	ground_truths #(inputWidth, bitWidth) gt (.*);
	
	// set up the clock
	parameter CLOCK_PERIOD = 100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk;
	end
	
	// verify that the dut output matches the ground_truths output
	always_ff @(posedge clk) begin
		if (dut.newValidOutput) begin
			assert(dut.newOutputVal == outputMatrixGT[dut.validOutputIdx])
				$display("PASS   dut: %0d, expected: %0d", dut.newOutputVal, outputMatrixGT[dut.validOutputIdx]);
			else 
			   $error("FAIL     dut: %0d, expected: %0d", dut.newOutputVal, outputMatrixGT[dut.validOutputIdx]);
		end
	end
	
	// random input matrix generation
	logic gen_matrix; 
	randMatrix_gen #(inputWidth, bitWidth) matrix_gen 
		(.generateMatrix(gen_matrix), 
		 .randMatrix(inputMatrixGT));
	
	// input pixel generation
	initial begin
		reset = 1'b1; gen_matrix = 1'b1; inputReady = 1'b0; @(posedge clk);
		reset = 1'b0; gen_matrix = 1'b0; repeat(10) @(posedge clk);
		inputReady = 1'b1;
		for (int i = 0; i < inputWidth; i++) begin
			for (int j = 0; j < inputWidth; j++) begin
				inputPixel = inputMatrixGT[i][j];
				@(posedge clk);
			end
		end
		repeat(20) @(posedge clk);
		
		// test second image
		reset = 1'b1; gen_matrix = 1'b1; inputReady = 1'b0; @(posedge clk);
		reset = 1'b0; gen_matrix = 1'b0; repeat(10) @(posedge clk);
		inputReady = 1'b1;
		for (int i = 0; i < inputWidth; i++) begin
			for (int j = 0; j < inputWidth; j++) begin
				inputPixel = inputMatrixGT[i][j];
				@(posedge clk);
			end
		end
		repeat(20) @(posedge clk);
		
		// test third image
		reset = 1'b1; gen_matrix = 1'b1; inputReady = 1'b0; @(posedge clk);
		reset = 1'b0; gen_matrix = 1'b0; repeat(10) @(posedge clk);
		inputReady = 1'b1;
		for (int i = 0; i < inputWidth; i++) begin
			for (int j = 0; j < inputWidth; j++) begin
				inputPixel = inputMatrixGT[i][j];
				@(posedge clk);
			end
		end
		repeat(20) @(posedge clk);
		
		// test fourth image
		reset = 1'b1; gen_matrix = 1'b1; inputReady = 1'b0; @(posedge clk);
		reset = 1'b0; gen_matrix = 1'b0; repeat(10) @(posedge clk);
		inputReady = 1'b1;
		for (int i = 0; i < inputWidth; i++) begin
			for (int j = 0; j < inputWidth; j++) begin
				inputPixel = inputMatrixGT[i][j];
				@(posedge clk);
			end
		end
		repeat(20) @(posedge clk);
		$stop;
	end
endmodule
