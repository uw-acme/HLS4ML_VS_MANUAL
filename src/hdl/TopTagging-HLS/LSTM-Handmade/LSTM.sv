module LSTM #( parameter
    WIDTH = 16,
    NINT = 6
)
(
    input logic [WIDTH-1:0] ct_1,
    input logic [WIDTH-1:0] ht_1,
    input logic [WIDTH-1:0] xt,
    output logic [WIDTH-1:0] ht,
    output logic [WIDTH-1:0] ct,
);

    // ft = sigmoid(Wfh*ht_1+Wfx*xt+bf) basically 2 dense layers, one could have all the bias while the other doesn't (maybe)

    // it = sigmoid(Wih*ht_1+Wix*xt+bi) 

    // c~t = tanh(Wch*ht_1+Wcx*xt+bc 

    // ct = ft*ct-1+it*c~t

    // ot = sigmoid(Woh*ht_1+Wox*xt+bo) 

    // ht = ot*tanh(ct)

    // Things that I need
    // Sigmoid
    // Elementwise multiplier/dense layer
    // Tanh 

endmodule