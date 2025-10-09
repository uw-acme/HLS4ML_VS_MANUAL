acc = []
import os
import re



def handmade_gen(acc):
    patt = r"[0-9]{1,2}"
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark.sv')
    os.system(f"Vivado -mode batch -source Script.tcl -tclargs handmade_{acc[0]},{acc[0]-acc[1]}")
    os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    #os.system(f'printf "HLS4ML gen finished at %b with parameters {acc}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')

def extract_data(file, feature):
    "Extracts the feature from a file using Vivado formatting"
    "| Slice LUTs                 | 66386 |     0 |    433200 | 15.32 |"
    with open(file) as f:
        text = f.read()
    m = re.search(feature + r"\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*(\d+.\d+)", text, re.IGNORECASE)
    if m:
        return m.group(1)  # third number

    # ind2 = (res[::-1]).find("|")
    # ind1 = (res[::-1]).find("|", ind2+1)
    # num = res[-ind1:-ind2-1]
    # print(num)
#files = os.listdir("./python/reports/")
# for file in files:
#     if (".rpt" in file):
#         res= extract_data(os.path.join("./python/reports/", file), "Slice luts")
#         if res:
#             print(extract_data(os.path.join("./python/reports/", file), "Slice luts"))
for i in range(2,10):
    handmade_gen(({3*i-2},{i}))
    #acc.append(({3*i-2},{i}))