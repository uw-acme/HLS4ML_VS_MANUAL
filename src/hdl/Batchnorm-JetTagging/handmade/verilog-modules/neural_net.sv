module neural_net (
    input logic clk,
    input logic reset,
    input logic signed [8-1:0] input_data [0:7],
    output logic signed [8-1:0] output_data [0:4]
);

    logic signed [8-1:0] dense_output_data [0:4];

    // Define the weights as parameters
    parameter logic signed [8-1:0] WEIGHTS [0:7][0:4] = '{
        '{8'sd1, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd1, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd1, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd1, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd1},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0}
    };

    // Define the biases as parameters
    parameter logic signed [8-1:0] BIAS [0:4] = '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0};

    // from "./../RNN/denseLayer.sv"
    denseLayer #(
        .WIDTH      ( 8         ),
        .NFRAC      ( 0         ),
        .INPUT_SIZE ( 8         ),
        .OUTPUT_SIZE( 5         ),
        .WEIGHTS    ( WEIGHTS ),
        .BIAS       ( BIAS  )
        ) layer1 (
        .clk,
        .reset,
        .input_data ( input_data ),
        .output_data( dense_output_data)
    );

    reluActivationLayer #(
        .WIDTH      ( 8         ),
        .NFRAC      ( 0         ),
        .SIZE       ( 5         )
        ) layer2 (
        .clk,
        .input_data ( dense_output_data ),
        .output_data( output_data )
    );

    

    
endmodule