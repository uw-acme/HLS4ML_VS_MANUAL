`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/02/2025 07:17:05 PM
// Design Name: 
// Module Name: relu_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module relu_tb;
    localparam WIDTH=10;
    localparam NFRAC=5;
    localparam SIZE=32;
    logic clk;
    logic signed [WIDTH-1:0] input_data [SIZE-1:0];
    logic signed [WIDTH-1:0] output_data [SIZE-1:0];
    reluActivationLayer 
    #(.WIDTH(WIDTH),.NFRAC(NFRAC),.SIZE(SIZE)) 
    dut (.clk, .input_data, .output_data);
    initial begin
        clk=0;
        forever #(5) clk<=~clk;
    end
    initial begin
        input_data[0]=0;
        @(posedge clk)
        input_data[0]=1;
        @(posedge clk)
        input_data[0]=5;
        @(posedge clk)
        input_data[0]=-3;
        @(posedge clk)
        input_data[0]=-80;
        @(posedge clk)
        input_data[0]=90;
        @(posedge clk)
        input_data[0]=5;
        #(10)
        $stop;
    end
endmodule
