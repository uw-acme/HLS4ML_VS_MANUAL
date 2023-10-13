// Author: Jan Silva 
// June 2021

`timescale 1ns / 1ps

// Simple test for the DSP Multiplication
// Weights, input, and accumulate are hard-coded
// Output P drives LED
// Top-level module includes PLL
module int8(
    input logic gpio_switch [7:0],
    input logic clk_p, clk_n,
    output logic led [7:0]
    );
    
    logic reset_pll, reset_in, go, locked;
    logic clk_in; // input from IBUFDS 
    logic clk;    // clock from PLL
    assign reset_pll = gpio_switch[0];
    
    logic [7:0] weight_j, weight_k, input_i; // 8 bit weights and input
    logic [47:0] accum;                      // accumulated results so far
    logic [47:0] P;                          // output  

    assign weight_j = 8'b10101010;           // Weight 1
    assign weight_k = weight_j;             // Weight 2 
    assign accum = {42{1'b0}};               
    assign input_i = 8'b11111111;            // Shared input
  
    // Converts the two clock signals to one
    IBUFDS # (
        .DIFF_TERM("FALSE"),
        .IBUF_LOW_PWR("TRUE"),
        .IOSTANDARD("LVDS")
    ) IBUFDS_inst (
        .O(clk_in),
        .I(clk_p),
        .IB(clk_n)
    );
   
    // Clocking wizard (PLL)
     clk_wiz_0 clk_fast
   (
    .clk_out1(clk),     // output clk_out1
    .reset(reset_pll),      // input reset
    .locked(locked),    // output locked
    .clk_in1(clk_in));  // input clock
    //assign reset = ~locked;
   
    // in_i * (w_k + w_j)
    // A and D are inputs to pre-adder
    xbip_dsp48_macro_0 dsp_slice (
      .CLK(clk),                    // input wire CLK
      .A({weight_j, {17{1'b0}}}),   // input wire [24 : 0] A - weight
      .B({{10{1'b0}}, input_i}),    // input wire [17 : 0] B - input
      .C(accum),                    // input wire [47 : 0] C - 3rd input - 
                                    // used as another addition here for accumulation
      .D({{10{1'b0}}, weight_k}),   // input wire [17 : 0] D - weight 
      .P(P)                         // output wire [47 : 0] P
    );
    
    assign led[7] = P[47];

endmodule

module int8_testbench();
    logic       clk_p, clk_n;
    logic  gpio_switch[7:0];
    logic led[7:0];
    
    int8 dut (gpio_switch, clk_p, clk_n, led);
    
    parameter CLOCK_PERIOD = 100;
    
    initial begin
        clk_p <= 0;
        clk_n <= 1;
        forever #(CLOCK_PERIOD/2) begin
            clk_p <= ~clk_p;
            clk_n <= ~clk_n;
        end
    end
     
    integer i;
    
    initial begin
        wait(dut.locked == 1'b1); // Wait until PLL is locked
                                          @(posedge clk_p);
                                          @(posedge clk_p);
        gpio_switch[0] <= 1; led[7] <= 0; @(posedge clk_p);
        gpio_switch[0] <= 0;              @(posedge clk_p);
        
        for (i = 0; i < 100; i++) begin
            @(posedge clk_p);
        end
        
        $stop;
    end  
endmodule


