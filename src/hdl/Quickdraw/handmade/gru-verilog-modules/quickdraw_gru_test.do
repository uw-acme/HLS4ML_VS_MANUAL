# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.
vlog "./adderTree.sv"
vlog "./shift_add.sv"
vlog "./denseLayer.sv"
vlog "./weights/*.sv"
vlog "./gru_cell.sv"
vlog "./sigmoid.sv"
vlog "./tanh.sv"
vlog "./gru.sv"
# TODO: add softmax and relu

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work quickdraw_gru_tb_simple

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do quickdraw_gru_wave.do

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End
