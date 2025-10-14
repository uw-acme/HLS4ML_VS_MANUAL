#!/usr/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work

DEST=./python/model_5/$1/myproject_prj/solution1/impl/verilog
if [ ! -f "$DEST/X_test.txt" ]; then
    ln X_test.txt "$DEST/."
fi
if [ ! -f "$DEST/hls_tb_25.sv" ]; then
    cp hls_tb_25.sv $DEST
fi
cd $DEST
rm -rf xsim.dir/ waiz_tb_sim.jou waiz_tb_sim.log sim.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights

xvlog *.v
xvlog --sv hls_tb.sv

# Elaborate design
xelab hls_tb -s hls_tb_sim --debug typical

# Run simulation to completion (headless, no GUI waves)
xsim hls_tb_sim -runall
