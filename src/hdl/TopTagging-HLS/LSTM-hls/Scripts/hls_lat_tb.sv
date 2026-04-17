`timescale 1 ns / 1 ps 
module hls_lat_tb;
    // Clock and control
    localparam WIDTH = 4;
    localparam INPUT_SIZE = 6;
    localparam NINT = 2;
    localparam TIMESTEPS = 20;
    logic ap_clk;
    logic ap_rst;
    logic ap_start;

    // Status outputs
    logic ap_done;
    logic ap_idle;
    logic ap_ready;

    // Input interface
    logic layer1_input_V_ap_vld;
    logic [WIDTH*INPUT_SIZE*TIMESTEPS-1:0] layer1_input_V;

    // Output interface
    logic [WIDTH-1:0] layer6_out_0_V;
    logic        layer6_out_0_V_ap_vld;
    int cycle_count, ii_count;
    int wid = WIDTH;
    // myproject dut (.*);
    myproject dut (.*);
    always #5 begin
        ap_clk = ~ap_clk;
    end
    localparam write_file = 1;
    integer fd;
    always_ff @(posedge ap_clk) begin
        cycle_count<=cycle_count+1'b1;
        if (cycle_count>10000) begin
            $fwrite(fd, "clk: %0d, start: %0d, ready: %0d, idle: %0d, done: %0d\n", ap_clk, ap_start, ap_ready, ap_idle, ap_done);
            $error("Cycle count too large, exiting");
            $finish;
        end
        if (ap_ready)
            $display("Ready complete");
        if (layer6_out_0_V_ap_vld)
            $display("Done");

    end
    initial begin
        ap_clk = 0;
        ap_rst = 1;
        ap_start = 0;
        layer1_input_V_ap_vld=0;
        // Wait for a few clock cycles with reset asserted
        repeat (2) @(posedge ap_clk);
        ap_rst = 0;
        // Signal input is ready
    end
    task run_test;
        // layer1_input_V = {16{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 }};
        // Initialize
        @(posedge ap_clk);
        ap_start = 1;
        layer1_input_V_ap_vld=1;
        cycle_count=0;
        @(posedge ap_clk);
        $display("Starting");
        $display("clk: %0d, start: %0d, ready: %0d, idle: %0d, done: %0d\n", ap_clk, ap_start, ap_ready, ap_idle, ap_done);
        layer1_input_V_ap_vld=0;
        // ap_start = 0;
        // Wait for output_ready signal
        // wait (ap_done);
        @(posedge ap_ready)
            ii_count=cycle_count;
        
        @(posedge layer6_out_0_V_ap_vld);
        $fwrite(fd, "%0d, %0d, %0d\n", wid, ii_count, cycle_count);
    endtask
    // initial begin
    //     $readmemb("X_test_gen.txt", flat_mem);
    //     for (i=0; i<num_tests; i++) begin : tests
    //         for (j=0; j<INPUT_SIZE; j++) begin : inputs
    //             x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
    //         end
    //     end
    // end
    initial begin
        if (write_file) begin
            fd = $fopen("../results/hls_latency.csv", "a");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        // run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
        @(negedge ap_rst)
        run_test();
        // for (int i=0; i<num_tests; i++) begin
        //     run_test(x_test[i]);
        //     // foreach (in[j]) begin
        //     //     in[j]=i;
        //     // end
        //     // run_test(in);
        // end
        if (write_file) begin
            $fclose(fd);
        end
        $stop;
    end
endmodule