`timescale 1 ns / 1 ps
`define STRINGIFY(x) `"x`"
module hls_tb;
    // logic ap_clk;
    // logic reset;
    // logic input_ready;
    // logic output_ready;
    // logic move_next;
    
        
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 1;
    parameter WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic ap_clk, ap_rst, ap_start, ap_done, ap_idle, ap_ready, layer1_input_V_ap_vld,layer6_out_0_V_ap_vld;
    logic [INPUT_SIZE*TIMESTEPS*WIDTH-1:0] layer1_input_V;
    logic [WIDTH-1:0] layer6_out_0_V;
    // logic signed[WIDTH-1:0] xt [INPUT_SIZE-1:0];
    // logic signed[WIDTH-1:0] ht [OUTPUT_SIZE-1:0];
    myproject dut (.*);
    initial begin
        ap_clk=0;
        forever #1 ap_clk<=~ap_clk;
    end
    // max_tests = 166000;
    localparam num_tests = 100;
    // logic signed [WIDTH-1:0] x_test [num_tests-1:0][0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] flat_mem [INPUT_SIZE*TIMESTEPS*num_tests];
    logic signed [INPUT_SIZE*TIMESTEPS*WIDTH*num_tests-1:0] flatter_mem;
    integer i,j, fd;
    `ifndef TESTFILE
        `define TESTFILE "X_test_16_6.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "gen_results.csv"
    `endif
    
    initial begin
        $readmemb("X_test_16_6.txt", flat_mem);
        for (i=1; i<=num_tests*TIMESTEPS*INPUT_SIZE; i++) begin
            flatter_mem[WIDTH*i-1-:WIDTH] = flat_mem[i-1];
        end
        // for (i=0; i<num_tests; i++) begin : tests
        //     for (j=0; j<INPUT_SIZE; j++) begin : inputs
        //         x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
        //     end
        // end
    end
    localparam write_file=1;
    real out;
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
    assign out = to_real(layer6_out_0_V);
    // endgenerate
    always_ff @(posedge ap_clk) begin
        if (write_file&&ap_done) begin
            // for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
            //     $fwrite(fd, "%.15f,",  out[ii]);
            // end
            $fwrite(fd, "%.15f\n", out);
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
        ap_rst=1;
        ap_start<=0;
        layer1_input_V_ap_vld<=0;
        @(posedge ap_clk);
        @(posedge ap_clk);
        ap_rst=0;
        i=1;
        ap_start<=1;
        
        repeat(num_tests) begin
            layer1_input_V_ap_vld<=1;
            layer1_input_V<=flatter_mem[INPUT_SIZE*TIMESTEPS*WIDTH*i-1 -: INPUT_SIZE*TIMESTEPS*WIDTH];
            @(posedge ap_clk)
            layer1_input_V_ap_vld<=0;
            @(posedge ap_ready)
            @(posedge ap_clk)
            i++;
        end
        ap_start<=0;
        $stop;
    end
endmodule
