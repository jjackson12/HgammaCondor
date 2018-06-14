from ROOT import *
import sys
import os
import re

#TODO: Might need to create this file
gROOT.Macro("rootLogon.C")

quantity = sys.argv[1]
print("\nlooking at " + quantity + " in Signal\n\n")


for bkgFile in os.listdir("smallified_bkg"):
    print("\n\nRunning on "+bkgFile+"\n\n")
    bkg = re.search(r'(.*)smallified_(.*).root',bkgFile).groups()[1]
    title = quantity + " of " + bkg
    can = TCanvas(title,title)
    f = TFile("smallified_bkg/"+bkgFile)
    tree = f.Get("ntuplizer/tree")
    tree.Draw(quantity)
    can.Print("%s_%s.png" % (bkg, quantity),'png')

print("\ndone!\n")



