`timescale 1ns / 1ps

module softmaxArgmaxLayer # (
    parameter N = 10,                // Number of inputs
    parameter WIDTH = 16,            // Width of input words
    parameter NFRAC = 10            // Number of fractional bits
) (
    input logic signed [WIDTH-1:0] dataIn [N-1:0],
    input logic clk,
    input logic reset,
    output logic signed [WIDTH-1:0] dataOut [N-1:0],
    input logic input_ready,
    output logic output_ready
);
    logic signed [WIDTH-1:0] largest;
    logic [$clog2(N)-1:0] largest_addr;
    logic signed [WIDTH-1:0] dataOutBuffer [N-1:0];
    always_comb begin
        largest = 0;
        largest_addr = 0;
        for (int i=0; i<N; i++) begin
            if (dataIn[i]>largest) begin
                largest=dataIn[i];
                largest_addr=i;
            end
        end
        dataOutBuffer = '{default: 0};
        dataOutBuffer[largest_addr]=1'b1<<NFRAC;
    end
    always_ff @(posedge clk) begin
        dataOut<=dataOutBuffer;
        output_ready<=input_ready;
    end
endmodule

module softmaxLayer_tb;

    // Parameters
    localparam N = 3;                // Number of inputs
    localparam WIDTH = 16;        // Width of input words
    localparam NFRAC = 10;            // Number of fractional bits

    // Testbench signals
    logic signed [WIDTH-1:0] dataIn [N-1:0];
    logic clk;
    logic signed [WIDTH-1:0] dataOut [N-1:0];

    // Instantiate the softmaxParameterized module
    softmaxLayer #(
        .N(N),
        .WIDTH(WIDTH),
        .NFRAC(NFRAC)
    ) uut (
        .dataIn(dataIn),
        .clk(clk),
        .dataOut(dataOut)
    );

    // Clock generation
    initial begin
        clk = 1;
        forever #5 clk = ~clk;  // 100 MHz clock
    end

    // Test stimulus
    initial begin
        // Initialize inputs
//        for (int i = 0; i < N; i++) begin
//            dataIn[i] = $signed(i * 2); // Example data
//        end
        
//        // Wait for a few clock cycles to observe the results
//        #10;

//        // Apply new data
//        for (int i = 0; i < N; i++) begin
//            dataIn[i] = $signed((i + 1) * 3); // Example data
//        end

//        // Wait for a few clock cycles to observe the results
//        #10;
        
        dataIn[0] = 16'sh0000;
        dataIn[1] = 16'sh0000;
        dataIn[2] = 16'sh0000;
//        dataIn[3] = 16'sh0000;
        
        # 200

        dataIn[0] = 16'sh1fff;
        dataIn[1] = 16'sh0001;
        dataIn[2] = 16'sh0001;
//        dataIn[3] = 16'sh0001;

        # 200
        
        dataIn[0] = 16'sh1c4a;
        dataIn[1] = 16'sh117f;
        dataIn[2] = 16'sha27b;
//        dataIn[3] = 16'sh0001;

        // dataIn[0] = -16'sh1005;
        // dataIn[1] = -16'sh0005;
        // dataIn[2] = -16'sh0005;
        // dataIn[3] = -16'sh0005;

        # 100

        // dataIn[0] = 16'sh0005;
        // dataIn[1] = 16'sh0005;
        // dataIn[2] = 16'sh000a;
        // dataIn[3] = 16'sh000a;

        // # 100

        // End the simulation
        $finish;
    end

    // Monitor the outputs
    initial begin
        $monitor("Time = %0t | dataIn = %p | dataOut = %p", $time, dataIn, dataOut);
    end

endmodule

