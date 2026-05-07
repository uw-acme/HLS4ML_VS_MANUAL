// Shift-Add module depth
// The higher the depth, the more complex the weights that will be transformed
// into shift-adds (done in LUTs) rather than DSPs
`ifndef SA_DEPTH
    `define SA_DEPTH 4
`endif
`ifndef SA_FRAC
    `define SA_FRAC 2
`endif