#!/bin/bash
# run_lat.sh -- latency simulation for one bit-width setup.
#
# What it does:
#   1. compiles the RTL, the weight packages and the latency testbench (lat_tb.sv)
#   2. feeds the design zeros after reset and counts clock cycles from the first accepted
#      input to the first final output
#   3. writes the number of cycles to results/<TAG>/latency.txt
#
# Usage:
#   ./run_lat.sh                                                    # the 8-bit design
#   TAG=16_6 BIT_WIDTH=16 NFRAC=9 NFRAC_FIRST=10 ./run_lat.sh       # another setup

# Stop the script as soon as any command fails.
set -e


# ---------------------------------------------------------------- settings
# "${NAME:-default}" means: use NAME if it was given on the command line, otherwise use the default.

TAG=${TAG:-8_2}                  # picks the weights_n_tables/<TAG> folder
BIT_WIDTH=${BIT_WIDTH:-8}        # testbench parameter bitWidth
NFRAC=${NFRAC:-5}                # testbench parameter NFRAC        (all layers after conv0)
NFRAC_FIRST=${NFRAC_FIRST:-7}    # testbench parameter NFRAC_first  (conv0 and the input pixels)

PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade}


# ---------------------------------------------------------------- folders and files
WEIGHTS_DIR=$PROJECT_DIR/weights_n_tables/$TAG
RTL_DIR=$PROJECT_DIR/verilog-modules
TESTBENCH=$PROJECT_DIR/scripts/lat_tb.sv

RESULT_DIR=$PROJECT_DIR/results/$TAG
RESULT_FILE=$RESULT_DIR/latency.txt

WORK_DIR=$PROJECT_DIR/xsim_work/${TAG}_lat   # compiled files and logs go here


# ---------------------------------------------------------------- step 1: check the inputs
echo "Step 1: checking the inputs for $TAG"

if [ ! -d "$WEIGHTS_DIR" ]; then
    echo "ERROR: no weight packages in $WEIGHTS_DIR (run gen_weights.py first)"
    exit 1
fi

mkdir -p "$RESULT_DIR" "$WORK_DIR"

# Delete any old result, so a run that fails cannot be mistaken for a good one.
rm -f "$RESULT_FILE"

# xvlog, xelab and xsim write their files into the current folder.
cd "$WORK_DIR"


# ---------------------------------------------------------------- step 2: compile
echo "Step 2: compiling"

# The weight packages come first because the modules import them.
# "> xvlog.log 2>&1" saves everything the tool prints into xvlog.log.
if ! xvlog -sv "$WEIGHTS_DIR"/*.sv "$RTL_DIR"/*.sv "$TESTBENCH" > xvlog.log 2>&1; then
    echo "ERROR: xvlog failed. Last lines of $WORK_DIR/xvlog.log:"
    tail -20 xvlog.log
    exit 1
fi

# Also look for error messages in the log, in case the tool still returned "success".
if grep -q "^ERROR" xvlog.log; then
    echo "ERROR: the compile reported errors:"
    grep "^ERROR" xvlog.log | head -10
    exit 1
fi


# ---------------------------------------------------------------- step 3: elaborate
echo "Step 3: elaborating (bitWidth=$BIT_WIDTH, NFRAC=$NFRAC, NFRAC_first=$NFRAC_FIRST)"

if ! xelab lat_tb -s lat_snap \
        -generic_top "bitWidth=$BIT_WIDTH" \
        -generic_top "NFRAC=$NFRAC" \
        -generic_top "NFRAC_first=$NFRAC_FIRST" > xelab.log 2>&1; then
    echo "ERROR: xelab failed. Last lines of $WORK_DIR/xelab.log:"
    tail -20 xelab.log
    exit 1
fi


# ---------------------------------------------------------------- step 4: simulate
echo "Step 4: simulating"

if ! xsim lat_snap -runall > xsim.log 2>&1; then
    echo "ERROR: xsim failed. Last lines of $WORK_DIR/xsim.log:"
    tail -20 xsim.log
    exit 1
fi


# ---------------------------------------------------------------- step 5: read the result
echo "Step 5: reading the result"

# The testbench prints "Latency = <N> cycles". If that line is missing, the design never
# produced an output.
if ! grep -q "^Latency" xsim.log; then
    echo "ERROR: the testbench did not report a latency (see $WORK_DIR/xsim.log)"
    grep "^ERROR" xsim.log || true      # "|| true" so that finding no ERROR line does not stop the script
    exit 1
fi

# "Latency = 16725 cycles"  ->  the third word is the number.
LATENCY_CYCLES=$(grep "^Latency" xsim.log | cut -d' ' -f3)

echo "$LATENCY_CYCLES" > "$RESULT_FILE"
echo "OK: latency = $LATENCY_CYCLES cycles -> $RESULT_FILE"