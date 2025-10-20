acc = []
import os
import re
import numpy as np
#from tensorflow.keras.models import load_model # type: ignore
import numpy as np
from sklearn.metrics import accuracy_score
#model = load_model("python/model.h5")
features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# for layer in layers:
#     lay = model.get_layer(layer)
#     weights[layer], biases[layer] = lay.get_weights()
def gen_test(accuracy):
    test = np.load("python/X_test.npy")
    test = test.flatten()
    with open("X_test_gen.txt", "w") as f:
        for num in test:
            num=num*(2**(accuracy[0]-accuracy[1]))
            f.write(f"{dec_to_bin(num, accuracy[0])}\n")
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
    """
    Runs a test with precision (WIDTH, NINT)
    """
    os.system("rm weights/dense_*_weights_biases_pkgs/*gen*")
    patt = r"[0-9]{1,2}"
    gen_weight(acc)
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark*.sv')

    os.system(f"vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}")
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    results = extract_data(f"./reports/{acc[0]}_{acc[1]}_util_fx.rpt", features)
    time = extract_time(f"./reports/{acc[0]}_{acc[1]}_timing_fx.rpt")
    #accuracy_score = test_score()
    with open("util.csv", "a") as f:
        f.write(f"{acc[0]}")
        for result in results:
            f.write(f", {result}")
        f.write(f", {time}")
        #f.write(f", {accuracy_score}")
        f.write("\n")

    os.system(f'printf "Hand gen finished at %b with parameters {acc}with results:\n{features},Timing\n{results},{time}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')
def extract_data(file, features):
    """Extracts the feature from a file using Vivado formatting\n
    Formatting Example: | Slice LUTs                 | 66386 |     0 |    433200 | 15.32 |"""
    
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r"\s*\|.*?\|.*?\|.*?\|.*?(\d+\.\d+)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
            #return m.group(1)  # third number
    return out
    # ind2 = (res[::-1]).find("|")
    # ind1 = (res[::-1]).find("|", ind2+1)
    # num = res[-ind1:-ind2-1]
    # print(num)
def extract_time(file):
    """
    Grabs the timing from the timing report
    """
    with open(file) as f:
        text = f.read()
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)
# def get_accuracy(tests):
#     accuracies = []
#     y_test = np.load('python/y_test.npy')
#     for acc in tests:
#         patt = r"[0-9]{1,2}"
#         os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark_tb.sv')
#         gen_test(acc)
#         gen_weight(acc)
#         os.system("bash sim.sh")
#         res =  np.loadtxt(f"./reports/gen_results.csv", delimiter=",")
#         acc_res= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
#         with open("hand_accuracy.csv", "a") as f:
#             f.write(f"{acc[0]}, {acc_res}\n")
#         os.system(f'printf "Acc test finished at %b with parameters {acc} with results: {acc_res}" "$(date)" | mail -s "Handmade acc" ceravcal@uw.edu')
#         accuracies.append(acc)
#     return accuracies



def accuracy_test(acc, y_test):
    """
    Runs an accuracy test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    y_test: the correct values for the inputs
    """
    # Regex pattern. Looks for 1 to 2 numbers, 0-9
    patt = r"[0-9]{1,2}"
    # Uses sed to find NFRAC = NUMBER and WIDTH = NUMBER and replace the numbers with new numbers
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" waiz_benchmark_tb.sv')

    # Generates the input files for testing and for weights
    gen_test(acc)
    gen_weight(acc)

    # Runs the simulator through a bash script
    os.system("bash sim.sh")

    # Grabs the output from the simulation and tests it
    res =  np.loadtxt(f"./reports/gen_results.csv", delimiter=",")
    acc_res= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))

    # Writes the results to a file
    with open("hand_accuracy.csv", "a") as f:
        f.write(f"{acc[0]}, {acc_res}\n")
    # Uses the Linux mail system to send the results to me
    os.system(f'printf "Acc test finished at %b with parameters {acc} with results: {acc_res}" "$(date)" | mail -s "Handmade acc" ceravcal@uw.edu')

# Generates a systemverilog package of weights of a proper accuracy from a file listing weights
# Inputs: 
# Accuracy: Tuple of acuracy (TOTAL_BITS, INTEGER_BITS)

def gen_weight(accuracy):
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
        weights_file = f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_weights.txt"
        biases_file = f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_biases.txt"

        # Converting the files to arrays
        weight = file_to_array(weights_file, layer)
        bias = file_to_array(biases_file, layer)

        with open(f"weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_gen.sv", "w") as f:
            # Writes the header to the file
            f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
            f.write(f"package dense_{ind}_gen;\n\n")
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

# Converts a number to a binary representation 
# Inputs:
# number: The number to convert to binary
# bits: number of bits of the output binary number. -1 for the smallest possible representation
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
# # pat = r"WNS\(ns\).*-?(\d*\.\d*)"
#get_accuracy([(3*i-2,i) for i in range(2,10)])

#handmade_gen((25,9))
#vals = ()
#y_test = np.load('python/y_test.npy')
for i in range(2,10):
    acc = (3*i-2,i)
    #print((3*i-2,i))
    handmade_gen(acc)
    #accuracy_test(acc

    #acc.append(({3*i-2},{i}))