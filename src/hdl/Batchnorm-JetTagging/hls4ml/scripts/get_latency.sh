#!/usr/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work
DEST=$1
if [ -f "$DEST/hls_tb*" ]; then
    rm "$DEST/hls_tb*"
fi

# if [[ "$1" == *vitis* || "$1" == *25* ]]; then
#     cp hls_tb_25.sv $DEST
# else 
cp hls_lat_tb.sv $DEST
#fi
cd $DEST

rm -rf xsim.dir/ *.jou *.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Disk_Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights

xvlog *.v
xvlog --sv hls_lat*.sv

# Elaborate design
xelab hls_lat_tb -s hls_tb_sim --debug typical

# Run simulation to completion (headless, no GUI waves)
xsim hls_tb_sim -runall