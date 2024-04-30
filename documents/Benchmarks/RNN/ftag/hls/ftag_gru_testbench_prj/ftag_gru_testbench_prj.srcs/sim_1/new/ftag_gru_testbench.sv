`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/02/2024 05:19:04 AM
// Design Name: 
// Module Name: ftag_gru_testbench
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


module ftag_gru_testbench();


logic   [1439:0] input_1_V;
logic   [15:0] layer8_out_0_V;
logic   [15:0] layer8_out_1_V;
logic   [15:0] layer8_out_2_V;
logic   ap_clk;
logic   ap_rst;
logic   input_1_V_ap_vld;
logic   ap_start;
logic   layer8_out_0_V_ap_vld;
logic   layer8_out_1_V_ap_vld;
logic   layer8_out_2_V_ap_vld;
logic   ap_done;
logic   ap_ready;
logic   ap_idle;

myproject dut(
    .input_1_V(input_1_V),
    .layer8_out_0_V(layer8_out_0_V),
    .layer8_out_1_V(layer8_out_1_V),
    .layer8_out_2_V(layer8_out_2_V),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .input_1_V_ap_vld(input_1_V_ap_vld),
    .ap_start(ap_start),
    .layer8_out_0_V_ap_vld(layer8_out_0_V_ap_vld),
    .layer8_out_1_V_ap_vld(layer8_out_1_V_ap_vld),
    .layer8_out_2_V_ap_vld(layer8_out_2_V_ap_vld),
    .ap_done(ap_done),
    .ap_ready(ap_ready),
    .ap_idle(ap_idle)
);

parameter CLOCK_PERIOD = 100;
initial begin
    ap_clk <= 0;
    forever #(CLOCK_PERIOD/2) ap_clk <= ~ap_clk;
end

initial begin
    input_1_V <= 0;
    ap_rst <= 1;
    ap_start <= 0; 
    
    @(posedge ap_clk);
    ap_rst <= 0;
    ap_start <= 1;
    input_1_V_ap_vld <= 1; 
    
    @(posedge ap_ready);
    input_1_V_ap_vld <= 0;
    input_1_V <= {1440{1'b1}};

    @(posedge ap_done);

    repeat(10) @(posedge ap_clk);
    ap_start <= 1;
    input_1_V_ap_vld <= 1; 
    
    @(posedge ap_ready);
    input_1_V_ap_vld <= 0;

    @(posedge ap_done);

    repeat(10) @(posedge ap_clk);


    $stop;
end


endmodule
