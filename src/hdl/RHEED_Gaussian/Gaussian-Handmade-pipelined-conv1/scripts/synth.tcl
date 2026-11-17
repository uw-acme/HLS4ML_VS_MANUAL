# Vivado synthesis of handmade design for one clock period.
# Called by run_synth.sh:
# vivado -mode batch -source synth.tcl -tclargs <weights_dir> <rtl_dir> <width> <nfrac> <nfrac_first> \
#                                                  <period_ns> <util_report> <timing_report>

lassign $argv weights_dir rtl_dir width nfrac nfrac_first period util_report timing_report

# Weight packages read first since the modules import them.
read_verilog -sv [glob -directory $weights_dir *.sv]
read_verilog -sv [glob -directory $rtl_dir *.sv]

set_part xcku035-fbva676-2-e

# Bit widths given here so the RTL files don't have to be edited for each width.
synth_design -top rheedGaussianWrapper -mode out_of_context -include_dirs $rtl_dir \
    -generic bitWidth=$width -generic NFRAC=$nfrac -generic NFRAC_first=$nfrac_first

# Clock constraint has to comes after synth_design
create_clock -name clk -period $period [get_ports clk]

opt_design
place_design
route_design

report_utilization -hierarchical -hierarchical_depth 1 -file $util_report
report_timing_summary -file $timing_report

