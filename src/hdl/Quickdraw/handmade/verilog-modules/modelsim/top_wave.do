onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/WIDTH
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/NFRAC
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/MEM_WIDTH
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/MEM_NFRAC
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/LOOKUP_WIDTH
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/LOOKUP_NFRAC
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/TABLE_SIZE_POW
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/BRAM_FILE
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/cycle_length
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/TABLE_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/clk
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/reset
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/next_layer_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/input_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/processing
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/counter
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/signed_count
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/bram
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/index
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/final_index
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/output_data_unsigned
add wave -noupdate /Toptagging_top_tb/dut/toptag/lstm_layer/sigmac/input_data_abs
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {74629 ps} 0}
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
WaveRestoreZoom {55003 ps} {148215 ps}
