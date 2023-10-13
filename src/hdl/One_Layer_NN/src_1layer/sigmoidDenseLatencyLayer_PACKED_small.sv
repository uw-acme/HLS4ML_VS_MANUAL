


`timescale 1ns / 1ps
`include "pkg_sel.svh"

import `SIGMOID_PKG::*;

// - Computes the dot product of the inputs and weights then adds that to the biases
// - Uses different set of weigths than reluDenseLatencyLayer_PACKED_small,
// otherwise identical modules
// - Same function as sigmoidDenseLatencyLayer, but packs multiplications into
// DSP slices instead of LUT logic
// NOTE: Limited to bitwidths of 5 and lower

module sigmoidDenseLatencyLayer_PACKED_small
    #(parameter WIDTH           = 5,
                NFRAC           = 3,
                INPUT_SIZE      = 32,
                OUTPUT_SIZE     = 1
                )  (
    input  logic                    clk,
    input  logic                    reset,
    input  logic signed [WIDTH-1:0] input_data  [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    
    localparam bit signed [WIDTH-1:0] ZERO [INPUT_SIZE] = '{ default: '0};
    
    // Weights and Bias
    logic signed [WIDTH-1:0] weights     [INPUT_SIZE*OUTPUT_SIZE];
    logic signed [WIDTH-1:0] biases      [OUTPUT_SIZE];
    
    // Load weights and biases via package files
    assign weights = `SIGMOID_PKG::weights;
    assign biases = `SIGMOID_PKG::bias;
    
    
    logic signed [WIDTH-1:0] output_vals        [0:OUTPUT_SIZE];
    logic signed [WIDTH-1:0] weight_transpose   [0:INPUT_SIZE*OUTPUT_SIZE-1];
    
    logic signed [WIDTH-1:0] out_bias_buf       [0:OUTPUT_SIZE-1];
    
    
    
    logic signed [WIDTH-1:0]   mult         [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    wire    [(24+WIDTH-1):0]   mult_ax_tmp  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    wire    [(24-WIDTH-1):0]   mult_ay_tmp  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    wire    [(24-WIDTH-1):0]   mult_az_tmp  [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   mult_out     [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    
    logic signed [WIDTH-1:0]   accumulator  [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   result       [0:OUTPUT_SIZE-1];
    
    genvar col;
    genvar row;
    localparam TOP = WIDTH+NFRAC-1;
    localparam BOTTOM = NFRAC;
    // Generate Multiplier Packing modules
    generate
        for(row=0; row<INPUT_SIZE; row++) begin : row_idx
            for(col=0; col<OUTPUT_SIZE; col = col + 3) begin : col_idx
//                mult_temp = input_data[row] * weights[row*OUTPUT_SIZE + col];
//                mult[row][col] = mult_temp[WIDTH+NFRAC-1:NFRAC];
                if (col + 1 == OUTPUT_SIZE) begin : mult1_per_dsp
                    macc_small #(.WIDTH(WIDTH)
                                ) dsp_slice (
                        .weight_x   ( '0                             ),
                        .weight_y   ( '0                             ),
                        .weight_z   ( weights[row*OUTPUT_SIZE + col] ),
                        .input_a    ( input_data[row]                ),
                        .clk        ( clk                            ),
                        .out_ax     (                                ),
                        .out_ay     (                                ),
                        .out_az     ( mult_az_tmp[row][col]          )
                    );
                    assign mult[row][col] = mult_az_tmp[row][col][TOP:BOTTOM];
                end else if (col + 2 == OUTPUT_SIZE) begin : mult2_per_dsp
                    macc_small #(.WIDTH(WIDTH)
                                ) dsp_slice (
                        .weight_x   ( '0                                    ),
                        .weight_y   ( weights[row*OUTPUT_SIZE + col + 1]    ),
                        .weight_z   ( weights[row*OUTPUT_SIZE + col]        ),
                        .input_a    ( input_data[row]                       ),
                        .clk        ( clk                                   ),
                        .out_ax     (                                       ),
                        .out_ay     ( mult_ay_tmp[row][col + 1]             ),
                        .out_az     ( mult_az_tmp[row][col]                 )
                    );
                    assign mult[row][col+1] = mult_ay_tmp[row][col+1][TOP:BOTTOM];
                    assign mult[row][col]   = mult_az_tmp[row][col][TOP:BOTTOM];
                end else begin : mult3_per_dsp
                    macc_small #(.WIDTH(WIDTH)
                                ) dsp_slice (
                        .weight_x   ( weights[row*OUTPUT_SIZE + col + 2]    ),
                        .weight_y   ( weights[row*OUTPUT_SIZE + col + 1]    ),
                        .weight_z   ( weights[row*OUTPUT_SIZE + col]        ),
                        .input_a    ( input_data[row]                       ),
                        .clk        ( clk                                   ),
                        .out_ax     ( mult_ay_tmp[row][col + 2]             ),
                        .out_ay     ( mult_ay_tmp[row][col + 1]             ),
                        .out_az     ( mult_az_tmp[row][col]                 )
                    );
                    assign mult[row][col+2] = mult_ay_tmp[row][col+2][TOP:BOTTOM];
                    assign mult[row][col+1] = mult_ay_tmp[row][col+1][TOP:BOTTOM];
                    assign mult[row][col]   = mult_az_tmp[row][col][TOP:BOTTOM];
                end
            end
        end
    endgenerate
    
    always_ff @(posedge clk) begin
        mult_out <= mult;
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
            result[i] = accumulator[i] + biases[i];
        end
    end
    
    always_ff @(posedge clk) begin
        output_data <= result;
    end
    
endmodule







module sigmoidDenseLatencyLayer_PACKED_small_tb();
    localparam WIDTH       = 4,
               NFRAC       = 2,
               INPUT_SIZE  = 7,
               OUTPUT_SIZE = 5;
    
    logic                    clk,
                             reset;
    logic signed [WIDTH-1:0] input_data     [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] weights        [0:INPUT_SIZE*OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] biases         [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data    [0:OUTPUT_SIZE-1];
    
    localparam PERIOD = 10;
    initial begin
        clk <= 1'b1;
        forever #(PERIOD/2) clk <= ~clk;
    end
    
    sigmoidDenseLatencyLayer_PACKED_small
                                   #(.WIDTH         ( WIDTH         ),
                                     .NFRAC         ( NFRAC         ),
                                     .INPUT_SIZE    ( INPUT_SIZE    ),
                                     .OUTPUT_SIZE   ( OUTPUT_SIZE   )
                                    ) dut (
        .clk        ( clk           ),
        .reset      ( reset         ),
        .input_data ( input_data    ),
        .weights    ( weights       ),
        .biases     ( biases        ),
        .output_data( output_data   )
    );
    
    initial begin
        reset = 0;
        input_data = {{-4'd1},
                      {4'd2},
                      {-4'd3},
                      {4'd4},
                      {-4'd5},
                      {4'd6},
                      {-4'd7}
                      };
                      
        weights = {{4'd1}, {4'd2}, {4'd3}, {4'd4}, {4'd5}, //{4'd6}, {4'd7},
                   {4'd3}, {4'd4}, {4'd5}, {4'd6}, {4'd7}, //{4'd8}, {4'd9},
                   {4'd5}, {4'd6}, {4'd7}, {4'd8}, {4'd9}, //{4'd0}, {4'd1},
                   {4'd7}, {4'd8}, {4'd9}, {4'd0}, {4'd1}, //{4'd2}, {4'd3},
                   {4'd9}, {4'd0}, {4'd1}, {4'd2}, {4'd3}, //{4'd4}, {4'd5},
                   {4'd1}, {4'd2}, {4'd3}, {4'd4}, {4'd5}, //{4'd6}, {4'd7},
                   {4'd3}, {4'd4}, {4'd5}, {4'd6}, {4'd7}//, //{4'd8}, {4'd9}
                   };
                   
        biases = {{4'd0}, 
                  {4'd0}, 
                  {4'd0}, 
                  {4'd0}, 
                  //{4'd0}, 
                  //{4'd0}, 
                  {4'd0}};
                  
        repeat(30) @(posedge clk);
        $stop;
    end
    
    
endmodule



