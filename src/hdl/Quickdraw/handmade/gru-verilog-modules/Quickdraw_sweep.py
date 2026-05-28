
acc = [20, 10] # width, nfrac
import os
import re
import numpy as np
from tensorflow.keras.models import load_model # type: ignore
import sys
currentdir = os.getcwd()
ind = currentdir.find("HLS4ML_VS_MANUAL")
root_folder = currentdir[0:ind+len("HLS4ML_VS_MANUAL")]
path = os.path.join(root_folder, "src/hdl/Batchnorm-JetTagging")
sys.path.insert(1,path)

# import helper_functions
# sys.path.insert(1,"/home/caleb/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/")
from helper_functions import *
import numpy as np
from sklearn.metrics import accuracy_score

features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]

# Things to change
def return_packages(acc):
    return f" RESET_GATE_PKG=reset_gate_{acc[0]}_{acc[1]} UPDATE_GATE_PKG=update_gate_{acc[0]}_{acc[1]} CANDIDATE_W_PKG=candidate_gate_W_{acc[0]}_{acc[1]} CANDIDATE_U_PKG=candidate_gate_U_{acc[0]}_{acc[1]}\
 DENSE1_WEIGHTS=dense_0_{acc[0]}_{acc[1]} DENSE2_WEIGHTS=dense_1_0_{acc[0]}_{acc[1]} DENSE3_WEIGHTS=dense_2_0_{acc[0]}_{acc[1]}"

weights_dir = "weights_n_tables"
y_test = np.load('./testing_data/y_test.npy')
model = load_model("../../keras/gru/QuickdrawEH.h5")
results_folder = "results"
testing_folder = "testing_data"
reports_folder = "reports"
def get_widths(acc):
    return f' NINT={acc[0]-acc[1]} WIDTH={acc[0]}'
def gen_test(accuracy):
    test = np.load("./testing_data/X_test.npy", allow_pickle=True)
    test = test.flatten()
    # print(test[0].shape)
    filename = f"testing_data/X_test_{accuracy[0]}_{accuracy[1]}.txt"
    # # if (not os.path.isfile(filename)):
    with open(filename, "w") as f:
        for num in test:
            if (isinstance(num, int)):
                num=num*(2**(accuracy[0]-accuracy[1]))
                print(num)
                f.write(f"{dec_to_bin(num,accuracy[0])}\n")
            else:
                for num2 in num.flatten():
                    
                    num2=num2*(2**(accuracy[0]-accuracy[1]))
                    # print(num)
                    f.write(f"{dec_to_bin(num2,accuracy[0])}\n")



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
    gen_weight(acc, model, weights_dir)
    params += get_widths(acc)
    # for i in range(1,5):
    #     defs+=f" DENSE_LAYER_{i}_PKG=dense_{i}_{acc[0]}_{acc[1]}"
    defs+=return_packages(acc) 
    params = "{" + params + "}"
    defs = "{" + defs + "}"
    # os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" ../verilog-modules/waiz_benchmark*.sv')
    if (not os.path.isfile(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_util.rpt")):
        os.system(f'vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}_{name} "{defs}" "{params}"')
    #os.system(f'printf "Handmade gen finished at %b with {acc[0]},{acc[0]-acc[1]}" "$(date)" | mail -s "{acc[0]},{acc[0]-acc[1]}" ceravcal@uw.edu')
    accuracy = accuracy_test(acc, y_test, name, defs, params)
    # accuracy = -1
    results = extract_data(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_util.rpt", features)
    time = extract_time(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_timing.rpt")
    #accuracy_score = test_score()
    if len(results)!=len(features):
        raise ValueError("Report files not as expected")
    if (not os.path.isfile(f"{results_folder}/util_{name}.csv")):
        with open(f"{results_folder}/util_{name}.csv", "w") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy\n")
    with open(f"{results_folder}/util_{name}.csv", "a") as f:
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
    # output+=add_to("Total Latency", 141*(10-float(time)))

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
            params += get_widths(acc)
    res_file = f"{name}_{acc[0]}_{acc[1]}_results.csv"

    defs += f' TESTFILE="{testing_folder}/X_test_{acc[0]}_{acc[1]}.txt"'
    defs += f' RESULTSFILE="{reports_folder}/{res_file}"'
    if ("WEIGHTS" not in defs):
        defs+= return_packages(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    gen_test(acc)
    gen_weight(acc, model, weights_dir)
    # Runs the simulator through a bash script
    os.system(f'bash sim.sh "{defs}" "{params}"')

    # Grabs the output from the simulation and tests it
    res =  np.loadtxt(f"{reports_folder}/{res_file}", delimiter=",")
    res = res.reshape(-1, 1)
    acc_res= accuracy_score((y_test[0:len(res)]), np.round(res))

    # Writes the results to a file
    csv_name = f"{results_folder}/{name}_acc.csv"
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
            params += get_widths(acc)
    if ("WEIGHTS" not in defs):
        defs+= return_packages(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    # Generates the input files for testing and for weights
    gen_weight(acc, model, weights_dir)
    # Runs the simulator through a bash script
    os.system(f'bash lat.sh "{defs}" "{params}"')
    with open(f"{results_folder}/hand_lat.csv", "r") as f:
        cont = f.readlines()
        newest = cont[-1]
        lat = newest.split(", ")[2]
        ii = newest.split(", ")[1]
    # Uses the Linux mail system to send the results to me
    if email:
        os.system(f'printf "Lat test for {name} finished at %b with results: {ii}, {lat}" "$(date)" | mail -s "Handmade lat" ceravcal@uw.edu')
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

# for pipeline in [3]:
    # os.system(f'sed -i -E "s/localparam PIPELINING = {patt}/localparam PIPELINING = {pipeline}/g;" ../verilog-modules/waiz_benchmark.sv')
    # pipe_out=0
    # params= f'PIPELINING={pipeline} PIPE_OUT={pipe_out}'
    # name = f"expPipeNegmax"
# gen_test((16,6))
try:
    name = "initial"
    params = ""
    defs = ""
    handmade_gen(acc, name, params, defs)
except:
    os.system(f'printf "{name} sythesis failed" "$(date)" | mail -s "Handmade Failure" ceravcal@uw.edu')