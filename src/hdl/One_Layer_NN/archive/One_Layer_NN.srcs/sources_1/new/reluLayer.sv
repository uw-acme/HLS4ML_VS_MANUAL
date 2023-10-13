// This module represents the first layer of the 1-layer NN
/* 
 * The activation function of this dense layer is relu
 * The inputs:
 *      input_data: a 10 elements vector with each element being a signed 16-bit fixed pt #
 *      weight: a 10x32 (rxc) array with each element being a signed 16-but fixed pt #
 *      bias: a 32 elements vector with each element being a signed 16-bit fixed pt #
 * The output of this layer is a 31 elements vector with each element being a signed 16-bit fixed #
 *      output = relu ( dot(input, weight) + bias )
 */ 
 `timescale 1ns / 1ps
module reluLayer #(parameter WIDTH = 17, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 32) (clk, reset, input_data, output_data);
    // input_data is a vector with 10 elements, each element is a 16-bit fixed point #
    // output is a vector with 32 elements
    input logic clk, reset;
    input logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]; 
   
    // intermediate value, this is consist of dot product w/ weights and adding biases
    logic signed [WIDTH-1:0] DLL_out [0:OUTPUT_SIZE-1];
    // Weights & biases
    logic signed [WIDTH-1:0] weights [0:INPUT_SIZE*OUTPUT_SIZE-1], RELU_weights [0:INPUT_SIZE*OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] biases [0:OUTPUT_SIZE-1], RELU_biases [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] result [0:OUTPUT_SIZE-1]; 
    
    // Computing dot product w/ weights and adding biases
    denseLatencyLayer #(WIDTH, NFRAC, INPUT_SIZE, OUTPUT_SIZE) before_activation (.clk, .reset, .input_data(input_data), .weights, .biases, .output_data(DLL_out));

//    // Pipelining
//    logic signed [WIDTH-1:0] DLL_out [0:OUTPUT_SIZE-1];
//    DFF_2D #(WIDTH, OUTPUT_SIZE) DFF_dll (.clk, .reset, .d(accumulator), .q(DLL_out));
    
    // Activation fuction
    integer j;
    always_comb begin
        for (j = 0; j < OUTPUT_SIZE; j++) begin
            if (DLL_out[j][WIDTH-1] == 1'b1) begin
                result[j] = {WIDTH{1'b0}};
            end else begin
                result[j] = DLL_out[j];
            end
        end
    end
    
   always_ff @(posedge clk) begin
       weights <= RELU_weights;
       biases <= RELU_biases;
   end
    
    // Load in weights and biases as constants
    initial begin
        $readmemb("RELU_weights_fp.mem", RELU_weights);
        $readmemb("RELU_biases_fp.mem", RELU_biases);
    end
    
    // Send output through register
    DFF_2D #(WIDTH, OUTPUT_SIZE) dff_out (.clk, .reset, .d(result), .q(output_data));
    
endmodule

////////////////////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
module reluLayer_testbench();    
    logic signed [15:0] input_data [0:9];
    logic signed [15:0] result [0:31];
  
    reluLayer #(16, 32, 10) dut (.input_data, .result);
    
    // file names
    integer inputs, i;
    
    initial begin
        inputs = $fopen("inputs_fp.mem", "rb");
        $readmemb("inputs_fp.mem", input_data);
        $fclose(inputs);

        for (i=0; i<200; i++) begin
            #100;
        end
            
        $stop;
    end
 endmodule