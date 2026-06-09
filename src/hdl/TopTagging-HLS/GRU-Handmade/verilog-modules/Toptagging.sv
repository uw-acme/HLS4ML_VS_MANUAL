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
        .y_SIZE    ( GRU_OUTPUT_SIZE ),
        .SIGMOID_BRAM_FILE ( SIGMOID_BRAM_FILE ),
        .TANH_BRAM_FILE    ( TANH_BRAM_FILE    )
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
        .SIZE (DENSE2_OUTPUT_SIZE),
        .BRAM_FILE (SIGMOID_BRAM_FILE)
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

/*
    // ENTRY 5969
    localparam signed [15:0] INPUT [0:19][0:5] = '{
        '{16'sd134, 16'sd393, 16'sd516, 16'sd135, 16'sd1,  16'sd542},
        '{16'sd111, 16'sd396, 16'sd514, 16'sd112, 16'sd2,  16'sd538},
        '{16'sd96,  16'sd394, 16'sd513, 16'sd96,  16'sd1,  16'sd542},
        '{16'sd64,  16'sd393, 16'sd515, 16'sd65,  16'sd1,  16'sd463},
        '{16'sd64,  16'sd396, 16'sd516, 16'sd65,  16'sd2,  16'sd538},
        '{16'sd56,  16'sd394, 16'sd512, 16'sd56,  16'sd1,  16'sd538},
        '{16'sd53,  16'sd394, 16'sd514, 16'sd53,  16'sd1,  16'sd538},
        '{16'sd52,  16'sd395, 16'sd515, 16'sd52,  16'sd2,  16'sd561},
        '{16'sd44,  16'sd391, 16'sd515, 16'sd44,  16'sd2,  16'sd538},
        '{16'sd43,  16'sd393, 16'sd513, 16'sd44,  16'sd1,  16'sd586},
        '{16'sd41,  16'sd392, 16'sd519, 16'sd41,  16'sd3,  16'sd586},
        '{16'sd39,  16'sd390, 16'sd519, 16'sd40,  16'sd5,  16'sd1024},
        '{16'sd37,  16'sd390, 16'sd516, 16'sd37,  16'sd4,  16'sd438},
        '{16'sd36,  16'sd390, 16'sd517, 16'sd36,  16'sd4,  16'sd0},
        '{16'sd32,  16'sd392, 16'sd512, 16'sd32,  16'sd2,  16'sd542},
        '{16'sd30,  16'sd392, 16'sd513, 16'sd31,  16'sd1,  16'sd538},
        '{16'sd28,  16'sd393, 16'sd515, 16'sd29,  16'sd0,  16'sd538},
        '{16'sd24,  16'sd393, 16'sd514, 16'sd24,  16'sd1,  16'sd538},
        '{16'sd20,  16'sd394, 16'sd515, 16'sd20,  16'sd1,  16'sd463},
        '{16'sd18,  16'sd394, 16'sd513, 16'sd18,  16'sd1,  16'sd463}
    };
*/

    // ENTRY 1
    localparam signed [15:0] INPUT1 [0:19][0:5] = '{
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
        '{16'sd18,  16'sd442, 16'sd546, 16'sd18,  16'sd37,  16'sd561},
        '{16'sd16,  16'sd441, 16'sd439, 16'sd16,  16'sd28,  16'sd586},
        '{16'sd16,  16'sd452, 16'sd560, 16'sd16,  16'sd49,  16'sd542},
        '{16'sd16,  16'sd449, 16'sd580, 16'sd16,  16'sd59,  16'sd542},
        '{16'sd15,  16'sd436, 16'sd449, 16'sd15,  16'sd21,  16'sd463}
    };

    // ENTRY 2
    localparam signed [15:0] INPUT2 [0:19][0:5] = '{
        '{16'sd149, 16'sd554, 16'sd516, 16'sd145, 16'sd11,  16'sd438},
        '{16'sd119, 16'sd552, 16'sd521, 16'sd115, 16'sd15,  16'sd463},
        '{16'sd98,  16'sd554, 16'sd517, 16'sd95,  16'sd12,  16'sd463},
        '{16'sd82,  16'sd554, 16'sd514, 16'sd80,  16'sd9,   16'sd561},
        '{16'sd74,  16'sd554, 16'sd430, 16'sd85,  16'sd59,  16'sd538},
        '{16'sd71,  16'sd551, 16'sd428, 16'sd82,  16'sd61,  16'sd538},
        '{16'sd65,  16'sd558, 16'sd532, 16'sd61,  16'sd24,  16'sd561},
        '{16'sd62,  16'sd557, 16'sd536, 16'sd58,  16'sd27,  16'sd542},
        '{16'sd61,  16'sd557, 16'sd517, 16'sd59,  16'sd12,  16'sd561},
        '{16'sd46,  16'sd552, 16'sd425, 16'sd54,  16'sd62,  16'sd538},
        '{16'sd41,  16'sd556, 16'sd524, 16'sd39,  16'sd17,  16'sd561},
        '{16'sd36,  16'sd560, 16'sd531, 16'sd34,  16'sd24,  16'sd463},
        '{16'sd35,  16'sd549, 16'sd427, 16'sd40,  16'sd62,  16'sd538},
        '{16'sd28,  16'sd553, 16'sd531, 16'sd27,  16'sd23,  16'sd463},
        '{16'sd22,  16'sd560, 16'sd517, 16'sd22,  16'sd14,  16'sd561},
        '{16'sd21,  16'sd556, 16'sd527, 16'sd20,  16'sd19,  16'sd538},
        '{16'sd20,  16'sd554, 16'sd524, 16'sd19,  16'sd18,  16'sd538},
        '{16'sd18,  16'sd553, 16'sd533, 16'sd17,  16'sd25,  16'sd561},
        '{16'sd17,  16'sd554, 16'sd514, 16'sd16,  16'sd9,   16'sd538},
        '{16'sd16,  16'sd566, 16'sd527, 16'sd15,  16'sd25,  16'sd538}
    };

    localparam signed [15:0] INPUT3 [0:19][0:5] = '{
        '{16'sd178, 16'sd554, 16'sd516, 16'sd175, 16'sd20, 16'sd542},
        '{16'sd171, 16'sd554, 16'sd514, 16'sd168, 16'sd19, 16'sd586},
        '{16'sd71,  16'sd559, 16'sd506, 16'sd70,  16'sd13, 16'sd561},
        '{16'sd64,  16'sd558, 16'sd516, 16'sd63,  16'sd21, 16'sd463},
        '{16'sd49,  16'sd557, 16'sd513, 16'sd48,  16'sd18, 16'sd538},
        '{16'sd47,  16'sd554, 16'sd411, 16'sd48,  16'sd64, 16'sd561},
        '{16'sd42,  16'sd559, 16'sd508, 16'sd42,  16'sd15, 16'sd463},
        '{16'sd42,  16'sd554, 16'sd412, 16'sd42,  16'sd63, 16'sd586},
        '{16'sd38,  16'sd559, 16'sd507, 16'sd38,  16'sd14, 16'sd538},
        '{16'sd38,  16'sd554, 16'sd408, 16'sd38,  16'sd66, 16'sd515},
        '{16'sd35,  16'sd557, 16'sd511, 16'sd34,  16'sd16, 16'sd542},
        '{16'sd30,  16'sd559, 16'sd519, 16'sd30,  16'sd23, 16'sd561},
        '{16'sd27,  16'sd550, 16'sd437, 16'sd27,  16'sd44, 16'sd542},
        '{16'sd27,  16'sd561, 16'sd514, 16'sd27,  16'sd20, 16'sd463},
        '{16'sd25,  16'sd563, 16'sd505, 16'sd25,  16'sd16, 16'sd561},
        '{16'sd23,  16'sd557, 16'sd508, 16'sd23,  16'sd14, 16'sd538},
        '{16'sd21,  16'sd545, 16'sd562, 16'sd20,  16'sd59, 16'sd561},
        '{16'sd19,  16'sd550, 16'sd422, 16'sd19,  16'sd56, 16'sd0},
        '{16'sd19,  16'sd560, 16'sd510, 16'sd19,  16'sd17, 16'sd538},
        '{16'sd19,  16'sd549, 16'sd426, 16'sd19,  16'sd53, 16'sd538}
    };

    localparam signed [15:0] INPUT4 [0:19][0:5] = '{
        '{16'sd151, 16'sd393, 16'sd516, 16'sd152, 16'sd13, 16'sd1024},
        '{16'sd147, 16'sd393, 16'sd517, 16'sd147, 16'sd14, 16'sd542},
        '{16'sd60,  16'sd393, 16'sd416, 16'sd60,  16'sd42, 16'sd538},
        '{16'sd51,  16'sd438, 16'sd577, 16'sd48,  16'sd60, 16'sd542},
        '{16'sd43,  16'sd434, 16'sd570, 16'sd41,  16'sd54, 16'sd538},
        '{16'sd41,  16'sd390, 16'sd420, 16'sd42,  16'sd40, 16'sd561},
        '{16'sd41,  16'sd438, 16'sd581, 16'sd38,  16'sd61, 16'sd542},
        '{16'sd32,  16'sd380, 16'sd472, 16'sd33,  16'sd22, 16'sd542},
        '{16'sd29,  16'sd394, 16'sd513, 16'sd29,  16'sd11, 16'sd538},
        '{16'sd25,  16'sd385, 16'sd419, 16'sd26,  16'sd42, 16'sd561},
        '{16'sd23,  16'sd446, 16'sd524, 16'sd22,  16'sd50, 16'sd542},
        '{16'sd23,  16'sd393, 16'sd516, 16'sd23,  16'sd13, 16'sd463},
        '{16'sd23,  16'sd393, 16'sd517, 16'sd23,  16'sd13, 16'sd538},
        '{16'sd22,  16'sd385, 16'sd454, 16'sd22,  16'sd25, 16'sd561},
        '{16'sd19,  16'sd395, 16'sd411, 16'sd19,  16'sd44, 16'sd463},
        '{16'sd18,  16'sd387, 16'sd407, 16'sd18,  16'sd48, 16'sd463},
        '{16'sd17,  16'sd382, 16'sd466, 16'sd18,  16'sd22, 16'sd463},
        '{16'sd17,  16'sd433, 16'sd527, 16'sd16,  16'sd39, 16'sd1024},
        '{16'sd16,  16'sd386, 16'sd413, 16'sd16,  16'sd45, 16'sd561},
        '{16'sd16,  16'sd429, 16'sd492, 16'sd15,  16'sd31, 16'sd463}
    };

    localparam signed [15:0] INPUT5 [0:19][0:5] = '{
        '{16'sd110, 16'sd476, 16'sd509, 16'sd109, 16'sd10, 16'sd542},
        '{16'sd72,  16'sd476, 16'sd467, 16'sd71,  16'sd26, 16'sd561},
        '{16'sd60,  16'sd471, 16'sd515, 16'sd60,  16'sd7,  16'sd561},
        '{16'sd59,  16'sd456, 16'sd520, 16'sd59,  16'sd16, 16'sd1024},
        '{16'sd52,  16'sd476, 16'sd511, 16'sd52,  16'sd10, 16'sd561},
        '{16'sd48,  16'sd472, 16'sd514, 16'sd48,  16'sd7,  16'sd561},
        '{16'sd43,  16'sd448, 16'sd514, 16'sd43,  16'sd25, 16'sd463},
        '{16'sd40,  16'sd456, 16'sd523, 16'sd40,  16'sd18, 16'sd542},
        '{16'sd40,  16'sd479, 16'sd507, 16'sd40,  16'sd14, 16'sd463},
        '{16'sd39,  16'sd474, 16'sd507, 16'sd39,  16'sd8,  16'sd538},
        '{16'sd39,  16'sd476, 16'sd507, 16'sd39,  16'sd10, 16'sd538},
        '{16'sd38,  16'sd474, 16'sd496, 16'sd38,  16'sd11, 16'sd1024},
        '{16'sd38,  16'sd455, 16'sd519, 16'sd38,  16'sd17, 16'sd1024},
        '{16'sd37,  16'sd477, 16'sd505, 16'sd37,  16'sd12, 16'sd538},
        '{16'sd34,  16'sd474, 16'sd507, 16'sd33,  16'sd8,  16'sd542},
        '{16'sd32,  16'sd473, 16'sd528, 16'sd32,  16'sd14, 16'sd538},
        '{16'sd31,  16'sd477, 16'sd475, 16'sd31,  16'sd22, 16'sd463},
        '{16'sd30,  16'sd471, 16'sd519, 16'sd30,  16'sd8,  16'sd538},
        '{16'sd27,  16'sd463, 16'sd458, 16'sd27,  16'sd30, 16'sd0},
        '{16'sd26,  16'sd474, 16'sd520, 16'sd26,  16'sd11, 16'sd463}
    };

    integer i;
    initial begin
        reset <= 1; repeat(1) @(posedge clk);

        reset <= 0;
        input_ready <= 1;

        input_v <= INPUT1[0];
        @(posedge clk);

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT1[i];
        end
        
        @(posedge ready);
        input_v <= INPUT2[0];

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT2[i];
        end

        @(posedge ready);
        input_v <= INPUT3[0];

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT3[i];
        end

        @(posedge ready);
        input_v <= INPUT4[0];

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT4[i];
        end

        @(posedge ready);
        input_v <= INPUT5[0];

        for (i = 1; i < 20; i++) begin
            @(posedge ready);
            input_v <= INPUT5[i];
        end
        
        wait(output_ready == 1'b1);
        repeat(10) @(posedge clk);

        repeat(10) @(posedge clk);

        $stop;
    end

endmodule

`ifndef SYNTHESIS
`define STRINGIFY(x) `"x`"
module Toptagging_tb;
    logic clk;
    logic reset;
    logic input_ready;
    logic output_ready;
    logic ready;
    // logic move_next;
    parameter INPUT_SIZE = 6;
    parameter TIMESTEPS = 20;
    parameter OUTPUT_SIZE = 1;
    parameter WIDTH = 16;
    parameter NINT = 6;
    parameter NFRAC = WIDTH-NINT;
    logic signed[WIDTH-1:0] input_v [INPUT_SIZE-1:0];   // 1-D: one timestep per clk (matches Toptagging port)
    logic signed[WIDTH-1:0] output_data;
    integer i, j, k, fd, count, ts;
    Toptagging #(.WIDTH(WIDTH), .NINT(NINT)) dut (.*);
    initial begin
        clk=0;
        count=0;
        forever #1 begin
            if (~clk)
                count<=count+1'b1;
            clk<=~clk;
        end
    end
    // max_tests = 19951;
    localparam num_tests = 19951;
    logic signed [WIDTH-1:0] x_test [num_tests-1:0][TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] flat_mem [0:INPUT_SIZE*num_tests*TIMESTEPS-1];
    `ifndef TESTFILE
        `define TESTFILE "X_test_16_6.txt"
    `endif
    `ifndef RESULTSFILE
        `define RESULTSFILE "gen_results.csv"
    `endif

    initial begin
        `ifndef MODELSIM
            $readmemb(`STRINGIFY(`TESTFILE), flat_mem);
        `else
            $readmemb("X_test_16_6.txt", flat_mem);
        `endif
        for (i=0; i<num_tests; i++) begin : tests
            for (j=0; j<TIMESTEPS; j++) begin : steps
                for (k=0; k<INPUT_SIZE; k++) begin : nums
                    x_test[i][j][k] = flat_mem[i*INPUT_SIZE*TIMESTEPS+(j+1)*INPUT_SIZE-k-1];
                end
            end
        end
    end
    localparam write_file=1;
    real out;
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
    assign out=to_real(output_data);
    endgenerate
    always_ff @(posedge clk) begin
        if (write_file&&output_ready) begin
            // for (int ii = 0; ii < OUTPUT_SIZE-1; ii++) begin
            //     $fwrite(fd, "%.15f,",  out[ii]);
            // end
            $fwrite(fd, "%.15f\n", out);
        end
        // if (count>30000)
<<<<<<< HEAD
        //     $stop;
=======
        //    $stop;
>>>>>>> cca551a760ce2ffbc275a0eefeb781f1922cee9a
    end
    initial begin
        if (write_file) begin
            `ifndef MODELSIM
                fd = $fopen(`STRINGIFY(`RESULTSFILE), "w");  // "w" = write mode, "a" = append
            `else
                fd = $fopen("gen_results.csv", "w");  // "w" = write mode, "a" = append
            `endif
            if (fd == 0) begin
                $display("ERROR: Could not open file!");
                $finish;
            end
        end
        reset<=1;
        input_ready<=0;
        @(posedge clk);
        @(posedge clk);
        reset<=0;
        i=0;

        for (i = 0; i < num_tests; i++) begin
            input_ready <= 1;
            input_v <= x_test[i][0];
            @(posedge ready)

            for (j = 1; j < TIMESTEPS; j++) begin
                input_v <= x_test[i][j];
                @(posedge ready);
            end
        end
        input_ready<=0;

        @(posedge output_ready);
        @(posedge clk);
        $stop;
    end
endmodule
`endif