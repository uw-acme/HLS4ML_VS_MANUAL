`timescale 1ns / 1ps
module flatten #(inputChannels = 10, height = 1, width = 1, bitWidth = 16) (featureMap, flattenedOut);
    input logic signed  [bitWidth-1:0] featureMap [inputChannels-1:0][height-1:0][width-1:0];
    output logic signed [bitWidth-1:0] flattenedOut [inputChannels*height*width-1:0];

    genvar ch, h, w;
    generate
        for (ch = 0; ch < inputChannels; ch++) begin : channels
            for(h = 0; h < height; h++) begin : rows
                for (w = 0; w < width; w++) begin : columns
                    assign flattenedOut[ch*(height*width) + h*(width) + w] = featureMap[ch][h][w];
                end
            end
        end
    endgenerate
    
endmodule


module flatten_tb();
    parameter inputChannels = 10;
    parameter height = 2;
    parameter width = 3;
    parameter bitWidth = 16;

    logic signed [bitWidth-1:0] featureMap [inputChannels-1:0][height-1:0][width-1:0];
    logic signed [bitWidth-1:0] flattenedOut [inputChannels*height*width-1:0];

    flatten #(inputChannels, height, width, bitWidth) dut (featureMap, flattenedOut);

    initial begin
        for (int ch = 0; ch < inputChannels; ch++) begin
            for (int h = 0; h < height; h++) begin
                for (int w = 0; w < width; w++) begin
                    featureMap[ch][h][w] = ch*100 + h*10 + w; // unique value for every ch, h, w combination
                end
            end
        end

        #10;
        for (int ch = 0; ch < inputChannels; ch++) begin
            for (int h = 0; h < height; h++) begin
                for (int w = 0; w < width; w++) begin
                    assert(flattenedOut[ch*(height*width) + h*(width) + w] == featureMap[ch][h][w])
                        $display("PASS");
                    else begin
                        $display("FAIL: mismatch at ch: %0d h: %0d w: %0d", ch, h, w);
                    end
                end
            end
        end
        
        $stop;
    end
endmodule
