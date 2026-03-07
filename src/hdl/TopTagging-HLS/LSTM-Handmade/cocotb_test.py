import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge


INPUT_SIZE = 6
OUTPUT_SIZE = 20


@cocotb.test()
async def lstm_test(dut):

    # Start clock (10 time unit period)
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Reset
    dut.reset.value = 1
    dut.input_ready.value = 0

    for _ in range(2):
        await RisingEdge(dut.clk)

    dut.reset.value = 0

    # Set xt array to 1
    for i in range(INPUT_SIZE):
        dut.xt[i].value = 1

    dut.input_ready.value = 1

    # Run 300 cycles
    for _ in range(300):
        await RisingEdge(dut.clk)