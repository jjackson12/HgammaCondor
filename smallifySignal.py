from sys import argv
from os import listdir
from os.path import isfile, join
from pprint import pprint
from ROOT import *
import re

inDirName = "/home/jjackson/CMSSW_8_0_21/src/WGamma/MC/Signal"
outDir = "smallified_signal"

gSystem.CompileMacro("smallify.C", "gOck")

chains = {}

inFiles = []

smallifiers = {}

for f in listdir(inDirName):
    inFile = join(inDirName, f)
    trimmedF = re.search(r'(.*)flatTuple_(.*).root',f).groups()[1]+".root"
    outputName = "%s/smallified_%s"%(outDir,trimmedF)
    print(outputName)
    chains[f] = TChain("ntuplizer/tree")
    chains[f].Add(inFile)
    gSystem.Load('smallify_C')
    #outputName = "smallified_%s"%str(inFile)
    smallifiers[f] = smallify(chains[f])
    #TODO: I think it's failing here
    smallifiers[f].Loop(outputName)
    
    outfile = TFile(outputName, "UPDATE")
    newHcounter = TH1I("hCounter", "Events counter", 5,0,5)
    inFile = TFile(inFile)
    newHcounter.SetBinContent(1, newHcounter.GetBinContent(1) + inFile.Get("ntuplizer/hCounter").GetBinContent(1))
    outfile.cd("ntuplizer")
    newHcounter.Write()
    outfile.Close()
