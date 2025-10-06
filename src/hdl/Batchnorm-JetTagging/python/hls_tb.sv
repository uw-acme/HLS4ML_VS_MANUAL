`timescale 1 ns / 1 ps 
module hls_tb;
    // Clock and control
    logic ap_clk;
    logic ap_rst;
    logic ap_start;

    // Status outputs
    logic ap_done;
    logic ap_idle;
    logic ap_ready;

    // Input interface
    logic fc1_input_V_ap_vld;
    logic [255:0] fc1_input_V;

    // Output interface
    logic [15:0] layer16_out_0_V;
    logic        layer16_out_0_V_ap_vld;
    logic [15:0] layer16_out_1_V;
    logic        layer16_out_1_V_ap_vld;
    logic [15:0] layer16_out_2_V;
    logic        layer16_out_2_V_ap_vld;
    logic [15:0] layer16_out_3_V;
    logic        layer16_out_3_V_ap_vld;
    logic [15:0] layer16_out_4_V;
    logic        layer16_out_4_V_ap_vld;

    myproject dut (.*);
    always #5 begin
        ap_clk = ~ap_clk;
    end
    localparam WIDTH = 16;
    localparam INPUT_SIZE = 16;
    localparam NFRAC = 10;
    localparam write_file = 1;
    integer fd;

    function real to_real(input logic signed [WIDTH-1:0] fixed_point_value);
        real result;
        result = fixed_point_value / (2.0 ** (NFRAC));  // Scale by the fractional part
        return result;
    endfunction

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
    real out [5];
    logic signed [15:0] in [15:0];

    assign out[0] = to_real(layer16_out_0_V);
    assign out[1] = to_real(layer16_out_1_V);
    assign out[2] = to_real(layer16_out_2_V);
    assign out[3] = to_real(layer16_out_3_V);
    assign out[4] = to_real(layer16_out_4_V);

    task run_test;
        input signed [WIDTH-1:0] input_d [0:INPUT_SIZE-1];
        // fc1_input_V = {>>{input_d}};
        foreach (input_d[i]) begin
            fc1_input_V[i*WIDTH +: WIDTH] = input_d[i];
        end
        // Initialize
        @(posedge ap_clk);
        ap_start = 1;
        fc1_input_V_ap_vld=1;
        @(posedge ap_clk);
        fc1_input_V_ap_vld=0;
        ap_start = 0;
        // Wait for output_ready signal
        // wait (ap_done);
        @(posedge ap_done);
        //repeat (30) @(posedge ap_clk);
        #50;
        if (write_file) begin
            $fwrite(fd, "%.15f,",  out[0]);
            $fwrite(fd, "%.15f,",  out[1]);
            $fwrite(fd, "%.15f,",  out[2]);
            $fwrite(fd, "%.15f,",  out[3]);
            $fwrite(fd, "%.15f\n", out[4]);
            // for (int i = 0; i < OUTPUT_SIZE-1; i++) begin
            //     $fwrite(fd, "%.15f,",  output_data[i]/($pow(2,NFRAC)));
            // end
            // $fwrite(fd, "%.15f\n", output_data[OUTPUT_SIZE-1]/($pow(2,NFRAC)));
        end
    endtask
    localparam max_tests = 166000;
    localparam num_tests = 166000;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests-1];
    integer i,j;
    
    initial begin
        $readmemb("X_test.txt", flat_mem);
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<INPUT_SIZE; j++) begin : inputs
                x_test[i][j] = flat_mem[i*INPUT_SIZE+j];
            end
        end
    end
    initial begin
        if (write_file) begin
            fd = $fopen("hls_results.csv", "w");  // "w" = write mode, "a" = append
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        // run_test('{ -16'd304, 16'd378, 16'd253, -16'd8, 16'd123, 16'd14, -16'd399, -16'd144, -16'd399, -16'd629, -16'd664, -16'd537, -16'd586, -16'd376, 16'd284, 16'd430 });
        @(negedge ap_rst)
        for (int i=0; i<num_tests; i++) begin
            run_test(x_test[i]);
            // foreach (in[j]) begin
            //     in[j]=i;
            // end
            // run_test(in);
        end
        if (write_file) begin
            $fclose(fd);
        end
        $stop;
    end
endmodule