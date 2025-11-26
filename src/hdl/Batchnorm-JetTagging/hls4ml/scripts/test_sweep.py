import os
args = ""
for i in range(2,10):
    acc = (3*i-2,i)
    #print((3*i-2,i))
    args = args + f"hls_{acc[0]}_{acc[1]} "
os.system(f"bash compile.sh {args}")
