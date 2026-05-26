#!/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work
cd ../verilog-modules
rm -rf xsim.dir/ waiz_tb_sim.jou waiz_tb_sim.log sim.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Disk_Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights
xvlog --sv ../weights/dense_*_weights_biases_pkgs/dense_*_*.sv
# xvlog --sv ./weights/dense_1_weights_biases_pkgs/dense_1_*.sv
# xvlog --sv ./weights/dense_2_weights_biases_pkgs/dense_2_*.sv
# xvlog --sv ./weights/dense_3_weights_biases_pkgs/dense_3_*.sv
# xvlog --sv ./weights/dense_4_weights_biases_pkgs/dense_4_*.sv

# Dense layer
xvlog --sv ./*.sv ${1//' '/ -d }
# xvlog --sv ./verilog-modules/adderTree.sv ${1//' '/ -d }
# xvlog --sv ./verilog-modules/shift_add.sv ${1//' '/ -d }
# xvlog --sv ./verilog-modules/denseLayer.sv ${1//' '/ -d }

# # ReLU layer
# xvlog --sv ./verilog-modules/reluActivationLayer.sv ${1//' '/ -d }

# # Softmax layer
# xvlog --sv ./verilog-modules/softmaxLayer.sv ${1//' '/ -d }
# xvlog --sv ./verilog-modules/softmaxArgmaxLayer.sv ${1//' '/ -d }

# # Top level + testbench
# xvlog --sv ./verilog-modules/waiz_benchmark.sv ${1//' '/ -d }
# xvlog --sv ./verilog-modules/waiz_benchmark_put_tb.sv ${1//' '/ -d }



# Elaborate design
xelab waiz_benchmark_lat_tb ${1//' '/ -d } ${2//' '/ -generic_top } -s waiz_tb_sim --debug typical 

# Run simulation to completion (headless, no GUI waves)
xsim waiz_tb_sim -runall
