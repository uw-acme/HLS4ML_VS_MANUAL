
`timescale 1 ns / 1 ps

  module myproject_mul_mul_17ns_10ns_26_1_1_DSP48_40(a, b, p);
input [17 - 1 : 0] a;
input [10 - 1 : 0] b;
output [26 - 1 : 0] p;

assign p = $unsigned (a) * $unsigned (b);

endmodule
`timescale 1 ns / 1 ps
module myproject_mul_mul_17ns_10ns_26_1_1(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



myproject_mul_mul_17ns_10ns_26_1_1_DSP48_40 myproject_mul_mul_17ns_10ns_26_1_1_DSP48_40_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule
