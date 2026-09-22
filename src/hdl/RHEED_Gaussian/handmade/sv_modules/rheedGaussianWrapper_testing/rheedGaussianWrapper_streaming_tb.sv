`timescale 1ns / 1ps

module rheedGaussianWrapper_streaming_tb();
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

    string image_list_path, out_dir;
    integer image_list_file, pixel_file, scan_return;
    string current_image_path;
    logic [bitWidth-1:0] pixel_val;

    integer f_final_multi, f_timing;
    int final_count;
    time last_final_time, this_final_time;
    time image_start_time [0:999]; // when each image STARTED streaming in (index = image order)
    int img_idx;

    // capture every finalOutputValid pulse, in order, with per-image latency
    always_ff @(posedge clk) begin
        if (dut.finalOutputValid) begin
            this_final_time = $time;
            $fwrite(f_final_multi, "%0d", final_count);
            for (int i = 0; i < outputSize; i++)
                $fwrite(f_final_multi, ",%0d", $signed(finalOutput[i]));
            $fwrite(f_final_multi, "\n");

            // gap since the previous image's final output (throughput indicator)
            $fwrite(f_timing, "%0d,%0t,%0t\n", final_count, this_final_time,
                    (final_count == 0) ? 0 : (this_final_time - last_final_time));

            last_final_time <= this_final_time;
            final_count <= final_count + 1;
        end
    end

    int conv0_count, pool0_count, conv1_count, pool1_count, conv2_count, pool2_count;
    int dense0_count, relu0_count, dense1_count, relu1_count;

    always_ff @(posedge clk) begin
        if (dut.outputValidConv0)     conv0_count  <= conv0_count + 1;
        if (dut.outputValidMaxPool0)  pool0_count  <= pool0_count + 1;
        if (dut.outputValidConv1)     conv1_count  <= conv1_count + 1;
        if (dut.outputValidMaxPool1)  pool1_count  <= pool1_count + 1;
        if (dut.outputValidConv2)     conv2_count  <= conv2_count + 1;
        if (dut.outputValidMaxPool2)  pool2_count  <= pool2_count + 1;
        if (dut.outputValidDense0)    dense0_count <= dense0_count + 1;
        if (dut.outputValidRelu0)     relu0_count  <= relu0_count + 1;
        if (dut.outputValidDense1)    dense1_count <= dense1_count + 1;
        if (dut.outputValidRelu1)     relu1_count  <= relu1_count + 1;
    end

    // print a snapshot of all counters periodically so you can see progress live
    always_ff @(posedge clk) begin
        if ($time % 50000000 == 0) begin
            $display("[t=%0t] conv0=%0d pool0=%0d conv1=%0d pool1=%0d conv2=%0d pool2=%0d dense0=%0d relu0=%0d dense1=%0d relu1=%0d final=%0d",
                    $time, conv0_count, pool0_count, conv1_count, pool1_count, conv2_count, pool2_count,
                    dense0_count, relu0_count, dense1_count, relu1_count, final_count);
        end
    end

    // add a simple pixel counter in the streaming loop itself
    int total_pixels_streamed;
   
    integer f_conv0, f_pool0, f_conv1, f_pool1, f_conv2, f_pool2;
    integer f_dense0, f_relu0, f_dense1, f_relu1;


    initial begin
        if (!$value$plusargs("IMAGE_LIST=%s", image_list_path)) begin
            $display("ERROR: pass +IMAGE_LIST=path/to/image_list.txt");
            $finish;
        end
        if (!$value$plusargs("OUT_DIR=%s", out_dir)) begin
            $display("ERROR: pass +OUT_DIR=...");
            $finish;
        end

        image_list_file = $fopen(image_list_path, "r");
        if (image_list_file == 0) begin
            $display("ERROR: could not open %s", image_list_path);
            $finish;
        end

        f_final_multi = $fopen({out_dir, "/rtl_streaming_final.csv"}, "w");
        f_timing      = $fopen({out_dir, "/rtl_streaming_timing.csv"}, "w");

        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        @(posedge clk);

        img_idx = 0;
        while ($fscanf(image_list_file, "%s\n", current_image_path) == 1) begin
            pixel_file = $fopen(current_image_path, "r");
            if (pixel_file == 0) begin
                $display("ERROR: could not open %s", current_image_path);
                $finish;
            end
            image_start_time[img_idx] = $time;
            $display("[t=%0t] starting image %0d: %s", $time, img_idx, current_image_path);

            // open this image's own set of per-layer trace files
            f_conv0  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_conv0.csv"},  "w");
            f_pool0  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_pool0.csv"},  "w");
            f_conv1  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_conv1.csv"},  "w");
            f_pool1  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_pool1.csv"},  "w");
            f_conv2  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_conv2.csv"},  "w");
            f_pool2  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_pool2.csv"},  "w");
            f_dense0 = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_dense0.csv"}, "w");
            f_relu0  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_relu0.csv"},  "w");
            f_dense1 = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_dense1.csv"}, "w");
            f_relu1  = $fopen({out_dir, "/rtl_populated", $sformatf("%0d", img_idx), "_relu1.csv"},  "w");

            for (int i = 0; i < TOTAL_INPUT_PIXELS; i++) begin
                scan_return = $fscanf(pixel_file, "%b\n", pixel_val);
                if (scan_return != 1) begin
                    $display("ERROR: failed to read pixel %0d of image %0d", i, img_idx);
                    $finish;
                end
                inputPixel <= $signed(pixel_val);
                inputValid <= 1;
                @(posedge clk);
                while (!inputReady) @(posedge clk);

                total_pixels_streamed++;
                if (total_pixels_streamed % 500 == 0)
                    $display("[t=%0t] streamed %0d pixels total (image %0d)", $time, total_pixels_streamed, img_idx);
            end
            // close this image's trace files before moving to the next
            $fclose(f_conv0); $fclose(f_pool0); $fclose(f_conv1); $fclose(f_pool1);
            $fclose(f_conv2); $fclose(f_pool2); $fclose(f_dense0); $fclose(f_relu0);
            $fclose(f_dense1); $fclose(f_relu1);

            img_idx++;
        end

        // Don't drop inputValid to 0 immediately. Keep the handshake alive
        // with harmless padding (value doesn't matter, won't be consumed as real data
        // since the image boundary already passed) until the pipeline has genuinely
        // finished draining -- i.e. until final_count == img_idx.
        inputPixel <= 0;
        inputValid <= 1;
        while (final_count < img_idx) begin
            @(posedge clk);
            while (!inputReady) @(posedge clk);
        end

        inputValid <= 0;
        $fclose(image_list_file);

        // wait until valid final output for every image streamed in
        wait (final_count == img_idx);

        $display("Streamed %0d images, got %0d final outputs.", img_idx, final_count);
        $fclose(f_final_multi);
        $fclose(f_timing);
        $finish;
    end

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
    end


endmodule


