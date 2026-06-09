// `define MODELSIM

`timescale 1ns / 1ps
module btag_top #(
    parameter WIDTH = 5,
    parameter NINT = 3,
    parameter INPUT_SIZE = 6,
    parameter TIMESTEPS = 15,
    parameter OUTPUT_SIZE = 3
)(
    input clk,
    input shiftClk,
    input reset,
    input input_ready,
    output ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [OUTPUT_SIZE-1:0]
);
    logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic input_ready_btag, output_ready_btag;
    assign output_ready = output_ready_btag;
    logic [$clog2(TIMESTEPS):0] step=0;
    always_ff @(posedge shiftClk) begin
        input_ready_btag<=0;
        if (input_ready) begin
            input_v[step]<=input_step;
            step<=(step!=(TIMESTEPS-1) ? step+1 : 0);
            input_ready_btag<=step==(TIMESTEPS-1);
        end
    end
    btag_benchmark #(.WIDTH(WIDTH), .NFRAC(WIDTH-NINT)) btag (.clk, .reset, .input_ready(input_ready_btag), .ready(ready), .output_ready(output_ready_btag), .input_data(input_v), .output_data);
endmodule

`ifndef SYNTHESIS
`define STRINGIFY(x) `"x`"
module btag_top_tb;
    logic clk, shiftClk;
    logic reset;
    logic input_ready;
    logic output_ready;
    logic ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 15;
    parameter OUTPUT_SIZE = 3;
    parameter WIDTH = 5;
    parameter NINT = 3;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] output_data [OUTPUT_SIZE-1:0];
    integer i, j, k, fd, count;
    integer cycle_per_input;
    logic input_ready_last, cycle_count;

    btag_top #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        count=0;
        forever #1 begin
            if (~clk)
                count<=count+1'b1;
            clk<=~clk;
        end
    end
    assign shiftClk=clk;
    // max_tests = 19951;
    localparam num_tests = 19951; 

    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    `ifndef TESTFILE
        `define TESTFILE "../acc/testingData_lstm/toptaggingData_5_3.txt"
    `endif
    `ifndef RESULTSFILE
        // `define RESULTSFILE "reports/lstm_toptaggingData_timing_results.txt"
        `define RESULTSFILE "reports/lstm_toptaggingData_gen_results.txt"
    `endif
    
    initial begin
        `ifndef MODELSIM
            $readmemb("../acc/testingData_lstm/toptaggingData_5_3.txt", flat_mem);
        `else
            $readmemb("../acc/testingData_lstm/toptaggingData_5_3.txt", flat_mem);
        `endif
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<TIMESTEPS; j++) begin : steps
                for (k=0; k<INPUT_SIZE; k++) begin : nums
                    x_test[i][j][k] = flat_mem[i*INPUT_SIZE*TIMESTEPS+(j+1)*INPUT_SIZE-k-1];
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
        assign out[g] = to_real(output_data[g]);
    end
    // assign out=to_real(output_data);
    endgenerate
    always_ff @(posedge clk) begin
        if (write_file&&output_ready) begin
            for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
                $fwrite(fd, "%.15f,",  out[ii]);
            end
            $fwrite(fd, "%.15f\n", out[OUTPUT_SIZE-1]);
            // $fwrite(fd, "%.15f\n", out);
        end
        
        // if (write_file&&ready) begin
        //     $fwrite(fd, "%0f\n", cycle_per_input);
        // end
        // if (ready != input_ready_last) begin
        //     cycle_per_input <= 0;
        //     if (input_ready_last == 1'b0) begin
        //         cycle_count <= 1'b1;
        //     end
        //     else if (input_ready_last == 1'b1) begin
        //         cycle_count <= 1'b0;
        //     end
        // end
        // if (cycle_count) begin
        //     cycle_per_input <= cycle_per_input + 1;
        // end
        // input_ready_last <= ready;

        if (count>800)
            $stop;
    end
    initial begin
        if (write_file) begin
            `ifndef MODELSIM
                // fd = $fopen("reports/lstm_toptaggingData_timing_results.txt", "w");  // "w" = write mode, "a" = append
                fd = $fopen("reports/lstm_toptaggingData_gen_results.txt", "w");
            `else
                // fd = $fopen("reports/lstm_toptaggingData_timing_results.txt", "w");  // "w" = write mode, "a" = append
                fd = $fopen("reports/lstm_toptaggingData_gen_results.txt", "w");
            `endif
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
        
        repeat(num_tests) begin
            input_ready<=1;
            for (int j=0; j<TIMESTEPS; j++) begin
                input_step<=x_test[i][j];
                @(posedge shiftClk)
                reset<=0;
            end
            input_ready<=0;
            input_v<=x_test[i];
            @(posedge ready)
            // $fwrite(fd, "Count: %0d\n", count);
            count=0;
            i++;
        end
        // $fwrite(fd, "Count: %0d\n", count);
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif