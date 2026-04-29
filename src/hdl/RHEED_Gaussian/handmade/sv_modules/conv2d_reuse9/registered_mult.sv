// registered multiplication
module registered_mult #(parameter inputWidth = 16) (clk, in1, in2, out);
    input logic [inputWidth-1:0] in1, in2;
    output logic [inputWidth*2-1:0] out;

    always_ff @(posedge clk) begin
        out <= in1 * in2;
    end

endmodule