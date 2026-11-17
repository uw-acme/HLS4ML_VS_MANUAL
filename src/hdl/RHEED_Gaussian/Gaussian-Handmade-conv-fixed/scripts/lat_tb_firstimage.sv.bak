`timescale 1ns / 1ps

// Feeds zeros. Prints, in clock cycles:
// Latency  = first accepted input to first output
// Interval = first accepted input to first accepted input of the next image

module lat_tb #(
    parameter bitWidth    = 8,
    parameter NFRAC       = 5,
    parameter NFRAC_first = 7
) ();

    localparam PERIOD = 10;
    localparam TIMEOUT_CYCLES = 200000;
    localparam PIXELS = 48 * 48;
    localparam outputSize = 5;

    logic clk = 0;
    logic reset;
    logic signed [bitWidth-1:0] inputPixel;
    logic inputValid;
    logic inputReady;
    logic signed [bitWidth-1:0] finalOutput [outputSize-1:0];
    logic finalOutputValid;

    rheedGaussianWrapper #(
        .bitWidth(bitWidth), .NFRAC(NFRAC), .NFRAC_first(NFRAC_first)
    ) dut (
        .clk(clk), .reset(reset),
        .inputPixel(inputPixel), .inputValid(inputValid), .inputReady(inputReady),
        .finalOutput(finalOutput), .finalOutputValid(finalOutputValid)
    );

    initial begin
        clk <= 0;
        forever #(PERIOD/2) clk <= ~clk;
    end

    initial begin
        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        inputValid <= 1;
    end

    int cycle = 0;
    int accepted = 0;
    int first_input_cycle = 0;
    int latency = -1;
    int interval = -1;

    always @(posedge clk) begin
        cycle <= cycle + 1;

        if (inputValid && inputReady) begin
            if (accepted == 0) first_input_cycle <= cycle;
            if (accepted == PIXELS) interval <= cycle - first_input_cycle;
            accepted <= accepted + 1;
        end

        if (finalOutputValid && latency < 0)
            latency <= cycle - first_input_cycle;

        if (latency >= 0 && interval >= 0) begin
            $display("Latency = %0d cycles", latency);
            $display("Interval = %0d cycles", interval);
            $finish;
        end

        if (cycle > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT (latency %0d, interval %0d)", latency, interval);
            $finish;
        end
    end

endmodule
