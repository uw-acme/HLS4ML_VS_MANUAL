open_vcd dump.vcd
log_vcd [get_objects -r -filter {type != parameter}]
run all
flush_vcd
close_vcd
quit