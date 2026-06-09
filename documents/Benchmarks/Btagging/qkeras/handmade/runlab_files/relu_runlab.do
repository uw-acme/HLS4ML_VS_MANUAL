# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.





# ReLU layer

vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/verilog-modules/reluActivationLayer.sv"




# Top level module and testbenc

vlog "./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/relu_tb.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work relu_tb

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do ./HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/wave_files/relu_wave.do

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End