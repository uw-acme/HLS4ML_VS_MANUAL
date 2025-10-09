acc = []
import os
import re

features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]

def handmade_gen(acc):
    patt = r"[0-9]{1,2}"
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark.sv')
    os.system(f"vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[0]-acc[1]}")
    
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    results = extract_data(f"./reports/{acc[0]}_{acc[0]-acc[1]}_util.rpt", features)
    time = extract_time(f"./reports/{acc[0]}_{acc[0]-acc[1]}_timing.rpt")
    with open("util.csv", "a") as f:
        f.write(acc[0])
        for result in results:
            f.write(f", {result}")
        f.write(f", {time}")
        f.write("\n")

    os.system(f'printf "Hand gen finished at %b with parameters {acc}with results:\n{features},Timing\n{results}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')


def extract_data(file, features):
    "Extracts the feature from a file using Vivado formatting"
    "| Slice LUTs                 | 66386 |     0 |    433200 | 15.32 |"
    
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r"\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*(\d+.\d+)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
            #return m.group(1)  # third number
    return out
    # ind2 = (res[::-1]).find("|")
    # ind1 = (res[::-1]).find("|", ind2+1)
    # num = res[-ind1:-ind2-1]
    # print(num)
def extract_time(file):
    with open(file) as f:
        text = f.read()
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)
#files = os.listdir("./python/reports/")
# for file in files:
#     if (".rpt" in file):
#         res= extract_data(os.path.join("./python/reports/", file), "Slice luts")
#         if res:
#             print(extract_data(os.path.join("./python/reports/", file), "Slice luts"))
# print(extract_time("./python/reports/fast_build_test_timing.rpt"))
# # pat = r"WNS\(ns\).*-?(\d*\.\d*)"
# features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# print(extract_data("./python/reports/fast_build_test_util.rpt", features))
for i in range(2,10):
    #((3*i-2,i))
    #print((3*i-2,i))
    handmade_gen((3*i-2,i))
    #acc.append(({3*i-2},{i}))