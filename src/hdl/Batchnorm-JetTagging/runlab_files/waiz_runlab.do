# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.


# Dense weights
vlog "./pkg_sel.svh"
vlog "./weights/dense_1_weights_biases_pkgs/dense_1_*.sv"
vlog "./weights/dense_2_weights_biases_pkgs/dense_2_*.sv"
vlog "./weights/dense_3_weights_biases_pkgs/dense_3_*.sv"
vlog "./weights/dense_4_weights_biases_pkgs/dense_4_*.sv"


# Dense layer

vlog "./verilog-modules/adderTree_p4.sv"
vlog "./verilog-modules/adderTree.sv"
vlog "./shift_add.sv"
vlog "./denseLayer.sv"


# ReLU layer

vlog "./verilog-modules/reluActivationLayer.sv"


# softmaxLayer
vlog "./softmaxLayer.sv"


# Top level module and testbench

vlog "./waiz_benchmark.sv"
vlog "./waiz_benchmark_tb.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.


vsim -voptargs="+acc" -t 1ps -lib work waiz_benchmark_tb

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do "./wave_files/waiz_wave.do"

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End