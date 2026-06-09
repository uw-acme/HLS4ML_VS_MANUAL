`timescale 1 ns / 1 ps 
// module hls_lat_tb;
//     // Clock and control
//     localparam WIDTH = 34;
//     localparam INPUT_SIZE = 6;
//     localparam NINT = 12;
//     localparam TIMESTEPS = 20;
//     logic ap_clk;
//     logic ap_rst;
//     logic ap_start;

//     // Status outputs
//     logic ap_done;
//     logic ap_idle;
//     logic ap_ready;

//     // Input interface
//     logic layer1_input_V_ap_vld;
//     logic [WIDTH*INPUT_SIZE*TIMESTEPS-1:0] layer1_input_V;

//     // Output interface
//     logic [WIDTH-1:0] layer6_out_0_V;
//     logic        layer6_out_0_V_ap_vld;
//     int cycle_count, ii_count;
//     int wid = WIDTH;
//     // myproject dut (.*);
//     myproject dut (.*);
//     always #5 begin
//         ap_clk = ~ap_clk;
//     end
//     localparam write_file = 1;
//     integer fd;
//     always_ff @(posedge ap_clk) begin
//         cycle_count<=cycle_count+1'b1;
//         $fwrite(fd, "count: %0d, clk: %0d, start: %0d, ready: %0d, idle: %0d, done: %0d\n", cycle_count, ap_clk, ap_start, ap_ready, ap_idle, ap_done);
//         if (cycle_count>10000) begin
//             // $fwrite(fd, "clk: %0d, start: %0d, ready: %0d, idle: %0d, done: %0d\n", ap_clk, ap_start, ap_ready, ap_idle, ap_done);
//             $error("Cycle count too large, exiting");
//             $finish;
//         end
//         if (ap_ready)
//             $display("Ready complete");
//         if (layer6_out_0_V_ap_vld)
//             $display("Done");

//     end
//     initial begin
//         ap_clk = 0;
//         ap_rst = 1;
//         ap_start = 0;
//         layer1_input_V_ap_vld=0;
//         // Wait for a few clock cycles with reset asserted
//         repeat (2) @(posedge ap_clk);
//         ap_rst = 0;
//         // Signal input is ready
//     end
//    task run_test;
//     @(negedge ap_clk);          // drive on negedge — sampled cleanly on next posedge
//     ap_start = 1;
//     layer1_input_V_ap_vld = 1;
//     cycle_count = 0;
    
//     @(negedge ap_clk);          // hold for one full cycle, then clear
//     layer1_input_V_ap_vld = 0;

//     // Wait for ap_ready
//     while (!ap_ready) @(posedge ap_clk);
//     ii_count = cycle_count;

//     // Wait for output valid
//     while (!layer6_out_0_V_ap_vld) @(posedge ap_clk);
//     $fwrite(fd, "%0d, %0d, %0d\n", wid, ii_count, cycle_count);
// endtask
//     // initial begin
//     //     $readmemb("X_test_gen.txt", flat_mem);
//     //     for (i=0; i<num_tests; i++) begin : tests
//     //         for (j=0; j<INPUT_SIZE; j++) begin : inputs
//     //             x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
//     //         end
//     //     end
//     // end
//     initial begin
//         if (write_file) begin
//             fd = $fopen("/home/caleb/HLS4ML_VS_MANUAL/src/hdl/TopTagging-HLS/LSTM-hls/results/hls_latency.csv", "a");  // "w" = write mode, "a" = append
//             if (fd == 0) begin
//                 $display("ERROR: Could not open file!");
//                 $finish;
//             end
//         end
//         // run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
//         while (ap_rst) @(posedge ap_clk);
//         run_test();
//         // for (int i=0; i<num_tests; i++) begin
//         //     run_test(x_test[i]);
//         //     // foreach (in[j]) begin
//         //     //     in[j]=i;
//         //     // end
//         //     // run_test(in);
//         // end
//         if (write_file) begin
//             $fclose(fd);
//         end
//         $stop;
//     end
// endmodule

module hls_lat_tb;
    // logic ap_clk;
    // logic reset;
    // logic input_ready;
    // logic output_ready;
    // logic move_next;
    
        
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 15;
    parameter OUTPUT_SIZE = 3;
    parameter WIDTH = 5;
    parameter NINT = 3;
    parameter NFRAC = WIDTH-NINT;
    logic
        ap_clk,
        ap_rst_n,
        input_1_V_data_0_V_TVALID,
        input_1_V_data_0_V_TREADY,
        input_1_V_data_1_V_TVALID,
        input_1_V_data_1_V_TREADY,
        input_1_V_data_2_V_TVALID,
        input_1_V_data_2_V_TREADY,
        input_1_V_data_3_V_TVALID,
        input_1_V_data_3_V_TREADY,
        input_1_V_data_4_V_TVALID,
        input_1_V_data_4_V_TREADY,
        input_1_V_data_5_V_TVALID,
        input_1_V_data_5_V_TREADY,
        ap_start,
        layer11_out_V_data_0_V_TVALID,
        layer11_out_V_data_0_V_TREADY,
        layer11_out_V_data_1_V_TVALID,
        layer11_out_V_data_1_V_TREADY,
        layer11_out_V_data_2_V_TVALID,
        layer11_out_V_data_2_V_TREADY,
        ap_done,
        ap_ready,
        ap_idle;

    
    logic [7:0]  //[INPUT_SIZE*TIMESTEPS*WIDTH-1:0]   
                    input_1_V_data_0_V_TDATA,
                    input_1_V_data_1_V_TDATA,
                    input_1_V_data_2_V_TDATA,
                    input_1_V_data_3_V_TDATA,
                    input_1_V_data_4_V_TDATA,
                    input_1_V_data_5_V_TDATA,
                    layer11_out_V_data_0_V_TDATA,
                    layer11_out_V_data_1_V_TDATA,
                    layer11_out_V_data_2_V_TDATA;
    //logic [WIDTH-1:0] layer6_out_0_V;
    // logic signed[WIDTH-1:0] xt [INPUT_SIZE-1:0];
    // logic signed[WIDTH-1:0] ht [OUTPUT_SIZE-1:0];
    logic signed [INPUT_SIZE*TIMESTEPS*WIDTH-1:0] flatter_mem;
    integer i,j, fd, ii_count, cycle_latency, count;
    int wid = WIDTH;
    myproject dut (.*);
    initial begin
        ap_clk=0;
        forever #1 begin
            if (!ap_clk)
                count<=count+1'b1;
            ap_clk<=~ap_clk;
        end
    end
    // max_tests = 166000;
    localparam num_tests = 1;
    // logic signed [WIDTH-1:0] x_test [num_tests-1:0][0:INPUT_SIZE-1];
    // logic signed [WIDTH-1:0] flat_mem [INPUT_SIZE*TIMESTEPS*num_tests];
    // `ifndef TESTFILE
    //     `define TESTFILE "X_test_16_6.txt"
    // `endif
    // `ifndef RESULTSFILE
    //     `define RESULTSFILE "gen_results.csv"
    // `endif
    
    initial begin
        // $readmemb("X_test_16_6.txt", flat_mem);
        flatter_mem = 0;
        // for (i=1; i<=num_tests*TIMESTEPS*INPUT_SIZE; i++) begin
            
        end
        // for (i=0; i<num_tests; i++) begin : tests
        //     for (j=0; j<INPUT_SIZE; j++) begin : inputs
        //         x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
        //     end
        // end
    // end
    localparam write_file=1;
    real out [OUTPUT_SIZE];
    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction
    genvar g;
    // generate
    // for (g=0; g<OUTPUT_SIZE; g++) begin
    //     assign out[g] = to_real([g]);
    // end
    assign out[0] = to_real(layer11_out_V_data_0_V_TDATA);
    assign out[1] = to_real(layer11_out_V_data_1_V_TDATA);
    assign out[2] = to_real(layer11_out_V_data_2_V_TDATA);
    // endgenerate
    // always_ff @(posedge ap_clk) begin
    //     if (write_file&&ap_done) begin

    //         // for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
    //         //     $fwrite(fd, "%.15f,",  out[ii]);
    //         // end
    //         // $fwrite(fd, "%.15f\n", out);
    //     end
    // end
    always_ff @(posedge ap_clk) begin
        
        if (count>1000) begin // 1000
            //$fwrite(fd, "clk: %0d, start: %0d, ready: %0d, idle: %0d, done: %0d\n", ap_clk, ap_start, ap_ready, ap_idle, ap_done);
            $error("Cycle count too large, exiting");
            $finish;
        end
    end
    initial begin
        if (write_file) begin
            fd = $fopen("/home/quin/HLS4ML_VS_MANUAL/documents/Benchmarks/Btagging/qkeras/results/lstm_hls/hls_latency.csv", "a");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        ap_rst_n=0;
        ap_start<=0;

        // input_1_V_data_0_V_TVALID<=0;
        // input_1_V_data_1_V_TVALID<=0;
        // input_1_V_data_2_V_TVALID<=0;
        // input_1_V_data_3_V_TVALID<=0;
        // input_1_V_data_4_V_TVALID<=0;
        // input_1_V_data_5_V_TVALID<=0;

        input_1_V_data_0_V_TVALID<=1;
        input_1_V_data_1_V_TVALID<=1;
        input_1_V_data_2_V_TVALID<=1;
        input_1_V_data_3_V_TVALID<=1;
        input_1_V_data_4_V_TVALID<=1;
        input_1_V_data_5_V_TVALID<=1;

        layer11_out_V_data_0_V_TREADY<=1;
        layer11_out_V_data_1_V_TREADY<=1;
        layer11_out_V_data_2_V_TREADY<=1;

        //layer1_input_V_ap_vld<=0;
        repeat(10) @(posedge ap_clk);
        //@(posedge ap_clk);
        ap_rst_n=1;
        // i=1;
        i = 0;

        @(posedge ap_clk);

        repeat(num_tests) begin
        //layer1_input_V_ap_vld<=1;

        input_1_V_data_0_V_TVALID<=1;
        input_1_V_data_1_V_TVALID<=1;
        input_1_V_data_2_V_TVALID<=1;
        input_1_V_data_3_V_TVALID<=1;
        input_1_V_data_4_V_TVALID<=1;
        input_1_V_data_5_V_TVALID<=1;

        count=0;

        layer11_out_V_data_0_V_TREADY<=1;
        layer11_out_V_data_1_V_TREADY<=1;
        layer11_out_V_data_2_V_TREADY<=1;

        // for (int j=0; j<TIMESTEPS; j++) begin
            // if ((j%2) == 0) begin
            //     input_1_V_data_0_V_TDATA<=8'b11111111;
            //     input_1_V_data_1_V_TDATA<=8'b00000000;
            //     input_1_V_data_2_V_TDATA<=8'b11111111;
            //     input_1_V_data_3_V_TDATA<=8'b00000000;
            //     input_1_V_data_4_V_TDATA<=8'b11111111;
            //     input_1_V_data_5_V_TDATA<=8'b00000000;
            // end
            // else begin
            //     input_1_V_data_0_V_TDATA<=8'b00000000;
            //     input_1_V_data_1_V_TDATA<=8'b11111111;
            //     input_1_V_data_2_V_TDATA<=8'b00000000;
            //     input_1_V_data_3_V_TDATA<=8'b11111111;
            //     input_1_V_data_4_V_TDATA<=8'b00000000;
            //     input_1_V_data_5_V_TDATA<=8'b11111111;
            // end
            // input_1_V_data_0_V_TDATA<=8'b11111111;
                input_1_V_data_0_V_TDATA<=8'b00000000;
                input_1_V_data_1_V_TDATA<=8'b11111111;
                input_1_V_data_2_V_TDATA<=8'b00000000;
                input_1_V_data_3_V_TDATA<=8'b11111111;
                input_1_V_data_4_V_TDATA<=8'b00000000;
                input_1_V_data_5_V_TDATA<=8'b11111111;
            @(posedge ap_clk)
        // end

        repeat(1) @(posedge ap_clk);
        ap_start<=1;
        @(posedge ap_clk)
        ap_start<=0;
        //layer1_input_V<=flatter_mem[INPUT_SIZE*TIMESTEPS*WIDTH-1 -: INPUT_SIZE*TIMESTEPS*WIDTH];
        // input_1_V_data_0_V_TDATA<=8'b11111111;
        // input_1_V_data_1_V_TDATA<=8'b11111111;
        // input_1_V_data_2_V_TDATA<=8'b11111111;
        // input_1_V_data_3_V_TDATA<=8'b11111111;
        // input_1_V_data_4_V_TDATA<=8'b11111111;
        // input_1_V_data_5_V_TDATA<=8'b11111111;

    // repeat(5) @(posedge ap_clk);
    //     ap_start<=0;
    // @(posedge ap_clk)
        // ap_start<=1;


	    // @(posedge ap_clk)

        //layer1_input_V_ap_vld<=0;
        // input_1_V_data_0_V_TVALID<=0;
        // input_1_V_data_1_V_TVALID<=0;
        // input_1_V_data_2_V_TVALID<=0;
        // input_1_V_data_3_V_TVALID<=0;
        // input_1_V_data_4_V_TVALID<=0;
        // input_1_V_data_5_V_TVALID<=0;
        // @(posedge ap_ready)
        // // $fwrite(fd, "Count: %0d\n", count);
        // count=0;
        // i++;
        //     // Wait for ap_ready
//     while (!ap_ready) @(posedge ap_clk);
//     ii_count = cycle_count;

//     // Wait for output valid
//     while (!layer6_out_0_V_ap_vld) @(posedge ap_clk);
//     
        @(posedge ap_ready)
        ii_count = count;
        i++;
        end

        @(posedge ap_done)
        cycle_latency = count;

        $fwrite(fd, "%0d, %0d, %0d\n", wid, ii_count, cycle_latency);

        // input_1_V_data_0_V_TVALID<=0;
        // input_1_V_data_1_V_TVALID<=0;
        // input_1_V_data_2_V_TVALID<=0;
        // input_1_V_data_3_V_TVALID<=0;
        // input_1_V_data_4_V_TVALID<=0;
        // input_1_V_data_5_V_TVALID<=0;

        //layer11_out_V_data_0_V_TREADY<=0;
        //layer11_out_V_data_1_V_TREADY<=0;
        //layer11_out_V_data_2_V_TREADY<=0;

        ap_start<=0;

        repeat(5) @(posedge ap_clk);

        $stop;
    end
endmodule