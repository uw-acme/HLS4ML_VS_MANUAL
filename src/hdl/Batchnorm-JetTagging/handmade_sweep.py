acc = []
import os
import re
import numpy as np
from tensorflow.keras.models import load_model # type: ignore
import numpy as np
from sklearn.metrics import accuracy_score
model = load_model("python/model.h5")
y_test = np.load('python/y_test.npy')
layers = [64,32,32,5]
features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
weights = {}
biases = {}
# for layer in layers:
#     lay = model.get_layer(layer)
#     weights[layer], biases[layer] = lay.get_weights()

def test_score():
    res =  np.loadtxt(f"./reports/results.csv", delimiter=",")
    acc= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
    return acc
def file_to_array(file, length):
    f = open(file, 'r')
    buffer = np.zeros(length)
    i=0
    arr = []
    num = f.readline()
    while len(num):
         buffer[i]=float(num[:-1])
         i+=1
         if (i==length):
            i=0
            if (len(arr)):
                arr = np.vstack((arr, np.array(buffer)))
            else:
                arr = np.array(buffer)
         num = f.readline()
    f.close()
    return arr
def handmade_gen(acc):
    os.system("rm weights/dense_*_weights_biases_pkgs/*gen*")
    patt = r"[0-9]{1,2}"
    gen_weight(acc)
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark.sv')
    os.system(f"vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}")
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    results = extract_data(f"./reports/{acc[0]}_{acc[1]}_util.rpt", features)
    time = extract_time(f"./reports/{acc[0]}_{acc[1]}_timing.rpt")
    accuracy_score = test_score()
    with open("util.csv", "a") as f:
        f.write(f"{acc[0]}")
        for result in results:
            f.write(f", {result}")
        f.write(f", {time}")
        f.write(f", {accuracy_score}")
        f.write("\n")

    os.system(f'printf "Hand gen finished at %b with parameters {acc}with results:\n{features},Timing, Accuracy\n{results},{time},{acc}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')
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
def gen_weight(accuracy):
    head = f"{accuracy[0]}'b"
    Nfrac = accuracy[0] - accuracy[1]
    for ind in range(len(layers)):
        layer = layers[ind]
        ind = ind+1
        weights_file = f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_weights.txt"
        biases_file = f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_biases.txt"
        weight = file_to_array(weights_file, layer)
        bias = file_to_array(biases_file, layer)
        #with open(f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_{accuracy[0]}_{accuracy[1]}_test.sv", "w") as f:
        with open(f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_gen.sv", "w") as f:
            f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
            f.write(f"package dense_{ind}_gen;\n\n")
            f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")
            for i in range(len(weight)):
                f.write("{")
                num = dec_to_bin(weight[i][0]*(2**(Nfrac)), accuracy[0])
                f.write(f"{head}{num}")
                for j in range(1, len(weight[0])):
                    num = dec_to_bin(weight[i][j]*(2**(Nfrac)), accuracy[0])
                    f.write(f", {head}{num}")
                if (i!=len(weight)-1): 
                    f.write("},\n")
            f.write("}\n};\n")
            f.write(f"localparam logic signed [{accuracy[0]-1}:0] bias [{len(weight[0])}] = '"+"{\n")
            for i in range(0, len(bias)):
                num = dec_to_bin(bias[i]*(2**Nfrac), accuracy[0])
                f.write(f"{head}{num}")
                f.write(",\n" if i!=(len(bias)-1) else "\n};\nendpackage")
def dec_to_bin(number: int, bits=-1):
    neg=False
    if (number<0):
        number*=-1
        number-=1
        neg=True
    number=int(np.round(number, 0))
    if (number==0 and neg):
        return "1"*bits
    out=""
    if (bits>0 and number>2**(bits-1)):
        return "0" + "1"*(bits-1)
    elif (bits>0 and number<(-1)*2**(bits-1)):
        return "1" + "0"*(bits-1)
    
    while (number>0):
        res = number%2
        if (neg):
            res= 0 if (res==1) else 1
        out=f"{res}{out}"
        if (len(out)==(bits-1)):
            break
        number=int(number/2)
        
    if (neg):
        out=f"{1}{out}"
    else: out=f"{0}{out}"
    if (len(out)==0):
        out="0"
    while (len(out)<bits):
        out=f"{out[0]}{out}"
    return out


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
#gen_weight((4,2))
#print(file_to_array(f"weights/dense_1_weights_biases_pkgs/dense_1_weights.txt", 64))
for i in range(2,10):
    #((3*i-2,i))
    #print((3*i-2,i))
    handmade_gen((3*i-2,i))
    #acc.append(({3*i-2},{i}))