#!/bin/bash
for arg in "$@"; do
    #TARG="./model_5/$arg/myproject_prj/solution1/impl/verilog"
    vivado -mode batch -source hls_script.tcl -tclargs $arg
done
printf "Your Vivado compilation is ready" | mail -s "Compiled" ceravcal@uw.edu
