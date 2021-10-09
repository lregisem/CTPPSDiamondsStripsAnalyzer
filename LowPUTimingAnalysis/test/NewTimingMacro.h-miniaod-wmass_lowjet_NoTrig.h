//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 30 06:01:52 2020 by ROOT version 6.14/09
// from TChain ntp1/
//////////////////////////////////////////////////////////

#ifndef NewTimingMacro_h
#define NewTimingMacro_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class NewTimingMacro {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           Run;
   Int_t           LumiSection;
   Int_t           BX;
   //Int_t           EventNum;
   Long64_t        EventNum;
   Float_t         CrossingAngle;
   //Int_t           nHitsTiming;
   //Double_t        LeadingEdge[96];   //[nHitsTiming]
   //Double_t        TrailingEdge[96];   //[nHitsTiming]
   //Double_t        ToT[96];   //[nHitsTiming]
   //Int_t           ChannelTiming[96];   //[nHitsTiming]
   //Int_t           PlaneTiming[96];   //[nHitsTiming]
   //Int_t           ArmTiming[96];   //[nHitsTiming]
   //Double_t        XTiming[96];   //[nHitsTiming]
   //Double_t        YTiming[96];   //[nHitsTiming]
   //Int_t           nRecHitsTiming;
   //Int_t           TimingRecHitArm[80];   //[nRecHitsTiming]
   //Int_t           TimingRecHitChannel[80];   //[nRecHitsTiming]
   //Int_t           TimingRecHitPlane[80];   //[nRecHitsTiming]
   //Double_t        TimingRecHitT[80];   //[nRecHitsTiming]
   //Double_t        TimingRecHitX[80];   //[nRecHitsTiming]
   //Double_t        TimingRecHitY[80];   //[nRecHitsTiming]
   //Double_t        TimingRecHitToT[80];   //[nRecHitsTiming]
   //Int_t           TimingRecHitOOTIndex[80];   //[nRecHitsTiming]
   //Int_t           TimingRecHitMultiHit[80];   //[nRecHitsTiming]
   //Int_t           nTracksTiming;
   //Double_t        TimingTrackT[31];   //[nTracksTiming]
   //Double_t        TimingTrackTErr[31];   //[nTracksTiming]
   //Double_t        TimingTrackX[31];   //[nTracksTiming]
   //Double_t        TimingTrackY[31];   //[nTracksTiming]
   //Double_t        TimingTrackZ[31];   //[nTracksTiming]
   //Int_t           TimingTrackOOTIndex[31];   //[nTracksTiming]
   //Int_t           TimingTrackMultiHit[31];   //[nTracksTiming]
   //Double_t        TimingTrackChi2[31];   //[nTracksTiming]
   //Int_t           TimingTrackArm[31];   //[nTracksTiming]
   Int_t           nVertices;
   //Int_t           nArmsTiming;
   //Int_t           nLayersArm1Timing;
   //Int_t           nLayersArm2Timing;
   //Int_t           nTracksStrips;
   //Double_t        StripTrackX[1];   //[nTracksStrips]
   //Double_t        StripTrackY[1];   //[nTracksStrips]
   //Double_t        StripTrackTx[1];   //[nTracksStrips]
   //Double_t        StripTrackTy[1];   //[nTracksStrips]
   //Int_t           ArmStrips[1];   //[nTracksStrips]
   //Int_t           nArmsStrips;
   //Int_t           nArmsPixelDigis;
   //Int_t           nLayersArm1PixelDigis;
   //Int_t           nLayersArm2PixelDigis;
   //Int_t           nPixelRecHits;
   //Double_t        PixRecHitX[1062];   //[nPixelRecHits]
   //Double_t        PixRecHitY[1062];   //[nPixelRecHits]
   //Double_t        PixRecHitZ[1062];   //[nPixelRecHits]
   //Int_t           PixRecHitArm[1062];   //[nPixelRecHits]
   //Int_t           PixRecHitPlane[1062];   //[nPixelRecHits]
   //Int_t           nArmsPixRecHits;
   //Int_t           nLayersArm1PixRecHits;
   //Int_t           nLayersArm2PixRecHits;
   //Int_t           nPixelTracks;
   //Double_t        PixTrackX[19];   //[nPixelTracks]
   //Double_t        PixTrackY[19];   //[nPixelTracks]
   //Double_t        PixTrackTx[19];   //[nPixelTracks]
   //Double_t        PixTrackTy[19];   //[nPixelTracks]
   //Double_t        PixTrackChi2[19];   //[nPixelTracks]
   //Double_t        PixTrackZ[19];   //[nPixelTracks]
   //Int_t           PixTrackArm[19];   //[nPixelTracks]
   Int_t           nLiteTracks;
   Float_t         TrackLiteX[39];   //[nLiteTracks]
   Float_t         TrackLiteY[39];   //[nLiteTracks]
   Float_t         TrackLiteTime[39];   //[nLiteTracks]
   Int_t           TrackLiteRPID[39];   //[nLiteTracks]
   Double_t        PrimVertexZ[14];   //[nVertices]
   Double_t        PrimVertexX[14];   //[nVertices]
   Double_t        PrimVertexY[14];   //[nVertices]
   Int_t           PrimVertexIsBS[14];   //[nVertices]
   //Int_t           PrimVertexNtrk[14];   //[nVertices]
   //Int_t           nTracksFromVertex;
   //Double_t        PrimVertexTrkPt[199];   //[nTracksFromVertex]
   //Double_t        PrimVertexTrkEta[199];   //[nTracksFromVertex]
   //Double_t        PrimVertexTrkPhi[199];   //[nTracksFromVertex]
   //Int_t           nJets;
   //Double_t        JetCandEt[59];   //[nJets]
   //Double_t        JetCandEta[59];   //[nJets]
   //Double_t        JetCandPhi[59];   //[nJets]
   //Double_t        JetCandE[59];   //[nJets]
   //Double_t        DijetMass;
   //Double_t        DijetY;
   Int_t           nTracksNoVertex;
   Int_t           nTracksOneVertex;
   Double_t        TrackZNoVertex[197];   //[nTracksNoVertex]
   //Int_t           nHFplus;
   //Int_t           nHFminus;
   //Double_t        HFplusE;
   //Double_t        HFminusE;
   //Double_t        PFCentralMass;
   //Double_t        PFCentralMass_NoThresh;
   //Double_t        PFCentralE;
   //Double_t        PFCentralE_NoThresh;
   //Double_t        PFCentralPx;
   //Double_t        PFCentralPx_NoThresh;
   //Double_t        PFCentralPy;
   //Double_t        PFCentralPy_NoThresh;
   //Double_t        PFCentralPz;
   //Double_t        PFCentralPz_NoThresh;
   //Double_t        PFCentralY;
   //Double_t        PFCentralY_NoThresh;
   Int_t           nGenProtons;
   Float_t         GenProtXi[1];   //[nGenProtons]
   Float_t         GenProtPz[1];   //[nGenProtons]
   Int_t           nProtons;
   Float_t         ProtonXi[15];   //[nProtons]
   Float_t         ProtonThX[15];   //[nProtons]
   Float_t         ProtonThY[15];   //[nProtons]
   Float_t         Protont[15];   //[nProtons]
   Int_t           ProtonIsMultiRP[15];   //[nProtons]
   Int_t           ProtonRPID[15];   //[nProtons]
   Int_t           ProtonArm[15];   //[nProtons]
   Float_t         ProtonTime[15];   //[nProtons]

   // List of branches
   TBranch        *b_Run;   //!
   TBranch        *b_LumiSection;   //!
   TBranch        *b_BX;   //!
   TBranch        *b_EventNum;   //!
   TBranch        *b_CrossingAngle;   //!
   //TBranch        *b_nHitsTiming;   //!
   //TBranch        *b_LeadingEdge;   //!
   //TBranch        *b_TrailingEdge;   //!
   //TBranch        *b_ToT;   //!
   //TBranch        *b_ChannelTiming;   //!
   //TBranch        *b_PlaneTiming;   //!
   //TBranch        *b_ArmTiming;   //!
   //TBranch        *b_XTiming;   //!
   //TBranch        *b_YTiming;   //!
   //TBranch        *b_nRecHitsTiming;   //!
   //TBranch        *b_TimingRecHitArm;   //!
   //TBranch        *b_TimingRecHitChannel;   //!
   //TBranch        *b_TimingRecHitPlane;   //!
   //TBranch        *b_TimingRecHitT;   //!
   //TBranch        *b_TimingRecHitX;   //!
   //TBranch        *b_TimingRecHitY;   //!
   //TBranch        *b_TimingRecHitToT;   //!
   //TBranch        *b_TimingRecHitOOTIndex;   //!
   //TBranch        *b_TimingRecHitMultiHit;   //!
   //TBranch        *b_nTracksTiming;   //!
   //TBranch        *b_TimingTrackT;   //!
   //TBranch        *b_TimingTrackTErr;   //!
   //TBranch        *b_TimingTrackX;   //!
   //TBranch        *b_TimingTrackY;   //!
   //TBranch        *b_TimingTrackZ;   //!
   //TBranch        *b_TimingTrackOOTIndex;   //!
   //TBranch        *b_TimingTrackMultiHit;   //!
   //TBranch        *b_TimingTrackChi2;   //!
   //TBranch        *b_TimingTrackArm;   //!
   TBranch        *b_nVertices;   //!
   //TBranch        *b_nArmsTiming;   //!
   //TBranch        *b_nLayersArm1Timing;   //!
   //TBranch        *b_nLayersArm2Timing;   //!
   //TBranch        *b_nTracksStrips;   //!
   //TBranch        *b_StripTrackX;   //!
   //TBranch        *b_StripTrackY;   //!
   //TBranch        *b_StripTrackTx;   //!
   //TBranch        *b_StripTrackTy;   //!
   //TBranch        *b_ArmStrips;   //!
   //TBranch        *b_nArmsStrips;   //!
   //TBranch        *b_nArmsPixelDigis;   //!
   //TBranch        *b_nLayersArm1PixelDigis;   //!
   //TBranch        *b_nLayersArm2PixelDigis;   //!
   //TBranch        *b_nPixelRecHits;   //!
   //TBranch        *b_PixRecHitX;   //!
   //TBranch        *b_PixRecHitY;   //!
   //TBranch        *b_PixRecHitZ;   //!
   //TBranch        *b_PixRecHitArm;   //!
   //TBranch        *b_PixRecHitPlane;   //!
   //TBranch        *b_nArmsPixRecHits;   //!
   //TBranch        *b_nLayersArm1PixRecHits;   //!
   //TBranch        *b_nLayersArm2PixRecHits;   //!
   //TBranch        *b_nPixelTracks;   //!
   //TBranch        *b_PixTrackX;   //!
   //TBranch        *b_PixTrackY;   //!
   //TBranch        *b_PixTrackTx;   //!
   //TBranch        *b_PixTrackTy;   //!
   //TBranch        *b_PixTrackChi2;   //!
   //TBranch        *b_PixTrackZ;   //!
   //TBranch        *b_PixTrackArm;   //!
   TBranch        *b_nLiteTracks;   //!
   TBranch        *b_TrackLiteX;   //!
   TBranch        *b_TrackLiteY;   //!
   TBranch        *b_TrackLiteTime;   //!
   TBranch        *b_TrackLiteRPID;   //!
   TBranch        *b_PrimVertexZ;   //!
   TBranch        *b_PrimVertexX;   //!
   TBranch        *b_PrimVertexY;   //!
   TBranch        *b_PrimVertexIsBS;   //!
   //TBranch        *b_PrimVertexNtrk;   //!
   //TBranch        *b_nTracksFromVertex;   //!
   //TBranch        *b_PrimVertexTrkPt;   //!
   //TBranch        *b_PrimVertexTrkEta;   //!
   //TBranch        *b_PrimVertexTrkPhi;   //!
   //TBranch        *b_nJets;   //!
   //TBranch        *b_JetCandEt;   //!
   //TBranch        *b_JetCandEta;   //!
   //TBranch        *b_JetCandPhi;   //!
   //TBranch        *b_JetCandE;   //!
   //TBranch        *b_DijetMass;   //!
   //TBranch        *b_DijetY;   //!
   TBranch        *b_nTracksNoVertex;   //!
   TBranch        *b_nTracksOneVertex; //!
   TBranch        *b_TrackZNoVertex;   //!
   //TBranch        *b_nHFplus;   //!
   //TBranch        *b_nHFminus;   //!
   //TBranch        *b_HFplusE;   //!
   //TBranch        *b_HFminusE;   //!
   //TBranch        *b_PFCentralMass;   //!
   //TBranch        *b_PFCentralMass_NoThresh;   //!
   //TBranch        *b_PFCentralE;   //!
   //TBranch        *b_PFCentralE_NoThresh;   //!
   //TBranch        *b_PFCentralPx;   //!
   //TBranch        *b_PFCentralPx_NoThresh;   //!
   //TBranch        *b_PFCentralPy;   //!
   //TBranch        *b_PFCentralPy_NoThresh;   //!
   //TBranch        *b_PFCentralPz;   //!
   //TBranch        *b_PFCentralPz_NoThresh;   //!
   //TBranch        *b_PFCentralY;   //!
   //TBranch        *b_PFCentralY_NoThresh;   //!
   TBranch        *b_nGenProtons;   //!
   TBranch        *b_GenProtXi;   //!
   TBranch        *b_GenProtPz;   //!
   TBranch        *b_nProtons;   //!
   TBranch        *b_ProtonXi;   //!
   TBranch        *b_ProtonThX;   //!
   TBranch        *b_ProtonThY;   //!
   TBranch        *b_Protont;   //!
   TBranch        *b_ProtonIsMultiRP;   //!
   TBranch        *b_ProtonRPID;   //!
   TBranch        *b_ProtonArm;   //!
   TBranch        *b_ProtonTime;   //!

   NewTimingMacro(TTree *tree=0);
   virtual ~NewTimingMacro();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NewTimingMacro_cxx
NewTimingMacro::NewTimingMacro(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("ntp1",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("ntp1","");
      /*
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge1.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge2.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge3.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge4.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge5.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge6.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge7.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge8.root/ntp1");
      chain->Add("output_ZeroBias_Run319488_ULtest2_merge9.root/ntp1");
      */

      // NoTrig here
      
      /*
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-1.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-10.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-100.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-101.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-102.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-103.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-104.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-105.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-106.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-107.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-108.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-109.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-11.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-110.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-111.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-112.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-113.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-114.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-115.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-116.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-117.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-118.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-119.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-12.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-120.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-121.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-122.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-123.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-124.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-125.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-126.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-127.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-128.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-129.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-13.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-130.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-131.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-132.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-133.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-134.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-135.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-136.root/ntp1");
      */
      
      /*
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-14.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-15.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-16.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-17.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-18.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-19.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-2.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-20.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-21.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-22.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-23.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-24.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-25.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-26.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-27.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-28.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-29.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-3.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-30.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-31.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-32.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-33.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-34.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-35.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-36.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-37.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-38.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-39.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-4.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-40.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-41.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-42.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-43.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-44.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-45.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-46.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-47.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-48.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-49.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-5.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-50.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-51.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-52.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-53.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-54.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-55.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-57.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-58.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-59.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-6.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-60.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-61.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-62.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-63.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-64.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-65.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-66.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-67.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-68.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-69.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-7.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-70.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-71.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-72.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-73.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-74.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-75.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-76.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-77.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-78.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-79.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-8.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-80.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-81.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-82.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-83.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-84.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-85.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-86.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-87.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-88.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-89.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-9.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-90.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-91.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-92.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-93.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-94.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-95.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-96.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-97.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-98.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_1-99.root/ntp1");
      */
      
      ///*
 chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_11.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_12.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_15.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_17.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_19.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_2.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_21.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_24.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_25.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_26.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_31.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_33.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_4.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_42.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_43.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_48.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_49.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_53.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_54.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_56.root/ntp1");
chain->Add("root://cmsxrootd.fnal.gov//store/user/lregisem/LowEGJet/CTPPS_LowPileup_wmass_NoTrig_lowjet/211007_035400/0000/output_wmass_NoTrig_lowjet_7.root/ntp1");
      //*/

tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

NewTimingMacro::~NewTimingMacro()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NewTimingMacro::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NewTimingMacro::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void NewTimingMacro::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("LumiSection", &LumiSection, &b_LumiSection);
   fChain->SetBranchAddress("BX", &BX, &b_BX);
   fChain->SetBranchAddress("EventNum", &EventNum, &b_EventNum);
   fChain->SetBranchAddress("CrossingAngle", &CrossingAngle, &b_CrossingAngle);
   //fChain->SetBranchAddress("nHitsTiming", &nHitsTiming, &b_nHitsTiming);
   //fChain->SetBranchAddress("LeadingEdge", LeadingEdge, &b_LeadingEdge);
   //fChain->SetBranchAddress("TrailingEdge", TrailingEdge, &b_TrailingEdge);
   //fChain->SetBranchAddress("ToT", ToT, &b_ToT);
   //fChain->SetBranchAddress("ChannelTiming", ChannelTiming, &b_ChannelTiming);
   //fChain->SetBranchAddress("PlaneTiming", PlaneTiming, &b_PlaneTiming);
   //fChain->SetBranchAddress("ArmTiming", ArmTiming, &b_ArmTiming);
   //fChain->SetBranchAddress("XTiming", XTiming, &b_XTiming);
   //fChain->SetBranchAddress("YTiming", YTiming, &b_YTiming);
   //fChain->SetBranchAddress("nRecHitsTiming", &nRecHitsTiming, &b_nRecHitsTiming);
   //fChain->SetBranchAddress("TimingRecHitArm", TimingRecHitArm, &b_TimingRecHitArm);
   //fChain->SetBranchAddress("TimingRecHitChannel", TimingRecHitChannel, &b_TimingRecHitChannel);
   //fChain->SetBranchAddress("TimingRecHitPlane", TimingRecHitPlane, &b_TimingRecHitPlane);
   //fChain->SetBranchAddress("TimingRecHitT", TimingRecHitT, &b_TimingRecHitT);
   //fChain->SetBranchAddress("TimingRecHitX", TimingRecHitX, &b_TimingRecHitX);
   //fChain->SetBranchAddress("TimingRecHitY", TimingRecHitY, &b_TimingRecHitY);
   //fChain->SetBranchAddress("TimingRecHitToT", TimingRecHitToT, &b_TimingRecHitToT);
   //fChain->SetBranchAddress("TimingRecHitOOTIndex", TimingRecHitOOTIndex, &b_TimingRecHitOOTIndex);
   //fChain->SetBranchAddress("TimingRecHitMultiHit", TimingRecHitMultiHit, &b_TimingRecHitMultiHit);
   //fChain->SetBranchAddress("nTracksTiming", &nTracksTiming, &b_nTracksTiming);
   //fChain->SetBranchAddress("TimingTrackT", TimingTrackT, &b_TimingTrackT);
   //fChain->SetBranchAddress("TimingTrackTErr", TimingTrackTErr, &b_TimingTrackTErr);
   //fChain->SetBranchAddress("TimingTrackX", TimingTrackX, &b_TimingTrackX);
   //fChain->SetBranchAddress("TimingTrackY", TimingTrackY, &b_TimingTrackY);
   //fChain->SetBranchAddress("TimingTrackZ", TimingTrackZ, &b_TimingTrackZ);
   //fChain->SetBranchAddress("TimingTrackOOTIndex", TimingTrackOOTIndex, &b_TimingTrackOOTIndex);
   //fChain->SetBranchAddress("TimingTrackMultiHit", TimingTrackMultiHit, &b_TimingTrackMultiHit);
   //fChain->SetBranchAddress("TimingTrackChi2", TimingTrackChi2, &b_TimingTrackChi2);
   //fChain->SetBranchAddress("TimingTrackArm", TimingTrackArm, &b_TimingTrackArm);
   fChain->SetBranchAddress("nVertices", &nVertices, &b_nVertices);
   //fChain->SetBranchAddress("nArmsTiming", &nArmsTiming, &b_nArmsTiming);
   //fChain->SetBranchAddress("nLayersArm1Timing", &nLayersArm1Timing, &b_nLayersArm1Timing);
   //fChain->SetBranchAddress("nLayersArm2Timing", &nLayersArm2Timing, &b_nLayersArm2Timing);
   //fChain->SetBranchAddress("nTracksStrips", &nTracksStrips, &b_nTracksStrips);
   //fChain->SetBranchAddress("StripTrackX", &StripTrackX, &b_StripTrackX);
   //fChain->SetBranchAddress("StripTrackY", &StripTrackY, &b_StripTrackY);
   //fChain->SetBranchAddress("StripTrackTx", &StripTrackTx, &b_StripTrackTx);
   //fChain->SetBranchAddress("StripTrackTy", &StripTrackTy, &b_StripTrackTy);
   //fChain->SetBranchAddress("ArmStrips", &ArmStrips, &b_ArmStrips);
   //fChain->SetBranchAddress("nArmsStrips", &nArmsStrips, &b_nArmsStrips);
   //fChain->SetBranchAddress("nArmsPixelDigis", &nArmsPixelDigis, &b_nArmsPixelDigis);
   //fChain->SetBranchAddress("nLayersArm1PixelDigis", &nLayersArm1PixelDigis, &b_nLayersArm1PixelDigis);
   //fChain->SetBranchAddress("nLayersArm2PixelDigis", &nLayersArm2PixelDigis, &b_nLayersArm2PixelDigis);
   //fChain->SetBranchAddress("nPixelRecHits", &nPixelRecHits, &b_nPixelRecHits);
   //fChain->SetBranchAddress("PixRecHitX", PixRecHitX, &b_PixRecHitX);
   //fChain->SetBranchAddress("PixRecHitY", PixRecHitY, &b_PixRecHitY);
   //fChain->SetBranchAddress("PixRecHitZ", PixRecHitZ, &b_PixRecHitZ);
   //fChain->SetBranchAddress("PixRecHitArm", PixRecHitArm, &b_PixRecHitArm);
   //fChain->SetBranchAddress("PixRecHitPlane", PixRecHitPlane, &b_PixRecHitPlane);
   //fChain->SetBranchAddress("nArmsPixRecHits", &nArmsPixRecHits, &b_nArmsPixRecHits);
   //fChain->SetBranchAddress("nLayersArm1PixRecHits", &nLayersArm1PixRecHits, &b_nLayersArm1PixRecHits);
   //fChain->SetBranchAddress("nLayersArm2PixRecHits", &nLayersArm2PixRecHits, &b_nLayersArm2PixRecHits);
   //fChain->SetBranchAddress("nPixelTracks", &nPixelTracks, &b_nPixelTracks);
   //fChain->SetBranchAddress("PixTrackX", PixTrackX, &b_PixTrackX);
   //fChain->SetBranchAddress("PixTrackY", PixTrackY, &b_PixTrackY);
   //fChain->SetBranchAddress("PixTrackTx", PixTrackTx, &b_PixTrackTx);
   //fChain->SetBranchAddress("PixTrackTy", PixTrackTy, &b_PixTrackTy);
   //fChain->SetBranchAddress("PixTrackChi2", PixTrackChi2, &b_PixTrackChi2);
   //fChain->SetBranchAddress("PixTrackZ", PixTrackZ, &b_PixTrackZ);
   //fChain->SetBranchAddress("PixTrackArm", PixTrackArm, &b_PixTrackArm);
//    fChain->SetBranchAddress("nArmsStrips", &nArmsStrips, &b_nArmsStrips);
   fChain->SetBranchAddress("nLiteTracks", &nLiteTracks, &b_nLiteTracks);
   fChain->SetBranchAddress("TrackLiteX", TrackLiteX, &b_TrackLiteX);
   fChain->SetBranchAddress("TrackLiteY", TrackLiteY, &b_TrackLiteY);
   fChain->SetBranchAddress("TrackLiteTime", TrackLiteTime, &b_TrackLiteTime);
   fChain->SetBranchAddress("TrackLiteRPID", TrackLiteRPID, &b_TrackLiteRPID);
   fChain->SetBranchAddress("PrimVertexZ", PrimVertexZ, &b_PrimVertexZ);
   fChain->SetBranchAddress("PrimVertexX", PrimVertexX, &b_PrimVertexX);
   fChain->SetBranchAddress("PrimVertexY", PrimVertexY, &b_PrimVertexY);
   fChain->SetBranchAddress("PrimVertexIsBS", PrimVertexIsBS, &b_PrimVertexIsBS);
   //fChain->SetBranchAddress("PrimVertexNtrk", PrimVertexNtrk, &b_PrimVertexNtrk);
   //fChain->SetBranchAddress("nTracksFromVertex", &nTracksFromVertex, &b_nTracksFromVertex);
   //fChain->SetBranchAddress("PrimVertexTrkPt", PrimVertexTrkPt, &b_PrimVertexTrkPt);
   //fChain->SetBranchAddress("PrimVertexTrkEta", PrimVertexTrkEta, &b_PrimVertexTrkEta);
   //fChain->SetBranchAddress("PrimVertexTrkPhi", PrimVertexTrkPhi, &b_PrimVertexTrkPhi);
   //fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   //fChain->SetBranchAddress("JetCandEt", JetCandEt, &b_JetCandEt);
   //fChain->SetBranchAddress("JetCandEta", JetCandEta, &b_JetCandEta);
   //fChain->SetBranchAddress("JetCandPhi", JetCandPhi, &b_JetCandPhi);
   //fChain->SetBranchAddress("JetCandE", JetCandE, &b_JetCandE);
   //fChain->SetBranchAddress("DijetMass", &DijetMass, &b_DijetMass);
   //fChain->SetBranchAddress("DijetY", &DijetY, &b_DijetY);
   fChain->SetBranchAddress("nTracksNoVertex", &nTracksNoVertex, &b_nTracksNoVertex);
   fChain->SetBranchAddress("nTracksOneVertex", &nTracksOneVertex, &b_nTracksOneVertex);
   fChain->SetBranchAddress("TrackZNoVertex", TrackZNoVertex, &b_TrackZNoVertex);
   //fChain->SetBranchAddress("nHFplus", &nHFplus, &b_nHFplus);
   //fChain->SetBranchAddress("nHFminus", &nHFminus, &b_nHFminus);
   //fChain->SetBranchAddress("HFplusE", &HFplusE, &b_HFplusE);
   //fChain->SetBranchAddress("HFminusE", &HFminusE, &b_HFminusE);
   //fChain->SetBranchAddress("PFCentralMass", &PFCentralMass, &b_PFCentralMass);
   //fChain->SetBranchAddress("PFCentralMass_NoThresh", &PFCentralMass_NoThresh, &b_PFCentralMass_NoThresh);
   //fChain->SetBranchAddress("PFCentralE", &PFCentralE, &b_PFCentralE);
   //fChain->SetBranchAddress("PFCentralE_NoThresh", &PFCentralE_NoThresh, &b_PFCentralE_NoThresh);
   //fChain->SetBranchAddress("PFCentralPx", &PFCentralPx, &b_PFCentralPx);
   //fChain->SetBranchAddress("PFCentralPx_NoThresh", &PFCentralPx_NoThresh, &b_PFCentralPx_NoThresh);
   //fChain->SetBranchAddress("PFCentralPy", &PFCentralPy, &b_PFCentralPy);
   //fChain->SetBranchAddress("PFCentralPy_NoThresh", &PFCentralPy_NoThresh, &b_PFCentralPy_NoThresh);
   //fChain->SetBranchAddress("PFCentralPz", &PFCentralPz, &b_PFCentralPz);
   //fChain->SetBranchAddress("PFCentralPz_NoThresh", &PFCentralPz_NoThresh, &b_PFCentralPz_NoThresh);
   //fChain->SetBranchAddress("PFCentralY", &PFCentralY, &b_PFCentralY);
   //fChain->SetBranchAddress("PFCentralY_NoThresh", &PFCentralY_NoThresh, &b_PFCentralY_NoThresh);
   fChain->SetBranchAddress("nGenProtons", &nGenProtons, &b_nGenProtons);
   fChain->SetBranchAddress("GenProtXi", &GenProtXi, &b_GenProtXi);
   fChain->SetBranchAddress("GenProtPz", &GenProtPz, &b_GenProtPz);
   fChain->SetBranchAddress("nProtons", &nProtons, &b_nProtons);
   fChain->SetBranchAddress("ProtonXi", ProtonXi, &b_ProtonXi);
   fChain->SetBranchAddress("ProtonThX", ProtonThX, &b_ProtonThX);
   fChain->SetBranchAddress("ProtonThY", ProtonThY, &b_ProtonThY);
   fChain->SetBranchAddress("Protont", Protont, &b_Protont);
   fChain->SetBranchAddress("ProtonIsMultiRP", ProtonIsMultiRP, &b_ProtonIsMultiRP);
   fChain->SetBranchAddress("ProtonRPID", ProtonRPID, &b_ProtonRPID);
   fChain->SetBranchAddress("ProtonArm", ProtonArm, &b_ProtonArm);
   fChain->SetBranchAddress("ProtonTime", ProtonTime, &b_ProtonTime);
   Notify();
}

Bool_t NewTimingMacro::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NewTimingMacro::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t NewTimingMacro::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef NewTimingMacro_cxx
