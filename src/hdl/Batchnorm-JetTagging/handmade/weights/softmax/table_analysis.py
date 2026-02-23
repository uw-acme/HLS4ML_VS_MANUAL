import os
import numpy as np
os.chdir(r"src\hdl\Batchnorm-JetTagging\weights\softmax")
def char_to_int(char) -> int:
    try:
        return int(char)
    except:
        lookup = "ABCDEF"
        return 10+lookup.find(char.upper())
def hex_to_dec(number) -> int:
    output = 0
    current_n = len(number) - 1
    for char in number:
        output+= (char_to_int(char))*(16**current_n)
        current_n-=1
    return output
def dec_to_hex(number: int) -> str:
    string = ""
    while (number!=0):
        res = number%16
        if (res>=10):
            res="ABCDEF"[res-10]
        string=f"{res}{string}"
        number=int(number/16)
    return string

with open(r"softmax_stable_ap_fixed_ap_fixed_16_10_5_3_0_softmax_config16_s_exp_table1_rom.dat") as f:
    content = f.read()
    data = content.split("\n")
numbers = []
for line in data:
    res = hex_to_dec(line)
    numbers.append(res)
NFRAC=10
numbers=np.array(numbers)
import matplotlib.pyplot as plt
ind = np.linspace(-32,32, 1024)
fixed = np.concatenate((numbers[512:],numbers[:512]))
#fixed=fixed/2**NFRAC
plt.plot(fixed[500:517])
import scipy.optimize as opt
def fit_eq(x, a, b, c):
    y = a*np.exp(b*x-c)
    return y
test_arr = fixed[500:517]
test_ind = np.linspace(0,17,len(test_arr))
param, cov = opt.curve_fit(fit_eq, test_ind, test_arr)
print([int(np.round(x)) for x in param])
#plt.plot(np.exp(ind))
plt.show()



