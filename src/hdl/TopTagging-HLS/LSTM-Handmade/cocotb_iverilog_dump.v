module cocotb_iverilog_dump();
initial begin
    string dumpfile_path;    if ($value$plusargs("dumpfile_path=%s", dumpfile_path)) begin
        $dumpfile(dumpfile_path);
    end else begin
        $dumpfile("/home/caleb/ACME/HLS4ML_VS_MANUAL/src/hdl/TopTagging-HLS/LSTM-Handmade/LSTM.fst");
    end
    $dumpvars(0, LSTM);
end
endmodule
