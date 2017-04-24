def makeAllSmallerDirs(configFile):
  from ConfigParser import RawConfigParser
  from makeSmallerDirs import breakDirs
  from pprint import pprint
    
  config = RawConfigParser()
  config.optionxform = str
  config.read(configFile)
  
  
  dirs = dict([key, directory] for key, directory in config.items('dirs'))
  for dataset in dirs:
    breakDirs(dirs[dataset], dataset)

if __name__ == "__main__":
  from sys import argv
  makeAllSmallerDirs(argv[1])
