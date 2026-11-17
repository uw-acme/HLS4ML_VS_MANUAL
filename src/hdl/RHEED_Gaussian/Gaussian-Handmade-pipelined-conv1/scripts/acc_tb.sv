`timescale 1ns / 1ps

// Accuracy testbench for rheedGaussianWrapper.
//
// Streams a list of images back-to-back.
// One reset at the start, none between images.
// Records one row of final outputs per image.

// Plusargs:
//   IMAGE_LIST --  text file, one pixel-file path per line
//   OUT_DIR --     directory for rtl_final.csv (must already exist)

// Each pixel file has 48*48 lines: one two's-complement binary string per line, row-major.
// Output rows: <image index>,<out0>,...,<out4>   (raw signed integers; divide by 2**NFRAC)

// Bit widths come in as parameters (xelab acc_tb -generic_top bitWidth=16 -generic_top NFRAC=9 ...)

module acc_tb #(
    parameter bitWidth = 8,
    parameter NFRAC = 5,
    parameter NFRAC_first = 7,
    parameter PERIOD = 10,               // clock period in ns 
    parameter TIMEOUT_CYCLES = 100000    // abort if no final output appears for this many cycles
) ();

    localparam inputWidth = 48;
    localparam outputSize = 5;  // number of output values
    localparam TOTAL_INPUT_PIXELS = inputWidth * inputWidth;

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

    // ---- capture one row per final output (abort if the design stops producing them) ----
    integer f_out;
    int final_count = 0; // which test image
    int idle_cycles = 0; // # of cycles without outputs produced

    always_ff @(posedge clk) begin
        if (finalOutputValid) begin
            $fwrite(f_out, "%0d", final_count);
            for (int i = 0; i < outputSize; i++)
                $fwrite(f_out, ",%0d", $signed(finalOutput[i]));
            $fwrite(f_out, "\n");
            final_count <= final_count + 1;
            idle_cycles <= 0;
        end else begin
            idle_cycles <= idle_cycles + 1;
        end
        if (idle_cycles > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT -- no final output for %0d cycles (captured %0d)", TIMEOUT_CYCLES, final_count);
            $fclose(f_out);
            $finish;
        end
    end

    // ---- stimulus ----
    string image_list_path, out_dir, current_image_path;
    integer image_list_file, pixel_file, scan_return;
    logic [bitWidth-1:0] pixel_val;
    int img_count;

    initial begin
        if (!$value$plusargs("IMAGE_LIST=%s", image_list_path)) begin
            $display("ERROR: pass +IMAGE_LIST=<file listing pixel file paths>");
            $finish;
        end
        if (!$value$plusargs("OUT_DIR=%s", out_dir)) begin
            $display("ERROR: pass +OUT_DIR=<output directory>");
            $finish;
        end
        image_list_file = $fopen(image_list_path, "r");
        if (!image_list_file) begin
            $display("ERROR: could not open %s", image_list_path);
            $finish;
        end
        f_out = $fopen({out_dir, "/rtl_final.csv"}, "w");
        if (!f_out) begin
            $display("ERROR: could not write to %s", out_dir);
            $finish;
        end

        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        @(posedge clk);

        img_count = 0;
        while ($fscanf(image_list_file, "%s\n", current_image_path) == 1) begin
            pixel_file = $fopen(current_image_path, "r");
            if (!pixel_file) begin
                $display("ERROR: could not open %s", current_image_path);
                $finish;
            end
            for (int i = 0; i < TOTAL_INPUT_PIXELS; i++) begin
                scan_return = $fscanf(pixel_file, "%b\n", pixel_val);
                if (!scan_return) begin
                    $display("ERROR: failed to read pixel %0d of image %0d (%s)", i, img_count, current_image_path);
                    $finish;
                end
                inputPixel <= $signed(pixel_val);
                inputValid <= 1;
                @(posedge clk);
                while (!inputReady) @(posedge clk);
            end
            $fclose(pixel_file);
            img_count++;
        end
        $fclose(image_list_file);

        // Stopping the input right away would strand the last outputs -- the pipeline only
        // advances while the handshake is active, s0 keep feeding padding until every image's
        // output has appeared.
        inputPixel <= 0;
        inputValid <= 1;
        while (final_count < img_count) begin
            @(posedge clk);
            while (!inputReady) @(posedge clk);
        end
        inputValid <= 0;
        @(posedge clk);

        $display("Streamed %0d images, captured %0d outputs.", img_count, final_count);
        $fclose(f_out);
        $finish;
    end

endmodule