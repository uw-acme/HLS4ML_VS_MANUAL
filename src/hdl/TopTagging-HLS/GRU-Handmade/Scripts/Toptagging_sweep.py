## Double hash-tag comments are Leo's temporary changes for pipe cleaning
acc = []
import os
import re
import numpy as np
from tensorflow.keras.models import load_model # type: ignore
import sys
currentdir = os.getcwd()
ind = currentdir.find ("HLS4ML_VS_MANUAL")
root_folder = currentdir[0:ind+len("HLS4ML_VS_MANUAL")]
path = os.path.join(root_folder, "src/hdl/Batchnorm-JetTagging")
sys.path.insert(1,path)

# import helper_functions
# sys.path.insert(1,"/home/caleb/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/")
# from helper_functions import *
import numpy as np
from sklearn.metrics import accuracy_score
y_test = np.load('../../y_test.npy')
model = load_model("../../model_gru.h5")
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# for layer in layers:
#     lay = model.get_layer(layer)
#     weights[layer], biases[layer] = lay.get_weights()
def gen_test(accuracy):
    test = np.load("../../x_test.npy")
    test = test.flatten()
    filename = f"../testing_data/X_test_{accuracy[0]}_{accuracy[1]}.txt"
    if (not os.path.isfile(filename)):
        with open(filename, "w") as f:
            for num in test:
                num=num*(2**(accuracy[0]-accuracy[1]))
                f.write(f"{dec_to_bin(num, accuracy[0])}\n")

# Helper function for per-bitwidth defines
def handmade_defs(acc):
    w, i = acc
    return (
        f" RESET_GATE_PKG=reset_gate_{w}_{i}"
        f" UPDATE_GATE_PKG=update_gate_{w}_{i}"
        f" CANDIDATE_W_PKG=candidate_gate_W_{w}_{i}"
        f" CANDIDATE_U_PKG=candidate_gate_U_{w}_{i}"
        f" DENSE1_WEIGHTS=layer3_0_{w}_{i}"
        f" DENSE2_WEIGHTS=output_sigmoid_0_{w}_{i} "
    )


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
    ## gen_weight(acc, model, "../weights_n_tables")
    params += f' NINT={acc[1]} WIDTH={acc[0]}'
    # for i in range(1,5):
    #     defs+=f" DENSE_LAYER_{i}_PKG=dense_{i}_{acc[0]}_{acc[1]}"
    # The actual layers, selected without the package select
    defs += handmade_defs(acc)
    params = "{" + params + "}"
    defs = "{" + defs + "}"
    # os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" ../verilog-modules/waiz_benchmark*.sv')
    if (not os.path.isfile(f"../reports/{acc[0]}_{acc[1]}_{name}_util.rpt")):
        os.system(f'vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}_{name} "{defs}" "{params}"')
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ltxie27@uw.edu')
    accuracy = accuracy_test(acc, y_test, name, defs, params)
    # accuracy = -1.0 ## Placeholder so CSV write still works
    results = extract_data(f"../reports/{acc[0]}_{acc[1]}_{name}_util.rpt", features)
    time = extract_time(f"../reports/{acc[0]}_{acc[1]}_{name}_timing.rpt")
    #accuracy_score = test_score()
    if len(results)!=len(features):
        raise ValueError("Report files not as expected")
    if (not os.path.isfile(f"../Results/util_{name}.csv")):
        with open(f"../Results/util_{name}.csv", "w") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy\n")
    with open(f"../Results/util_{name}.csv", "a") as f:
        f.write(f"{acc[0]}")
        for result in results:
            f.write(f", {result}")
        f.write(f", {time}")
        f.write(f", {accuracy}")
        # f.write(f", {141*(10-int(time))}")
        f.write("\n")
    output = "\n"
    lengths = [len(feat) for feat in features]
    longest_feat = np.max(lengths)
    
    
    for i in range(len(features)):
        output+=add_to(features[i], results[i])
    output+=add_to("Timing", time)
    output+=add_to("Accuracy", accuracy)
    output+=add_to("Total Latency", 141*(10-float(time)))

    # output += f"\nTiming: {time}"
    # output += f"\nAccuracy: {accuracy}"
    os.system(f'printf "{name} finished at %b with parameters {acc} with results: {output}" "$(date)" | mail -s "Handmade made" ltxie27@uw.edu')


def accuracy_test(acc : tuple[int,int], y_test, name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs an accuracy test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    y_test: the correct values for the inputs
    """
    # Regex pattern. Looks for 1 to 2 numbers, 0-9
    # patt = r"[0-9]{1,2}"
    # Uses sed to find NFRAC = NUMBER and WIDTH = NUMBER and replace the numbers with new numbers
    # defs = f"WIDTH={acc[0]} NINT={acc[1]}"
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
            params += f' NINT={acc[1]} WIDTH={acc[0]}'
    res_file = f"{name}_{acc[0]}_{acc[1]}_results.csv"

    defs += f' TESTFILE="../testing_data/X_test_{acc[0]}_{acc[1]}.txt"'
    defs += f' RESULTSFILE="../reports/{res_file}"'
    if "RESET_GATE_PKG" not in defs:
        defs += handmade_defs(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    gen_test(acc)
    ## gen_weight(acc, model, "../weights_n_tables")
    # Runs the simulator through a bash script
    os.system(f'bash sim.sh "{defs}" "{params}"')

    # Grabs the output from the simulation and tests it
    res =  np.loadtxt(f"../reports/{res_file}", delimiter=",")
    res = res.reshape(-1, 1)
    acc_res= accuracy_score((y_test[0:len(res)]), np.round(res))

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
        os.system(f'printf "Acc test for {name} finished at %b with parameters {acc} with results: {acc_res}" "$(date)" | mail -s "Handmade acc" ltxie27@uw.edu')
    return acc_res

def lat_test(acc : tuple[int,int], name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs a lat test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    """
    # Regex pattern. Looks for 1 to 2 numbers, 0-9
    # patt = r"[0-9]{1,2}"
    # Uses sed to find NFRAC = NUMBER and WIDTH = NUMBER and replace the numbers with new numbers
    # defs = f"WIDTH={acc[0]} NINT={acc[1]}"
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
            params += f' NINT={acc[1]} WIDTH={acc[0]}'
    if "RESET_GATE_PKG" not in defs:
        defs += handmade_defs(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    ## gen_weight(acc, model, "../weights_n_tables")
    # Runs the simulator through a bash script
    os.system(f'bash lat.sh "{defs}" "{params}"')
    with open("../Results/hand_lat.csv", "r") as f:
        cont = f.readlines()
        newest = cont[-1]
        lat = newest.split(", ")[2]
        ii = newest.split(", ")[1]
    # Uses the Linux mail system to send the results to me
    if email:
        os.system(f'printf "Lat test for {name} finished at %b with results: {ii}, {lat}" "$(date)" | mail -s "Handmade lat" ltxie27@uw.edu')
    return ii, lat
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


#########################################################################
#########################################################################
#########################################################################
import pandas as pd
from sklearn.metrics import accuracy_score
def dec_to_bin(number : int | float, bits=-1):
    """
    Converts a decimal number to a str binary representation
    
    :param number: Number to convert into binary
    :type number: int | float
    :param bits: Bitwidth of output number. If negative, uses the minimum amount
    """
    # Determines if a number is negative
    neg=False
    if (number<0):
        number*=-1
        number-=1
        neg=True
    
    # Rounds number to nearest int
    number=int(np.round(number, 0))
    out=""

    # Return maximum positive or negative number if the input cannot be represented by the bitwidth
    if (bits>0 and number>2**(bits-1)):
        return "0" + "1"*(bits-1)
    elif (bits>0 and number<(-1)*2**(bits-1)):
        return "1" + "0"*(bits-1)
    
    # Do typical conversion of decimal to binary number
    while (number>0):
        res = number%2
        if (neg):
            res= 0 if (res==1) else 1
        out=f"{res}{out}"
        if (len(out)==(bits-1)):
            break
        number=int(number/2)
        
    # Add signed bit
    if (neg):
        out=f"{1}{out}"
    else: out=f"{0}{out}"

    # If the number was 0
    if (len(out)==0):
        out="0"

    # Sign extension
    while (len(out)<bits):
        out=f"{out[0]}{out}"

    return out

def extract_data(file : str, features : list[str]):
    """
    Extracts the feature from a file using Vivado formatting
    
    :param file: Path to vivado file to extract data from
    :param features: Names of features to gather data for. Case insensitive
    """
    
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r"\s*\|.*?\|.*?\|.*?\|.*?(\d+\.\d+)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
    return out
def extract_time(file : str):
    """
    Extract timing data from file

    :param file: 
    """
    with open(file) as f:
        text = f.read()

    # Pattern. ap_clk is the name of the clock
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)
# def gen_test(accuracy : tuple[int,int], test):
#     test_l = test.flatten()
#     with open("X_test_gen.txt", "w") as f:
#         for num in test_l:
#             num=num*(2**(int(accuracy[0])-int(accuracy[1])))
#             f.write(f"{dec_to_bin(num, accuracy[0])}\n")
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
def dump_weights(model, output):
    for layer in model.layers:
        np.savetxt(f"{layer.name}_weights.txt", layer.get_weights()[0])
        np.savetxt(f"{layer.name}_biases.txt", layer.get_weights()[1])

def gen_weight_txt(accuracy, weights_file, biases_file, output):
    """
    Generate weight and bias packages from text files
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    # The start of each number
    head = f"{accuracy[0]}'b"

    Nfrac = accuracy[0] - accuracy[1]

    # The amount of weights for each layer
    layers = [64,32,32,5]
    for ind in range(len(layers)):
        layer = layers[ind]
        # The folder structure uses 1 based indexing
        ind = ind+1

        # Where the source weights and biases are
        # weights_file = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_weights.txt"
        # biases_file = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_biases.txt"

        # Converting the files to arrays
        weight = file_to_array(weights_file, layer)
        bias = file_to_array(biases_file, layer)

        # Output file name
        filename = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_{accuracy[0]}_{accuracy[1]}.sv"
        if (not os.path.isfile(filename)):
            with open(filename, "w") as f:
                # Writes the header to the file
                f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
                f.write(f"package dense_{ind}_{accuracy[0]}_{accuracy[1]};\n\n")
                f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")

                # Writes the main body of the function
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

def gen_weight(accuracy, model, target_dir="./"):
    """
    Generate weight and bias packages from keras model
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    width, nint = accuracy
    Nfrac = width - nint
    head = f"{width}'b"
    os.makedirs(target_dir, exist_ok=True)

    def write_pkg(package_name, weight, bias, filename):
        weight = np.asarray(weight)
        bias = np.asarray(bias)

        if weight.ndim != 2:
            raise ValueError(f"{package_name}: expected 2D weights, got {weight.shape}")
        if bias.ndim != 1:
            raise ValueError(f"{package_name}: expected 1D bias, got {bias.shape}")
        if weight.shape[1] != bias.shape[0]:
            raise ValueError(
                f"{package_name}: weights output dim {weight.shape[1]} "
                f"does not match bias dim {bias.shape[0]}"
            )

        with open(filename, "w") as f:
            f.write(f"//Width: {width}\n//Int: {nint}\n")
            f.write(f"package {package_name};\n\n")
            f.write(f"localparam logic signed [{width-1}:0] weights [{weight.shape[0]}][{weight.shape[1]}] = '" + "{\n")

            for row in range(weight.shape[0]):
                f.write("{")
                num = dec_to_bin(weight[row][0]*(2**Nfrac), width)
                f.write(f"{head}{num}")
                for col in range(1, weight.shape[1]):
                    num = dec_to_bin(weight[row][col]*(2**Nfrac), width)
                    f.write(f", {head}{num}")
                f.write("},\n" if row != weight.shape[0]-1 else "}\n")

            f.write("};\n")
            f.write(f"localparam logic signed [{width-1}:0] bias [{bias.shape[0]}] = '"+"{\n")
            for idx in range(bias.shape[0]):
                num = dec_to_bin(bias[idx]*(2**Nfrac), width)
                f.write(f"{head}{num}")
                f.write(",\n" if idx != bias.shape[0]-1 else "\n")
            f.write("};\nendpackage")

    def write_gru_pkgs(layer):
        W, U, B = layer.get_weights()
        units = layer.units

        if B.shape != (2, 3*units):
            raise ValueError(
                f"{layer.name}: expected reset_after=True GRU bias shape "
                f"(2, {3*units}), got {B.shape}"
            )

        # Keras GRU gate order is [z update, r reset, h candidate].
        W_z = W[:, :units]
        W_r = W[:, units:2*units]
        W_h = W[:, 2*units:]
        U_z = U[:, :units]
        U_r = U[:, units:2*units]
        U_h = U[:, 2*units:]

        B_in_z = B[0, :units]
        B_in_r = B[0, units:2*units]
        B_in_h = B[0, 2*units:]
        B_rec_z = B[1, :units]
        B_rec_r = B[1, units:2*units]
        B_rec_h = B[1, 2*units:]

        gru_packages = [
            (f"reset_gate_{width}_{nint}", np.concatenate((W_r, U_r), axis=0), B_in_r + B_rec_r),
            (f"update_gate_{width}_{nint}", np.concatenate((W_z, U_z), axis=0), B_in_z + B_rec_z),
            (f"candidate_gate_W_{width}_{nint}", W_h, B_in_h),
            (f"candidate_gate_U_{width}_{nint}", U_h, B_rec_h),
        ]

        for package_name, weight, bias in gru_packages:
            filename = os.path.join(target_dir, f"{package_name}.sv")
            write_pkg(package_name, weight, bias, filename)

    for layer in model.layers:
        contents = layer.get_weights()
        if not contents:
            continue

        if layer.__class__.__name__ == 'GRU':
            write_gru_pkgs(layer)
            continue

        # contents = np.concatenate((contents, np.zeros(len(contents[1]))), axis=1)
        weights = []
        biases = []
        for cont in contents:
            try:
                len(cont[0])
                weights.append(cont)
            except:
                biases.append(cont)
        if (len(weights)!=len(biases)):
            print(len(weights), len(biases))
            biases.append(np.zeros_like(biases[0]))
        for i in range(len(weights)):
            name = layer.name
            package_name = f"{name}_{i}_{width}_{nint}"
            filename = os.path.join(target_dir, f"{name}_pkg_{width}_{nint}_{i}.sv")
            write_pkg(package_name, weights[i], biases[i], filename)

# for pipeline in [3]:
    # os.system(f'sed -i -E "s/localparam PIPELINING = {patt}/localparam PIPELINING = {pipeline}/g;" ../verilog-modules/waiz_benchmark.sv')
    # pipe_out=0
    # params= f'PIPELINING={pipeline} PIPE_OUT={pipe_out}'
    # name = f"expPipeNegmax"
# name = "Toptag_reduced_cycles"
# for i in range(2,14):
#     acc = (3*i-2,i)
#     # acc_in = (2*i+4,6) if i > 6 else (3*i-2,i)
#     # SA_INT, SA_FRAC = adjust(acc_in[0])
#     SAD, SAFRAC = adjust(acc[0])
#     params = ""
#     defs = f' SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
#     # lat = lat_test(acc, name, defs, params)
#     # lat = 24*[lat]
#     # add_csv_column("../Results/util_expPipeNegmax.csv", lat)
#     # defs = f'SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
#     # # print((3*i-2,i))
#     handmade_gen(acc, name, params, defs)
#         # accuracy_test(acc, y_test, name, defs, params, email=True)
name = "Toptag_gru_16_6_gruCellDBG_3"
i = 6
acc = (3*i-2, i)            # (16, 6)
SAD, SAFRAC = adjust(acc[0])
params = ""
defs = f' SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
handmade_gen(acc, name, params, defs)
