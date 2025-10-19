#!/usr/bin/bash
set -e

for arg in "$@"; do
    ./sim_hls.sh $arg
done
#conda activate hls4ml-env
scores=$(python acc_test.py $@) 
echo $scores >> scores.log
printf "Your children scored the following!!!\n $scores" | mail -s "Your Test Scores" ceravcal@uw.edu