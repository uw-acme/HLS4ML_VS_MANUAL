`include "pkg_sel_gru.svh"
`include "defines.svh"
// `define MODELSIM

`timescale 1ns / 1ps
module Toptagging #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    OUTPUT_SIZE = 20,
    TIMESTEPS = 20
)
(
    input clk,
    input reset,
    input input_ready,
    output logic ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_v [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);

    localparam SIGMOID_BRAM_FILE = "sigmoid_table_18_18_10_7.dat";
    localparam TANH_BRAM_FILE    = "tanh_table_18_18_10_7.dat";

    logic dense1_input_ready, dense1_output_ready;
    localparam DENSE1_INPUT_SIZE=20, DENSE1_OUTPUT_SIZE=64;
    logic signed[WIDTH-1:0] dense1_input_data  [DENSE1_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense1_output_data [DENSE1_OUTPUT_SIZE-1:0];

    logic dense2_input_ready, dense2_output_ready;
    localparam DENSE2_INPUT_SIZE=64, DENSE2_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] dense2_input_data  [DENSE2_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] dense2_output_data [DENSE2_OUTPUT_SIZE-1:0];

    logic signed[WIDTH-1:0] relu_output_data [DENSE1_OUTPUT_SIZE-1:0];

    localparam SIGMOID_INPUT_SIZE=1, SIGMOID_OUTPUT_SIZE=1;
    logic signed[WIDTH-1:0] sigmoid_input_data  [SIGMOID_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] sigmoid_output_data [SIGMOID_OUTPUT_SIZE-1:0];
    logic sigmoid_input_ready, sigmoid_output_ready;

    logic dense1_ready;
    logic dense2_ready;
    logic sigmoid_ready;

    localparam GRU_INPUT_SIZE=6, GRU_OUTPUT_SIZE=20;

    logic signed[WIDTH-1:0] gru_input_data [GRU_INPUT_SIZE-1:0];
    logic signed[WIDTH-1:0] gru_output_data [GRU_OUTPUT_SIZE-1:0];
    logic gru_input_valid, gru_output_valid, gru_ready;
    logic [$clog2(TIMESTEPS)-1:0] timestep;

    assign gru_input_valid = input_ready;
    assign dense1_input_data = gru_output_data;
    assign gru_input_data = input_v;
    assign dense1_input_ready =  gru_output_valid;
    assign ready = gru_ready;

    gru #(
        .WIDTH     ( WIDTH           ),
        .NFRAC     ( WIDTH-NINT      ),
        .x_SIZE    ( GRU_INPUT_SIZE  ),
        .TIMESTEPS ( TIMESTEPS       ),
        .y_SIZE    ( GRU_OUTPUT_SIZE )
    ) gru_layer (
        .clk(clk),
        .reset(reset),
        .input_valid      (gru_input_valid),
        .output_valid     (gru_output_valid),
        .ready            (gru_ready),
        .next_layer_ready (dense1_ready),
        .x_t(gru_input_data),
        .y_t(gru_output_data)
    );

    denseLayer #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .INPUT_SIZE(DENSE1_INPUT_SIZE),
        .OUTPUT_SIZE(DENSE1_OUTPUT_SIZE),
        .WEIGHTS ( `DENSE_1_PKG::weights ),
        .BIAS    ( `DENSE_1_PKG::bias    )
    ) dense1 (
        .clk, .reset,
        .ready(dense1_ready),
        .next_layer_ready(dense2_ready),
        .input_ready (dense1_input_ready),
        .output_ready(dense1_output_ready),
        .input_data  (dense1_input_data),
        .output_data (dense1_output_data)
    );

    relu #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .SIZE (DENSE1_OUTPUT_SIZE)
    ) relulayer1 (
        .clk,
        .input_data (dense1_output_data),
        .output_data(relu_output_data)
    );

    assign dense2_input_data  = relu_output_data;
    assign dense2_input_ready = dense1_output_ready;

    denseLayer #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .INPUT_SIZE(DENSE2_INPUT_SIZE),
        .OUTPUT_SIZE(DENSE2_OUTPUT_SIZE),
        .WEIGHTS ( `DENSE_2_PKG::weights ),
        .BIAS    ( `DENSE_2_PKG::bias    )
    ) dense2 (
        .clk, .reset,
        .ready(dense2_ready),
        .next_layer_ready(sigmoid_ready),
        .input_ready (dense2_input_ready),
        .output_ready(dense2_output_ready),
        .input_data  (dense2_input_data),
        .output_data (dense2_output_data)
    );

    assign sigmoid_input_data  = dense2_output_data;
    assign sigmoid_input_ready = dense2_output_ready;

    sigmoid #(
        .WIDTH(WIDTH),
        .NFRAC(WIDTH-NINT),
        .SIZE (DENSE2_OUTPUT_SIZE)
    ) sig_layer (
        .clk, .reset,
        .ready(sigmoid_ready),
        .next_layer_ready(1'b1),
        .input_ready (sigmoid_input_ready),
        .output_ready(sigmoid_output_ready),
        .input_data  (sigmoid_input_data),
        .output_data (sigmoid_output_data)
    );

    assign output_ready = sigmoid_output_ready;
    assign output_data  = sigmoid_output_data[0];

    // `ifndef SYNTHESIS
    // always_ff @(posedge clk) begin
    //     if (!reset) begin
    //         if (input_ready || gru_ready || gru_output_valid || dense1_input_ready || sigmoid_output_ready) begin
    //             $display(
    //                 "TOP t=%0t ps=%0d timestep=%0d input_ready=%0b gru_valid=%0b gru_ready=%0b gru_out=%0b dense1_in=%0b dense1_ready=%0b sig_out=%0b",
    //                 $time, ps, timestep, input_ready, gru_input_valid, gru_ready,
    //                 gru_output_valid, dense1_input_ready, dense1_ready, sigmoid_output_ready
    //             );
    //         end
    //     end
    // end
    // `endif

endmodule

module toptagging_tb_simple();

    localparam WIDTH = 16;
    localparam NINT = 6;
    localparam INPUT_SIZE = 6;
    localparam OUTPUT_SIZE = 1;
    localparam TIMESTEPS = 20;

    logic clk, reset, input_ready, output_ready, ready;
    logic signed [WIDTH-1:0] input_v [INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] output_data;

    Toptagging
        #(.WIDTH(WIDTH), .NINT(NINT), .INPUT_SIZE(INPUT_SIZE), .OUTPUT_SIZE(OUTPUT_SIZE), .TIMESTEPS(TIMESTEPS))
        dut (.*);

    localparam PERIOD = 10;
    initial begin
       clk <= 1'b1;
       forever #(PERIOD/2) clk <= ~clk;
    end

    localparam signed [15:0] INPUT [0:19][0:5] = '{
        '{16'sd163, 16'sd434, 16'sd515, 16'sd160, 16'sd19,  16'sd538},
        '{16'sd135, 16'sd434, 16'sd441, 16'sd134, 16'sd26,  16'sd542},
        '{16'sd124, 16'sd435, 16'sd511, 16'sd121, 16'sd16,  16'sd542},
        '{16'sd100, 16'sd437, 16'sd445, 16'sd99,  16'sd24,  16'sd542},
        '{16'sd77,  16'sd433, 16'sd445, 16'sd76,  16'sd24,  16'sd463},
        '{16'sd73,  16'sd435, 16'sd438, 16'sd73,  16'sd28,  16'sd542},
        '{16'sd49,  16'sd435, 16'sd517, 16'sd48,  16'sd19,  16'sd463},
        '{16'sd31,  16'sd432, 16'sd422, 16'sd31,  16'sd38,  16'sd0},
        '{16'sd28,  16'sd436, 16'sd516, 16'sd28,  16'sd19,  16'sd538},
        '{16'sd27,  16'sd466, 16'sd593, 16'sd27,  16'sd75,  16'sd463},
        '{16'sd25,  16'sd437, 16'sd439, 16'sd25,  16'sd27,  16'sd561},
        '{16'sd22,  16'sd429, 16'sd456, 16'sd22,  16'sd20,  16'sd561},
        '{16'sd19,  16'sd431, 16'sd422, 16'sd19,  16'sd38,  16'sd561},
        '{16'sd19,  16'sd439, 16'sd522, 16'sd18,  16'sd22,  16'sd463},
        '{16'sd19,  16'sd442, 16'sd543, 16'sd18,  16'sd35,  16'sd561},
        '{16'sd18,  16'sd442, 16'sd545, 16'sd18,  16'sd37,  16'sd561},
        '{16'sd16,  16'sd441, 16'sd439, 16'sd16,  16'sd28,  16'sd586},
        '{16'sd16,  16'sd452, 16'sd560, 16'sd16,  16'sd49,  16'sd542},
        '{16'sd16,  16'sd449, 16'sd580, 16'sd16,  16'sd59,  16'sd542},
        '{16'sd15,  16'sd436, 16'sd449, 16'sd15,  16'sd21,  16'sd463}
    };

    integer i;
    initial begin
        reset <= 1; repeat(1) @(posedge clk);

        reset <= 0;
        input_ready <= 1;

        input_v <= INPUT[0];
        @(posedge clk);

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT[i];
        end
        
        wait(output_ready == 1'b1);
        repeat(10) @(posedge clk);

        repeat(10) @(posedge clk);

        $stop;
    end

endmodule