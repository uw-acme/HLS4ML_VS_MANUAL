# Running non-project mode

# -------- Read all SystemVerilog sources (adjust glob/path as needed) ---------
set verilog_dir "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/hls4ml/gaussian_new_hls4ml_prj/myproject_prj/solution1/impl/verilog"

# Read all package files first (must be visible before anything imports them)
# set pkg_files [glob -directory $verilog_dir *_pkg_*.sv]
# read_verilog -sv $pkg_files

# Then read everything else
set module_files [glob -directory $verilog_dir *.v]
# set module_files [lsearch -all -inline -not $module_files *_pkg_*.sv]
read_verilog -v $module_files
# ------------------------------------------------------------------------------

# Set your target part (pick one matching your board)
set_part xcku035-fbva676-2-e

# put xdc file in the same directory as this script
set xdc_file "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/reports/timing_only.xdc"
read_xdc $xdc_file

# Elaborate only first, to catch hookup/syntax errors fast
synth_design -top myproject -mode out_of_context -rtl
# check for errors in the log here, then re-run full synthesis:

synth_design -top myproject -mode out_of_context

# Implementation flow 
opt_design
place_design
route_design


# Utilization report
set reports_dir "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/reports/hls4ml_reports_new/"
file mkdir $reports_dir
report_utilization -hierarchical -hierarchical_depth 1 -file [file join $reports_dir "gaussian_hls4ml_util.rpt"]

# Optional: timing summary too
report_timing_summary -file [file join $reports_dir "gaussian_hsl4ml_timing.rpt"]