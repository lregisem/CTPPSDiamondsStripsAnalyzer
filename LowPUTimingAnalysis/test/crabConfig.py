from CRABClient.UserUtilities import config
config = config()

config.General.requestName = 'ctpps_lowpileup_NoTrig_wmass_lowjet'
config.General.workArea = '/tmp/lregisem/ctpps_lowpileup_wmass_NoTrig_lowjet'
config.General.transferOutputs = True
config.General.transferLogs = True

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'RunTimingAnalysisMINIAOD_cfg.py'
config.JobType.outputFiles = ['output_wmass_NoTrig_lowjet.root']

config.Data.inputDataset = '/LowEGJet/Run2017H-UL2017_MiniAODv2-v1/MINIAOD'
###config.Data.useParent = True
config.Data.ignoreLocality = False
config.Data.inputDBS = 'global'
config.Data.splitting = 'Automatic'
config.Data.unitsPerJob = 180
#config.Data.runRange = '0-0'
config.Data.lumiMask = '/afs/cern.ch/user/l/lregisem/CMSSW_10_6_17/src/CTPPSDiamondsStripsAnalyzer/LowPUTimingAnalysis/test/w-mass.json'

config.Data.outLFNDirBase = '/store/user/lregisem/'
config.Data.publication = True
config.Data.outputDatasetTag = 'CTPPS_LowPileup_wmass_NoTrig_lowjet'
config.Site.storageSite = 'T3_US_FNALLPC'
