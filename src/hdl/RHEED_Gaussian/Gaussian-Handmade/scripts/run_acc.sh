#!/bin/bash
# run_acc.sh -- accuracy simulation for one bit-width setup.
#
#   1. compiles the RTL, the weight packages and the testbench (acc_tb.sv)
#   2. streams every image in testing_data/<TAG>/image_list.txt through the design
#   3. writes one row of final outputs per image to results/<TAG>/rtl_final.csv
#
# Usage:
#   ./run_acc.sh                                                    # the 8-bit design
#   TAG=16_6 BIT_WIDTH=16 NFRAC=9 NFRAC_FIRST=10 ./run_acc.sh       # another setup

# Stop the script as soon as any command fails.
set -e


# Settings ------------
# "${NAME:-default}" means: use NAME if it was given on the command line, otherwise use the default.

TAG=${TAG:-8_2}                  # picks the weights_n_tables/<TAG> and testing_data/<TAG> folders
BIT_WIDTH=${BIT_WIDTH:-8}        # testbench parameter bitWidth
NFRAC=${NFRAC:-5}                # testbench parameter NFRAC        (all layers after conv0)
NFRAC_FIRST=${NFRAC_FIRST:-7}    # testbench parameter NFRAC_first  (conv0 and the input pixels)

PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade}


# Folders and files ------------
WEIGHTS_DIR=$PROJECT_DIR/weights_n_tables/$TAG
RTL_DIR=$PROJECT_DIR/verilog-modules
TESTBENCH=$PROJECT_DIR/scripts/acc_tb.sv
IMAGE_LIST=$PROJECT_DIR/testing_data/$TAG/image_list.txt

RESULT_DIR=$PROJECT_DIR/results/$TAG
RESULT_FILE=$RESULT_DIR/rtl_final.csv

WORK_DIR=$PROJECT_DIR/xsim_work/$TAG       # compiled files and logs go here


# Step 1: check the inputs ------------
echo "Step 1: checking the inputs for $TAG"

if [ ! -d "$WEIGHTS_DIR" ]; then
    echo "ERROR: no weight packages in $WEIGHTS_DIR (run gen_test_data.py first)"
    exit 1
fi

if [ ! -f "$IMAGE_LIST" ]; then
    echo "ERROR: no image list at $IMAGE_LIST (run gen_test_data.py first)"
    exit 1
fi

mkdir -p "$RESULT_DIR" "$WORK_DIR"

# Delete any old result, so a run that fails cannot be mistaken for a good one.
rm -f "$RESULT_FILE"

# xvlog, xelab and xsim write their files into the current folder.
cd "$WORK_DIR"


# Step 2: compile ------------
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


# Step 3: elaborate ------------
echo "Step 3: elaborating (bitWidth=$BIT_WIDTH, NFRAC=$NFRAC, NFRAC_first=$NFRAC_FIRST)"

if ! xelab acc_tb -s snap \
        -generic_top "bitWidth=$BIT_WIDTH" \
        -generic_top "NFRAC=$NFRAC" \
        -generic_top "NFRAC_first=$NFRAC_FIRST" > xelab.log 2>&1; then
    echo "ERROR: xelab failed. Last lines of $WORK_DIR/xelab.log:"
    tail -20 xelab.log
    exit 1
fi


# Step 4: simulate ------------
echo "Step 4: simulating"

if ! xsim snap -runall \
        -testplusarg "IMAGE_LIST=$IMAGE_LIST" \
        -testplusarg "OUT_DIR=$RESULT_DIR" > xsim.log 2>&1; then
    echo "ERROR: xsim failed. Last lines of $WORK_DIR/xsim.log:"
    tail -20 xsim.log
    exit 1
fi

# Show the testbench's own summary line (or its error message).
grep -E "^(Streamed|ERROR)" xsim.log || echo "(no summary line in xsim.log)"


# Step 5: check the result ------------
echo "Step 5: checking the result"

# The testbench ends quietly if the design stops producing outputs, so the exit
# status of xsim says nothing. Instead, check that every image got an output row.
if [ ! -f "$RESULT_FILE" ]; then
    echo "ERROR: $RESULT_FILE was not written (see $WORK_DIR/xsim.log)"
    exit 1
fi

NUM_IMAGES=$(wc -l < "$IMAGE_LIST")
NUM_ROWS=$(wc -l < "$RESULT_FILE")

if [ "$NUM_ROWS" -ne "$NUM_IMAGES" ]; then
    echo "ERROR: expected $NUM_IMAGES output rows but found $NUM_ROWS (see $WORK_DIR/xsim.log)"
    exit 1
fi

echo "OK: $NUM_ROWS images simulated -> $RESULT_FILE"
