// Sub Layer Unpacked Version
//
// This module represents the dense latency layer of the
// neural network. In this layer, the input matrix is multiplied
// with weight matrix. Then the result of the matrix multiplication
// is added with a matrix of BIASes.
// NOTE: IDENTICAL to reluDenseLatencyLayer except that different packages
// are specificed by macro header file
//
// Inputs:
// - clk
// - reset
// - input_data
//
// Outputs:
// - output_data

`timescale 1ns / 1ps
`include "pkg_sel_gru.svh"
`include "pkg_sel.svh"

// Computes the dot product of the inputs and WEIGHTS then adds that to the BIASes
module denseLayer #(
    parameter int WIDTH = 17, // width of fixed point numbers
    parameter int NFRAC = 10, // number of fractional bits (must be <= WIDTH)
    parameter int INPUT_SIZE = 32, // number of fixed point numbers going into dense latency layer
    parameter int OUTPUT_SIZE = 32, // number of fixed point numbers coming out of dense latency layer
    parameter logic signed [WIDTH-1:0] WEIGHTS [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1] = '{default: '{default: 17'sd0}}, // WEIGHTS for each input to each output
    parameter logic signed [WIDTH-1:0] BIAS [0:OUTPUT_SIZE-1] = '{default: 17'sd0}, // BIASes for each output
    parameter int ADDER_TREE_CYCLES = 2 // Number of cycles for adderTree module
) (
    input  logic                    clk, 
    input  logic                    reset,
    input  logic                    input_ready,
    output  logic                    output_ready,
    input  logic signed [WIDTH-1:0] input_data  [0:INPUT_SIZE-1],
    output logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1]
);
    // check that the right package is being used
    initial assert($bits(WEIGHTS[0][0]) == WIDTH);
    
    
    logic signed [WIDTH-1:0]   mult         [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH*2-1:0] mult_temp    [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   accumulator  [0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0]   result       [0:OUTPUT_SIZE-1];
    logic                      processing;
    
    genvar  col, row;
    // multiplication doubles NFRAC bits in output, we only need NFRAC bits of fractional part,
    // select top NFRAC bits of the fractional part
    localparam TOP      = WIDTH+NFRAC-1,
               BOTTOM   = NFRAC;
    // Generate a shift add module for each multiplication, shift-add will do optimizations
    // where it can and leave the rest to Xilinx tools
    generate 
        for(row=0; row<INPUT_SIZE; row++) begin : INPUT_SIZE_rows
            for(col=0; col<OUTPUT_SIZE; col++) begin : OUTPUT_SIZE_cols
                shift_add #(.WEIGHT ( WEIGHTS[row][col]                 ),
                            .DEPTH  ( `SA_DEPTH                         ),
                            .BITS   ( WIDTH                             ),
                            .NFRAC  ( NFRAC                             )
                            ) sa (
                    .clk,
                    .data_in    ( input_data[row]       ),
                    .data_out   ( mult_temp[row][col]   )
                );
//                assign mult_temp[row][col] = $signed(input_data[row]) * $signed(`SIGMOID_PKG::WEIGHTS[row*OUTPUT_SIZE + col]);
                assign mult[row][col] = mult_temp[row][col][TOP:BOTTOM];
           end
        end
    endgenerate
    
    
    logic signed [WIDTH-1:0] mult_out [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    logic signed [WIDTH-1:0] mult_1 [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1];
    
    
    // Determine what configuration DSPs will infer (single cycle or 3-cycle)
    if (`THREE_CYCLE_MULT) begin
        always_ff @(posedge clk) begin
            mult_1 <= mult;
            mult_out <= mult_1;
        end
    end else begin
        assign mult_out = mult;
    end
    
    // Pipelined adder tree to accumulate the values in mult_out
    adderTree #(.WIDTH      ( WIDTH         ),
                .INPUT_SIZE ( INPUT_SIZE    ),
                .OUTPUT_SIZE( OUTPUT_SIZE   )
                ) sum_all (
        .clk,
        .reset,
        .input_data ( mult_out      ),
        .output_data( accumulator   )
    );

    // Add BIASes to result
    integer i;
    always_comb begin
        // if (input_ready) begin
        for (i=0; i < OUTPUT_SIZE;i++) begin
            result[i] = accumulator[i] + BIAS[i];
        end
        // end
    end

    // output
    typedef enum logic [1:0] {
        IDLE,
        PROCESSING,
        DONE
    } state_t;
    
    state_t state, next_state;
    int cycle_count;
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            cycle_count <= 0;
        end else begin
            state <= next_state;
            if (state == PROCESSING) begin
                cycle_count <= cycle_count + 1;
            end else begin
                cycle_count <= 0;
            end
        end
    end
    
    always_comb begin
        next_state = state;
        case (state)
            IDLE: begin
                if (input_ready) begin
                    next_state = PROCESSING;
                end
            end
            PROCESSING: begin
                if (cycle_count >= ADDER_TREE_CYCLES) begin
                    next_state = DONE;
                end
            end
            DONE: begin
                next_state = IDLE;
            end
        endcase
    end
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            output_data <= '{default: 0};
            output_ready <= 0;
            processing <= 0;
        end else begin
            case (state)
                IDLE: begin
                    output_ready <= 0;
                    processing <= 0;
                end
                PROCESSING: begin
                    // Wait for the computation to complete
                    processing <= 1;
                end
                DONE: begin
                    output_data <= result;
                    output_ready <= 1;
                    processing <= 0;
                end
            endcase
        end
    end
endmodule




module denseLayer_tb();
    parameter WIDTH = 8, NFRAC = 0, INPUT_SIZE = 7, OUTPUT_SIZE = 5;
    logic clk, reset;
    logic signed [WIDTH-1:0] input_data [0:INPUT_SIZE-1];

    localparam signed [WIDTH-1:0] WEIGHTS [0:INPUT_SIZE-1][0:OUTPUT_SIZE-1] = '{
        {8'd1, 8'd2, 8'd3, 8'd4, 8'd5},
        {8'd6, 8'd7, 8'd8, 8'd9, 8'd10},
        {8'd11, 8'd12, 8'd13, 8'd14, 8'd15},
        {8'd16, 8'd17, 8'd18, 8'd19, 8'd20},
        {8'd21, 8'd22, 8'd23, 8'd24, 8'd25},
        {8'd26, 8'd27, 8'd28, 8'd29, 8'd30},
        {8'd31, 8'd32, 8'd33, 8'd34, 8'd35}
    };
    localparam signed [WIDTH-1:0] BIAS [0:OUTPUT_SIZE-1] = '{
        {8'd0}, 
        {8'd0}, 
        {8'd0}, 
        {8'd0}, 
        //{8'd0}, 
        //{8'd0}, 
        {8'd0}};

    logic signed [WIDTH-1:0] output_data [0:OUTPUT_SIZE-1];
    
    localparam PERIOD = 10;
    initial begin
        clk <= 1'b1;
        forever #(PERIOD/2) clk <= ~clk;
    end
    
    // denseLayer #(
    //     .WIDTH          ( WIDTH             ),
    //     .NFRAC          ( NFRAC             ),
    //     .INPUT_SIZE     ( INPUT_SIZE        ),
    //     .OUTPUT_SIZE    ( OUTPUT_SIZE       )
    // ) dut (
    //     .clk(clk),  .reset(reset),
    //     .input_data(input_data),
    //     .output_data(output_data),
    //     .WEIGHTS(WEIGHTS),
    //     .BIAS(BIAS)
    // );
    
    initial begin
        reset = 0;
        input_data = {{-8'd1},
                      {8'd2},
                      {-8'd3},
                      {8'd4},
                      {-8'd5},
                      {8'd6},
                      {-8'd7}
                      };
                      
        repeat(30) @(posedge clk);
        
    end
    
    
endmodule
