#!/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work
rm -rf xsim.dir/ waiz_tb_sim.jou waiz_tb_sim.log sim.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights
xvlog --sv ./weights/dense_1_weights_biases_pkgs/dense_1_*.sv
xvlog --sv ./weights/dense_2_weights_biases_pkgs/dense_2_*.sv
xvlog --sv ./weights/dense_3_weights_biases_pkgs/dense_3_*.sv
xvlog --sv ./weights/dense_4_weights_biases_pkgs/dense_4_*.sv

# Dense layer
xvlog --sv ./verilog-modules/adderTree_p4.sv
xvlog --sv ./verilog-modules/adderTree.sv
xvlog --sv ./shift_add.sv
xvlog --sv ./denseLayer.sv

# ReLU layer
xvlog --sv ./verilog-modules/reluActivationLayer.sv

# Softmax layer
xvlog --sv ./softmaxLayer.sv

# Top level + testbench
xvlog --sv ./waiz_benchmark.sv
xvlog --sv ./waiz_benchmark_tb.sv

# Elaborate design
xelab waiz_benchmark_tb -s waiz_tb_sim --debug typical

# Run simulation to completion (headless, no GUI waves)
xsim waiz_tb_sim -runall
