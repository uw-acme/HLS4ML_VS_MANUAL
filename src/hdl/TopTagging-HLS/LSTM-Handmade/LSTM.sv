`include "weights_sel.svh"
import `LSTM_X_WEIGHTS::*;

module LSTM #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE1 = 20,
    INPUT_SIZE2 = 6,
    OUTPUT_SIZE1 = 20,
    OUTPUT_SIZE2 = 1,
    logic signed [WIDTH-1:0] WEIGHTS [INPUT_SIZE-1:0][OUTPUT_SIZE-1:0] = '{default: '{default: 17'sd0}}, // WEIGHTS for each input to each output
    logic signed [WIDTH-1:0] BIAS [OUTPUT_SIZE-1:0] = '{default: 17'sd0} // BIASes for each output
)
(
    input clk,
    input reset,
    input logic [WIDTH-1:0] xt [INPUT_SIZE1-1:0][INPUT_SIZE2-1:0],
    output logic [WIDTH-1:0] ht [INPUT_SIZE-1:0]
);

    logic [WIDTH-1:0] ct_1 [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    logic [WIDTH-1:0] ht_1 [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    logic [WIDTH-1:0] ct [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    logic dense_inputx_ready, dense_outputx_ready;
    logic [WIDTH-1:0] dense_inputx [INPUT_SIZE1-1:0][INPUT_SIZE2-1:0];
    logic [WIDTH-1:0] dense_outputx [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    // x: input
    // h: recurrent information/output
    // c: cell state
    assign dense_input = xt;
    
    
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                     ),
        .INPUT_SIZE     ( INPUT_SIZE                ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE               ),
        .WEIGHTS        ( `LSTM_X_WEIGHTS::weights  ),
        .BIAS           ( `LSTM_X_WEIGHTS::bias  )
    ) 
    xt_mult 
    (
        .clk,
        .reset,
        .input_ready(dense_inputx_ready),
        .output_ready(dense_outputx_ready),
        .input_data(dense_inputx),
        .output_data(dense_outputx)
    );

    
    // ft = sigmoid(Wfh*ht_1+Wfx*xt+bf) basically 2 dense layers, one could have all the bias while the other doesn't (maybe)

    // it = sigmoid(Wih*ht_1+Wix*xt+bi) 

    // c~t = tanh(Wch*ht_1+Wcx*xt+bc 

    // ct = ft*ct-1+it*c~t

    // ot = sigmoid(Woh*ht_1+Wox*xt+bo) 

    // ht = ot*tanh(ct)


    
    // Things that I need
    // Sigmoid !
    // Elementwise multiplier/dense layer
    // Tanh !

endmodule


module LSTM_cell #(parameter 
        WIDTH=16,
        NINT=6
        )(
            input logic [WIDTH-1:0] xt,
            output logic [WIDTH-1:0] ht
        );

        logic [WIDTH-1:0] ht_1;
        logic [WIDTH-1:0] ct_1;
        logic [WIDTH-1:0] ct;
        

endmodule