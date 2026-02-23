#!/usr/bin/bash

python create_model.py Latency Vivado lat_test
bash test_models.sh lat_test
bash compile.sh lat_test
# timeout 1h python create_model.py Stable Vivado 16_6_soft_fix || printf "script softfix1 timeout at %b" "$(date)" | mail -s "Failed" ceravcal@uw.edu
# timeout 1h python create_model.py Stable Vitis 16_6_prj_soft_fix_25 || printf "script softfix2 timeout at %b" "$(date)" | mail -s "Failed" ceravcal@uw.edu
# timeout 30m python create_model.py Latency Vitis 16_6_prj_lat_25 || printf "script 3 timeout at %b" "$(date)" | mail -s "Failed" ceravcal@uw.edu