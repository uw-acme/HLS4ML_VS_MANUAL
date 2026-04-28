`include "weights_sel.svh"
`include "defines.svh"
import `LSTM_X_WEIGHTS::*;
import `LSTM_H_WEIGHTS::*;
`timescale 1ns / 1ps


module LSTM #( parameter
    WIDTH = 16, // Bitwidth of input values
    NINT = 6, // Number of integers in input values
    INPUT_SIZE = 6, // Number of numbers in each timestep
    TIMESTEPS = 20, // Number of timesteps
    OUTPUT_SIZE = 20, // Output size of the lstm
    OUTPUT_EACH_HT = 0, // Put to 1 if you want to grab values after processing each timestep
    PIPELINING = 1, // Rate of removal of pipelines in the dense adder trees. 1 means pipeline every section, 2 means every 2 sections, 3 every three sections and so forth
    IMPLEMENTATION = 1, // 1 for io_parallel, 0 for io_stream
    PIPE_OUT = 1, // 1 if you want an output pipeline for the dense layer, 0 if you don't. Affects timing
    REMOVE_PIPELINES = 0 // 0 if you want regular piping in tanh and sigmoid, 1 if you want less.
)
(
    input clk,
    input reset,
    input input_ready, // Tells LSTM that the input is valid
    output logic output_ready, // Tells the next layer that the output is valid
    output logic ready, // Tells the previous layer that the LSTM is ready for input
    input next_layer_ready, // Tells the lstm if the next layer is ready for input
    input logic signed [WIDTH-1:0] input_v [(TIMESTEPS-1)*IMPLEMENTATION:0][INPUT_SIZE-1:0], // Input data
    output logic signed [WIDTH-1:0] ht [OUTPUT_SIZE-1:0] // Output data
);
    localparam NFRAC = WIDTH-NINT;

    // Multiplication module for fixed point multiplication
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

    // Logic for when the layer is all good to output
    assign ready_for_output = (next_layer_ready)||(!output_ready);

    genvar i;
    logic move_next;
    // logic pos_tanh_ready;

    // Previous cell state
    logic signed[WIDTH-1:0] ct_1 [OUTPUT_SIZE-1:0];
    // cell state
    logic signed[WIDTH-1:0] ct [OUTPUT_SIZE-1:0];

    // logic signed[WIDTH-1:0] ht_1 [OUTPUT_SIZE-1:0];

    // Dense signals and ports
    logic dense_inputx_ready, dense_outputx_ready;
    logic signed[WIDTH-1:0] dense_inputx [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputx [OUTPUT_SIZE*4-1:0];

    // Output ready logic for sigmoid functions
    logic sig_output_ready1,sig_output_ready2,sig_output_ready3;
    logic [2:0] sigmoid_ready;


    logic tanh_ready, tanh_output_ready;


    logic dense_inputh_ready, dense_outputh_ready;
    logic signed[WIDTH-1:0] dense_inputh [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense_outputh [OUTPUT_SIZE*4-1:0];
    logic [$clog2(TIMESTEPS):0] curr_step =0;

    // Current input timestep
    logic signed [WIDTH-1:0] xt [INPUT_SIZE-1:0];
    generate
        assign xt = (IMPLEMENTATION ? input_v[curr_step] : input_v[0]);
    endgenerate

    // Inputs to dense layers
    assign dense_inputx = xt;
    assign dense_inputh = ht;

    logic reset_cell;
    logic next_ready;
    // logic working;
    // Logic for when the input to the denses is ready. Base of starting a new loop
    assign dense_inputh_ready = (!reset_cell)&&next_ready&&(curr_step!=TIMESTEPS)&&processing;
    assign dense_inputx_ready = (!reset_cell)&&next_ready&&(curr_step!=TIMESTEPS)&&processing;


    // logic for telling layer which set of inputs tanh is processing
    logic which_tanh;

    // Edge triggered version of output ready signals for layers. Stays high until end of loop (next ready is high)
    logic [4:0] edge_trig;
    edge_check edging1 (.clk, .reset(next_ready), .in(tanh_output_ready&&which_tanh), .out(edge_trig[0]));
    edge_check edging2 (.clk, .reset(next_ready), .in(sig_output_ready1), .out(edge_trig[1]));
    edge_check edging3 (.clk, .reset(next_ready), .in(sig_output_ready2), .out(edge_trig[2]));
    edge_check edging4 (.clk, .reset(next_ready), .in(tanh_output_ready&&!which_tanh), .out(edge_trig[3]));
    edge_check edging5 (.clk, .reset(next_ready), .in(sig_output_ready3), .out(edge_trig[4]));

    // Next loop is ready when every layer has finished
    assign move_next = &edge_trig;

    // Reset. Pulled high from external reset or when the LSTM has finished processing everything
    logic lstm_reset;
    assign lstm_reset=reset_cell|reset;

    // Previous move next used for positive edge detection
    logic move_next_1;

    // State logic
    logic paused;
    enum logic [3:0] {READY, PROCESSING, PAUSED} state, next_state;
    logic ct_next;
    logic ct_tanh;
    logic ct_result_ready;
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
                generate
                    if (IMPLEMENTATION) begin // if the implementation is io_parallel
                        if (curr_step==TIMESTEPS&&next_ready) begin
                            next_state=READY;
                            future_reset_cell=1;
                            next_output_ready=1;
                        end
                    end else begin
                        if (next_ready) begin
                            next_state=READY;
                            next_output_ready=(OUTPUT_EACH_HT ? 1 : (curr_step==TIMESTEPS));
                            future_reset_cell=(curr_step==TIMESTEPS);
                        end
                    end
                endgenerate
                if (!ready_for_output) // If the output is ready but the next layer isn't ready to take it
                    next_state=PAUSED;
            end
            PAUSED: begin
                paused=1;
                if (ready_for_output) begin
                    next_state=PROCESSING;
                    start_processing=1
                end
            end
        endcase
    end


    always_ff @(posedge clk) begin
        // Set signals
        state<=next_state;
        output_ready<=0;
        reset_cell<=future_reset_cell;
        next_ready<=start_processing;
        
        output_ready<=next_output_ready;


        if (lstm_reset) begin
            state<=READY;
            move_next_1<=0;
            which_tanh<=0;
            next_ready<=1;
            curr_step<=0;
            // processing<=0;
            // ht<='{default: 0};
            // ht<='{default: 0};
            // ct<='{default: 0};
            ct_1<='{default: 0};
        end
        move_next_1<=move_next;
        if (processing) begin
            // if (curr_step==0&&input_ready)
            if (move_next&&!move_next_1) begin
                which_tanh<=0;
                next_ready<=1;
                curr_step<=curr_step+1;
                // ht<=ht;
                ct_1<=ct;
                // if (OUTPUT_EACH_HT)
                //     output_ready<=1'b1;
            end
            if (ct_tanh)
                which_tanh<=1;
            // if (curr_step==TIMESTEPS&&next_ready) begin
            //     // reset_cell<=1;
            //     output_ready<=1;
            // end
        end
    end
    /*
    Denses are used in the same way that HLS4ML processes them. All multiplications and weights are combined into 2 layers. One for recurrent data, one for new input data. The outputs are then split into the different components
    */
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
        .next_layer_ready((&sigmoid_ready)&&tanh_ready&&processing), // Next layer ready is when all of sigmoids are ready, the tanh is ready, and the LSTM is currently processing data
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
        .next_layer_ready((&sigmoid_ready)&&tanh_ready&&processing),// Next layer ready is when all of sigmoids are ready, the tanh is ready, and the LSTM is currently processing data
        .input_ready(dense_inputh_ready),
        .output_ready(dense_outputh_ready),
        .input_data(dense_inputh),
        .output_data(dense_outputh)
    );

    // Split into 4 parts
    logic signed[WIDTH-1:0] combined [OUTPUT_SIZE*4-1:0];
    // posedge_m ht_check;s

    // Combine the outputs
    generate
    for (i=0; i<OUTPUT_SIZE*4; i++) begin : combination
            always_comb begin
                combined[i] = dense_outputh[i]+dense_outputx[i];
            end
        end
    endgenerate

    // These are the different components of an lstm
    logic signed[WIDTH-1:0] ft_a [OUTPUT_SIZE-1:0], it_a [OUTPUT_SIZE-1:0], c_t_a [OUTPUT_SIZE-1:0], ot_a [OUTPUT_SIZE-1:0], tanh_input [OUTPUT_SIZE-1:0], tanh_output [OUTPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] ft [OUTPUT_SIZE-1:0], it [OUTPUT_SIZE-1:0], c_t [OUTPUT_SIZE-1:0], ot [OUTPUT_SIZE-1:0];
    // , ht_n[OUTPUT_SIZE-1:0];


    // Split the combined outputs into the components
    generate
        for (i=0; i<OUTPUT_SIZE; i++) begin : gate_split
            assign it_a[i]  = combined[OUTPUT_SIZE*3 + i];
            assign ft_a[i]  = combined[OUTPUT_SIZE*2 + i];
            assign c_t_a[i] = combined[OUTPUT_SIZE*1 + i];
            assign ot_a[i]  = combined[i];
        end
    endgenerate
    
    
    /*                      ft = sigmoid(Wfh*ht_1+Wfx*xt+bf)             */

    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE),
            .REMOVE_PIPELINES(REMOVE_PIPELINES)
            ) sigmaf (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[0]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready1), .input_data(ft_a), .output_data(ft));\

    /*                      it = sigmoid(Wih*ht_1+Wix*xt+bi)             */
    sigmoid #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE),
            .REMOVE_PIPELINES(REMOVE_PIPELINES)
            ) sigmai (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[1]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready2), .input_data(it_a), .output_data(it));

    /*                      ot = sigmoid(Woh*ht_1+Wox*xt+bo)            */
    sigmoid #(.WIDTH(WIDTH), .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE),
            .REMOVE_PIPELINES(REMOVE_PIPELINES)
            ) sigmao (.clk, .next_layer_ready(processing), .ready(sigmoid_ready[2]), .reset(lstm_reset), .input_ready(dense_outputh_ready), .output_ready(sig_output_ready3), .input_data(ot_a), .output_data(ot));



    // The multiplication should happen if all of the sigmoids and the first tanh process have finished
    assign ct_next=&(edge_trig[4:1]);
    posedge_m ht_check (.clk, .reset, .in(ct_next), .out(ct_tanh));

    /*                       ct = ft*ct_1+it*c~t                        */
    generate
        for (i=0; i<OUTPUT_SIZE; i++) begin
            always_ff @(posedge clk) begin
                if (lstm_reset)
                    ct[i] <= 0;
                if (ct_tanh)
                    ct[i] <= mult(ft[i], ct_1[i])+mult(it[i],tanh_output[i]);
            end
        end
    endgenerate

    always_ff @(posedge clk)
        ct_result_ready<=ct_tanh;



   /*         c~t = tanh(c_t_a)     AND         ht = ot*tanh(ct)   */

    logic tanh_input_ready;
    assign tanh_input_ready = (dense_outputh_ready&&!which_tanh)||(ct_result_ready&&which_tanh);
    assign tanh_input = (which_tanh ? ct : c_t_a);

    // Since both tanh processes in the LSTM happen one after the other, they can be combined without sacrificing speed
    tanh #(.WIDTH(WIDTH),
            .NFRAC(NFRAC),
            .SIZE(OUTPUT_SIZE),
            .REMOVE_PIPELINES(REMOVE_PIPELINES)
            ) sigmac (.clk, .next_layer_ready(processing), .ready(tanh_ready), .reset(lstm_reset), .input_ready(tanh_input_ready), .output_ready(tanh_output_ready), .input_data(tanh_input), .output_data(tanh_output));
    

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
endmodule

// Module that detects positive edges
module posedge_m(input clk, input reset, input in, output logic out);
    logic in_1;
    always_ff @(posedge clk) begin
        in_1<=in;
        out<=in&&(!in_1)&&!reset;
    end
endmodule

// Module that latches high until a reset
module edge_check(input reset, input in, output logic out);
    always_latch begin
        if (reset)
            out=0;
        if (in)
            out=1;
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