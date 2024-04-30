// Sub Layer Unpacked Version
//
// This module represents the dense latency layer of the
// neural network. In this layer, the input matrix is multiplied
// with weight matrix. Then the result of the matrix multiplication
// is added with a matrix of biases.
// NOTE: IDENTICAL to reluDenseLatencyLayer except that different packages
// are specificed by macro header file
//
// Inputs:
// - clk
// - reset
// - input_data
//
// Outputs:
// - output_data

`timescale 1ns / 1ps
`include "pkg_sel.svh"

// Computes the dot product of the inputs and weights then adds that to the biases
module DenseLayer
    #(          parameter WIDTH           = 17,
                NFRAC           = 10,
                INPUT_SIZE      = 32,
                OUTPUT_SIZE     = 1
                )  (
    input  logic                    clk, 
    input  logic                    reset,
    input  logic signed [WIDTH-1:0] input_data  [0:INPUT_SIZE-1],
    // weigth faltened to 1D array, shape before flatten is (INPUT_SIZE, OUTPUT_SIZE)
    input  logic signed [WIDTH-1:0] weights     [0:INPUT_SIZE*OUTPUT_SIZE-1],
    input  logic signed [WIDTH-1:0] bias        [0:OUTPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    // check that the right package is being used
    initial assert($bits(weights[0]) == WIDTH);
    
    
    logic signed [WIDTH-1:0]   mult         [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH*2-1:0] mult_temp    [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   accumulator  [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   result       [0:OUTPUT_SIZE-1];
    
    genvar  col, row;
    // multiplication doubles NFRAC bits in output, we only need NFRAC bits of fractional part,
    // select top NFRAC bits of the fractional part
    localparam TOP      = WIDTH+NFRAC-1,
               BOTTOM   = NFRAC;
    // Generate a shift add module for each multiplication, shift-add will do optimizations
    // where it can and leave the rest to Xilinx tools
    generate 
        for(row=0; row<INPUT_SIZE; row++) begin : INPUT_SIZE_rows
            for(col=0; col<OUTPUT_SIZE; col++) begin : OUTPUT_SIZE_cols
                shift_add #(.WEIGHT ( weights[row*OUTPUT_SIZE + col]    ),
                            .DEPTH  ( `SA_DEPTH                         ),
                            .BITS   ( WIDTH                             ),
                            .NFRAC  ( NFRAC                             )
                            ) sa (
                    .clk,
                    .data_in    ( input_data[row]       ),
                    .data_out   ( mult_temp[row][col]   )
                );
//                assign mult_temp[row][col] = $signed(input_data[row]) * $signed(`SIGMOID_PKG::weights[row*OUTPUT_SIZE + col]);
                assign mult[row][col] = mult_temp[row][col][TOP:BOTTOM];
           end
        end
    endgenerate
    
    
    logic signed [WIDTH-1:0] mult_out [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] mult_1 [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    
    
    // Determine what configuration DSPs will infer (single cycle or 3-cycle)
    if (`THREE_CYCLE_MULT) begin
        always_ff @(posedge clk) begin
            mult_1 <= mult;
            mult_out <= mult_1;
        end
    end else begin
        assign mult_out = mult;
    end
    
    // Pipelined adder tree to accumulate the values in mult_out
    adderTree #(.WIDTH      ( WIDTH         ),
                .INPUT_SIZE ( INPUT_SIZE    ),
                .OUTPUT_SIZE( OUTPUT_SIZE   )
                ) sum_all (
        .clk,
        .reset,
        .input_data ( mult_out      ),
        .output_data( accumulator   )
    );

    // Add biases to result
    integer i;
    always_comb begin
        for (i=0; i < OUTPUT_SIZE;i++) begin
            result[i] = accumulator[i] + `SIGMOID_PKG::bias[i];
        end
    end
    
    always_ff @(posedge clk) begin
        output_data <= result;
    end
endmodule




module DenseLayer_testbench();
    parameter WIDTH = 8, NFRAC = 0, INPUT_SIZE = 7, OUTPUT_SIZE = 5;
    logic clk, reset;
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] weights [0:INPUT_SIZE*OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] bias [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];
    
    localparam PERIOD = 10;
    initial begin
        clk <= 1'b1;
        forever #(PERIOD/2) clk <= ~clk;
    end
    
    DenseLayer #(.WIDTH(WIDTH), .NFRAC(NFRAC), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE)) dut (
        .clk(clk),  .reset(reset),
        .input_data(input_data),
        .weights(weights),
        .bias(bias),
        .output_data(output_data)
    );
    
    initial begin
        reset = 0;
        input_data = {{-8'd1},
                      {8'd2},
                      {-8'd3},
                      {8'd4},
                      {-8'd5},
                      {8'd6},
                      {-8'd7}
                      };
                      
        weights = {{8'd1}, {8'd2}, {8'd3}, {8'd4}, {8'd5}, //{8'd6}, {8'd7},
                   {8'd3}, {8'd4}, {8'd5}, {8'd6}, {8'd7}, //{8'd8}, {8'd9},
                   {8'd5}, {8'd6}, {8'd7}, {8'd8}, {8'd9}, //{8'd0}, {8'd1},
                   {8'd7}, {8'd8}, {8'd9}, {8'd0}, {8'd1}, //{8'd2}, {8'd3},
                   {8'd9}, {8'd0}, {8'd1}, {8'd2}, {8'd3}, //{8'd4}, {8'd5},
                   {8'd1}, {8'd2}, {8'd3}, {8'd4}, {8'd5}, //{8'd6}, {8'd7},
                   {8'd3}, {8'd4}, {8'd5}, {8'd6}, {8'd7}//, //{8'd8}, {8'd9}
                   };
                   
        biases = {{8'd0}, 
                  {8'd0}, 
                  {8'd0}, 
                  {8'd0}, 
                  //{8'd0}, 
                  //{8'd0}, 
                  {8'd0}};
                  
        repeat(30) @(posedge clk);
        
    end
    
    
endmodule
