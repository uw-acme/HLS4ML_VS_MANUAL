
`define MODELSIM

`timescale 1ns / 1ps
module hls_top #( parameter
    WIDTH = 5,
    NINT = 3,
    INPUT_SIZE = 6,
    TIMESTEPS = 15,
    OUTPUT_SIZE = 3
)(
    input clk,
    input shiftClk,
    input reset,
    input input_ready,
    output logic output_ready,
    output ready,
    input logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data [2:0]
);
    logic ap_clk;
    logic ap_rst;
    logic ap_start;

    // Status outputs
    logic ap_done;
    logic ap_idle;
    logic ap_ready;

    assign ap_rst=reset;
    assign ap_clk = clk;
    // Input interface
    logic input_1_V_ap_vld, layer11_out_0_V_ap_vld, layer11_out_1_V_ap_vld, layer11_out_2_V_ap_vld;
    logic [WIDTH*INPUT_SIZE*TIMESTEPS-1:0] input_1_V;

    // Output interface
    logic [WIDTH-1:0] layer11_out_0_V, layer11_out_1_V, layer11_out_2_V;
    assign output_ready = layer11_out_0_V_ap_vld && layer11_out_1_V_ap_vld && layer11_out_2_V_ap_vld;
    assign output_data [0] = layer11_out_0_V;
    assign output_data [1] = layer11_out_1_V;
    assign output_data [2] = layer11_out_2_V;
    logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic [$clog2(TIMESTEPS):0] step=0;
    assign ready = ap_ready;
    assign ap_start=1'b1;
    always_ff @(posedge shiftClk) begin
        input_1_V_ap_vld<=0;

        if (input_ready) begin
            input_v[step]<=input_step;
            step<=(step!=(TIMESTEPS-1) ? step+1 : 0);
            input_1_V_ap_vld <=step==(TIMESTEPS-1);
        end
    end
    genvar i, j;
    generate
        // for (i=0; i<TIMESTEPS; i++) begin
        //     for (j=0; j<INPUT_SIZE; j++) begin
        //         assign layer1_input_V[i*INPUT_SIZE*WIDTH+(j+1)*WIDTH-1-:WIDTH] = input_v[i][j];
        //     end
        // end
            for (i=0; i<TIMESTEPS; i++) begin : steps
                for (j=0; j<INPUT_SIZE; j++) begin : nums
                    assign input_1_V[(i+1)*INPUT_SIZE*WIDTH-(j)*WIDTH-1-:WIDTH]  = input_v[i][j];
                end
            end
    endgenerate
    myproject dut (.*);
endmodule

`ifndef SYNTHESIS
`define STRINGIFY(x) `"x`"
module hls_top_tb;
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
    hls_top #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    integer i, j, k, fd, count;
    initial begin
        clk=0;
        count=0;
        // forever #1 clk<=~clk;
        forever #1 begin
            if (~clk)
                count<=count+1'b1;
            clk<=~clk;
        end
    end
    assign shiftClk=clk;
    // max_tests = 19951;
    localparam num_tests = 5;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    // `ifndef TESTFILE
    //     `define TESTFILE "X_test_gen.txt"
    // `endif
    // `ifndef RESULTSFILE
    //     `define RESULTSFILE "gen_results.csv"
    // `endif
    
    initial begin
        // `ifndef MODELSIM
        $readmemb("/home/quin/HLS4ML_VS_MANUAL/documents/Benchmarks/Btagging/qkeras/acc/testingData_lstm/toptaggingData_5_3.txt", flat_mem);
        
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
    // for (g=0; g<OUTPUT_SIZE; g++) begin
    //     assign out[g] = to_real(ht[g]);
    // end
    for (g=0; g<OUTPUT_SIZE; g++) begin
        assign out[g] = to_real(output_data[g]);
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
                //fd = $fopen("hls_results.csv", "w");  // "w" = write mode, "a" = append
                fd = $fopen("/home/quin/HLS4ML_VS_MANUAL/documents/Benchmarks/Btagging/qkeras/results/lstm_hls/hls_latency.csv", "w");
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
            $fwrite(fd, "Count: %0d\n", count);
            count=0;
            i++;
        end
        $fwrite(fd, "Count: %0d\n", count);
        input_ready<=0;
        
        repeat(5) @(posedge clk);
        $stop;
    end
endmodule
`endif