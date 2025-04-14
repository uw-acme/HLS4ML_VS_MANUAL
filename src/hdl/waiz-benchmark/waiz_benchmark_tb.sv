`timescale 1ns / 1ps

module waiz_benchmark_tb;

    // Parameters
    localparam WIDTH = 16;
    localparam NFRAC = 10;
    localparam INPUT_SIZE = 16;
    localparam OUTPUT_SIZE = 5;

    // Clock and reset
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;

    // Input and output signals
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];

    real softmax_output_real [0:4];

    // Instantiate the module
    waiz_benchmark #(
        .WIDTH(WIDTH),
        .NFRAC(NFRAC)
    ) dut (
        .clk(clk),
        .reset(reset),
        .input_ready(input_ready),
        .output_ready(output_ready),
        .input_data(input_data),
        .output_data(output_data),
        .softmax_output_real(softmax_output_real)
    );

    // Clock generation
    always #5 clk = ~clk; // 100MHz

    initial begin
        // Initialize
        clk = 0;
        reset = 1;
        input_ready = 0;

        // Wait for a few clock cycles with reset asserted
        repeat (2) @(posedge clk);

        reset = 0;

        input_data = '{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 };

        // Signal input is ready
        @(posedge clk);
        input_ready = 1;

        @(posedge clk);
        input_ready = 0;

        // Wait for output_ready signal
        wait (output_ready == 1);

        repeat (10) @(posedge clk);

        // Display the output
        $display("Output data:");
        for (int i = 0; i < OUTPUT_SIZE; i++) begin
            $display("output_data[%0d] = %0d", i, output_data[i]);
        end

        // Display the softmax output on one line
        $display("Softmax output:");
        for (int i = 0; i < OUTPUT_SIZE; i++) begin
            $write("%0f ", softmax_output_real[i]);
        end
        $display(""); // New line after softmax output

        // Optionally add delay and finish
        #50;
        $stop;
        $stop;
    end

endmodule