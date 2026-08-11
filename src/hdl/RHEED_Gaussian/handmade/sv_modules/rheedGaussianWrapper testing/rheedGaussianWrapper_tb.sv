`timescale 1ns / 1ps

module rheedGaussianWrapper_tb();

    localparam bitWidth = 8;
    localparam inputWidth = 48;
    localparam outputSize = 5;
    localparam TOTAL_INPUT_PIXELS = inputWidth * inputWidth;

    logic clk = 0;
    logic reset;
    logic signed [bitWidth-1:0] inputPixel;
    logic inputValid;
    logic inputReady;
    logic signed [bitWidth-1:0] finalOutput [outputSize-1:0];
    logic finalOutputValid;

    rheedGaussianWrapper dut (
        .clk(clk), .reset(reset),
        .inputPixel(inputPixel), .inputValid(inputValid), .inputReady(inputReady),
        .finalOutput(finalOutput), .finalOutputValid(finalOutputValid)
    );

    // simulation clock
    parameter PERIOD = 10; // 10ns period(100MHz) -- match XDC clock constraint
    initial begin
		clk <= 0;
		forever #(PERIOD/2) clk <= ~clk; // Forever toggle the clock
	end

    // pixel stream file (set via +PIXEL_FILE=path at sim invocation) 
    string pixel_file_path;
    integer pixel_file, scan_ret;
    logic [bitWidth-1:0] pixel_bin;

    // trace output files 
    integer f_conv0, f_pool0, f_conv1, f_pool1, f_conv2, f_pool2;
    integer f_dense0, f_relu0, f_dense1, f_relu1, f_final;

    time start_time, end_time;

    initial begin
        if (!$value$plusargs("PIXEL_FILE=%s", pixel_file_path)) begin
            $display("ERROR: pass +PIXEL_FILE=path/to/onehot_X.txt");
            $finish;
        end
        pixel_file = $fopen(pixel_file_path, "r");
        if (pixel_file == 0) begin
            $display("ERROR: could not open %s", pixel_file_path);
            $finish;
        end

        f_conv0  = $fopen("traces/rtl_conv0.csv", "w");
        f_pool0  = $fopen("traces/rtl_pool0.csv", "w");
        f_conv1  = $fopen("traces/rtl_conv1.csv", "w");
        f_pool1  = $fopen("traces/rtl_pool1.csv", "w");
        f_conv2  = $fopen("traces/rtl_conv2.csv", "w");
        f_pool2  = $fopen("traces/rtl_pool2.csv", "w");
        f_dense0 = $fopen("traces/rtl_dense0.csv", "w");
        f_relu0  = $fopen("traces/rtl_relu0.csv", "w");
        f_dense1 = $fopen("traces/rtl_dense1.csv", "w");
        f_relu1  = $fopen("traces/rtl_relu1.csv", "w");
        f_final  = $fopen("traces/rtl_final.csv", "w");

        reset = 1;
        inputValid = 0;
        inputPixel = 0;
        repeat (3) @(posedge clk);
        reset = 0;
        @(posedge clk);

        start_time = $time;

        // stream in all TOTAL_INPUT_PIXELS pixels, respecting inputReady backpressure
        for (int i = 0; i < TOTAL_INPUT_PIXELS; i++) begin
            scan_ret = $fscanf(pixel_file, "%b\n", pixel_bin);
            if (scan_ret != 1) begin
                $display("ERROR: failed to read pixel %0d from file", i);
                $finish;
            end
            inputPixel = $signed(pixel_bin);
            inputValid = 1;
            @(posedge clk);
            while (!inputReady) @(posedge clk);  // wait if dut deasserts ready
        end
        inputValid = 0;

        // wait for the final output to appear
        wait (finalOutputValid);
        end_time = $time;

        for (int c = 0; c < outputSize; c++)
            $fwrite(f_final, "%0d%s", $signed(finalOutput[c]), (c == outputSize-1) ? "\n" : ",");

        $display("Latency = %0d cycles (%0t ns)", (end_time - start_time) / 10, end_time - start_time);

        $fclose(pixel_file);
        $fclose(f_conv0); $fclose(f_pool0); $fclose(f_conv1); $fclose(f_pool1);
        $fclose(f_conv2); $fclose(f_pool2); $fclose(f_dense0); $fclose(f_relu0);
        $fclose(f_dense1); $fclose(f_relu1); $fclose(f_final);

        $finish;
    end

    // ---- per-layer trace capture: pulses hierarchically off internal dut signals ----
    // NOTE: these are streaming valid pulses -- each may fire MANY times per image,
    // once per output pixel position produced. Every pulse gets logged as its own row.
    always_ff @(posedge clk) begin
        if (dut.outputValidConv0)
            for (int c = 0; c < 6; c++)
                $fwrite(f_conv0, "%0d%s", $signed(dut.outputPixelConv0[c]), (c==5) ? "\n" : ",");

        if (dut.outputValidMaxPool0)
            for (int c = 0; c < 6; c++)
                $fwrite(f_pool0, "%0d%s", $signed(dut.outputPixelMaxPool0[c]), (c==5) ? "\n" : ",");

        if (dut.outputValidConv1)
            for (int c = 0; c < 8; c++)
                $fwrite(f_conv1, "%0d%s", $signed(dut.outputPixelConv1[c]), (c==7) ? "\n" : ",");

        if (dut.outputValidMaxPool1)
            for (int c = 0; c < 8; c++)
                $fwrite(f_pool1, "%0d%s", $signed(dut.outputPixelMaxPool1[c]), (c==7) ? "\n" : ",");

        if (dut.outputValidConv2)
            for (int c = 0; c < 10; c++)
                $fwrite(f_conv2, "%0d%s", $signed(dut.outputPixelConv2[c]), (c==9) ? "\n" : ",");

        if (dut.outputValidMaxPool2)
            for (int c = 0; c < 10; c++)
                $fwrite(f_pool2, "%0d%s", $signed(dut.outputPixelMaxPool2[c]), (c==9) ? "\n" : ",");

        if (dut.outputValidDense0)
            for (int c = 0; c < 15; c++)
                $fwrite(f_dense0, "%0d%s", $signed(dut.outputDataDense0[c]), (c==14) ? "\n" : ",");

        if (dut.outputValidRelu0)
            for (int c = 0; c < 15; c++)
                $fwrite(f_relu0, "%0d%s", $signed(dut.outputDataRelu0[c]), (c==14) ? "\n" : ",");

        if (dut.outputValidDense1)
            for (int c = 0; c < 10; c++)
                $fwrite(f_dense1, "%0d%s", $signed(dut.outputDataDense1[c]), (c==9) ? "\n" : ",");

        if (dut.outputValidRelu1)
            for (int c = 0; c < 10; c++)
                $fwrite(f_relu1, "%0d%s", $signed(dut.outputDataRelu1[c]), (c==9) ? "\n" : ",");
    end

endmodule
