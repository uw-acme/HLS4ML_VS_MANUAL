//Width: 3
//Int: 1
package dense_2_0_3_1;

localparam logic signed [2:0] weights [10][3] = '{
{3'b010, 3'b010, 3'b111},
{3'b000, 3'b001, 3'b010},
{3'b001, 3'b111, 3'b010},
{3'b111, 3'b110, 3'b010},
{3'b010, 3'b001, 3'b110},
{3'b010, 3'b110, 3'b111},
{3'b010, 3'b110, 3'b110},
{3'b111, 3'b010, 3'b111},
{3'b010, 3'b111, 3'b001},
{3'b111, 3'b001, 3'b010}
};
localparam logic signed [2:0] bias [3] = '{
3'b111,
3'b000,
3'b000
};
endpackage