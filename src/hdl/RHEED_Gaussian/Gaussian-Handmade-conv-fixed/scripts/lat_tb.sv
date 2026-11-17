`timescale 1ns / 1ps

// Streams zero images back-to-back. Prints, in clock cycles, for image 5:
//   Latency  = first pixel of image 5 accepted -> its final output
//   Interval = final output of image 4 -> final output of image 5

module lat_tb #(
    parameter bitWidth    = 8,
    parameter NFRAC       = 5,
    parameter NFRAC_first = 7
) ();

    localparam PERIOD = 10;
    localparam TIMEOUT_CYCLES = 400000;
    localparam PIXELS = 48 * 48;
    localparam outputSize = 5;
    localparam IMAGES = 5;

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
    int starts [IMAGES];
    int outs [IMAGES];
    int n_out = 0;
    logic prev_valid = 0;

    always @(posedge clk) begin
        cycle <= cycle + 1;

        if (inputValid && inputReady) begin
            if ((accepted % PIXELS) == 0 && (accepted / PIXELS) < IMAGES)
                starts[accepted / PIXELS] <= cycle;
            accepted <= accepted + 1;
        end

        if (finalOutputValid && !prev_valid && n_out < IMAGES) begin
            outs[n_out] <= cycle;
            n_out <= n_out + 1;
        end
        prev_valid <= finalOutputValid;

        if (n_out == IMAGES) begin
            $display("Latency = %0d cycles", outs[IMAGES-1] - starts[IMAGES-1]);
            $display("Interval = %0d cycles", outs[IMAGES-1] - outs[IMAGES-2]);
            $finish;
        end

        if (cycle > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT (outputs seen %0d)", n_out);
            $finish;
        end
    end

endmodule
