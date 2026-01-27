import re
import numpy as np
def extract_time(file):
    with open(file) as f:
        text = f.read()
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)
def extract_data(file, features):
    "Extracts the feature from a file using Vivado formatting"
    "| Slice LUTs                 | 66386 |     0 |    433200 | 15.32 |"
    
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r".*?(-?\d{1,2}\.\d*)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
            #return m.group(1)  # third number
    return out
features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# f = open("util_hls.csv")
# cont = f.read()
# f.close()
# cont = cont.split("\n") 
accuracies = {}
with open("accuracies.csv") as f:
    lines = f.readlines()
    for line in lines:
        line=line.split(", ")
        accuracies[f"{line[0]}"] = line[1]
for i in range(2,10):
    acc = (3*i-2,i)
    file = f"reports/hls_{acc[0]}_{acc[1]}_util.rpt"
    res = extract_data(file, features)
    file = f"reports/hls_{acc[0]}_{acc[1]}_timing.rpt"
    time = extract_time(file)
    accuracy = accuracies[str(acc[0])]
    f = open("util_hls.csv", "a")
    f.write(f"{acc[0]}, ")
    f.writelines(f"{result}, " for result in  res)
    f.write(f"{time}, {accuracy}")
    f.close()