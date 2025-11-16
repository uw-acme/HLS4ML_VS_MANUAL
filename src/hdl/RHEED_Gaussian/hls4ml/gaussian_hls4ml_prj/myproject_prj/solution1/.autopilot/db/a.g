#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/hls4ml/gaussian_hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
