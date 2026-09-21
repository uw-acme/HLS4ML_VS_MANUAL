`timescale 1ns / 1ps

module rheedGaussianWrapper_tb();

    localparam bitWidth = 8;
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

    rheedGaussianWrapper dut (
        .clk(clk), .reset(reset),
        .inputPixel(inputPixel), .inputValid(inputValid), .inputReady(inputReady),
        .finalOutput(finalOutput), .finalOutputValid(finalOutputValid)
    );

    // simulation clock
    parameter PERIOD = 10; // 10ns period(100MHz) -- match XDC clock constraint
    initial begin
		clk <= 0;
		forever #(PERIOD/2) clk <= ~clk; // forever toggle the clock
	end

    // pixel stream file (set via +PIXEL_FILE=path at sim invocation) 
    string pixel_file_path;
    integer pixel_file, scan_return;
    logic [bitWidth-1:0] pixel_val;

    // test label (set via +TEST_LABEL=N at sim invocation), used to
    // build output filenames like rtl_<idx>_<layername>.csv, matching the
    // hls4ml/keras trace file naming convention (from training_aya_11.27.ipynb)
    string test_label;

    // trace output files 
    integer f_conv0, f_pool0, f_conv1, f_pool1, f_conv2, f_pool2;
    integer f_dense0, f_relu0, f_dense1, f_relu1, f_final;

    // record start and end time to track total latency
    time start_time, end_time;

    // boolean flag: final outputs are written to csv
    logic final_written;

    // output directory
    string out_dir;


    initial begin
        // pass in file path of the flattened input image data (row-major)
        // pass in as command line argument "+PIXEL_FILE=..."
        if (!$value$plusargs("PIXEL_FILE=%s", pixel_file_path)) begin
            $display("ERROR: pass +PIXEL_FILE=path/to/onehot_X.txt");
            $finish;
        end
        pixel_file = $fopen(pixel_file_path, "r");
        if (pixel_file == 0) begin
            $display("ERROR: could not open %s", pixel_file_path);
            $finish;
        end

        // pass in which one-hot sample this run corresponds to (0-4),
        // as command line argument "+TEST_LABEL=..."
        if (!$value$plusargs("TEST_LABEL=%s", test_label)) begin
            $display("ERROR: pass +TEST_LABEL=populated_0 (or similar) describing the sample being tested");
            $finish;
        end

        if (!$value$plusargs("OUT_DIR=%s", out_dir)) begin
            $display("ERROR: pass +OUT_DIR=traces (or similar)");
            $finish;
        end

        // build each output filename as traces/rtl_<idx>_<layername>.csv,
        // matching the hls4ml_<idx>_<layername>.csv / keras_<idx>_<layername>.csv
        // naming convention already used by the Python tracing script
        f_conv0  = $fopen({out_dir, "/rtl_", test_label, "_conv0.csv"},  "w");
        f_pool0  = $fopen({out_dir, "/rtl_", test_label, "_pool0.csv"},  "w");
        f_conv1  = $fopen({out_dir, "/rtl_", test_label, "_conv1.csv"},  "w");
        f_pool1  = $fopen({out_dir, "/rtl_", test_label, "_pool1.csv"},  "w");
        f_conv2  = $fopen({out_dir, "/rtl_", test_label, "_conv2.csv"},  "w");
        f_pool2  = $fopen({out_dir, "/rtl_", test_label, "_pool2.csv"},  "w");
        f_dense0 = $fopen({out_dir, "/rtl_", test_label, "_dense0.csv"}, "w");
        f_relu0  = $fopen({out_dir, "/rtl_", test_label, "_relu0.csv"},  "w");
        f_dense1 = $fopen({out_dir, "/rtl_", test_label, "_dense1.csv"}, "w");
        f_relu1  = $fopen({out_dir, "/rtl_", test_label, "_relu1.csv"},  "w");
        f_final  = $fopen({out_dir, "/rtl_", test_label, "_final.csv"},  "w");


        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        @(posedge clk);

        // check start time
        start_time = $time; 

        // stream in all TOTAL_INPUT_PIXELS pixels, respecting inputReady backpressure
        for (int i = 0; i < TOTAL_INPUT_PIXELS; i++) begin
            // read one line (1 pixel value) at a time from pixel_file
            // and store it into pixel_val
            scan_return = $fscanf(pixel_file, "%b\n", pixel_val);
            if (scan_return != 1) begin // if failed
                $display("ERROR: failed to read pixel %0d from file", i);
                $finish;
            end
            inputPixel <= $signed(pixel_val);
            inputValid <= 1;
            @(posedge clk);

            while (!inputReady) begin
                @(posedge clk); // wait if dut deasserts ready signal
            end
        end
        inputValid <= 0; @(posedge clk);

        // wait for the final outputs to be written
        wait(final_written);

        // check end time
        end_time = $time;

        // write every final output value (comma-seperated) to f_final
        // for (int i = 0; i < outputSize; i++) begin
        //     $fwrite(f_final, "%0d%s", $signed(finalOutput[i]), (i == outputSize-1) ? "\n" : ",");
        // end 

        // total latency
        $display("Latency = %0d cycles (%0t ns)", (end_time - start_time) / PERIOD, end_time - start_time);

        // close file handles
        $fclose(pixel_file);
        $fclose(f_conv0); $fclose(f_pool0); $fclose(f_conv1); $fclose(f_pool1);
        $fclose(f_conv2); $fclose(f_pool2); $fclose(f_dense0); $fclose(f_relu0);
        $fclose(f_dense1); $fclose(f_relu1); $fclose(f_final);

        $finish;
    end

    // per-layer trace capture: pulses off internal dut outputValid signals from each layer
    // Every pulse gets logged as its own row
    always_ff @(posedge clk) begin
        if (dut.outputValidConv0)
            for (int i = 0; i < 6; i++)
                $fwrite(f_conv0, "%0d%s", $signed(dut.outputPixelConv0[i]), (i==5) ? "\n" : ",");

        if (dut.outputValidMaxPool0)
            for (int i = 0; i < 6; i++)
                $fwrite(f_pool0, "%0d%s", $signed(dut.outputPixelMaxPool0[i]), (i==5) ? "\n" : ",");

        if (dut.outputValidConv1)
            for (int i = 0; i < 8; i++)
                $fwrite(f_conv1, "%0d%s", $signed(dut.outputPixelConv1[i]), (i==7) ? "\n" : ",");

        if (dut.outputValidMaxPool1)
            for (int i = 0; i < 8; i++)
                $fwrite(f_pool1, "%0d%s", $signed(dut.outputPixelMaxPool1[i]), (i==7) ? "\n" : ",");

        if (dut.outputValidConv2)
            for (int i = 0; i < 10; i++)
                $fwrite(f_conv2, "%0d%s", $signed(dut.outputPixelConv2[i]), (i==9) ? "\n" : ",");

        if (dut.outputValidMaxPool2)
            for (int i = 0; i < 10; i++)
                $fwrite(f_pool2, "%0d%s", $signed(dut.outputPixelMaxPool2[i]), (i==9) ? "\n" : ",");

        if (dut.outputValidDense0)
            for (int i = 0; i < 15; i++)
                $fwrite(f_dense0, "%0d%s", $signed(dut.outputDataDense0[i]), (i==14) ? "\n" : ",");

        if (dut.outputValidRelu0)
            for (int i = 0; i < 15; i++)
                $fwrite(f_relu0, "%0d%s", $signed(dut.outputDataRelu0[i]), (i==14) ? "\n" : ",");

        if (dut.outputValidDense1)
            for (int i = 0; i < 10; i++)
                $fwrite(f_dense1, "%0d%s", $signed(dut.outputDataDense1[i]), (i==9) ? "\n" : ",");

        if (dut.outputValidRelu1)
            for (int i = 0; i < 10; i++)
                $fwrite(f_relu1, "%0d%s", $signed(dut.outputDataRelu1[i]), (i==9) ? "\n" : ",");

        if (dut.finalOutputValid)
            for (int i = 0; i < outputSize; i++) 
                $fwrite(f_final, "%0d%s", $signed(finalOutput[i]), (i == outputSize-1) ? "\n" : ",");
            final_written <= 1'b1;
    end

    // probe: watch conv1's channel-3 (whichFilt=3) accumulation live, cycle by cycle
    always_ff @(posedge clk) begin
        if (dut.conv1.eachSumNine[3].conv2Dsum.started || dut.conv1.eachSumNine[3].conv2Dsum.start) begin
            $display("[conv1 ch3] t=%0t counter=%0d start=%0d spatialSum=%0d accumulator=%0d currMatrix_ch=%p",
                      $time,
                      dut.conv1.counter,
                      dut.conv1.eachSumNine[3].conv2Dsum.start,
                      dut.conv1.eachSumNine[3].conv2Dsum.spatialSum,
                      dut.conv1.eachSumNine[3].conv2Dsum.accumulator,
                      dut.conv1.currConvMatrix);
        end
    end

endmodule