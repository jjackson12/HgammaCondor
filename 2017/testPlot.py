from ROOT import *
from optparse import OptionParser

parser = OptionParser()
parser.add_option("-f", dest="testFilePath")

standardFilePath = "testDataTrimming/standardOutput"
standardFile = TFile(standardFilePath)
testFile = TFile(testFilePath)

standardTree = standardFile.Get("ntuplizer/tree")
testTree = testFile.Get("ntuplizer/tree")

can = TCanvas()
can.cd()
testTree
















