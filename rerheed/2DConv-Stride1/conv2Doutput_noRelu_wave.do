onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /conv2Doutput_noRelu_testbench/clk
add wave -noupdate /conv2Doutput_noRelu_testbench/reset
add wave -noupdate /conv2Doutput_noRelu_testbench/inputPixel
add wave -noupdate /conv2Doutput_noRelu_testbench/biases
add wave -noupdate /conv2Doutput_noRelu_testbench/outputMatrix
add wave -noupdate /conv2Doutput_noRelu_testbench/complete
add wave -noupdate /conv2Doutput_noRelu_testbench/counter
add wave -noupdate /conv2Doutput_noRelu_testbench/paddedMatrix
add wave -noupdate /conv2Doutput_noRelu_testbench/sum
add wave -noupdate /conv2Doutput_noRelu_testbench/currentConvMatrix
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {933301283 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 50
configure wave -gridperiod 100
configure wave -griddelta 2
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {723275 ns} {2098775 ns}
