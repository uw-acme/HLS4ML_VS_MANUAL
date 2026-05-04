#!/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work
#cd ./verilog-modules
rm -rf xsim.dir/ btag_tb_sim.jou btag_tb_sim.log sim.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Disk_Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights
xvlog --sv ../weights/weights_lstm1_weights_biases_pkgs/lstm1_*_*.sv
xvlog --sv ../weights/tables/*.sv
xvlog --sv ../weights/weights_dense_*_weights_biases_pkgs/dense_*_pkg_*.sv
# xvlog --sv ../weights/dense_*_weights_biases_pkgs/dense_*_*.sv
# xvlog --sv ./weights/dense_1_weights_biases_pkgs/dense_1_*.sv
# xvlog --sv ./weights/dense_2_weights_biases_pkgs/dense_2_*.sv
# xvlog --sv ./weights/dense_3_weights_biases_pkgs/dense_3_*.sv
# xvlog --sv ./weights/dense_4_weights_biases_pkgs/dense_4_*.sv

# Dense layer
#xvlog --sv ./*.sv 
xvlog --sv ./verilog-modules/*.sv 
#${1//' '/ -d }
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
xelab btag_benchmark_tb -s btag_tb_sim --debug typical 
#${1//' '/ -d } ${2//' '/ -generic_top }

# Run simulation to completion (headless, no GUI waves)
xsim btag_tb_sim -runall

mail -s "xsim finished" ljdono@uw.edu <<< \
        "xsim finished running handmade btag_benchmark should have generated handmade data file into report"