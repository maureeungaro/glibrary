# TODO:
# 1. why do we need to compile the example in order to build the library in lib?
# 2. related: compiling with too many processors causes some example executable to try to load the gmedia library even when it's not build. How to prevent that? Maybe this is resolve
# 3. finish the export=env for various libraries

from init_env import init_environment

# each library has also an SConstruct to build the example

env = init_environment("glibrary clhep")

env.Append(CXXFLAGS=['-std=c++17'])


gstring             = SConscript('gstring/SConscript',  exports='env')
goptions            = SConscript('goptions/SConscript', exports='env')

#textProgressBar     = SConscript('textProgressBar/SConscript')
#translationTable    = SConscript('translationTable/SConscript')
#splash              = SConscript('splash/SConscript')
#gruns               = SConscript('gruns/SConscript')
#frequencySyncSignal = SConscript('frequencySyncSignal/SConscript')
#qtButtonsWidget     = SConscript('qtButtonsWidget/SConscript')
#gvolume             = SConscript('gvolume/SConscript')
#g4display           = SConscript('g4display/SConscript', exports='env')
#g4volume            = SConscript('g4volume/SConscript')
#gtouchable          = SConscript('gtouchable/SConscript')
#ghit                = SConscript('ghit/SConscript', exports='env')
#gdynamic            = SConscript('gdynamic/SConscript', exports='env')
#gdata               = SConscript('gdata/SConscript', exports='env')

#gmedia              = SConscript('gmedia/SConscript', exports='env')
#Depends(gmedia, gdata)

# output plugins
#gmediaDLLS   = SConscript('gmedia/SConscriptDLL')
#$Depends(gmediaDLLS, gmedia)
