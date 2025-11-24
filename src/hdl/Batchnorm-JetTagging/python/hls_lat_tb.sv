`timescale 1 ns / 1 ps 
module hls_lat_tb;
    // Clock and control
    localparam WIDTH = 31;
    localparam INPUT_SIZE = 16;
    localparam NFRAC = 20;
    logic ap_clk;
    logic ap_rst;
    logic ap_start;

    // Status outputs
    logic ap_done;
    logic ap_idle;
    logic ap_ready;

    // Input interface
    logic fc1_input_V_ap_vld;
    logic [WIDTH*INPUT_SIZE-1:0] fc1_input_V;

    // Output interface
    logic [WIDTH-1:0] layer16_out_0_V;
    logic        layer16_out_0_V_ap_vld;
    logic [WIDTH-1:0] layer16_out_1_V;
    logic        layer16_out_1_V_ap_vld;
    logic [WIDTH-1:0] layer16_out_2_V;
    logic        layer16_out_2_V_ap_vld;
    logic [WIDTH-1:0] layer16_out_3_V;
    logic        layer16_out_3_V_ap_vld;
    logic [WIDTH-1:0] layer16_out_4_V;
    logic        layer16_out_4_V_ap_vld;
    int cycle_count;
    int wid = WIDTH;
    // myproject dut (.*);
    p dut (.*);
    always #5 begin
        ap_clk = ~ap_clk;
    end
    localparam write_file = 1;
    integer fd;
    always_ff @(posedge ap_clk)
        cycle_count<=cycle_count+1'b1;
    initial begin
        ap_clk = 0;
        ap_rst = 1;
        ap_start = 0;
        fc1_input_V_ap_vld=0;
        // Wait for a few clock cycles with reset asserted
        repeat (2) @(posedge ap_clk);
        ap_rst = 0;
        // Signal input is ready
    end

    task run_test;
        fc1_input_V = {16{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 }};
        // Initialize
        @(posedge ap_clk);
        ap_start = 1;
        fc1_input_V_ap_vld=1;
        @(posedge ap_clk);
        cycle_count=0;
        fc1_input_V_ap_vld=0;
        ap_start = 0;
        // Wait for output_ready signal
        // wait (ap_done);
        @(posedge ap_done);
        $fwrite(fd, "%d, %d\n", wid, cycle_count);
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
            fd = $fopen("/home/caleb/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/python/hls_res_latency.csv", "a");  // "w" = write mode, "a" = append
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