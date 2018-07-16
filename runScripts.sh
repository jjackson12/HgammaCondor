#!/bin/bash

for script in ./*.jdl; do
    eval echo "running $script"
    eval "condor_submit $script "
done
