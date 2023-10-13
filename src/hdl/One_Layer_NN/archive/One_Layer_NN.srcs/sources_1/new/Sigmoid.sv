// sigmoidLayer takes parameters WIDTH (number of bits), NFRAC (number of bits which are fractional for fixed point),
// INPUT_SIZE, and OUTPUT_SIZE. It takes inputs clk, reset, and input_data and returns output output_data. 
// It computes the dot product of input_data and weights, adds that to the biases, then computes the sigmoid
// activation of that value as the output using BRAM.

`timescale 1ns / 1ps
module sigmoidLayer #(parameter WIDTH=17, NFRAC = 10, INPUT_SIZE = 32, OUTPUT_SIZE = 1)(
    input clk,
    input reset,
    input logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);

    // Set table size to 2^NFRAC, which is number of fixed point fractional bits
    localparam TABLE_SIZE = 2**NFRAC;
    // EXTENDED_LENGTH is used for sign extending values to perform calculations that involve TABLE_SIZE since it can be large.
    localparam EXTEND_LENGTH = WIDTH + NFRAC + 1;

    logic signed [EXTEND_LENGTH-1-NFRAC:0] addr;
    logic signed [WIDTH-1:0] dout_ram, dout_ram_temp, low_thresh, high_thresh, pos5, neg5;    
    logic signed [NFRAC-1:0] bram [0:TABLE_SIZE-1];   
    logic signed [WIDTH-1:0] DLL_out [0:OUTPUT_SIZE-1];
    logic signed [EXTEND_LENGTH-1:0] sign_ext_result, addr_temp, tabxresult, tabdiv16, tabdiv2;
    logic signed [WIDTH-1:0] weights [0:INPUT_SIZE*OUTPUT_SIZE-1], Sig_weights [0:INPUT_SIZE*OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] biases [0:OUTPUT_SIZE-1], Sig_biases [0:OUTPUT_SIZE-1];

    
    // Compute the dotprod of the input data and weights, add it to the biases
    denseLatencyLayer #(WIDTH, NFRAC, INPUT_SIZE, OUTPUT_SIZE) dotprod (.clk, .reset, .input_data, .weights, .biases, .output_data(DLL_out));
        
    //////////////////////////////////////////////////////////////////////////////
    // Equation to compute addr of Sigmoid BRAM:
    // addr = result[0] * TABLE_SIZE / 16 + TABLE_SIZE / 2
   
    // Pipelining
//    logic signed [WIDTH-1:0] DL_out [0:OUTPUT_SIZE-1];
//    DFF_2D #(WIDTH, OUTPUT_SIZE) dff_DL (.clk, .reset, .d(result), .q(DL_out));
    
    // Sign extend dot product output to EXTEND_LENGTH to account for the need to use TABLE_SIZE in calculations
    // as it can be a large number.
    assign sign_ext_result[EXTEND_LENGTH-1:WIDTH] = {WIDTH{DLL_out[0][WIDTH-1]}};
    assign sign_ext_result[WIDTH-1:0] = DLL_out[0];
    
    // TABLE_SIZE / 16 in fixed point notation
    assign tabdiv16[EXTEND_LENGTH-1] = 1'b0;
    assign tabdiv16[EXTEND_LENGTH-2:NFRAC] = TABLE_SIZE / 16;
    assign tabdiv16[NFRAC-1:0] = 10'b0;
    
    // TABLE_SIZE / 2 in fixed point notation
    assign tabdiv2[EXTEND_LENGTH-1] = 1'b0;
    assign tabdiv2[EXTEND_LENGTH-2:NFRAC] = TABLE_SIZE / 2;
    assign tabdiv2[NFRAC-1:0] = 10'b0;
        
    // Result of tabdiv16 multiplied by sign extended result of dot product using fixed point multiplier
    fp_mult #(NFRAC, EXTEND_LENGTH) tabxres (.a(tabdiv16), .b(sign_ext_result), .result(tabxresult));

    // Pipelining
    logic signed [EXTEND_LENGTH-1:0] tablediv;
    DFF #(EXTEND_LENGTH) dff_tab (.clk, .reset, .d(tabxresult), .q(tablediv));
    
    // Address of bram in fixed point
    assign addr_temp = tablediv + tabdiv2;
    
    // Take only the integer bits of fixed point number to use as index
    assign addr = addr_temp[EXTEND_LENGTH-1:NFRAC];
    
    
    assign pos5[NFRAC-1:0] = {NFRAC{1'b0}};
    assign neg5[NFRAC-1:0] = {NFRAC{1'b0}};
    assign pos5[WIDTH-1:NFRAC] = 5;
    assign neg5[WIDTH-1:NFRAC] = -5;
    
    // Add result of dot product with +5, if the answer is less than 0, it is 
    // out of the important range of values
    assign low_thresh = DLL_out[0] + pos5;
    
    // Add result of dot product with -5, if the answer is greater than 0, it is 
    // out of the important range of values
    assign high_thresh = DLL_out[0] + neg5;
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Compute output of Sigmoid layer. 0 if output of dot product is > 5 or < -5. Otherwise access BRAM.
    always_comb begin
        if (low_thresh[WIDTH-1] == 1'b1) begin
            output_data[0] = 0;
        end else if (high_thresh[WIDTH-1] == 1'b0) begin
            output_data[0] = {1'b0, {(WIDTH-1){1'b1}}};
        end else begin
            output_data[0] = dout_ram;
        end        
    end
    
    
    // Put registers loaded in from .mem files through dffs
    always_ff @(posedge clk) begin
        dout_ram_temp <= bram[addr];
        dout_ram <= dout_ram_temp;
        weights <= Sig_weights;
        biases <= Sig_biases;
    end
    
    // Read in sigmoid values into bram as well as weights and biases.
    initial begin
        $readmemb("Sigmoid_BRAM.mem", bram);
        $readmemb("Sigmoid_weights_fp.mem", Sig_weights);
        $readmemb("Sigmoid_biases_fp.mem", Sig_biases);
    end
endmodule


module Sigmoid_testbench();
    parameter WIDTH = 17;
    parameter TABLE_SIZE = 65536;
    logic clk, reset;
    //logic signed [WIDTH-1:0] weights [0:31];
    //logic signed [WIDTH-1:0] biases [0:0];
    logic signed [WIDTH-1:0] input_data [0:31];
    logic signed [WIDTH-1:0] output_data [0:0];
  
    Sigmoid dut (clk, reset, input_data, output_data);
    
    parameter CLOCK_PERIOD = 100;
    
    initial begin
        clk <= 0;
        forever #(CLOCK_PERIOD/2) begin
            clk <= ~clk;
        end
    end
    
    integer inputs, sigmoid_weights, sigmoid_biases, i;    
    
    initial begin
    
        inputs = $fopen("sigmoid_input.mem", "rb");
        $readmemb("sigmoid_input.mem", input_data);
        $fclose(inputs);
        
//        sigmoid_weights = $fopen("Sigmoid_weights_fp.mem", "rb");
//        $readmemb("Sigmoid_weights_fp.mem", weights);
//        $fclose(sigmoid_weights);
        
//        sigmoid_biases = $fopen("Sigmoid_biases_fp.mem", "rb");
//        $readmemb("Sigmoid_biases_fp.mem", biases);
//        $fclose(sigmoid_biases);
    
        reset <= 1;                               @(posedge clk)
        reset <= 0;                               @(posedge clk)
        
        for (i = 0; i < 1000; i++) begin
            @(posedge clk);
            //#100;
        end
        
           
                
        $stop;
    end
endmodule
