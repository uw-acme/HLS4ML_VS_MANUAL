onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tanh_tb/clk
add wave -noupdate /tanh_tb/CLOCK_PERIOD
add wave -noupdate /tanh_tb/input_data
add wave -noupdate /tanh_tb/input_ready
add wave -noupdate /tanh_tb/next_layer_ready
add wave -noupdate /tanh_tb/NFRAC
add wave -noupdate /tanh_tb/output_data
add wave -noupdate /tanh_tb/output_ready
add wave -noupdate /tanh_tb/ready
add wave -noupdate /tanh_tb/reset
add wave -noupdate /tanh_tb/SIZE
add wave -noupdate /tanh_tb/WIDTH
add wave -noupdate /tanh_tb/dut/bram
add wave -noupdate /tanh_tb/dut/BRAM_FILE
add wave -noupdate /tanh_tb/dut/clk
add wave -noupdate /tanh_tb/dut/counter
add wave -noupdate /tanh_tb/dut/cycle_length
add wave -noupdate /tanh_tb/dut/final_index
add wave -noupdate /tanh_tb/dut/index
add wave -noupdate /tanh_tb/dut/input_data
add wave -noupdate /tanh_tb/dut/input_data_abs
add wave -noupdate /tanh_tb/dut/input_ready
add wave -noupdate /tanh_tb/dut/LOOKUP_NFRAC
add wave -noupdate /tanh_tb/dut/LOOKUP_WIDTH
add wave -noupdate /tanh_tb/dut/MEM_NFRAC
add wave -noupdate /tanh_tb/dut/MEM_WIDTH
add wave -noupdate /tanh_tb/dut/next_layer_ready
add wave -noupdate /tanh_tb/dut/NFRAC
add wave -noupdate /tanh_tb/dut/output_data
add wave -noupdate /tanh_tb/dut/output_data_unsigned
add wave -noupdate /tanh_tb/dut/output_ready
add wave -noupdate /tanh_tb/dut/processing
add wave -noupdate /tanh_tb/dut/ready
add wave -noupdate /tanh_tb/dut/REMOVE_PIPELINES
add wave -noupdate /tanh_tb/dut/reset
add wave -noupdate /tanh_tb/dut/signed_count
add wave -noupdate /tanh_tb/dut/SIZE
add wave -noupdate /tanh_tb/dut/TABLE_SIZE
add wave -noupdate /tanh_tb/dut/WIDTH
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {38778694 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {232672166 ps}
