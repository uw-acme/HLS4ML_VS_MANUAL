/*
GATED RECURRENT UNIT (GRU) LAYER
io_stream - takes in a single timestep at a time
return_sequences=false - returns final hidden state output (final y_t) after processing all timesteps
static - uses a single GRU cell for every computation
*/

`timescale 1ns / 1ps

module gru #(parameter
    WIDTH               = 10,   // data width
    NFRAC               = 6,    // number of fractional bits in data
    x_SIZE              = 6,    // input dimensionality (d)
    TIMESTEPS           = 15,
    y_SIZE              = 120,  // hidden state / output dimensionality (e)

    // lookup table parameters - should just leave these as defaults unless you want to get fancy with it
    MEM_WIDTH           = 18,   // precision of BRAM entries
    MEM_NFRAC           = 18,   // number of fractional bits in BRAM entries
    LOOKUP_WIDTH        = 10,   // width of lookup indices
    LOOKUP_NFRAC        = 7,    // fractional bits in lookup indices
    SIGMOID_BRAM_FILE   = "../weights_n_tables/sigmoid_table_18_18_10_7.dat",
    TANH_BRAM_FILE      = "../weights_n_tables/tanh_table_18_18_10_7.dat"
)(
    input  logic clk,
    input  logic reset,

    // handshake signals
    input  logic input_valid,        // input data valid
    output logic output_valid,       // GRU output is valid - true after processing all timesteps
    output logic ready,              // GRU is ready to accept new data from previous layer
    input  logic next_layer_ready,   // next layer is ready for input

    // data input/output
    // input is a single timestep (io_stream) - timesteps fed in one at a time
    input  logic signed [WIDTH-1:0] x_t [0:x_SIZE-1],               // x_t: R^{d}
    output logic signed [WIDTH-1:0] y_t [0:y_SIZE-1]                // y_t: R^{e}
);

    logic signed [WIDTH-1:0] h_t [0:y_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:y_SIZE-1];
    logic cell_input_valid, cell_output_valid, cell_ready, cell_next_layer_ready;
    logic start, done;

    enum logic [2:0] {READY=3'b100, PROCESSING=3'b010, PAUSED=3'b001} ps, ns;

    assign cell_input_valid = (ps == READY && start && input_valid) || (ps == PROCESSING && cell_output_valid && input_valid);
    assign cell_next_layer_ready = cell_ready;

    assign start = input_valid && ready;
    assign output_valid = (ps == PAUSED);

    always_comb begin
        if (ps == PROCESSING) begin
            ready = cell_output_valid;
        end else begin
            ready = (ps == READY);
        end
    end

    always_comb begin
        case (ps)
            READY: begin
                ns = ps;
                if (start) ns = PROCESSING;
            end
            PROCESSING: begin
                ns = ps;
                if (done) ns = PAUSED;
            end
            PAUSED: begin
                ns = ps;
                if (next_layer_ready) ns = READY;
            end
            // default: begin
            //     ns = READY;
            // end
        endcase
    end

    always_ff @(posedge clk) begin
        if (reset) ps <= READY;
        else ps <= ns;
    end

    gru_cell #(
        .WIDTH              ( WIDTH             ),
        .NFRAC              ( NFRAC             ),
        .x_SIZE             ( x_SIZE            ),
        .h_SIZE             ( y_SIZE            ),
        .MEM_WIDTH          ( MEM_WIDTH         ),
        .MEM_NFRAC          ( MEM_NFRAC         ),
        .LOOKUP_WIDTH       ( LOOKUP_WIDTH      ),
        .LOOKUP_NFRAC       ( LOOKUP_NFRAC      ),
        .SIGMOID_BRAM_FILE  ( SIGMOID_BRAM_FILE ),
        .TANH_BRAM_FILE     ( TANH_BRAM_FILE    )
    ) gru_unit (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_valid        ( cell_input_valid  ),
        .output_valid       ( cell_output_valid ),
        .ready              ( cell_ready        ),
        .next_layer_ready   ( cell_next_layer_ready ),
        .x_t                ( x_t               ),
        .h_t_minus_1        ( h_t_minus_1       ),
        .h_t                ( h_t               )
    );

    // count number of times timestep computation has happened
    logic cell_output_posedge;
    logic [$clog2(TIMESTEPS) - 1 : 0] count;
    always_ff @(posedge clk) begin
        if (reset) begin
            h_t_minus_1 <= '{default: 0};
            y_t <= '{default: 0};
            count <= '0;
        end else if (ps == PROCESSING && cell_output_valid && input_valid) begin
            if (count == TIMESTEPS - 1) begin
                h_t_minus_1 <= '{default: 0};
                y_t <= h_t;
                count <= '0;
            end else begin
                h_t_minus_1 <= h_t;
                count <= count + 1;
            end
        end
    end

    assign done = (count == TIMESTEPS - 1) && cell_output_valid;

`ifndef SYNTHESIS
    // =====================================================================
    // DEBUG PRINT BLOCK - TEMPORARY REAL-GRU HANDSHAKE TRACE
    // Remove this block after the streamed GRU path is producing outputs.
    // =====================================================================
    always_ff @(posedge clk) begin
        if (!reset) begin
            if (input_valid || ready || cell_input_valid || cell_ready || cell_output_valid || output_valid || done) begin
                $display(
                    "DBG_GRU t=%0t ps=%0d ns=%0d count=%0d input_valid=%0b ready=%0b next_layer_ready=%0b cell_in=%0b cell_ready=%0b cell_out=%0b output_valid=%0b done=%0b",
                    $time,
                    ps,
                    ns,
                    count,
                    input_valid,
                    ready,
                    next_layer_ready,
                    cell_input_valid,
                    cell_ready,
                    cell_output_valid,
                    output_valid,
                    done
                );
            end
        end
    end
`endif

endmodule

// tests gru with randomly generated input
module gru_tb();

    localparam WIDTH = 32;
    localparam NFRAC = 16;
    localparam x_SIZE = 6;
    localparam TIMESTEPS = 15;
    localparam y_SIZE = 120;

    logic clk, reset, input_valid, output_valid, ready, next_layer_ready;
    logic signed [WIDTH-1:0] x_t [0:x_SIZE-1];               // x_t: R^{d}
    logic signed [WIDTH-1:0] y_t [0:y_SIZE-1];               // y_t: R^{e}

    gru #(.WIDTH(WIDTH), .NFRAC(NFRAC), .x_SIZE(x_SIZE), .TIMESTEPS(TIMESTEPS), .y_SIZE(y_SIZE)) dut (.*);

    localparam logic signed [31:0] INPUT [0:14][0:5] = '{
        '{  81152.0,   -36352.0,   217600.0,   270336.0,  -109312.0,   180224.0 },
        '{ -264192.0,  130816.0,  -163840.0,   203904.0,    57344.0,   -79872.0 },
        '{   69632.0, -160256.0,    61440.0,  -327616.0,   294912.0,    51200.0 },
        '{ -139264.0,  296222.72, -180224.0,     2048.0,  -122880.0,   218432.0 },
        '{  262144.0, -300810.25,   16384.0,  -204800.0,   266240.0,   -61440.0 },
        '{  182016.0, -109184.0,   254848.0,   -73600.0,   210432.0,  -122880.0 },
        '{   98304.0, -278528.0,   184320.0,   270336.0,  -180224.0,    72192.0 },
        '{ -159744.0,  262144.0,   -32768.0,    57344.0,  -264192.0,    32768.0 },
        '{   26240.0,  -19712.0,   144192.0,   -72128.0,     3328.0,  -132736.0 },
        '{   49152.0,  -57344.0,   192512.0,  -266240.0,   245760.0,   -98304.0 },
        '{  253952.0,  -73728.0,   294912.0,  -311296.0,   172032.0,  -282624.0 },
        '{       0.0, -245760.0,    73728.0,   -98238.46,  147456.0,  -245760.0 },
        '{  291264.0,  -36416.0,   109184.0,  -182016.0,   254848.0,  -327616.0 },
        '{    8192.0,  -81920.0,   155648.0,  -229376.0,   303104.0,   -49152.0 },
        '{  126976.0, -184320.0,   241664.0,  -299008.0,    28672.0,   -86016.0 }
    };

    localparam PERIOD = 10;
    initial begin
       clk <= 1'b1;
       forever #(PERIOD/2) clk <= ~clk;
    end

    integer i;
    initial begin
        reset <= 1; repeat(1) @(posedge clk);

        reset <= 0;
        next_layer_ready <= 0;
        input_valid <= 1;

        x_t <= INPUT[0];
        @(posedge clk);

        for (i = 1; i < 15; i++) begin
            @(posedge ready);
            x_t <= INPUT[i];
        end
        
        wait(output_valid == 1'b1);
        repeat(10) @(posedge clk);

        next_layer_ready <= 1;
        repeat(1) @(posedge clk);

        next_layer_ready <= 0;

        x_t <= {{32'b0},
                {32'b0},
                {32'b0},
                {32'b0},
                {32'b0},
                {32'b0}
               };

        repeat(5) @(posedge clk);

        next_layer_ready <= 1'b1;

        repeat(200) @(posedge clk);

        $stop;
    end

endmodule
