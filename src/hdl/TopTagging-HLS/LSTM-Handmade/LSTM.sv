`include "weights_sel.svh"
`include "defines.svh"
import `LSTM_X_WEIGHTS::*;
import `LSTM_H_WEIGHTS::*;


// LSTM Currently designed for only outputting the last state
`timescale 1ns / 1ps
module LSTM #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    TIMESTEPS = 20,
    OUTPUT_SIZE = 20
)
(
    input clk,
    input reset,
    input input_ready,
    output output_ready,
    input logic signed[WIDTH-1:0] xt [INPUT_SIZE-1:0],
    output logic signed[WIDTH-1:0] ht [OUTPUT_SIZE-1:0]
);
    // x: input
    // h: recurrent information/output
    // c: cell state
    genvar i;
    logic signed[WIDTH-1:0] ct_1 [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ht_1 [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ct [OUTPUT_SIZE-1:0];
    logic dense_inputx_ready, dense_outputx_ready;
    logic signed[WIDTH-1:0] dense_inputx [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputx [OUTPUT_SIZE*4-1:0];
    logic sig_ready1,sig_ready2,sig_ready3,sig_ready4;
    logic tanh_ready;
    logic move_next;
    logic dense_inputh_ready, dense_outputh_ready;
    logic signed[WIDTH-1:0] dense_inputh [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputh [OUTPUT_SIZE*4-1:0];
    logic [$clog2(TIMESTEPS)-1:0] curr_step;
    // assign dense_input = xt[curr_step];
    assign dense_inputx = xt;
    assign dense_inputh = ht_1;
    logic reset_cell;
    logic next_ready;
    assign dense_inputh_ready = input_ready&&next_ready;
    assign dense_inputx_ready = input_ready&&next_ready;
    logic [4:0] edge_trig;
    edge_check edging1 (.clk, .reset(move_next), .in(tanh_ready), .out(edge_trig[0]));
    edge_check edging2 (.clk, .reset(move_next), .in(sig_ready1), .out(edge_trig[1]));
    edge_check edging3 (.clk, .reset(move_next), .in(sig_ready2), .out(edge_trig[2]));
    edge_check edging4 (.clk, .reset(move_next), .in(sig_ready3), .out(edge_trig[3]));
    edge_check edging5 (.clk, .reset(move_next), .in(sig_ready4), .out(edge_trig[4]));
    assign move_next = &edge_trig;
    always_ff @(posedge clk) begin
        next_ready<=0;
        if (move_next) begin
            next_ready<=1;
            curr_step<=curr_step+1;
            ht_1<=ht;
            ct_1<=ct;
        end
        reset_cell<=0;
        if (curr_step==TIMESTEPS)
            reset_cell<=1;
        if (reset_cell|reset) begin
            next_ready<=1;
            curr_step<=0;
            ht<='{default: 0};
            ht_1<='{default: 0};
            ct<='{default: 0};
            ct_1<='{default: 0};
        end
    end
    
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( WIDTH-NINT                    ),
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

    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( WIDTH-NINT                     ),
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
    logic signed[2*WIDTH-1:0] combined [OUTPUT_SIZE*4-1:0];
    generate
    for (i=0; i<OUTPUT_SIZE*4; i++) begin : combination
            always_comb begin
                combined[i] = dense_outputh[i]+dense_outputx[i];
            end
        end
    endgenerate

    logic signed[WIDTH-1:0] ft_a [OUTPUT_SIZE-1:0], it_a [OUTPUT_SIZE-1:0], c_t_a [OUTPUT_SIZE-1:0], ot_a [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ft [OUTPUT_SIZE-1:0], it [OUTPUT_SIZE-1:0], c_t [OUTPUT_SIZE-1:0], ot [OUTPUT_SIZE-1:0], ht_n[OUTPUT_SIZE-1:0];

    assign ft_a = combined[OUTPUT_SIZE*4-1:OUTPUT_SIZE*3];
    assign it_a = combined[OUTPUT_SIZE*3-1:OUTPUT_SIZE*2];
    assign c_t_a = combined[OUTPUT_SIZE*2-1:OUTPUT_SIZE*1];
    assign ot_a = combined[OUTPUT_SIZE-1:0];

    // assign {ft_a, it_a, c_t_a, ot_a} = combined;
    
    
    // ft = sigmoid(Wfh*ht_1+Wfx*xt+bf) 
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(WIDTH-NINT),
            .SIZE(OUTPUT_SIZE)) sigmaf (.clk, .reset, .input_ready(dense_outputx_ready), .output_ready(sig_ready1), .input_data(ft_a), .output_data(ft));
    // it = sigmoid(Wih*ht_1+Wix*xt+bi) 
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(WIDTH-NINT),
            .SIZE(OUTPUT_SIZE)) sigmai (.clk, .reset, .input_ready(dense_outputx_ready), .output_ready(sig_ready2), .input_data(it_a), .output_data(it));
    // c~t = tanh(Wch*ht_1+Wcx*xt+bc 
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(WIDTH-NINT),
            .SIZE(OUTPUT_SIZE)) sigmac (.clk, .reset, .input_ready(dense_outputx_ready), .output_ready(sig_ready3), .input_data(c_t_a), .output_data(c_t));
    // ot = sigmoid(Woh*ht_1+Wox*xt+bo) 
    sigmoid #(.WIDTH(WIDTH), .NFRAC(WIDTH-NINT),
            .SIZE(OUTPUT_SIZE)) 
                                sigmao (.clk, .reset, .input_ready(dense_outputx_ready), .output_ready(sig_ready4), .input_data(ot_a), .output_data(ot));
 // ct = ft*ct_1+it*c~t
    generate
    for (i=0; i<OUTPUT_SIZE; i++) begin
        always_ff @(posedge clk)
            if (sig_ready3)
                ct[i] <= ft[i]*ct_1[i]+it[i]*c_t[i];
    end
    endgenerate
   
   
    // ht = ot*tanh(ct)
    
    tanhActivationLayer #(.WIDTH(WIDTH), .NFRAC(WIDTH-NINT), .SIZE(OUTPUT_SIZE))
    newht (
        .clk, .reset, .input_data(ct), .output_data(ht_n), .input_ready(sig_ready1), .output_ready(tanh_ready)
    );
    generate
    for (i=0; i<OUTPUT_SIZE; i++)begin
        always_ff @( posedge clk ) begin
            if (tanh_ready)
                ht[i] <= ht_n[i]*ot[i];
        end
    end
    endgenerate
    
    // Things that I need to do
    // Figure out what the cell states reset to

endmodule

module edge_check(input clk, input reset, input in, output logic out);
    always_ff @(posedge clk) begin
        if (in)
            out<=1'b1;
        if (reset)
            out<=1'b0;
    end
endmodule

module LSTM_tb;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 20;
    parameter WIDTH = 16;
    parameter NINT = 6;
    logic signed[WIDTH-1:0] xt [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ht [OUTPUT_SIZE-1:0];
    LSTM #(.WIDTH(16), .NINT(6)) dut (.*);
    initial begin
        clk=0;
        forever #5 clk<=~clk;
    end
    initial begin
        reset=1;
        @(posedge clk);
        @(posedge clk);
        reset=0;
        xt<='{default: 1};
        input_ready<=1;
        repeat(300) @(posedge clk);
        $stop;
    end
endmodule