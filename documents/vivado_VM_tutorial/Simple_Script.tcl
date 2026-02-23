# Minimal non-project flow synthesis script
file mkdir reports

# Read your synthesizable source(s)
read_verilog -sv ./compile_demo.sv

# Free, no license 
set PART xc7k160tfbg484-3

# Run synthesis (the -top MUST match your synthesizable module)
synth_design -top compile_demo -part $PART

# (Optional) basic impl to make timing/power reports more meaningful
opt_design
place_design
route_design

# Reports
report_utilization       -hierarchical -file reports/util_hier.rpt
report_timing_summary                      -file reports/timing_post_route.rpt
report_power                                -file reports/power_post_route.rpt

# Save checkpoint to inspect locally in the GUI if you want
write_checkpoint -force impl_final.dcp
