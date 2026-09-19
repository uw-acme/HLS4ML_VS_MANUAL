`timescale 1ns / 1ps

module conv2Dwindow_isolated_tb();

    localparam inputWidth = 11;
    localparam filtDimension = 3;
    localparam bitWidth = 8;
    localparam inputChannels = 6;  // CHANGED: test all 6 channels, matching conv1's real input

    logic clock = 0, reset;
    logic signed [bitWidth-1:0] inputPixel [0:inputChannels-1];
    logic shiftEnable;
    logic signed [bitWidth-1:0] currConvMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];
    logic positionValid, nextPositionValid;

    conv2Dwindow_reuse9_multichannel #(
        .inputChannels(inputChannels),
        .filtDimension(filtDimension),
        .bitWidth(bitWidth),
        .inputWidth(inputWidth)
    ) dut (
        .clock(clock), .reset(reset),
        .inputPixel(inputPixel), .shiftEnable(shiftEnable),
        .currConvMatrix(currConvMatrix),
        .positionValid(positionValid), .nextPositionValid(nextPositionValid)
    );

    parameter PERIOD = 10;
    always #(PERIOD/2) clock = ~clock;

    int row, col, t, ch;
    int valid_count;

    initial begin
        reset = 1; shiftEnable = 0;
        for (ch = 0; ch < inputChannels; ch++) inputPixel[ch] = 0;
        repeat (3) @(posedge clock);
        reset = 0;

        for (t = 0; t < inputWidth*inputWidth; t++) begin
            row = t / inputWidth;
            col = t % inputWidth;
            // CHANGED: each channel gets a distinguishable value -- channel number
            // in the tens digit, raster position (mod 10) in the ones digit, so a
            // value like 32 unambiguously means "channel 3, position ending in 2"
            for (ch = 0; ch < inputChannels; ch++) begin
                inputPixel[ch] = ch*20 + ((row*inputWidth+col) % 20);
            end
            shiftEnable = 1;
            @(posedge clock);

            if (positionValid) begin
                valid_count++;
                $display("[valid #%0d] currRow=%0d currCol=%0d", valid_count, dut.currRow, dut.currCol);
                // CHANGED: print every channel's matrix separately, so cross-channel
                // bleeding is immediately visible (e.g. channel 0's data appearing
                // inside channel 3's slot)
                for (ch = 0; ch < inputChannels; ch++) begin
                    $display("  ch=%0d: %p", ch, currConvMatrix[ch]);
                end
            end
        end

        $display("Total valid window positions: %0d (expected %0d)",
                  valid_count, (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1));
        $finish;
    end



endmodule

// `timescale 1ns / 1ps

// module conv2Dwindow_isolated_tb();

//     localparam inputWidth = 11;   // matches conv1's real input width
//     localparam filtDimension = 3;
//     localparam bitWidth = 8;
//     localparam inputChannels = 1; // testing window/FIFO timing only, not cross-channel wiring

//     logic clock = 0, reset;
//     logic signed [bitWidth-1:0] inputPixel [0:inputChannels-1];
//     logic shiftEnable;
//     logic signed [bitWidth-1:0] currConvMatrix [0:inputChannels-1][filtDimension-1:0][filtDimension-1:0];
//     logic positionValid, nextPositionValid;

//     conv2Dwindow_reuse9_multichannel #(
//         .inputChannels(inputChannels),
//         .filtDimension(filtDimension),
//         .bitWidth(bitWidth),
//         .inputWidth(inputWidth)
//     ) dut (
//         .clock(clock), .reset(reset),
//         .inputPixel(inputPixel), .shiftEnable(shiftEnable),
//         .currConvMatrix(currConvMatrix),
//         .positionValid(positionValid), .nextPositionValid(nextPositionValid)
//     );

//     parameter PERIOD = 10;
//     always #(PERIOD/2) clock = ~clock;

//     int row, col, t;
//     int valid_count;

//     initial begin
//         reset = 1; shiftEnable = 0; inputPixel[0] = 0;
//         repeat (3) @(posedge clock);
//         reset = 0;

//         // Stream all 121 pixels in raster order, one per cycle, continuously
//         // (stress test: real usage only shifts once every 9 cycles during compute,
//         // but the window/FIFO logic doesn't depend on that cadence -- it only cares
//         // about the cumulative order of shiftEnable pulses relative to pixel order,
//         // so continuous shifting is a valid, simpler, and strictly harder test)
//         for (t = 0; t < inputWidth*inputWidth; t++) begin
//             row = t / inputWidth;
//             col = t % inputWidth;
//             inputPixel[0] = row*inputWidth + col;  // unique value per pixel = its own raster index
//             shiftEnable = 1;
//             @(posedge clock);

//             if (positionValid) begin
//                 valid_count++;
//                 $display("[valid #%0d] currRow=%0d currCol=%0d  matrix=%p",
//                           valid_count, dut.currRow, dut.currCol, currConvMatrix[0]);
//             end
//         end

//         $display("Total valid window positions: %0d (expected %0d)",
//                   valid_count, (inputWidth-filtDimension+1)*(inputWidth-filtDimension+1));
//         $finish;
//     end

// endmodule