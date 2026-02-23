#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/caleb/HLS4ML_VS_MANUAL/src/hdl/Quickdraw/keras/model_1/hls4ml_lstm/name/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
