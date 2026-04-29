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
    SIGMOID_BRAM_FILE   = "sigmoid_table_18_18_10_7.dat",
    TANH_BRAM_FILE      = "tanh_table_18_18_10_7.dat",

    // true if returning hidden state output for every time step (every h_t)
    // false if returning only final hidden state output after processing all time steps (final y_t)
    RETURN_SEQ = 0
)(
    input  logic clk,
    input  logic reset,

    // handshake signals
    input  logic input_valid,        // input data valid
    output logic output_valid,       // GRU output is valid
    output logic ready,              // GRU is ready to accept new data from previous layer
    input  logic next_layer_ready,   // next layer is ready for input

    // data input/output
    // input is a single timestep (io_stream) - timesteps fed in one at a time
    input  logic signed [WIDTH-1:0] x_t [0:x_SIZE-1],               // x_t: R^{d}
    output logic signed [WIDTH-1:0] y_t [0:y_SIZE-1]                // y_t: R^{e}
)

    logic signed [WIDTH-1:0] h_t [0:y_SIZE-1];
    logic signed [WIDTH-1:0] h_t_minus_1 [0:y_SIZE-1];
    logic cell_input_valid, cell_output_valid, cell_ready, cell_next_layer_ready;
    logic start, done;

    enum logic [2:0] {READY=3'b100, PROCESSING=3'b010, PAUSED=3'b001} ps, ns;

    assign cell_input_valid = (start && input_valid) || (cell_output_valid && input_valid);
    assign cell_next_layer_ready = cell_ready;

    assign ready = (ps == READY);
    assign start = input_valid && ready;
    assign output_valid = (ps == PAUSED);

    always_comb begin
        case (ps)
            READY: begin
                if (start) ns = PROCESSING;
            end
            PROCESSING: begin
                if (done) ns = PAUSED;
            end
            PAUSED: begin
                if (next_layer_ready) ns = READY;
            end
        endcase
    end

    always_ff @(posedge clk) begin
        if (reset) ps <= READY;
        else ps <= ns;
    end

    gruCell #(
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
    ) cell (
        .clk                ( clk               ),
        .reset              ( reset             ),
        .input_valid        ( cell_input_valid  ),
        .output_valid       ( cell_output_valid ),
        .ready              ( cell_ready        ),
        .next_layer_ready   ( cell_next_layer_ready ),
        .x_t                ( x_t               ),
        .h_t_minus_1        ( h_t_minus_1       ),
        .h_t                ( h_t               )
    )

    // count number of times timestep computation has happened w/ posedge of cell_output_valid
    logic cell_output_posedge;
    logic [$clog2(TIMESTEPS) - 1 : 0] count;
    posedge_m output_detector (.clk, .reset, .in(cell_output_valid), .out(cell_output_posedge));
    always_ff @(posedge clk) begin
        if (reset) begin
            h_t_minus_1 <= '0;
            count <= '0;
            done <= 1'b0;
        end else if (cell_output_posedge) begin
            if (count == TIMESTEPS - 1) begin
                h_t_minus_1 <= '0;
                count <= '0;
                done <= 1'b1;
            end else begin
                h_t_minus_1 <= h_t;
                count <= count + 1;
                done <= 1'b0;
            end
        end
    end

endmodule

// detects positive edges
module posedge_m(input clk, input reset, input in, output logic out);
    logic in_1;
    always_ff @(posedge clk) begin
        in_1 <= in;
        out <= in && (!in_1) && !reset;
    end
endmodule