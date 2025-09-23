`timescale 1ns / 1ps

module waiz_benchmark_tb;

    // Parameters
    localparam WIDTH = 16;
    localparam NFRAC = 10;
    localparam INPUT_SIZE = 16;
    localparam OUTPUT_SIZE = 5;

    // Clock and reset
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;

    // Input and output signals
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];
    real iteration_count;

    real softmax_output_real [0:4];

    // Instantiate the module
    waiz_benchmark #(
        .WIDTH(WIDTH),
        .NFRAC(NFRAC)
    ) dut (
        .clk(clk),
        .reset(reset),
        .input_ready(input_ready),
        .output_ready(output_ready),
        .input_data(input_data),
        .output_data(output_data)
        // .softmax_output_real(softmax_output_real)
    );
    localparam write_file = 0;
    // Clock generation
    always #5 begin
        clk = ~clk; // 100MHz
        iteration_count = iteration_count + 1;
    end
    integer fd;
    task run_test;
        input signed [WIDTH-1:0] input_d [0:INPUT_SIZE-1];
        input_data = input_d;
        // Initialize
        clk = 0;
        reset = 1;
        input_ready = 0;
        // Wait for a few clock cycles with reset asserted
        repeat (2) @(posedge clk);
        reset = 0;
        iteration_count = 0;
        // Signal input is ready
        @(posedge clk);
        input_ready = 1;

        @(posedge clk);
        input_ready = 0;

        // Wait for output_ready signal
        wait (output_ready == 1);
        repeat (10) @(posedge clk);
        #50;
        if (write_file) begin
            for (int i = 0; i < OUTPUT_SIZE-1; i++) begin
                $fwrite(fd, "%.15f,",  output_data[i]/($pow(2,NFRAC)));
            end
            $fwrite(fd, "%.15f\n", output_data[OUTPUT_SIZE-1]/($pow(2,NFRAC)));
        end
        // Optionally add delay and finish
        #50;
    endtask
    localparam max_tests = 166000;
    localparam num_tests = 1000;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests-1];
    integer i,j;
    
    initial begin
        if (write_file) begin
            $readmemb("X_test.txt", flat_mem);
            for (i=0; i<num_tests; i++) begin : tests
                for (j=0; j<INPUT_SIZE; j++) begin : inputs
                    x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
                end
            end
        end
    end
    initial begin
        if (write_file) begin
            fd = $fopen("reports/results.csv", "w");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
        #10;
        // for (int i=0; i<num_tests; i++) begin
        //     run_test(x_test[i]);
        // end
        if (write_file) begin
            $fclose(fd);
        end
        $stop;
        // // Initialize
        // clk = 0;
        // reset = 1;
        // input_ready = 0;
        // // iteration_count = 0;

        // // Wait for a few clock cycles with reset asserted
        // repeat (2) @(posedge clk);

        // reset = 0;
        // iteration_count = 0;

        // input_data = '{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 };

        // // Signal input is ready
        // @(posedge clk);
        // input_ready = 1;

        // @(posedge clk);
        // input_ready = 0;

        // // Wait for output_ready signal
        // wait (output_ready == 1);

        // repeat (10) @(posedge clk);
        // #50;
        // // Display the output
        // $display("Output data:");
        // for (int i = 0; i < OUTPUT_SIZE; i++) begin
        //     $display("output_data[%0d] = %0d", i, output_data[i]);
        // end

        // // Display the softmax output on one line
        // $display("Softmax output:");
        // for (int i = 0; i < OUTPUT_SIZE; i++) begin
        //     $write("%0f ", output_data[i]/($pow(2,NFRAC)));
        // end
        // $display(""); // New line after softmax output
        // for (int i = 0; i < OUTPUT_SIZE-1; i++) begin
        //     $fwrite(fd, "%0f,",  output_data[i]/($pow(2,NFRAC)));
        // end
        // $fwrite(fd, "%0f\n", output_data[OUTPUT_SIZE-1]/($pow(2,NFRAC)));
        // $fclose(fd);
        // // Optionally add delay and finish
        // #50;
        // $stop;
        // $stop;
    end
    
endmodule