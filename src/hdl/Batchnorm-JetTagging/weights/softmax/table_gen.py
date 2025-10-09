import numpy as np
# Python 3.6+
from pathlib import Path
import os.path as p
from sys import argv
script_path = Path(__file__).resolve()      # full file path (resolves symlinks)
script_dir  = script_path.parent            # directory containing the script

#argv. 1: equation, 2: N_frac lookup
lookup_width = 10
def dec_to_bin(number: int, bits=-1):
    number=int(np.round(number, 0))
    neg=False
    out=""
    if (number<0):
        number*=-1
        number-=1
        neg=True
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
def table_gen(eq, width_lookup, nfrac_lookup, width, nfrac, signed, name):
    MIN=-2**(width_lookup-1-nfrac_lookup)
    MAX=2**(width_lookup-1-nfrac_lookup)-2**(-nfrac_lookup)
    length = 2**width_lookup
    ind=np.linspace(MIN, MAX, length)
    arr = eq(ind)
    split = 2**(width_lookup-1)
    arr=np.concatenate((arr[split:],arr[0:split]))
    sig_int = 1 if signed else 0
    max_val=(2**(width-sig_int)-1)/(2**nfrac)
    with open(f"{p.join(script_dir, name)}.dat", "w") as f: # {name}_table_{width}_{nfrac}_{width_lookup}_{nfrac_lookup}
        for elem in arr:
            elem = min(elem, max_val)
            item = dec_to_bin(int(elem*(2**nfrac)), width+1-sig_int)
            f.write(item[1-sig_int:])
            f.write("\n")
def inv(x):
        arr = []
        for elem in x:
            elem = 1.0/elem if elem!=0 else 9999
            arr.append(elem)
        return np.array(arr)

eq = inv if (argv[1].lower()=="inv") else np.exp
n_int_min = argv[2]
n_frac_lookup=6
table_gen(eq, lookup_width, )
