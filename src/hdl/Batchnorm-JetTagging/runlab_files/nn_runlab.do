# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.

# Dense Layer
vlog "./../One_Layer_NN/src_1layer/adderTree_p4.sv"
vlog "./../One_Layer_NN/src_1layer/adderTree.sv"
vlog "./../One_Layer_NN/src_1layer/shift_add.sv"
vlog "./../RNN/denseLayer.sv"

# ReLU layer
vlog "./../RNN/reluActivationLayer.sv"


vlog "./neural_net.sv"
vlog "./neural_net_tb.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work neural_net_tb

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do wave_files/nn_wave

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End
