# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.


# Dense weights
# vlog +define+SA_DEPTH=3 +define+SA_FRAC=0 +define+PIPELINE_MULT=1 "./verilog-modules/pkg_sel.svh"
vlog +define+SA_DEPTH=3 +define+SA_FRAC=0 +define+PIPELINE_MULT=1 "./verilog-modules/pkg_sel.svh"

#vlog "../weights_n_tables/layer*pkg*.sv"
#vlog ../weights_n_tables/output_sigmoid*

vlog "../weights/weights_dense_*_weights_biases_pkgs/dense_*_pkg_*.sv"
vlog "../weights/weights_lstm1_weights_biases_pkgs/lstm1_pkg_*.sv"
vlog "../weights/tables/*.sv"

vlog "./verilog-modules/*.svh"
vlog "./verilog-modules/*.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.


vsim -voptargs="+acc" -t 1ps -lib work btag_top_tb -suppress 8607

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do "../wave_files/btag_hand_wave.do"

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End
