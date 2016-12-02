from sys import argv
from os import listdir, makedirs, symlink
from os.path import isfile, join, exists

inDirName = argv[1]
outDirNamePrefix = argv[2]
outDirNames=[]
for i in range(0,4):
  outDirNames.append("%s_%i"%(outDirNamePrefix, i))
for outDirName in outDirNames: 
  if not exists(outDirName):
    makedirs(outDirName)
  

def split_list(a_list):
    half = len(a_list)/2
    return a_list[:half], a_list[half:]

inFiles=[]
for inFile in listdir(inDirName):
  if isfile(join(inDirName, inFile)):
    inFiles.append([join(inDirName, inFile), inFile])

firstHalf, secondHalf = split_list(inFiles)
firstQuarter, secondQuarter = split_list(firstHalf)
thirdQuarter, fourthQuarter = split_list(secondHalf)
quarters = [firstQuarter, secondQuarter, thirdQuarter, fourthQuarter]

dirMaps = []
for i in range(0, 4):
  dirMaps.append([outDirNames[i], quarters[i]])

for dirMap in dirMaps:
  for fileSymMap in dirMap[1]:
    symlink(fileSymMap[0], join(dirMap[0], fileSymMap[1]))
