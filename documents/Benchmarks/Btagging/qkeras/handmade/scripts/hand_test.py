import sys
import numpy as np
from sklearn.metrics import accuracy_score
scores = []
y_test = np.load('y_test.npy')
for arg in sys.argv[1:]:
    res =  np.loadtxt(f"./model_5/{arg}/myproject_prj/solution1/impl/verilog/hls_results.csv", delimiter=",")
    res = res[1:]
    acc= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
    scores.append(acc)
for i, score in enumerate(scores):
    print(f"\n{sys.argv[i+1]} accuracy is: {score} \n")
# with open("test_results.log", "a") as f:
#     for i, score in enumerate(scores):
#         f.write(f"{sys.argv[i]} accuracy is {score} \n")

# print("Accuracy HLS: ", acc_hls, "\nAccuracy Handmade: ", acc_hand)
# print(hls_res[0:40].argmax(axis=1))
# print(y_test[0:40].argmax(axis=1))