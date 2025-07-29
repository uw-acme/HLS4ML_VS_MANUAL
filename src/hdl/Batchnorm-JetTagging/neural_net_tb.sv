`timescale 1ps/1ps
module neural_net_tb ();
    logic clk, reset;

    logic signed [8-1:0] input_data [0:7];
    logic signed [8-1:0] output_data [0:4];

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    neural_net dut (
        .clk(clk),
        .reset(reset),
        .input_data(input_data),
        .output_data(output_data)
    );

    initial begin
        reset = 0;
        input_data = {{-8'd1},
                      {8'd2},
                      {-8'd3},
                      {8'd4},
                      {-8'd5},
                      {8'd6},
                      {-8'd7},
                      {8'd0}
                      };

            #10

        reset = 1;  #10
        reset = 0;  #10

        for (integer i = 0; i < 8; i = i + 1) begin
            $display("input_data[%0d] = %0d", i, input_data[i]);
        end

        for (integer i = 0; i < 64; i = i + 1) begin
            // $display("output_data[%0d] = %0d", i, output_data[i]);
            #10;
        end

        $stop;
    end
    
endmodule