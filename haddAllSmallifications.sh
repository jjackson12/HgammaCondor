#!/bin/bash
if [ "$1" == "MC" ]; then
  for j in $(for i in `ls -1vrt c*jdl | grep -v 2016`; do cat $i | grep Executable | sed 's/Executable = sm//g' | sed 's/.sh//g'; done); do echo --------; echo "command: "; echo -n "hadd -f 2016${j}.root  ";  ls -1v | grep  $j | grep Nov21 | xargs ; echo ---------; hadd -f 2016${j}.root `ls -1v | grep  $j | grep Nov21 | xargs` ; done
elif [ "$1" == "data" ]; then 
  for j in $(for i in `ls -1vrt c*jdl | grep 2016`; do cat $i | grep Executable | sed 's/Executable = sm//g' | sed 's/.sh//g'; done); do echo --------; echo "command: "; echo -n "hadd -f 2016${j}.root  ";  ls -1v | grep  $j | grep Nov21 | xargs ; echo ---------; hadd -f ${j}.root `ls -1v | grep  $j | grep Nov21 | grep root | xargs` ; done
fi
