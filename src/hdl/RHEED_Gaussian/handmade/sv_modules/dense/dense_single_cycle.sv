module dense_single_cycle #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 10, OUTPUT_SIZE = 15)
( biases, inputData, outputData );

    input logic signed [WIDTH-1:0]  biases      [0:OUTPUT_SIZE-1];
    input logic signed [WIDTH-1:0]  inputData   [INPUT_SIZE-1:0];
    output logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0];


    logic signed [WIDTH*2-1:0] tempMults     [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] mults           [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] sumResult       [0:OUTPUT_SIZE-1];

    always_comb begin
        for (int j = 0; j < OUTPUT_SIZE; j++) begin
            sumResult[j] = '0;
            for (int i = 0; i < INPUT_SIZE; i++) begin
                // multiply
                tempMults[i][j] = inputData[i] * dense_test_data::dlWeights[i*OUTPUT_SIZE + j];
                // truncate
                mults[i][j] = tempMults[i][j][NFRAC+WIDTH-1:NFRAC];
                // add products
                sumResult[j] = sumResult[j] + mults[i][j];
            end
            // add bias
            outputData[j] = sumResult[j] + biases[j];
        end
    end

endmodule
