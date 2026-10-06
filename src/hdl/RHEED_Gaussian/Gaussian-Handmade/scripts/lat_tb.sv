`timescale 1ns / 1ps

// Latency testbench for rheedGaussianWrapper.
// Counts clock cycles from the very first input to the very first final output.


module lat_tb #(
    parameter bitWidth    = 8,
    parameter NFRAC       = 5,
    parameter NFRAC_first = 7
) ();

    localparam PERIOD = 10;                 // clock period in ns (simulation only)
    localparam TIMEOUT_CYCLES = 200000;     // give up if there is still no output after this many cycles
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


    // clock
    initial begin
        clk <= 0;
        forever #(PERIOD/2) clk <= ~clk;
    end


    // reset -> keep offering a zero input
    initial begin
        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        inputValid <= 1;
    end


    // count cycles (stop at first output)
    int cycle_count = 0;            
    int first_input_cycle = -1;    // -1 means the first input has not been accepted yet

    always @(posedge clk) begin // don't need to synthesize to ff
        cycle_count <= cycle_count + 1;

        // very first input
        if (first_input_cycle < 0 && inputValid && inputReady)
            first_input_cycle <= cycle_count;

        // very first output
        if (finalOutputValid) begin
            $display("Latency = %0d cycles", cycle_count - first_input_cycle);
            $finish;
        end

        if (cycle_count > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT -- no final output after %0d cycles", TIMEOUT_CYCLES);
            $finish;
        end
    end

endmodule