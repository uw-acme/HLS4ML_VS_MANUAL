# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.


# Dense weights

vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/weights/dense_1_weights_biases_pkgs/dense_1_*.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/weights/dense_2_weights_biases_pkgs/dense_2_*.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/weights/dense_3_weights_biases_pkgs/dense_3_*.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/weights/dense_4_weights_biases_pkgs/dense_4_*.sv"


# Dense layer

vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/One_Layer_NN/src_1layer/adderTree_p4.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/One_Layer_NN/src_1layer/adderTree.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/One_Layer_NN/src_1layer/shift_add.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/RNN/denseLayer.sv"


# ReLU layer

vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/RNN/reluActivationLayer.sv"


# softmaxLayer

vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/RNN/softmaxLayer.sv"


# Top level module and testbench

vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/waiz_benchmark.sv"
vlog "/home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/waiz_benchmark_tb.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work waiz_benchmark_tb

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do /home/donovan/code/research/hls4ml/HLS4ML_VS_MANUAL/src/hdl/waiz-benchmark/wave_files/waiz_wave.do

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End