from cocotb_tools.runner import get_runner
from pathlib import Path
import os
from glob import glob

def test_lstm():

    verilog_sources = glob("*.sv")

    build_dir = "./"

    runner = get_runner("xsim")

    runner.build(
        sources=verilog_sources,
        hdl_toplevel="LSTM",
        waves=True,
        build_dir=build_dir,
        build_args=[
            "--trace",      # enable VCD tracing
            "--trace-structs"
        ],
    )

    runner.test(
        hdl_toplevel="LSTM",
        test_module="cocotb_test",
        waves=True
    )


if __name__ == "__main__":
    test_lstm()