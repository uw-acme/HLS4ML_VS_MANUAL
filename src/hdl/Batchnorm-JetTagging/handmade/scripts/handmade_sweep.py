acc = []
import os
import re
import numpy as np
#from tensorflow.keras.models import load_model # type: ignore
import sys
sys.path.insert(1,"/home/caleb/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/")
from helper_functions import *
import numpy as np
from sklearn.metrics import accuracy_score
y_test = np.load('y_test.npy')
#model = load_model("python/model.h5")
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# for layer in layers:
#     lay = model.get_layer(layer)
#     weights[layer], biases[layer] = lay.get_weights()
def gen_test(accuracy):
    test = np.load("X_test.npy")
    test = test.flatten()
    filename = f"X_test_{accuracy[0]}_{accuracy[1]}.txt"
    if (not os.path.isfile(filename)):
        with open(filename, "w") as f:
            for num in test:
                num=num*(2**(accuracy[0]-accuracy[1]))
                f.write(f"{dec_to_bin(num, accuracy[0])}\n")



def handmade_gen(acc, name, params, defs):
    """
    Runs a test with precision (WIDTH, NINT)
    """
    def add_to(name, feat):
        newline = f"\n{name}"
        while len(newline)<longest_feat:
            newline+=" "
        newline+=f": {feat}"
        return newline
    # os.system("rm ../weights/dense_*_weights_biases_pkgs/*gen*")
    # patt = r"[0-9]{1,2}"
    gen_weight(acc)
    params += f' NFRAC={acc[0]-acc[1]} WIDTH={acc[0]}'
    for i in range(1,5):
        defs+=f" DENSE_LAYER_{i}_PKG=dense_{i}_{acc[0]}_{acc[1]}"
    params = "{" + params + "}"
    defs = "{" + defs + "}"
    # os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" ../verilog-modules/waiz_benchmark*.sv')
    os.system(f'vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}_{name} "{defs}" "{params}"')
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    accuracy = accuracy_test(acc, y_test, name, defs, params)
    results = extract_data(f"../reports/{acc[0]}_{acc[1]}_{name}_util.rpt", features)
    time = extract_time(f"../reports/{acc[0]}_{acc[1]}_{name}_timing.rpt")
    #accuracy_score = test_score()
    if len(results)!=len(features):
        raise ValueError("Report files not as expected")
    if (not os.path.isfile(f"../Results/util_{name}.csv")):
        with open(f"../Results/util_{name}.csv", "x") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy\n")
    with open(f"../Results/util_{name}.csv", "a") as f:
        f.write(f"{acc[0]}")
        for result in results:
            f.write(f", {result}")
        f.write(f", {time}")
        f.write(f", {accuracy}")
        f.write("\n")
    output = ""
    lengths = [len(feat) for feat in features]
    longest_feat = np.max(lengths)
    
    
    for i in range(len(features)):
        output+=add_to(features[i], results[i])
    output+=add_to("Timing", time)
    output+=add_to("Accuracy", accuracy)

    # output += f"\nTiming: {time}"
    # output += f"\nAccuracy: {accuracy}"
    os.system(f'printf "{name} finished at %b with parameters {acc} with results: {output}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')


def accuracy_test(acc : tuple[int,int], y_test, name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs an accuracy test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    y_test: the correct values for the inputs
    """
    # Regex pattern. Looks for 1 to 2 numbers, 0-9
    # patt = r"[0-9]{1,2}"
    # Uses sed to find NFRAC = NUMBER and WIDTH = NUMBER and replace the numbers with new numbers
    # defs = f"WIDTH={acc[0]} NFRAC={acc[0]-acc[1]}"
    # os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" ../verilog-modules/waiz_benchmark_tb.sv')
    if (defs):
        defs = defs.replace("{", "")
        defs = defs.replace("}", "")
        defs = f" {defs}"
    else:
        defs = ""
        email=True
    if (not params or "WIDTH" not in params):
        if (not params):
            params = ""
        if ("WIDTH" not in params):
            params += f' NFRAC={acc[0]-acc[1]} WIDTH={acc[0]}'
    res_file = f"{name}_{acc[0]}_{acc[1]}_results.csv"

    defs += f' TESTFILE="../scripts/X_test_{acc[0]}_{acc[1]}.txt"'
    defs += f' RESULTSFILE="../reports/{res_file}"'
    if ("DENSE_LAYER_" not in defs):
        for i in range(1,5):
            defs+=f" DENSE_LAYER_{i}_PKG=dense_{i}_{acc[0]}_{acc[1]}"
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    gen_test(acc)
    gen_weight(acc)
    # Runs the simulator through a bash script
    os.system(f'bash sim.sh "{defs}" "{params}"')

    # Grabs the output from the simulation and tests it
    res =  np.loadtxt(f"../reports/{res_file}", delimiter=",")
    acc_res= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))

    # Writes the results to a file
    csv_name = f"../Results/{name}_acc.csv"
    if (not os.path.isfile(csv_name)):
        f = open(csv_name, "x")
        f.write("Width, Accuracy\n")
    else:
        f=open(csv_name, "a")
    f.write(f"\"{acc[0]}_{acc[1]}\", {acc_res}\n")   
    f.close()
    # Uses the Linux mail system to send the results to me
    if email:
        os.system(f'printf "Acc test for {name} finished at %b with parameters {acc} with results: {acc_res}" "$(date)" | mail -s "Handmade acc" ceravcal@uw.edu')
    return acc_res
def lat_test(acc : tuple[int,int], name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs a lat test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    """
    # Regex pattern. Looks for 1 to 2 numbers, 0-9
    # patt = r"[0-9]{1,2}"
    # Uses sed to find NFRAC = NUMBER and WIDTH = NUMBER and replace the numbers with new numbers
    # defs = f"WIDTH={acc[0]} NFRAC={acc[0]-acc[1]}"
    # os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" ../verilog-modules/waiz_benchmark_tb.sv')
    if (defs):
        defs = defs.replace("{", "")
        defs = defs.replace("}", "")
        defs = f" {defs}"
    else:
        defs = ""
        email=True
    if (not params or "WIDTH" not in params):
        if (not params):
            params = ""
        if ("WIDTH" not in params):
            params += f' NFRAC={acc[0]-acc[1]} WIDTH={acc[0]}'
    if ("DENSE_LAYER_" not in defs):
        for i in range(1,5):
            defs+=f" DENSE_LAYER_{i}_PKG=dense_{i}_{acc[0]}_{acc[1]}"
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    gen_weight(acc)
    # Runs the simulator through a bash script
    os.system(f'bash lat.sh "{defs}" "{params}"')
    with open("../Results/hand_lat.csv", "r") as f:
        cont = f.readlines()
        newest = cont[-1]
        lat = newest.split(", ")[1]
    # Uses the Linux mail system to send the results to me
    if email:
        os.system(f'printf "Acc test for {name} finished at %b with results: {lat}" "$(date)" | mail -s "Handmade acc" ceravcal@uw.edu')
    return lat
# Generates a systemverilog package of weights of a proper accuracy from a file listing weights
# Inputs: 
# Accuracy: Tuple of acuracy (TOTAL_BITS, INTEGER_BITS)



def add_csv_column(file, column):
    f = open(file, "r")
    cont = f.readlines()
    f.close()
    f = open(file, "w")
    for i in range(len(cont)):
        if (i>len(column)):
            return
        f.write(cont[i]+", " + column[i])
#files = os.listdir("./python/reports/")
# for file in files:
#     if (".rpt" in file):
#         res= extract_data(os.path.join("./python/reports/", file), "Slice luts")
#         if res:
#             print(extract_data(os.path.join("./python/reports/", file), "Slice luts"))
# # pat = r"WNS\(ns\).*-?(\d*\.\d*)"
#get_accuracy([(3*i-2,i) for i in range(2,10)])

#handmade_gen((25,9))
#vals = ()
# i = (w+2)/3
#accuracy_test((34,12), y_test)
patt = r"[0-9]{1,2}"
run_params = [1,3,7,9]
def bits_to_params(bits):
    val=(bits+2)/5.4
    SA=np.round(val,1)
    SA_INT = int(SA)
    SA_FRAC = int(np.round((SA-SA_INT)*10))
    return SA_INT+1, SA_FRAC
def adjust(bits):
    # patt = r"[0-9]{1,2}"
    SA_INT, SA_FRAC = bits_to_params(bits)
    # os.system(f'sed -i -E "s/SA_FRAC {patt}/SA_FRAC {SA_FRAC}/g; s/SA_DEPTH {patt}/SA_DEPTH {SA_INT}/g;" ../verilog-modules/pkg_sel.svh')
    return SA_INT, SA_FRAC

#os.environ['PATH'] = r"/tools/Xilinx/2025.1/Vivado/bin:" + os.environ['PATH']
#os.environ['FLEXLM_DIAGNOSTICS']="3"
# accuracy_test((16,6), y_test)
# adjust(16)
# handmade_gen((16,6), name)
# patt = r"[0-9]{1,2}"

for pipeline in [3]:
    # os.system(f'sed -i -E "s/localparam PIPELINING = {patt}/localparam PIPELINING = {pipeline}/g;" ../verilog-modules/waiz_benchmark.sv')
    pipe_out=0
    params= f'PIPELINING={pipeline} PIPE_OUT={pipe_out}'
    name = f"expPipeNegmax"
    for i in range(10,11):
        acc = (3*i-2,i)
        # acc_in = (2*i+4,6) if i > 6 else (3*i-2,i)
        # SA_INT, SA_FRAC = adjust(acc_in[0])
        SAD, SAFRAC = 0, 0#adjust(acc[0])
        defs = f' PIPELINE_MULT=0 SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
        # lat = lat_test(acc, name, defs, params)
        # lat = 24*[lat]
        # add_csv_column("../Results/util_expPipeNegmax.csv", lat)
        # defs = f'SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
        # # print((3*i-2,i))
        handmade_gen(acc, name, params, defs)
        # accuracy_test(acc, y_test, name, defs, params, email=True)
