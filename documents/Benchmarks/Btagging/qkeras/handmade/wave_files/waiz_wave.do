onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /waiz_benchmark_tb/iteration_count
add wave -noupdate /waiz_benchmark_tb/WIDTH
add wave -noupdate /waiz_benchmark_tb/NFRAC
add wave -noupdate /waiz_benchmark_tb/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/OUTPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/clk
add wave -noupdate /waiz_benchmark_tb/reset
add wave -noupdate /waiz_benchmark_tb/input_data
add wave -noupdate /waiz_benchmark_tb/output_data
add wave -noupdate /waiz_benchmark_tb/input_ready
add wave -noupdate /waiz_benchmark_tb/output_ready
add wave -noupdate -divider Dense2
add wave -noupdate /waiz_benchmark_tb/dut/dense2_output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/mult
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/mult_temp
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/accumulator
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/processing
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/mult_out
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/mult_1
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/i
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/state
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/next_state
add wave -noupdate -divider sum_all_d1
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/sum_all/temp_output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/sum_all/input_data_transpose
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/sum_all/WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/sum_all/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/sum_all/OUTPUT_SIZE
add wave -noupdate -divider {Working tree}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/WEIGHT}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/DEPTH}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/BITS}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/NFRAC}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/data_in}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/data_out}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/data_in_ex}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/data_out_accum}
add wave -noupdate {/waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE_rows[14]/OUTPUT_SIZE_cols[6]/sa/data_out_tmp}
add wave -noupdate -divider Dense1
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/cycle_count
add wave -noupdate -expand /waiz_benchmark_tb/dut/denselayer1/mult
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult_temp
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/accumulator
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/processing
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult_out
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult_1
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/i
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/state
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/next_state
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/cycle_count
add wave -noupdate -divider Ot
add wave -noupdate /waiz_benchmark_tb/dut/input_data
add wave -noupdate /waiz_benchmark_tb/dut/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/result
add wave -noupdate /waiz_benchmark_tb/dut/dense1_output_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer1/output_data
add wave -noupdate /waiz_benchmark_tb/dut/dense2_input_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer2/output_data
add wave -noupdate /waiz_benchmark_tb/dut/dense3_input_data
add wave -noupdate /waiz_benchmark_tb/dut/dense3_output_data
add wave -noupdate /waiz_benchmark_tb/dut/relulayer3/out_buffer
add wave -noupdate /waiz_benchmark_tb/dut/dense4_input_data
add wave -noupdate /waiz_benchmark_tb/dut/dense4_output_data
add wave -noupdate /waiz_benchmark_tb/dut/softmax_output_data
add wave -noupdate -divider {New Divider}
add wave -noupdate /waiz_benchmark_tb/dut/softmax_output_real
add wave -noupdate -divider {New Divider}
add wave -noupdate /waiz_benchmark_tb/dut/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/output_ready
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_1
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_1
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_2
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_2
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_3
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_3
add wave -noupdate /waiz_benchmark_tb/dut/input_ready_4
add wave -noupdate /waiz_benchmark_tb/dut/output_ready_4
add wave -noupdate -divider Softmax
add wave -noupdate /waiz_benchmark_tb/dut/softmax/N
add wave -noupdate /waiz_benchmark_tb/dut/softmax/WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/NFRAC
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_NFRAC_EXP
add wave -noupdate /waiz_benchmark_tb/dut/softmax/MEM_NFRAC_INV
add wave -noupdate /waiz_benchmark_tb/dut/softmax/TABLE_WIDTH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/TABLE_NFRAC
add wave -noupdate /waiz_benchmark_tb/dut/softmax/EXP_TABLE_PATH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/INVERT_TABLE_PATH
add wave -noupdate /waiz_benchmark_tb/dut/softmax/dataIn
add wave -noupdate /waiz_benchmark_tb/dut/softmax/clk
add wave -noupdate /waiz_benchmark_tb/dut/softmax/reset
add wave -noupdate -radix hexadecimal -childformat {{{/waiz_benchmark_tb/dut/softmax/dataOut[4]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[3]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[2]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[1]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/dataOut[0]} -radix hexadecimal}} -subitemconfig {{/waiz_benchmark_tb/dut/softmax/dataOut[4]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[3]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[2]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[1]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/dataOut[0]} {-height 15 -radix hexadecimal}} /waiz_benchmark_tb/dut/softmax/dataOut
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/exp_table
add wave -noupdate -radix decimal -radixshowbase 0 /waiz_benchmark_tb/dut/softmax/invert_table
add wave -noupdate /waiz_benchmark_tb/dut/softmax/buffer
add wave -noupdate -radix hexadecimal -childformat {{{/waiz_benchmark_tb/dut/softmax/expResult[4]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[3]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[2]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[1]} -radix hexadecimal} {{/waiz_benchmark_tb/dut/softmax/expResult[0]} -radix hexadecimal}} -subitemconfig {{/waiz_benchmark_tb/dut/softmax/expResult[4]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[3]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[2]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[1]} {-height 15 -radix hexadecimal} {/waiz_benchmark_tb/dut/softmax/expResult[0]} {-height 15 -radix hexadecimal}} /waiz_benchmark_tb/dut/softmax/expResult
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/tempSum
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/expSum
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/lookupIndex
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/invertIndex
add wave -noupdate -radix hexadecimal /waiz_benchmark_tb/dut/softmax/invertVal
add wave -noupdate /waiz_benchmark_tb/x_test
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/input_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/output_data
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {573985 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 180
configure wave -valuecolwidth 40
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
WaveRestoreZoom {463671 ps} {1830344 ps}
