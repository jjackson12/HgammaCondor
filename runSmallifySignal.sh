#!/bin/bash

for file in sigNtuples/*.root; do
  name=${file##*/}
  mkdir temp
  cp $file temp
  python runSmallify.py temp smallified_signal/smallified_$name
  rm -rf temp
done
