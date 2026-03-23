onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /Toptagging_tb/dut/WIDTH
add wave -noupdate /Toptagging_tb/dut/NINT
add wave -noupdate /Toptagging_tb/dut/INPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/OUTPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/TIMESTEPS
add wave -noupdate /Toptagging_tb/dut/LSTM_INPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/LSTM_OUTPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/DENSE1_INPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/DENSE1_OUTPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/DENSE2_INPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/DENSE2_OUTPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/SIGMOID_INPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/SIGMOID_OUTPUT_SIZE
add wave -noupdate /Toptagging_tb/dut/clk
add wave -noupdate /Toptagging_tb/dut/reset
add wave -noupdate /Toptagging_tb/dut/input_ready
add wave -noupdate /Toptagging_tb/dut/output_ready
add wave -noupdate /Toptagging_tb/dut/input_v
add wave -noupdate /Toptagging_tb/dut/output_data
add wave -noupdate /Toptagging_tb/dut/ht
add wave -noupdate /Toptagging_tb/dut/LSTM_input_data
add wave -noupdate /Toptagging_tb/dut/LSTM_output_data
add wave -noupdate /Toptagging_tb/dut/dense1_input_ready
add wave -noupdate /Toptagging_tb/dut/dense1_output_ready
add wave -noupdate /Toptagging_tb/dut/dense1_input_data
add wave -noupdate /Toptagging_tb/dut/dense1_output_data
add wave -noupdate /Toptagging_tb/dut/dense2_input_ready
add wave -noupdate /Toptagging_tb/dut/dense2_output_ready
add wave -noupdate /Toptagging_tb/dut/dense2_input_data
add wave -noupdate /Toptagging_tb/dut/dense2_output_data
add wave -noupdate /Toptagging_tb/dut/relu_output_data
add wave -noupdate /Toptagging_tb/dut/sigmoid_input_data
add wave -noupdate /Toptagging_tb/dut/sigmoid_output_data
add wave -noupdate /Toptagging_tb/dut/sigmoid_input_ready
add wave -noupdate /Toptagging_tb/dut/sigmoid_output_ready
add wave -noupdate /Toptagging_tb/dut/LSTM_input_ready
add wave -noupdate /Toptagging_tb/dut/LSTM_output_ready
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {11927 ps} 0}
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
WaveRestoreZoom {0 ps} {64384 ps}
