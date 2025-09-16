`timescale 1ns / 1ps

module softmaxLayer # (
    parameter N = 10,                // Number of inputs
    parameter WIDTH = 16,            // Width of input words
    parameter NFRAC = 10,            // Number of fractional bits
    parameter MEM_WIDTH = 10,        // Width of the memory lookup indices
    parameter MEM_NFRAC_EXP = 6,        // Number of fractional bits in the memory lookup indices
    parameter MEM_NFRAC_INV = 2,        // Number of fractional bits in the memory lookup indices
    parameter TABLE_WIDTH = 18,      // Width of the table entries
    parameter TABLE_NFRAC = 10,             // Number of fractional bits
    parameter EXP_TABLE_PATH = "./weights/softmax/exp_table_18_10_10_6.dat",
    parameter INVERT_TABLE_PATH = "./weights/softmax/softmax_invert_18_10_10_2.dat"
) (
    input logic signed [WIDTH-1:0] dataIn [N-1:0],
    input logic clk,
    input logic reset,
    output logic signed [WIDTH-1:0] dataOut [N-1:0]
);

    // Lookup tables
    logic unsigned [TABLE_WIDTH-1:0] exp_table [2**MEM_WIDTH-1:0];
    logic signed [TABLE_WIDTH-1:0] invert_table [2**MEM_WIDTH-1:0];

    // Intermediate signals
    wire signed [(2 * TABLE_WIDTH) - 1:0] buffer [N-1:0];
    logic signed [2*TABLE_WIDTH-1:0] expResult [N-1:0];  // notice that exp table is unsigned, we will need to add a positive sign bit to the result
    logic signed [2*TABLE_WIDTH-1:0] tempSum;
    logic signed [2*TABLE_WIDTH-1:0] expSum;
    logic [MEM_WIDTH-1:0] lookupIndex [N-1:0];
    logic [MEM_WIDTH-1:0] invertIndex;
    logic signed [TABLE_WIDTH-1:0] invertVal;
    // logic signed [MEM_WIDTH-1:0] lookupIndexes [N-1:0];
    // Initialize tables
    initial begin
        // assert that the integer width of word is smaller than that of memory lookup index
        assert(WIDTH - NFRAC <= MEM_WIDTH - MEM_NFRAC_EXP);
        // assert that Invert table entry have greater integer width than that of exp table entry
        // assert(MEM_NFRAC_EXP < MEM_NFRAC_INV);
        $readmemb(EXP_TABLE_PATH, exp_table, 0, 2**MEM_WIDTH-1);
        $readmemh(INVERT_TABLE_PATH, invert_table, 0, 2**MEM_WIDTH-1);
    end

    // Calculate exponentials and sum
    always_comb begin
        for (int i = 0; i < N; i++) begin
            if (MEM_NFRAC_EXP == NFRAC) 
                lookupIndex[i] = dataIn[i];
            else if (MEM_NFRAC_EXP < NFRAC)
                lookupIndex[i] = (dataIn[i] >>> (NFRAC - MEM_NFRAC_EXP));
            else
                lookupIndex[i] = (dataIn[i] << (MEM_NFRAC_EXP - NFRAC));

            expResult[i] = {{(TABLE_WIDTH){1'b0}}, exp_table[lookupIndex[i]]};
        end
    end

    // Adder Tree
    adderTree_1D_p4 #(
        .WIDTH(TABLE_WIDTH * 2),
        .INPUT_SIZE(N)
    ) add (
        .clk(clk),
        .reset(reset),
        .input_data(expResult),
        .output_data(tempSum)
    );

    // Inverse lookup
    // TODO: maybe we don't need invert value for negative values.
    // first cap extreme value (if tempSum >> (TABLE_NFRAC - MEM_NFRAC_INV) is out of range of MEM_WIDTH bit signed value, pick the max / min value)

    assign expSum = tempSum >>> (TABLE_NFRAC - MEM_NFRAC_INV);


    always_comb begin
        if (expSum >= 2**(MEM_WIDTH - 1)) // our table's positve portion only have 512 (2**(MEM_WIDTH-1)) entries
            invertIndex = {1'b0, {(MEM_WIDTH-1){1'b1}}};
        else // notice: since expSum could only be positive, we don't need to consider negative values
        // else if (expSum < -2**(MEM_WIDTH))
        //     invertIndex = {1'b1, {(MEM_WIDTH-1){1'b0}}};
        // else
            invertIndex = expSum[MEM_WIDTH-1:0];
    end

    assign invertVal = invert_table[invertIndex];

    // Multiply and store the results
    genvar i;
    generate
        for (i = 0; i < N; i++) begin : multiply_and_store
            mult_op_wrap #(
                .din_WIDTH(TABLE_WIDTH),
                .dweight_WIDTH(TABLE_WIDTH),
                .dout_WIDTH(2 * TABLE_WIDTH)
            ) mow (
                .clk(clk),
                .reset(1'b0),
                .ce(1'b1),
                .din(expResult[i][TABLE_WIDTH-1:0]),
                .dweight(invertVal),
                .dout(buffer[i])
            );
        end
    endgenerate

    // Output assignment
    always_ff @(posedge clk) begin
        for (int i = 0; i < N; i++) begin
            // // cap max and min values
            // if (buffer[i][2*TABLE_NFRAC+WIDTH-NFRAC-1 : 2*TABLE_NFRAC - NFRAC] >= 2**(TABLE_WIDTH-1))
            //     dataOut[i] = {1'b0, {(WIDTH-1){1'b1}}};
            // else if (buffer[i][2*TABLE_NFRAC+WIDTH-NFRAC-1 : 2*TABLE_NFRAC - NFRAC] < -(2**(TABLE_WIDTH-1)))
            //     dataOut[i] = {1'b1, {(WIDTH-1){1'b0}}};
            // else

            // cap disabled
            dataOut[i] = buffer[i][2*TABLE_NFRAC+WIDTH-NFRAC-1 : 2*TABLE_NFRAC - NFRAC];
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

