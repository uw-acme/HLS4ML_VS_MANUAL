`timescale 1ns / 1ps

// A pipelined binary adder tree that can accumulate a 2-D array with an INPUT_SIZE of up to 32.
// If the INPUT_SIZE is 16 or less it will use an adder tree with 8 initial adders, and 16 initial adders
// if it is greater than 16.
module adder_tree #(parameter N=32, WIDTH=17, INPUT_SIZE=32, OUTPUT_SIZE=1) (
    input logic clk,
    input logic reset,
    input logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
    );
    
    logic signed [WIDTH-1:0] add0 [0:N-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] result [0:OUTPUT_SIZE-1];
    
    // First group of adders
    localparam add1_size = N/2;
    logic signed [WIDTH-1:0] add1 [0:add1_size-1][0:OUTPUT_SIZE-1], add1_out [0:add1_size-1][0:OUTPUT_SIZE-1];
    
    // Second group of adders                                                                                          
    localparam add2_size = add1_size/2;                                                                       
    logic signed [WIDTH-1:0] add2 [0:add2_size-1][0:OUTPUT_SIZE-1], add2_out [0:add2_size-1][0:OUTPUT_SIZE-1];
    
    // Third group of adders
    localparam add3_size = add2_size/2;
    logic signed [WIDTH-1:0] add3 [0:add3_size-1][0:OUTPUT_SIZE-1], add3_out [0:add3_size-1][0:OUTPUT_SIZE-1];
    
    // Fourth group of adders
    localparam add4_size = add3_size/2;
    logic signed [WIDTH-1:0] add4 [0:add4_size-1][0:OUTPUT_SIZE-1], add4_out [0:add4_size-1][0:OUTPUT_SIZE-1];
    
    // Fifth group of adders, only necesarry for INPUT_SIZE greater than 32.
    localparam add5_size = add4_size/2;
    logic signed [WIDTH-1:0] add5 [0:add5_size-1][0:OUTPUT_SIZE-1], add5_out [0:add5_size-1][0:OUTPUT_SIZE-1];
   
    
    genvar i, j;
    generate
        // If INPUT_SIZE is not exactly 16 or 32, the empty adder slots
        // need to be filled with zeros.
        for (i = 0; i < OUTPUT_SIZE; i++) begin : init_i
            for (j = 0; j < INPUT_SIZE; j++) begin : init_j
                assign add0[j][i] = input_data[j][i];
            end
            if (INPUT_SIZE < N) begin
                for (j = INPUT_SIZE; j < N; j++) begin : add_zeros
                    assign add0[j][i] = 0;
                end
            end
        end
        
        // First adder stage
        for (i=0; i < OUTPUT_SIZE; i++) begin : out1
            for (j=0; j < add1_size; j++) begin : in1
                assign add1[j][i] = add0[2*j][i] + add0[2*j+1][i];
            end
        end
        DFF_3D #(WIDTH, OUTPUT_SIZE, add1_size) add1_dff (.clk, .reset, .d(add1), .q(add1_out));
        
        // Second adder stage
        for (i=0; i < OUTPUT_SIZE; i++) begin : out2
            for (j=0; j < add2_size; j++) begin : in2
                assign add2[j][i] = add1_out[2*j][i] + add1_out[2*j+1][i];
            end
        end
        DFF_3D #(WIDTH, OUTPUT_SIZE, add2_size) add2_dff (.clk, .reset, .d(add2), .q(add2_out));
        
        // Third adder stage.
        for (i=0; i < OUTPUT_SIZE; i++) begin : out3
            for (j=0; j < add3_size; j++) begin : in3
                assign add3[j][i] = add2_out[2*j][i] + add2_out[2*j+1][i];
            end
        end
        DFF_3D #(WIDTH, OUTPUT_SIZE, add3_size) add3_dff (.clk, .reset, .d(add3), .q(add3_out));
        
        // Fourth adder stage
        for (i=0; i < OUTPUT_SIZE; i++) begin : out4
            for (j=0; j < add4_size; j++) begin : in4
                assign add4[j][i] = add3_out[2*j][i] + add3_out[2*j+1][i];
            end
        end
        DFF_3D #(WIDTH, OUTPUT_SIZE, add4_size) add4_dff (.clk, .reset, .d(add4), .q(add4_out));
        
        // Check if a fifth adder stage is needed, if not than assign output_data to the output of stage 4.
        if (N == 32) begin
            for (i=0; i < OUTPUT_SIZE; i++) begin : out5
                for (j=0; j < add5_size; j++) begin : in5
                    assign add5[j][i] = add4_out[2*j][i] + add4_out[2*j+1][i];
                end
            end
            DFF_3D #(WIDTH, OUTPUT_SIZE, add5_size) add5_dff (.clk, .reset, .d(add5), .q(add5_out));
            
            for (i=0; i<OUTPUT_SIZE; i++) begin : out
                assign result[i] = add5_out[0][i];
            end
        end else begin
            for (i=0; i<OUTPUT_SIZE; i++) begin : out
                assign result[i] = add4_out[0][i];
            end
        end
        DFF_2D #(WIDTH, OUTPUT_SIZE) dff_out (.clk, .reset, .d(result), .q(output_data));
    endgenerate
endmodule