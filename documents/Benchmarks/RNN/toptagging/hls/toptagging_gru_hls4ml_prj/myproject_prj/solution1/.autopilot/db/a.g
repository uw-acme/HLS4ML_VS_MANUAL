#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jiuyal2/HLS4ML_VS_MANUAL/documents/Benchmarks/RNN/toptagging/hls/toptagging_gru_hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
