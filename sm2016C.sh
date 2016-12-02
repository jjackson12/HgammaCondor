#!/bin/bash
source /cvmfs/cms.cern.ch/cmsset_default.sh
cd /home/hakala/cmssw/CMSSW_8_0_20/src/EXOVVNtuplizerRunII/Ntuplizer
eval `scramv1 runtime -sh`
cd /home/hakala/condorSub
python runSmallify.py Nov21_2016C_${1} Hgamma_Nov21_2016C_${1}.root
