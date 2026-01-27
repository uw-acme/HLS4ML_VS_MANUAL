`timescale 1ns / 1ps

module softmaxLayerNeg # (
    parameter N = 10,                // Number of inputs
    parameter WIDTH = 16,            // Width of input words
    parameter NFRAC = 10,            // Number of fractional bits
    parameter MEM_WIDTH = 10,        // Width of the memory lookup indices
    parameter MEM_NFRAC_EXP = 6,        // Number of fractional bits in the memory lookup indices
    parameter MEM_NFRAC_INV = 7,        // Number of fractional bits in the memory lookup indices
    parameter TABLE_WIDTH_EXP = 18,      // Width of the table entries
    parameter TABLE_NFRAC_EXP = 17,             // Number of fractional bits
    parameter TABLE_WIDTH_INV = 18,
    parameter TABLE_NFRAC_INV = 17,
    // Table name key:
    // {function}_table_{width of values}_{nfrac of values}_{width of lookup ind}_{frac of lookup ind}
    parameter EXP_TABLE_PATH = "../weights/softmax/exp_neg_table_18_17_10_6.dat",
    parameter INVERT_TABLE_PATH = "../weights/softmax/pos_invert_table_18_17_10_7.dat"
) (
    input logic signed [WIDTH-1:0] dataIn [N-1:0],
    input logic clk,
    input logic reset,
    output logic signed [WIDTH-1:0] dataOut [N-1:0],
    input logic input_ready,
    output logic output_ready
);

    
    localparam num_cycles = 3;
    logic [num_cycles-1:0] ready_buffer = 0;
    assign output_ready = ready_buffer[0];
    // Lookup tables
    logic unsigned [TABLE_WIDTH_EXP-1:0] exp_table [2**MEM_WIDTH-1:0];
    logic unsigned [TABLE_WIDTH_INV-1:0] invert_table [2**MEM_WIDTH-1:0];
    logic signed [MEM_WIDTH-1:0] dataIn_parse [N-1:0];
    // Intermediate signals
    wire unsigned [TABLE_WIDTH_EXP+TABLE_WIDTH_INV:0] buffer [N-1:0];
    logic unsigned [TABLE_WIDTH_EXP-1:0] expResult [N-1:0];
    logic unsigned [TABLE_WIDTH_EXP-1:0] expResultBuff [N-1:0];

    logic unsigned [2*TABLE_WIDTH_EXP-1:0] tempSum;
    logic unsigned [2*TABLE_WIDTH_EXP-1:0] expSum;
    logic signed [MEM_WIDTH-1:0] lookupIndex [N-1:0];
    logic signed [MEM_WIDTH-1:0] invertIndex;
    logic unsigned [TABLE_WIDTH_INV-1:0] invertVal;
    logic signed [MEM_WIDTH-1:0] maxIn;

    // logic signed [MEM_WIDTH-1:0] lookupIndexes [N-1:0];
    // Initialize tables
    initial begin
        $readmemb(EXP_TABLE_PATH, exp_table, 0, 2**MEM_WIDTH-1);
        $readmemb(INVERT_TABLE_PATH, invert_table, 0, 2**MEM_WIDTH-1);
    end

    // Calculate exponential values and sum
    
    always_comb begin
        
        for (int i = 0; i < N; i++) begin
            if (MEM_NFRAC_EXP == NFRAC) 
                dataIn_parse[i] = dataIn[i];
            else if (MEM_NFRAC_EXP < NFRAC)
                dataIn_parse[i] = (dataIn[i] >>> (NFRAC - MEM_NFRAC_EXP));
            else
                dataIn_parse[i] = (dataIn[i] << (MEM_NFRAC_EXP - NFRAC));
        end
        maxIn = dataIn_parse[0];
        for (int i=1; i < N; i++) begin
            if (dataIn_parse[i]>maxIn)
                maxIn=dataIn_parse[i];
        end
        for (int i = 0; i < N; i++) begin
            lookupIndex[i] = maxIn-dataIn_parse[i];
            // expResult[i] = exp_table[$unsigned(lookupIndex[i])];
        end
    end
    always_ff @(posedge clk)
        for (int i = 0; i < N; i++)
            expResult[i] <= exp_table[$unsigned(lookupIndex[i])];


    // Adder Tree
    always_comb begin
        tempSum=0;
        for (int i=0; i<N; i++) begin
            tempSum=tempSum+expResult[i];
        end
    end

    // Inverse lookup
    // first cap extreme value (if tempSum >> (TABLE_NFRAC - MEM_NFRAC_INV) is out of range of MEM_WIDTH bit signed value, pick the max / min value)

    assign expSum = tempSum >>> (TABLE_NFRAC_EXP - MEM_NFRAC_INV);


    always_comb begin
        if (expSum >= 2**(MEM_WIDTH)) // invert is only positive
            invertIndex = {{(MEM_WIDTH){1'b1}}};
        else 
            invertIndex = expSum[MEM_WIDTH-1:0];
    end

    // Currently pipelined below
    // assign invertVal = invert_table[invertIndex]; 

    // Multiply and store the results
    genvar i;
    generate
        for (i = 0; i < N; i++) begin : multiply_and_store
            assign buffer[i] = {1'b0, expResultBuff[i]}*invertVal;
        end
    endgenerate
    // Output assignment
    localparam BUFFER_EXT = NFRAC-(TABLE_NFRAC_EXP+TABLE_NFRAC_INV);

    always_ff @(posedge clk) begin
        invertVal <= invert_table[invertIndex];
        ready_buffer<={input_ready, ready_buffer[num_cycles-1:1]};
        expResultBuff<=expResult;
        for (int i = 0; i < N; i++) begin
            if (NFRAC<(TABLE_NFRAC_EXP+TABLE_NFRAC_INV)) begin
                dataOut[i] <= buffer[i]>>(TABLE_NFRAC_EXP+TABLE_NFRAC_INV-NFRAC);
            end
            else begin
                dataOut[i] <= buffer[i]<<(NFRAC-TABLE_NFRAC_EXP-TABLE_NFRAC_INV);
            end
        end
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

