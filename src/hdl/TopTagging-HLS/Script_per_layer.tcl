# ====================================================================
# Per-module (per-layer) out-of-context synthesis for HLS4ML GRU model
# ====================================================================

# Path to the HLS-generated Verilog
set src_dir "./model_gru_hls/hls4ml_prj/myproject_prj/solution1/impl/verilog"

# Collect all Verilog source files
set v_files [glob -nocomplain $src_dir/*.v]

if {[llength $v_files] == 0} {
    puts "ERROR: No Verilog files found in $src_dir"
    exit 1
}

puts "Found [llength $v_files] Verilog files in $src_dir"

# Derive candidate top names from file basenames
#   e.g.  .../dense_latency_0_0_0_1.v  ->  dense_latency_0_0_0_1
set layer_tops {}
foreach f $v_files {
    set base [file rootname [file tail $f]]
    lappend layer_tops $base
}
# Deduplicate
set layer_tops [lsort -unique $layer_tops]

puts "Will attempt out-of-context synthesis for these modules:"
puts "  $layer_tops"

# Target part
set part_name "xc7vx690tffg1761-2"

# Make sure reports directory exists
file mkdir reports

# Loop over each module name and treat it as a top
foreach top $layer_tops {

    puts "================================================================="
    puts "== Synthesizing module: $top"
    puts "================================================================="

    # Clear any previous design from memory
    reset_design

    # Re-read all sources for this run
    read_verilog $v_files

    # Out-of-context synthesis (no IO/pin placement)
    catch {
        synth_design -top $top -part $part_name -mode out_of_context
    } result

    if {[string match "*ERROR:*" $result]} {
        puts "!! Synthesis failed for top '$top':"
        puts "   $result"
        # Skip utilization/report for this one
        continue
    }

    # Write utilization report for this module
    set rpt_name [format "reports/util_%s.rpt" $top]
    report_utilization -file $rpt_name

    # Optionally save a checkpoint per module (comment out if not needed)
    # set dcp_name [format "reports/%s_synth.dcp" $top]
    # write_checkpoint -force $dcp_name

    # Clean up between runs (optional, reset_design at top of loop already)
    # reset_design
}

puts "================================================================="
puts "All per-module synth runs attempted. Check 'reports/util_*.rpt'."
puts "================================================================="
