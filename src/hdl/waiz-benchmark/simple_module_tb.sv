module simple_module_tb;
    // Testbench signals
    logic a;
    logic b;
    logic y;

    // Instantiate the module under test (MUT)
    simple_module dut (
        .a(a),
        .b(b),
        .y(y)
    );

    // Test procedure
    initial begin
        // Test case 1
        a = 0; b = 0;
        #10;
        $display("Test case 1: a=0, b=0, y=%0d", y);

        // Test case 2
        a = 0; b = 1;
        #10;
        $display("Test case 2: a=0, b=1, y=%0d", y);

        // Test case 3
        a = 1; b = 0;
        #10;
        $display("Test case 3: a=1, b=0, y=%0d", y);

        // Test case 4
        a = 1; b = 1;
        #10;
        $display("Test case 4: a=1, b=1, y=%0d", y);

        // Finish simulation
        $stop;
    end
endmodule
