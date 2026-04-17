`include "weights_sel.svh"
`include "defines.svh"
import `LSTM_X_WEIGHTS::*;
import `LSTM_H_WEIGHTS::*;
`timescale 1ns / 1ps


module LSTM #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    TIMESTEPS = 20,
    OUTPUT_SIZE = 20,
    OUTPUT_EACH_HT = 0
)
(
    input clk,
    input reset,
    input input_ready,
    output logic output_ready,
    output logic ready,
    input next_layer_ready,
    input logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] ht [OUTPUT_SIZE-1:0]
);
    localparam NFRAC = WIDTH-NINT;
    localparam PIPELINING = 4;
    localparam PIPE_OUT = 0;
    function automatic logic signed [WIDTH*2-1:0] mult(
        input logic signed [WIDTH-1:0] in1,
        input logic signed [WIDTH-1:0] in2
    );
        return (in1 * in2) >>> (NFRAC);
    endfunction
    // x: input
    // h: recurrent information/output
    // c: cell state
    logic ready_for_output;
    logic processing;
    assign ready_for_output = (next_layer_ready)||(!output_ready);
    // assign processing
    // assign ready = next_layer_ready&&output_ready;

    genvar i;
    logic move_next;
    // logic pos_tanh_ready;
    logic signed[WIDTH-1:0] ct_1 [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ht_1 [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ct [OUTPUT_SIZE-1:0];
    logic dense_inputx_ready, dense_outputx_ready;
    logic signed[WIDTH-1:0] dense_inputx [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputx [OUTPUT_SIZE*4-1:0];
    logic sig_output_ready1,sig_output_ready2,sig_output_ready4;
    logic tanh_ready;
    // logic move_next;
    logic dense_inputh_ready, dense_outputh_ready;
    logic signed[WIDTH-1:0] dense_inputh [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputh [OUTPUT_SIZE*4-1:0];
    logic [$clog2(TIMESTEPS):0] curr_step =0;
    logic signed [WIDTH-1:0] xt [INPUT_SIZE-1:0];
    assign xt = input_v[curr_step];
    assign dense_inputx = xt;
    assign dense_inputh = ht_1;
    logic reset_cell;
    logic next_ready;
    // logic working;
    assign dense_inputh_ready = (!reset_cell)&&next_ready&&(curr_step!=TIMESTEPS)&&processing;
    assign dense_inputx_ready = (!reset_cell)&&next_ready&&(curr_step!=TIMESTEPS)&&processing;
    logic [4:0] edge_trig;
    logic [2:0] sigmoid_ready;
    logic which_tanh;
    edge_check edging1 (.clk, .reset(next_ready), .in(tanh_output_ready&&which_tanh), .out(edge_trig[0]));
    edge_check edging2 (.clk, .reset(next_ready), .in(sig_output_ready1), .out(edge_trig[1]));
    edge_check edging3 (.clk, .reset(next_ready), .in(sig_output_ready2), .out(edge_trig[2]));
    edge_check edging4 (.clk, .reset(next_ready), .in(tanh_output_ready&&!which_tanh), .out(edge_trig[3]));
    edge_check edging5 (.clk, .reset(next_ready), .in(sig_output_ready4), .out(edge_trig[4]));
    assign move_next = &edge_trig;
    logic lstm_reset;
    assign lstm_reset=reset_cell|reset;
    logic move_next_1;
    logic paused;
    enum logic [3:0] {READY, PROCESSING, PAUSED} state, next_state;
    logic next_output_ready;
    logic start_processing;
    logic future_reset_cell;
    always_comb begin
        next_state=state;
        ready=0;
        // reset_cell=0;
        next_output_ready=0;
        processing=0;
        start_processing=0;
        future_reset_cell=0;
        paused=0;
        case (state)
            READY: begin
                ready=1;
                if (input_ready) begin
                    next_state=PROCESSING;
                    start_processing=1;
                end
            end
            PROCESSING: begin
                processing=1;
                if (curr_step==TIMESTEPS&&next_ready) begin
                    next_state=READY;
                    future_reset_cell=1;
                    next_output_ready=1;
                end
                if (!ready_for_output)
                    next_state=PAUSED;
            end
            PAUSED: begin
                paused=1;
                if (ready_for_output)
                    next_state=PROCESSING;
            end
        endcase
    end
    always_ff @(posedge clk) begin
        state<=next_state;
        output_ready<=0;
        reset_cell<=future_reset_cell;
        next_ready<=start_processing;
        
        output_ready<=next_output_ready;
        // reset_cell<=0;
        if (lstm_reset) begin
            state<=READY;
            move_next_1<=0;
            which_tanh<=0;
            next_ready<=1;
            curr_step<=0;
            // processing<=0;
            // ht<='{default: 0};
            ht_1<='{default: 0};
            // ct<='{default: 0};
            ct_1<='{default: 0};
        end
        move_next_1<=move_next;
        // next_ready<=0;
        // if (input_ready)
        //     processing<=1'b1;
        // if (!ready_for_output) begin
        //     paused<=(processing|input_ready);
        //     processing<=1'b0;
        // end
        // if (paused&&ready_for_output) begin
        //     processing<=1'b1;
        // end
        if (processing) begin
            // if (curr_step==0&&input_ready)
            if (move_next&&!move_next_1) begin
                which_tanh<=0;
                next_ready<=1;
                curr_step<=curr_step+1;
                ht_1<=ht;
                ct_1<=ct;
                if (OUTPUT_EACH_HT)
                    output_ready<=1'b1;
            end
            if (tanh_output_ready)
                which_tanh<=1;
            // if (curr_step==TIMESTEPS&&next_ready) begin
            //     // reset_cell<=1;
            //     output_ready<=1;
            // end
        end
    end
    logic densex_ready;
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                    ),
        .INPUT_SIZE     ( INPUT_SIZE                ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE*4             ),
        .PIPE_OUT       (PIPE_OUT),
        .PIPELINING     (PIPELINING),
        .WEIGHTS        ( `LSTM_X_WEIGHTS::weights  ),
        .BIAS           ( `LSTM_X_WEIGHTS::bias     )
    ) 
    xt_mult 
    (
        .clk,
        .reset(lstm_reset),
        .ready(densex_ready),
        .next_layer_ready((&sigmoid_ready)&&tanh_ready&&processing),
        .input_ready(dense_inputx_ready),
        .output_ready(dense_outputx_ready),
        .input_data(dense_inputx),
        .output_data(dense_outputx)
    );
    logic denseh_ready;
    denseLayer #(
        .WIDTH          ( WIDTH                     ),
        .NFRAC          ( NFRAC                     ),
        .INPUT_SIZE     ( OUTPUT_SIZE               ),
        .OUTPUT_SIZE    ( OUTPUT_SIZE*4             ),
        .PIPELINING     (PIPELINING),
        .PIPE_OUT       (PIPE_OUT),
        .WEIGHTS        ( `LSTM_H_WEIGHTS::weights  ),
        .BIAS           ( `LSTM_H_WEIGHTS::bias     )
    ) 
    ht_mult 
    (
        .clk,
        .reset(lstm_reset),
        .ready(denseh_ready),
        .next_layer_ready((&sigmoid_ready)&&tanh_ready&&processing),
        .input_ready(dense_inputh_ready),
        .output_ready(dense_outputh_ready),
        .input_data(dense_inputh),
        .output_data(dense_outputh)
    );
    // logic denses_ready;
    
    // logic combined_ready;

    // Split into 4 parts
    logic signed[WIDTH-1:0] combined [OUTPUT_SIZE*4-1:0];
    // posedge_m ht_check;s
    generate
    for (i=0; i<OUTPUT_SIZE*4; i++) begin : combination
            always_comb begin
                combined[i] = dense_outputh[i]+dense_outputx[i];
            end
        end
    endgenerate

    logic signed[WIDTH-1:0] ft_a [OUTPUT_SIZE-1:0], it_a [OUTPUT_SIZE-1:0], c_t_a [OUTPUT_SIZE-1:0], ot_a [OUTPUT_SIZE-1:0], tanh_input [OUTPUT_SIZE-1:0], tanh_output [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ft [OUTPUT_SIZE-1:0], it [OUTPUT_SIZE-1:0], c_t [OUTPUT_SIZE-1:0], ot [OUTPUT_SIZE-1:0];
    // , ht_n[OUTPUT_SIZE-1:0];

    generate
        for (i=0; i<OUTPUT_SIZE; i++) begin : gate_split
            assign it_a[i]  = combined[OUTPUT_SIZE*3 + i];
            assign ft_a[i]  = combined[OUTPUT_SIZE*2 + i];
            assign c_t_a[i] = combined[OUTPUT_SIZE*1 + i];
            assign ot_a[i]  = combined[i];
        end
    endgenerate

    // assign {ft_a, it_a, c_t_a, ot_a} = combined;
    
    // logic tanh_ready;
    // ft = sigmoid(Wfh*ht_1+Wfx*xt+bf) 
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE)) sigmaf (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[0]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready1), .input_data(ft_a), .output_data(ft));
    // it = sigmoid(Wih*ht_1+Wix*xt+bi) 
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE)) sigmai (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[1]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready2), .input_data(it_a), .output_data(it));
    // c~t = tanh(Wch*ht_1+Wcx*xt+bc 
    // ot = sigmoid(Woh*ht_1+Wox*xt+bo) 
    sigmoid #(.WIDTH(WIDTH), .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE)) sigmao (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[2]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready4), .input_data(ot_a), .output_data(ot));
 // ct = ft*ct_1+it*c~t
    logic ct_next;
    logic ct_tanh;
    assign ct_next=&(edge_trig[4:1]);
    generate
    assign tanh_input = (which_tanh ? ct : c_t_a);
    posedge_m ht_check (.clk, .reset, .in(ct_next), .out(ct_tanh));
    for (i=0; i<OUTPUT_SIZE; i++) begin
        always_ff @(posedge clk) begin
            if (lstm_reset)
                ct[i] <= 0;
            if (ct_tanh)
                ct[i] <= mult(ft[i], ct_1[i])+mult(it[i],tanh_output[i]);

        end
    end
    endgenerate
    // always_ff @(posedge clk)
    //     ct_tanh<=ct_next;
   
   
    tanh #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE)) sigmac (.clk, .next_layer_ready(processing), .ready(tanh_ready), .reset(lstm_reset), .input_ready((dense_outputh_ready&&!which_tanh)||(ct_tanh&&which_tanh)), .output_ready(tanh_output_ready), .input_data(tanh_input), .output_data(tanh_output));
    // ht = ot*tanh(ct)
    
    // tanh #(.WIDTH(WIDTH), .NFRAC(NFRAC), .SIZE(OUTPUT_SIZE))
    // newht (
    //     .clk, .reset(lstm_reset), .input_data(ct), .output_data(ht_n), .input_ready(ct_tanh), .output_ready(tanh_ready)
    // );
    
    generate
    for (i=0; i<OUTPUT_SIZE; i++)begin
        always_ff @( posedge clk ) begin
            if (lstm_reset)
                ht[i]<=0;
            else if (tanh_output_ready&&which_tanh)
                ht[i] <= mult(tanh_output[i],ot[i]);
        end
    end
    endgenerate
    
    // Things that I need to do
    // Figure out what the cell states reset to

endmodule
module posedge_m(input clk, input reset, input in, output logic out);
    logic in_1;
    always_ff @(posedge clk) begin
        in_1<=in;
        out<=in&&(!in_1)&&!reset;
    end
endmodule
module edge_check(input clk, input reset, input in, output logic out);
    always_ff @(posedge clk) begin
        if (in)
            out<=1'b1;
        if (reset)
            out<=1'b0;
    end
endmodule
`define STRINGIFY(x) `"x`"
module LSTM_tb;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 20;
    parameter WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ht [OUTPUT_SIZE-1:0];
    LSTM #(.WIDTH(16), .NINT(6)) dut (.*);
    initial begin
        clk=0;
        forever #1 clk<=~clk;
    end
    // max_tests = 166000;
    localparam num_tests = 6;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    integer i, j, k, fd;
    `ifndef TESTFILE
        `define TESTFILE "X_test_16_6.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "gen_results.csv"
    `endif
    
    initial begin
        $readmemb("X_test_16_6.txt", flat_mem);
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<TIMESTEPS; j++) begin : steps
                for (k=0; k<INPUT_SIZE; k++) begin : nums
                    x_test[i][j][k] = flat_mem[i*INPUT_SIZE*TIMESTEPS+j*INPUT_SIZE+k];
                end
            end
        end
    end
    localparam write_file=1;
    real out [OUTPUT_SIZE];
    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction
    genvar g;
    generate
    for (g=0; g<OUTPUT_SIZE; g++) begin
        assign out[g] = to_real(ht[g]);
    end
    endgenerate
    always_ff @(posedge clk) begin
        if (write_file&&output_ready) begin
            for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
                $fwrite(fd, "%.15f,",  out[ii]);
            end
            $fwrite(fd, "%.15f\n", out[OUTPUT_SIZE-1]);
        end
    end
    initial begin
        if (write_file) begin
            fd = $fopen("gen_results.csv", "w");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        reset=1;
        input_ready<=0;
        @(posedge clk);
        @(posedge clk);
        reset=0;
        i=0;
        input_ready<=1;
        repeat(num_tests) begin
            input_v<=x_test[i];
            @(posedge output_ready)
            i++;
        end
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule