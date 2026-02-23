module compile_demo (
  input  logic clk,
  input  logic reset,
  input  logic [7:0] a, b,
  output logic [8:0] sum
);
  always_ff @(posedge clk or negedge reset) begin
    if (!reset) sum <= '0;
    else        sum <= a + b;
  end
endmodule
