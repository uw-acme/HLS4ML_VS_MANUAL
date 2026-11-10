#!/bin/bash
# Vivado synthesis + implementation of the handmade design at one clock period (slow: use tmux).
# Writes reports/<TAG>_<CLOCK_PERIOD>ns_{util,timing}.rpt and prints the WNS (>= 0 means met).
#   ./run_synth.sh
#   CLOCK_PERIOD=8.5 ./run_synth.sh
#   TAG=16_6 BIT_WIDTH=16 NFRAC=9 NFRAC_FIRST=15 ./run_synth.sh
set -e

TAG=${TAG:-8_2}
CLOCK_PERIOD=${CLOCK_PERIOD:-10}
BIT_WIDTH=${BIT_WIDTH:-8}
NFRAC=${NFRAC:-5}
NFRAC_FIRST=${NFRAC_FIRST:-7}
PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade}

WEIGHTS_DIR=$PROJECT_DIR/weights_n_tables/$TAG
RTL_DIR=$PROJECT_DIR/verilog-modules
TCL_SCRIPT=$PROJECT_DIR/scripts/synth.tcl
REPORT_NAME=${TAG}_${CLOCK_PERIOD}ns
UTIL_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_util.rpt
TIMING_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_timing.rpt
WORK_DIR=$PROJECT_DIR/vivado_work/$REPORT_NAME

echo "Step 1: checking inputs for $REPORT_NAME"
if ! command -v vivado > /dev/null; then
    echo "ERROR: vivado is not on the PATH"
    exit 1
fi
if [ ! -d "$WEIGHTS_DIR" ]; then
    echo "ERROR: no weight packages in $WEIGHTS_DIR (run gen_weights.py first)"
    exit 1
fi
mkdir -p "$PROJECT_DIR/reports" "$WORK_DIR"
rm -f "$UTIL_REPORT" "$TIMING_REPORT"
cd "$WORK_DIR"

echo "Step 2: running Vivado at $CLOCK_PERIOD ns (bitWidth=$BIT_WIDTH, NFRAC=$NFRAC, NFRAC_first=$NFRAC_FIRST)"
if ! vivado -mode batch -nojournal -log vivado.log -source "$TCL_SCRIPT" \
        -tclargs "$WEIGHTS_DIR" "$RTL_DIR" "$BIT_WIDTH" "$NFRAC" "$NFRAC_FIRST" \
                 "$CLOCK_PERIOD" "$UTIL_REPORT" "$TIMING_REPORT" > /dev/null 2>&1; then
    echo "ERROR: Vivado failed. First errors in $WORK_DIR/vivado.log:"
    grep "^ERROR" vivado.log | head -10 || true
    exit 1
fi

echo "Step 3: reading the slack"
if [ ! -f "$UTIL_REPORT" ] || [ ! -f "$TIMING_REPORT" ]; then
    echo "ERROR: reports not written (see $WORK_DIR/vivado.log)"
    exit 1
fi

# line 2 after the "WNS(ns)" header (header, dashes, numbers); first number is the WNS
WNS=$(grep -m1 -A2 "WNS(ns)" "$TIMING_REPORT" | tail -1 | awk '{print $1}')
if [ -z "$WNS" ]; then
    echo "ERROR: no WNS in $TIMING_REPORT"
    exit 1
fi

if awk -v wns="$WNS" 'BEGIN { exit (wns >= 0) ? 0 : 1 }'; then
    echo "OK: timing met. WNS = $WNS ns at $CLOCK_PERIOD ns"
else
    echo "timing NOT met. WNS = $WNS ns at $CLOCK_PERIOD ns"
fi
