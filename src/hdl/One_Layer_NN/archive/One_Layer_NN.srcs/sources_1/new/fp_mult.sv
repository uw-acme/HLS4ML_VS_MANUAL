`timescale 1ns / 1ps

module fp_mult #(parameter Q = 10, parameter N = 16) (
    input logic signed [N-1:0] a,
    input logic signed [N-1:0] b,
    output logic signed [N-1:0] result
    );
    
    logic signed [N*2-1:0] ab;
    
    assign ab = a * b;
    assign result = ab[N+Q-1:Q];
endmodule
