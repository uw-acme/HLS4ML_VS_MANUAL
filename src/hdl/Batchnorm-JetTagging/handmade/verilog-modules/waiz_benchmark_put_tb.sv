`timescale 1ps / 1ps
`define STRINGIFY(x) `"x`"
`ifdef TESTFILE
module waiz_benchmark_put_tb;

    // Parameters
    parameter WIDTH = 16;
    parameter NFRAC = 10;
    parameter INPUT_SIZE = 16;
    parameter OUTPUT_SIZE = 5;
    // Parameter controlling how sparse the pipelines in the adder trees are. 1 is the minimum value (most pipelines)
    parameter PIPELINING = 3;
    // Parameter controlling whether there is an output pipeline from dense layers. 1 means there is a pipeline
    parameter PIPE_OUT = 1;
    // Clock and reset
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;

    function real to_real(input logic unsigned [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction

    // Input and output signals
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];
    real out [OUTPUT_SIZE];
    real iteration_count;

    real softmax_output_real [0:4];

    // Instantiate the module
    waiz_benchmark #(
        .WIDTH(WIDTH),
        .NFRAC(NFRAC),
        .PIPELINING(PIPELINING),
        .PIPE_OUT(PIPE_OUT)
    ) dut (
        .clk(clk),
        .reset(reset),
        .input_ready(input_ready),
        .output_ready(output_ready),
        .input_data(input_data),
        .output_data(output_data)
        // .softmax_output_real(softmax_output_real)
    );
    localparam write_file = 1;
    // Clock generation
    always #5 begin
        clk = ~clk; // 100MHz
        // iteration_count = iteration_count + 1;
    end
    assign out[0] = to_real(output_data[0]);
    assign out[1] = to_real(output_data[1]);
    assign out[2] = to_real(output_data[2]);
    assign out[3] = to_real(output_data[3]);
    assign out[4] = to_real(output_data[4]);
    integer fd, lf;
    integer cycle_count;
    initial begin
        clk = 0;
        reset = 1;
        input_ready = 0;
        repeat (2) @(posedge clk);
        reset = 0;
    end
    task run_test;
        input signed [WIDTH-1:0] input_d [0:INPUT_SIZE-1];
        input_data <= input_d;
        input_ready <= 1;
        @(posedge clk);
    endtask
    always_ff @(posedge clk) begin

        if (write_file&&output_ready) begin
            for (int i = 0; i < OUTPUT_SIZE-1; i++) begin
                $fwrite(fd, "%.15f,",  out[i]);
            end
            $fwrite(fd, "%.15f\n", out[OUTPUT_SIZE-1]);
        end
    end
    // max_tests = 166000;
    localparam num_tests = 166000;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests-1];
    integer i,j;
    `ifndef TESTFILE
        `define TESTFILE "scripts/X_test_22_8.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "reports/gen_results.csv"
    `endif
    initial begin
        $readmemb(`STRINGIFY(`TESTFILE), flat_mem);
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<INPUT_SIZE; j++) begin : inputs
                x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
            end
        end
    end
    initial begin
        if (write_file) begin
            fd = $fopen(`STRINGIFY(`RESULTSFILE), "w");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        // run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
        wait (!reset);
        
        for (int i=0; i<num_tests; i++) begin
            run_test(x_test[i]);
        end
        input_ready=0;
        @(negedge output_ready);
        @(posedge clk);
        @(posedge clk);
        if (write_file) begin
            $fclose(fd);
        end
        $stop;
    end
    
endmodule
`endif