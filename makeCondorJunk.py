from os import getcwd, chmod
from optparse import OptionParser
from condorFactory import *

parser = OptionParser()
parser.add_option("-c", "--configFile", dest = "configFile", 
                  help = "the name of the configuration file")
parser.add_option("-d", "--doDirSplitting", dest = "doDirSplitting",
                  action="store_true", default=False,
                  help = "do the stuff in makeAllSmallerDirs.py")
(options, args) = parser.parse_args()

if options.configFile is None:
  print "please specify a configuration file with the -c option"
  exit(1)

from ConfigParser import RawConfigParser
config = RawConfigParser()
config.optionxform = str
config.read(options.configFile)
configDict =  dict([key, directory] for key, directory in config.items('dirs'))

if options.doDirSplitting:
  from makeAllSmallerDirs import makeAllSmallerDirs
  makeAllSmallerDirs(configDict)

magicNumber = 4    # this is the magic number of makeSmallerDirs

import datetime
today = datetime.date.today()

for dataset in configDict:
  outScript = open("h_%s.sh" % dataset, "w")
  outScript.write(simpleScript("python runSmallify.py %s_${1} smallified_%s_${1}.root" % (dataset, dataset), getcwd()))
  outScript.close()
  chmod(outScript.name, 0o744) 
  outJdl = open("c_%s.jdl" % dataset, "w")
  outJdl.write(queueJdl(outScript.name, magicNumber))
  outJdl.close()


