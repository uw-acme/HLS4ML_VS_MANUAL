`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 18.05.2025 23:02:09
// Design Name:
// Module Name: waiz_benchmark_top_level
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


module waiz_benchmark_top_level #(
    parameter WIDTH = 25,
    parameter NFRAC = 16,
    parameter INPUT_SIZE = 16,
    parameter OUTPUT_SIZE = 5
) (
    input wire USER_SI570_CLOCK_P, // Differential clock positive pin
    input wire USER_SI570_CLOCK_N, // Differential clock negative pin
    input logic input_ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_data [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [OUTPUT_SIZE-1:0]
);

    wire clk_si570;  // Output of IBUFDS
    wire clk;        // Output of BUFG (your main internal clock)

    // Differential input buffer
    IBUFDS #(
        .DIFF_TERM("TRUE"),      // Enable internal termination
        .IBUF_LOW_PWR("TRUE")    // Low power mode (TRUE is default)
    ) clk_ibufds (
        .I(USER_SI570_CLOCK_P),
        .IB(USER_SI570_CLOCK_N),
        .O(clk_si570)
    );

    // Global buffer
    BUFG clk_bufg (
        .I(clk_si570),
        .O(clk)
    );

    // Clock and reset
    // logic clk;
    logic reset; // You'll likely need to define this input

    // Input and output signals


    // real softmax_output_real [0:OUTPUT_SIZE-1]; // Use the parameterized OUTPUT_SIZE

    // Instantiate the module
    waiz_benchmark #(
        .WIDTH(WIDTH),
        .NFRAC(NFRAC),
        .INPUT_SIZE(INPUT_SIZE),
        .OUTPUT_SIZE(OUTPUT_SIZE)
    ) dut (
        .clk(clk),
        .reset(reset),
        .input_ready(input_ready),
        .output_ready(output_ready),
        .input_data(input_data),
        .output_data(output_data)
        // .softmax_output_real(softmax_output_real)
    );

endmodule