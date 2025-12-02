# HLS4ML build script

# --- Read design files ---
# Read all generated Verilog files from the hls4ml project
read_verilog [glob ./model_gru_hls/hls4ml_prj/myproject_prj/solution1/impl/verilog/*.v]

# If you have an XDC constraints file next to the script, keep this:
# (otherwise update the path accordingly)
read_xdc ./const.xdc

# --- Set top module & part ---
# Change 'waiz_benchmark' to your actual top module name from the .v files
synth_design -top myproject -part xc7vx690tffg1761-2

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
report_utilization -file reports/util_no_relu.rpt
#report_timing_summary -file reports/timing_.rpt
#report_power -file reports/power_post_route_RELU.rpt

# --- Save design checkpoint for GUI inspection ---
write_checkpoint -force reports/impl_no_relu.dcp


# Read constraints file for timing analysis
read_xdc ./const.xdc
# --- Set top module ---
# These are the devices I usually use
# xc7k160tfbg484-3 is free, no license. Useful if you want to compile directly on your computer
# xc7vx690tffg1761-2 is virtex 7, needs license
synth_design -top waiz_benchmark -part xc7vx690tffg1761-2

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
# Different report options can be chosen. For basic resource viewing, the below one can be used
report_utilization -file reports/util_no_relu.rpt
#report_utilization -hierarchical -hierarchical_depth 1 -file reports/util_hier_SA4.rpt
#report_timing_summary -file reports/timing_.rpt
# RP is removed pipeiles using SA4 and rand 4/10
#report_power -file reports/power_post_route_RELU.rpt

# --- Save design checkpoint for GUI inspection ---
# If you want to view your project on your computer, download this onto your computer and open it in vivado
write_checkpoint -force reports/impl_no_relu.dcp