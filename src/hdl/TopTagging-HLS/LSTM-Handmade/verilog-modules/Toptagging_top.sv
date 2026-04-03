module Toptagging_top #( parameter
    WIDTH = 16,
    NINT = 6,
    INPUT_SIZE = 6,
    TIMESTEPS = 20,
    OUTPUT_SIZE = 20
)(
    input clk,
    input reset,
    input input_ready,
    output logic output_ready,
    input logic signed [WIDTH-1:0] input_step [INPUT_SIZE-1:0],
    output logic signed [WIDTH-1:0] output_data
);
    logic signed [WIDTH-1:0] input_v [TIMESTEPS-1:0][INPUT_SIZE-1:0];
    logic input_ready_toptagging, output_ready_toptagging;
    logic [$clog2(TIMESTEPS):0] step=0;
    always_ff @(posedge clk) begin
        if (input_ready) begin
            input_v[step]<=input_step;
            step<=(step!=(TIMESTEPS-1) ? step+1 : 0);
        end
    end
endmodule