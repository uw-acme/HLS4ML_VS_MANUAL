# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.


# Dense weights
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/pkg_sel.svh"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/weights/dense_1_weights_biases_pkgs/dense_1_*.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/weights/dense_2_weights_biases_pkgs/dense_2_*.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/weights/dense_3_weights_biases_pkgs/dense_3_*.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/weights/dense_4_weights_biases_pkgs/dense_4_*.sv"


# Dense layer

vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/verilog-modules/adderTree_p4.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/verilog-modules/adderTree.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/shift_add.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/denseLayer.sv"


# ReLU layer

vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/verilog-modules/reluActivationLayer.sv"


# softmaxLayer
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/verilog-modules/softmaxLayer.sv"


# Top level module and testbench

vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/waiz_benchmark.sv"
vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/waiz_benchmark_tb.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work waiz_benchmark_tb

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do ./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/wave_files/waiz_wave.do

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End