onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /Toptagging_top_tb/dut/toptag/clk
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense1_input_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense1_input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/DENSE1_INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense1_output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense1_output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/DENSE1_OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense1_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense2_input_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense2_input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/DENSE2_INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense2_output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense2_output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/DENSE2_OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/dense2_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/input_v
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_input_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/LSTM_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/NINT
add wave -noupdate /Toptagging_top_tb/dut/toptag/output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/relu_output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/reset
add wave -noupdate /Toptagging_top_tb/dut/toptag/sigmoid_input_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/sigmoid_input_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/SIGMOID_INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/sigmoid_output_data
add wave -noupdate /Toptagging_top_tb/dut/toptag/sigmoid_output_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/SIGMOID_OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/toptag/sigmoid_ready
add wave -noupdate /Toptagging_top_tb/dut/toptag/TIMESTEPS
add wave -noupdate /Toptagging_top_tb/dut/toptag/WIDTH
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {616410 ps} 0}
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
WaveRestoreZoom {487843 ps} {893275 ps}
