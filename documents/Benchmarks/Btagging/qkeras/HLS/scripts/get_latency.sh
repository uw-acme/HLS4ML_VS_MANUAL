#!/usr/bin/bash
set -e
# # Remove previous compilation results
# file delete -force xsim.dir
# file delete -force work
DEST=$1  

# if [ -f "$DEST/hls_tb*" ]; then
#     rm "$DEST/hls_tb*"
# fi

# if [[ "$1" == *vitis* || "$1" == *25* ]]; then
#     cp hls_tb_25.sv $DEST
# else 

rm -rf $DEST/hls_lat_tb_parallel_to_stream.sv

cp ../scripts/hls_lat_tb_parallel_to_stream.sv $DEST -f

#fi

cd $DEST

rm -rf xsim.dir/ *.jou *.log
# Compile all sources with SystemVerilog enabled
#xvlog --sv ./pkg_sel.svh
export PATH=/tools/Disk_Xilinx/2025.1/Vivado/bin:$PATH
# Dense weights

#xvlog ../../models/lstm_floating_point/LSTM_5_3_reuse10_bigboard_stream/hls4ml_prj/myproject_prj/solution1/syn/verilog/*.v
#xvlog --sv ../../models/lstm_floating_point/LSTM_5_3_reuse10_bigboard_stream/hls4ml_prj/myproject_prj/solution1/syn/verilog/*.sv
#xvlog ../../models/lstm_floating_point/LSTM_5_3_reuse10_bigboard_stream/hls4ml_prj/myproject_prj/solution1/syn/verilog/*.dat 
#xvlog ../scripts/hls_lat*.sv

xvlog *.v
xvlog --sv hls_lat*.sv
#xvlog ../../models/lstm_floating_point/LSTM_5_3_reuse10_bigboard_stream/hls4ml_prj/myproject_prj/solution1/syn/verilog/*.dat 
#xvlog ../scripts/hls_lat*.sv


# Elaborate design
xelab hls_top_tb -s hls_top_tb_sim --debug typical

# Run simulation to completion (headless, no GUI waves)
xsim hls_top_tb_sim -runall