#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/GRU/model_1/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}