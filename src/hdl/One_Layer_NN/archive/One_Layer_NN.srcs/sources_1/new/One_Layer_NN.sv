`timescale 1ns / 1ps
module One_Layer_NN #(parameter WIDTH = 17, parameter NFRAC = 10, OUTPUT_SIZE = 1, INPUT_SIZE = 10, RELU_OUT_SIZE = 32) (
    input clk_p,
    input clk_n,
    input reset,
    input logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
    );
    
    logic clk, locked;
    clk_wiz_0 PLL (
    // Clock out ports
    .clk_out1(clk),     // output clk_out1
    // Status and control signals
    .reset(reset), // input reset
    .locked(locked),       // output locked
    // Clock in ports
    .clk_in1_p(clk_p),    // input clk_in1_p
    .clk_in1_n(clk_n)     // input clk_in1_n
    );    // input clk_in1_n
    
    
    logic signed [WIDTH-1:0] in [0: INPUT_SIZE-1];
    logic signed [WIDTH-1:0] out [0: OUTPUT_SIZE-1];
    
    
    // input layer: array of size 10, no work needs to be done
    DFF_2D #(WIDTH, INPUT_SIZE) din (.clk, .reset, .d(input_data), .q(in));
    
    // RELU: Dense Layer, takes in array of size 10 and outputs array of size 32
    logic signed [WIDTH-1:0] relu_out [0:RELU_OUT_SIZE-1];
    reluLayer #(WIDTH, NFRAC, INPUT_SIZE, RELU_OUT_SIZE) relu (.clk, .reset, .input_data(in), .output_data(relu_out));
    
    // Sigmoid: Dense Layer, takes in array of size 32 and outputs array of size 1 which is final output
    sigmoidLayer #(WIDTH, NFRAC, RELU_OUT_SIZE, OUTPUT_SIZE) sig_layer (.clk, .reset, .input_data(relu_out), .output_data(out));
    
    DFF_2D #(WIDTH, OUTPUT_SIZE) dout (.clk, .reset, .d(out), .q(output_data));
endmodule

module One_Layer_NN_testbench();
    logic clk_p;
    logic clk_n;
    logic reset;
    logic signed [16:0] input_data [0:9];
    logic signed [16:0] output_data [0:0];
    
    One_Layer_NN dut (clk_p, clk_n, reset, input_data, output_data);
    
    parameter CLOCK_PERIOD = 100;
    
    initial begin
        clk_p <= 0;
        clk_n <= 1;
        forever #(CLOCK_PERIOD/2) begin
            clk_p <= ~clk_p;
            clk_n <= ~clk_n;
        end
    end
    
    // file names
    integer input1, input2, i;
    
    // Read in mem, index into it and add 1 to that value
    initial begin
        // First set of inputs
        input1 = $fopen("inputs_fp1.mem", "rb");
        $readmemb("inputs_fp1.mem", input_data);
        $fclose(input1);
        
        reset <= 1; @(posedge clk_p);
        reset <= 0; @(posedge clk_p);

        for (i = 0; i < 500; i++) begin
            @(posedge clk_p);
        end
        
        // Second set of inputs
        input2 = $fopen("inputs_fp.mem", "rb");
        $readmemb("inputs_fp.mem", input_data);
        $fclose(input2);
        
        for (i = 0; i < 500; i++) begin
            @(posedge clk_p);
        end
        
        $stop;
    end
 endmodule
    
    
    
    
    
    
