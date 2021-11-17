#!/bin/bash

# check number of arguments
if [ $# -eq 1 ]; then
    ./a.out $1
elif [ $# -eq 2 ]; then
    # loop until 0 to $1
    for i in $(seq 1 $1); do
        echo $i
        ./a.out 1 &
        sleep $2
    done
    # infinite loop
    while true; do
        sleep 10
    done
else
    echo "Usage: ./allocate.sh <memory size in GB> <allocate 1GB per seconds>"
    exit 1
fi
