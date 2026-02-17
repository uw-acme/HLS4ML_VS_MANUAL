`include "weights_sel.svh"
import `LSTM_X_WEIGHTS::*;
import `LSTM_H_WEIGHTS::*;


// LSTM Currently designed for only outputting the last state
module LSTM #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    TIMESTEPS = 20,
    OUTPUT_SIZE = 20,
)
(
    input clk,
    input reset,
    input input_ready,
    output output_ready,
    input logic [WIDTH-1:0] xt [INPUT_SIZE-1:0][TIMESTEPS-1:0],
    output logic [WIDTH-1:0] ht [OUTPUT_SIZE-1:0]
);
    // x: input
    // h: recurrent information/output
    // c: cell state
    logic [WIDTH-1:0] ct_1 [OUTPUT_SIZE-1:0];
    logic [WIDTH-1:0] ht_1 [OUTPUT_SIZE-1:0];
    logic [WIDTH-1:0] ct [OUTPUT_SIZE-1:0];
    logic dense_inputx_ready, dense_outputx_ready;
    logic [WIDTH-1:0] dense_inputx [INPUT_SIZE-1:0];
    logic [WIDTH-1:0] dense_outputx [OUTPUT_SIZE-1:0];
    logic [$clog2(TIMESTEPS)-1:0] curr_step;
    assign dense_input = xt[curr_step];
    always_ff @(posedge clk) begin
        
    end

    
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                     ),
        .INPUT_SIZE     ( INPUT_SIZE                ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE*4             ),
        .WEIGHTS        ( `LSTM_X_WEIGHTS::weights  ),
        .BIAS           ( `LSTM_X_WEIGHTS::bias     )
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
    logic dense_inputh_ready, dense_outputh_ready;
    logic [WIDTH-1:0] dense_inputh [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    logic [WIDTH-1:0] dense_outputh [OUTPUT_SIZE1-1:0][OUTPUT_SIZE2-1:0];
    assign dense_input = ht_1;
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                     ),
        .INPUT_SIZE     ( OUTPUT_SIZE               ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE*4             ),
        .WEIGHTS        ( `LSTM_H_WEIGHTS::weights  ),
        .BIAS           ( `LSTM_H_WEIGHTS::bias     )
    ) 
    ht_mult 
    (
        .clk,
        .reset,
        .input_ready(dense_inputh_ready),
        .output_ready(dense_outputh_ready),
        .input_data(dense_inputh),
        .output_data(dense_outputh)
    );

    // Split into 4 parts
    logic [2*WIDTH-1:0] combined [INPUT_SIZE-1:0];
    genvar i;
    generate
    for (int i=0; i<INPUT_SIZE; i++) begin : combination
            always_comb 
                combined[i] = dense_outputh[i]+dense_outputx[i];
        end
    endgenerate

    logic [WIDTH-1:0] ft_a, it_a, c_t_a, ot_a;
    assign {ft_a, it_a, c_t_a, ot_a} = combined;

    
    // ft = sigmoid(Wfh*ht_1+Wfx*xt+bf) 

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