#!/bin/bash
# Latency and initiation interval (cycles) of the handmade design.
#   ./run_lat.sh
#   TAG=16_6 BIT_WIDTH=16 NFRAC=9 NFRAC_FIRST=15 ./run_lat.sh
set -e

TAG=${TAG:-8_2}
BIT_WIDTH=${BIT_WIDTH:-8}
NFRAC=${NFRAC:-5}
NFRAC_FIRST=${NFRAC_FIRST:-7}
PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade}

WEIGHTS_DIR=$PROJECT_DIR/weights_n_tables/$TAG
RTL_DIR=$PROJECT_DIR/verilog-modules
TESTBENCH=$PROJECT_DIR/scripts/lat_tb.sv
RESULT_DIR=$PROJECT_DIR/results/$TAG
WORK_DIR=$PROJECT_DIR/xsim_work/${TAG}_lat

echo "Step 1: checking inputs for $TAG"
if [ ! -d "$WEIGHTS_DIR" ]; then
    echo "ERROR: no weight packages in $WEIGHTS_DIR (run gen_weights.py first)"
    exit 1
fi
mkdir -p "$RESULT_DIR" "$WORK_DIR"
rm -f "$RESULT_DIR/latency.txt" "$RESULT_DIR/interval.txt"
cd "$WORK_DIR"

echo "Step 2: compiling"
if ! xvlog -sv "$WEIGHTS_DIR"/*.sv "$RTL_DIR"/*.sv "$TESTBENCH" > xvlog.log 2>&1; then
    echo "ERROR: xvlog failed:"
    tail -20 xvlog.log
    exit 1
fi
if grep -q "^ERROR" xvlog.log; then
    grep "^ERROR" xvlog.log | head -10
    exit 1
fi

echo "Step 3: elaborating"
if ! xelab lat_tb -s lat_snap \
        -generic_top "bitWidth=$BIT_WIDTH" \
        -generic_top "NFRAC=$NFRAC" \
        -generic_top "NFRAC_first=$NFRAC_FIRST" > xelab.log 2>&1; then
    echo "ERROR: xelab failed:"
    tail -20 xelab.log
    exit 1
fi

echo "Step 4: simulating"
if ! xsim lat_snap -runall > xsim.log 2>&1; then
    echo "ERROR: xsim failed:"
    tail -20 xsim.log
    exit 1
fi

echo "Step 5: reading the result"
if ! grep -q "^Latency" xsim.log || ! grep -q "^Interval" xsim.log; then
    echo "ERROR: no latency/interval reported (see $WORK_DIR/xsim.log)"
    grep "^ERROR" xsim.log || true
    exit 1
fi

# "Latency = 16725 cycles" -> third word
LATENCY=$(grep "^Latency" xsim.log | cut -d' ' -f3)
INTERVAL=$(grep "^Interval" xsim.log | cut -d' ' -f3)
echo "$LATENCY" > "$RESULT_DIR/latency.txt"
echo "$INTERVAL" > "$RESULT_DIR/interval.txt"
echo "OK: latency = $LATENCY cycles, interval = $INTERVAL cycles"
