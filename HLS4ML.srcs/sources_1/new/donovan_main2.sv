`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06.12.2024 00:56:40
// Design Name: 
// Module Name: donovan_simple2
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


module donovan_main2(
    input logic a,
    input logic b,
    output logic y
    );
    
    always_comb begin
        y = a & b;
    end
endmodule
