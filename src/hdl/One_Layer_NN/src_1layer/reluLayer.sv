// Relu Layer
//
// This module takes parameters WIDTH (number of bits), NFRAC (number of bits which are fractional for fixed point),
// INPUT_SIZE, and OUTPUT_SIZE. It takes inputs clk, reset, and input_data and returns output output_data. 
// It computes the dot product of input_data and weights, adds that to the biases, then computes the relu
// activation of that.
//
// Inputs:
// - clk
// - reset
// - input_data: a 10 elements vector with each element being a signed 16-bit fixed pt #
//
// Intermediates:
// -weights: a 10x32 (rxc) array with each element being a signed fixed pt #
// -biases: a 32-element vector with each element being a signed fixed pt #
//
// Outputs:
// - output_data: a 32-element vector with each element being a signed fixed pt #
//                output = relu ( dot(input, weight) + bias )
// This module represents the first layer of the 1-layer NN

`timescale 1ns / 1ps
module reluLayer #(parameter 
        WIDTH               = 17,
        NFRAC               = 10,
        INPUT_SIZE          = 10,
        OUTPUT_SIZE         = 32,
        PACKING_ENABLE      = 1
    ) (clk, reset, input_data, output_data);
    // input_data is a vector with 10 elements, each element is a 16-bit fixed point #
    // output is a vector with 32 elements
    input logic clk, reset;
    input  logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]; 
   
    // intermediate value, this is consist of dot product w/ weights and adding biases
    logic signed [WIDTH-1:0] DLL_out [0:OUTPUT_SIZE-1];
    
    logic signed [WIDTH-1:0] result [0:OUTPUT_SIZE-1]; 
    
    // Compute the dotprod of the input data and weights, add it to the biases
    if (WIDTH <= 5 && PACKING_ENABLE == 1) begin
        // 3 mult operations per multiplier
        reluDenseLatencyLayer_PACKED_small #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( OUTPUT_SIZE       )
        ) dotprod (
            .clk,
            .reset,
            .input_data,
            .output_data    ( DLL_out       ));
    end else if (WIDTH <= 8 && PACKING_ENABLE == 1)
        // 2 mult operations per multiplier
        reluDenseLatencyLayer_PACKED #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( OUTPUT_SIZE       )
            ) dotprod (
            .clk,
            .reset,
            .input_data,
            .output_data    ( DLL_out       ));
    else begin
        // default with no muliplier packing
        reluDenseLatencyLayer #(
            .WIDTH          ( WIDTH             ),
            .NFRAC          ( NFRAC             ),
            .INPUT_SIZE     ( INPUT_SIZE        ),
            .OUTPUT_SIZE    ( OUTPUT_SIZE       )
        ) dotprod (
            .clk,
            .reset,
            .input_data,
            .output_data    ( DLL_out       ));
    end
    
    
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
    
    
    // Send output through register
    always_ff @(posedge clk) begin
        output_data <= result;
    end
    
    
endmodule

////////////////////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
module reluLayer_testbench();
    localparam WIDTH = 8, NFRAC = 4, INPUT_SIZE = 10, OUTPUT_SIZE = 32,
        RELU_WEIGHTS_FILE   = "bw8_nfrac4_reluWeights.mem",
        RELU_BIAS_FILE      = "bw8_nfrac4_reluBias.mem";
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] result [0:OUTPUT_SIZE-1];
    logic reset, clk;
  
    reluLayer #(.WIDTH(WIDTH),
                .NFRAC(NFRAC),
                .INPUT_SIZE(INPUT_SIZE),
                .OUTPUT_SIZE(OUTPUT_SIZE),
                .RELU_WEIGHTS_FILE(RELU_WEIGHTS_FILE),
                .RELU_BIAS_FILE(RELU_BIAS_FILE)
             ) dut (
        .clk,
        .reset,
        .input_data, 
        .output_data(result)
        );
    
    // file names
    integer inputs, i;
    
    localparam CLOCK_PERIOD = 10;
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) begin
            clk <= ~clk;
        end
    end
    
    initial begin
        
        $readmemb("bw8_nfrac4_inputs.mem", input_data);
        reset <= 1; @(posedge clk);
        reset <= 0; @(posedge clk);
        repeat(100) @(posedge clk);
        reset <= 1; @(posedge clk);
        reset <= 0; @(posedge clk);
        repeat(100) @(posedge clk);
        
        

            
        $stop;
    end
 endmodule