from sys import argv
from os import listdir
from os.path import isfile, join
from ROOT import *

if len(argv) != 3:
  print "please supply two arguments to the macro: the input directory and the output filename"
  exit(1)

inDirName = argv[1]
outputName = argv[2]

chain = TChain("ntuplizer/tree")
inFiles = []
for f in listdir(inDirName):
  if isfile(join(inDirName, f)):
    inFiles.append(join(inDirName, f))
for inFile in inFiles:
  chain.Add(inFile)
#gSystem.CompileMacro("smallify.C", "gOck")
gSystem.Load('smallify_C')
smallifier = smallify(chain)
smallifier.Loop(outputName)

newHcounter = TH1I("hCounter", "Events counter", 5,0,5)
for inFileName in inFiles:
  inFile = TFile(inFileName)
  #print "file %s has %i events." % ( inFileName, inFile.Get("ntuplizer/hCounter").GetBinContent(1) )
  newHcounter.SetBinContent(1, newHcounter.GetBinContent(1) + inFile.Get("ntuplizer/hCounter").GetBinContent(1))
  #print " -->total = %i" % newHcounter.GetBinContent(1)
outfile = TFile(outputName, "UPDATE")
outfile.cd("ntuplizer")
newHcounter.Write()
outfile.Close()
