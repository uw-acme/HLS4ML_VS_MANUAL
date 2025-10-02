#!/bin/bash

# This file will run a testbench in headless mode. This is useful if you are printing to a file and don't
# need waveforms. Look at example_tb for an example that I use
# If this file isn't running, do chmod a+x <Filename> and it'll make the file executable

set -e

rm -rf xsim.dir/ waiz_tb_sim.jou waiz_tb_sim.log sim.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh

# Gets the program to use modern Xsim. It works much better
export PATH=/tools/Xilinx/2025.1/Vivado/bin:$PATH


# Since this is a shell script, glob is not needed
xvlog --sv *.sv

# Elaborate design
xelab benchmark_tb -s tb_sim --debug typical

# Run simulation to completion (headless, no GUI waves)
xsim tb_sim -runall
