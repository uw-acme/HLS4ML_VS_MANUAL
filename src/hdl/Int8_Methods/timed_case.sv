// Author: Jan Silva
// June 2021

// Top-level module that runs over test_use case with clocking wizard 
// and the outputs of the maccs drive LEDs. 
`timescale 1ns / 1ps
 
module timed_case(
    input logic gpio_switch [7:0],
    input logic clk_p, clk_n,
    output logic led [7:0]
    );
    
    logic reset_pll, reset_in, go, locked; // PLL signals
    logic clk_in; // input from IBUFDS 
    logic clk;    // clock from PLL
    assign reset_pll = gpio_switch[0]; 

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
    // Currently set to 400 Hz
     clk_wiz_0 clk_fast
   (
    .clk_out1(clk),     // output clk_out1
    .reset(reset_pll),  // input reset
    .locked(locked),    // output locked
    .clk_in1(clk_in));  // input clock
    assign reset = ~locked;
   
    // Instantiate test case with 1024 inputs
    localparam WIDTH = 8, NUM_INPUTS = 1024, SIGN = 1;
    // Logic for worst-case bit widths after overflow during maccs
    localparam SIGNED_WIDTH = $clog2((2**(WIDTH-1))**2 * NUM_INPUTS)+1,
               UNSIGNED_WIDTH = $clog2((2**(WIDTH)-1)**2 * NUM_INPUTS);
    
    // Outputs
    logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_T;
    logic signed [((SIGN == 1) ? SIGNED_WIDTH-1 : UNSIGNED_WIDTH):0] result_B;
     
    // Test case 
    test_use_case test (
        .write(1'b0), .clk(clk), .addr(10'd5), .data_in(8'd23), .result_T, .result_B
        );
    
    // Assign outputs to LEDs
    assign led[0] = ^result_T;
    assign led[1] = ^result_B;
    
endmodule

module timed_case_testbench();
    logic       clk_p, clk_n;
    logic  gpio_switch[7:0];
    logic led[7:0];
    
    timed_case dut (.gpio_switch, .clk_p, .clk_n, .led);
    
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
        // Wait until clock is locked
        wait(dut.locked == 1'b1);
        
        for (i = 0; i < 100; i++) begin
            @(posedge clk_p);
        end
        
        $stop;
    end  
endmodule


