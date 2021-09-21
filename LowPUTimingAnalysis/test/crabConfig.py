from CRABClient.UserUtilities import config
config = config()

config.General.requestName = 'ctpps_lowpileup_zerobias_wmass2'
config.General.workArea = '/tmp/lregisem/ctpps_lowpileup_wmass2_ZeroBias'
config.General.transferOutputs = True
config.General.transferLogs = True

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'RunTimingAnalysisMINIAOD_cfg.py'
config.JobType.outputFiles = ['output_wmass2_ZeroBias.root']

config.Data.inputDataset = '/ZeroBias/Run2017H-09Aug2019_UL2017_LowPU-v1/MINIAOD'
config.Data.useParent = True
config.Data.inputDBS = 'global'
config.Data.splitting = 'EventAwareLumiBased'
config.Data.unitsPerJob = 25
#config.Data.runRange = '0-0'
config.Data.lumiMask = '/afs/cern.ch/user/l/lregisem/CMSSW_10_6_17/src/CTPPSDiamondsStripsAnalyzer/LowPUTimingAnalysis/test/w-mass-2.json'

config.Data.outLFNDirBase = '/store/user/lregisem/'
config.Data.publication = True
config.Data.outputDatasetTag = 'CTPPS_LowPileup_wmass2_ZB'
config.Site.storageSite = 'T3_US_FNALLPC'
