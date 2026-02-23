`timescale 1ps / 1ps
`define STRINGIFY(x) `"x`"
module waiz_benchmark_lat_tb;

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
    int iteration_count;

    real softmax_output_real [0:4];
    logic width = WIDTH;
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
        if (!clk)
            iteration_count = iteration_count + 1;
        clk = ~clk; // 100MHz
    end
    assign out[0] = to_real(output_data[0]);
    assign out[1] = to_real(output_data[1]);
    assign out[2] = to_real(output_data[2]);
    assign out[3] = to_real(output_data[3]);
    assign out[4] = to_real(output_data[4]);
    integer fd;
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
        iteration_count=0;
        @(posedge clk);
    endtask
    // max_tests = 166000;
    initial begin
        if (write_file) begin
            fd = $fopen("../Results/hand_lat.csv", "a");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        // 
        wait (!reset);
        @(posedge clk);
        run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
        input_ready<=0;
        @(posedge output_ready);
        $fwrite(fd, "%0d, %0d\n",  width, iteration_count);
        if (write_file) begin
            $fclose(fd);
        end
        $stop;
    end
    
endmodule