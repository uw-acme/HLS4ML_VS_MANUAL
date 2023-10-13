`timescale 1ns / 1ps

module DFF #(parameter WIDTH=16) (
    input logic clk,
    input logic reset,
    input logic signed [WIDTH-1:0] d,
    output logic signed [WIDTH-1:0] q
    );

    always_ff @(posedge clk) begin
        if (reset)
            q <= 0;
        else
            q <= d; 
    end
endmodule


module DFF_2D #(parameter WIDTH=16, SIZE=32) (
    input logic clk,
    input logic reset,
    input logic signed [WIDTH-1:0] d [0:SIZE-1],
    output logic signed [WIDTH-1:0] q [0:SIZE-1]
    );

    genvar i;
    generate
        for (i=0; i < SIZE; i++) begin
            DFF #(WIDTH) dff2d (.clk, .reset, .d(d[i]), .q(q[i]));
        end
    endgenerate
endmodule

module DFF_3D #(parameter WIDTH=16, SIZE, DEPTH) (
    input clk,
    input reset,
    input logic signed [WIDTH-1:0] d [0:DEPTH-1][0:SIZE-1],
    output logic signed [WIDTH-1:0] q [0:DEPTH-1][0:SIZE-1]
    );

    genvar i;
    generate
        for (i=0; i < DEPTH; i++) begin
            DFF_2D #(WIDTH, SIZE) dff3d (.clk, .reset, .d(d[i]), .q(q[i]));
        end
    endgenerate
endmodule


module DFF_testbench();
    logic clk, reset;
    logic [15:0] q [0:1];
    logic [15:0] d [0:1];


    DFF_2D #(16, 2) dut (clk, reset, d, q);

    parameter clock_period = 100;
    initial begin
        clk <= 0;
        forever #(clock_period/2) clk <= ~clk;
    end

    integer i;
    initial begin
        reset <= 1; d[0] <= 16'b1111111111111111; d[1] <= 16'b0000000000000000; @(posedge clk);
        reset <= 0;
                    d[1] <= 16'b1111111111111111; d[0] <= 16'b0000000000000000; @(posedge clk);

        for (i = 0; i < 20; i++) begin
            d[0] <= d[0] + 4;
            d[1] <= d[1] - 4;
            @(posedge clk);
        end
        $stop;
    end
endmodule


