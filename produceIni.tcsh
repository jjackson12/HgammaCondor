#!/usr/bin/env tcsh

set eraList = ("B" "C" "D" "E" "F")
cd /uscms_data/d3/jjackso3/workspace/CMSSW_9_4_0/src/WgammaCondor 
#cmsenv	
set outFile = "singlePhoton_Jul18.ini"
rm $outFile
touch $outFile
echo "[dirs]" >> $outFile
foreach era ($eraList)
  #echo "$era"

  set num = "`eosls store/user/jjackson/SinglePhoton/Wgamma94XTuples_Jul17_2017$era`"
  set fullPath = "/store/user/jjackson/SinglePhoton/Wgamma94XTuples_Jul17_2017$era/${num}/0000/"
  echo "SinglePhoton2017$era       :       $fullPath" >> $outFile
end

#set numB="`eosls /store/user/cgodfrey/JetHT/crab_JetHT__Run2016B-03Feb2017_ver2-v2__MINIAOD`"
#set fullpathB="/store/user/cgodfrey/JetHT/crab_JetHT__Run2016B-03Feb2017_ver2-v2__MINIAOD/${numB}/0000/"
#xrdfs root://cmseos.fnal.gov ls $fullpathB > 2016data_names/Run2016B_Data.txt

