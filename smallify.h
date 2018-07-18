//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul 17 03:37:09 2018 by ROOT version 6.10/09
// from TTree tree/tree
// found on file: 2017SinglePhoton/flatTuple.root
//////////////////////////////////////////////////////////

#ifndef smallify_h
#define smallify_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "map"

class smallify {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

  long long stopAfter = -1;
  bool useTriggerInfo = false;

  bool passPh    = false ;
  bool passJet   = false ;
  bool passTrig  = false;
  int iPh  = 0 ;
  int iJet = 0 ;
  TLorentzVector  phVec  ;
  TLorentzVector  jetVec ;
  

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxpassFilter_HBHE = 1;
   static constexpr Int_t kMaxpassFilter_HBHELoose = 1;
   static constexpr Int_t kMaxpassFilter_HBHETight = 1;
   static constexpr Int_t kMaxpassFilter_HBHEIso = 1;
   static constexpr Int_t kMaxpassFilter_CSCHalo = 1;
   static constexpr Int_t kMaxpassFilter_CSCTightHalo2015 = 1;
   static constexpr Int_t kMaxpassFilter_HCALlaser = 1;
   static constexpr Int_t kMaxpassFilter_ECALDeadCell = 1;
   static constexpr Int_t kMaxpassFilter_GoodVtx = 1;
   static constexpr Int_t kMaxpassFilter_TrkFailure = 1;
   static constexpr Int_t kMaxpassFilter_EEBadSc = 1;
   static constexpr Int_t kMaxpassFilter_ECALlaser = 1;
   static constexpr Int_t kMaxpassFilter_TrkPOG = 1;
   static constexpr Int_t kMaxpassFilter_TrkPOG_manystrip = 1;
   static constexpr Int_t kMaxpassFilter_TrkPOG_toomanystrip = 1;
   static constexpr Int_t kMaxpassFilter_TrkPOG_logError = 1;
   static constexpr Int_t kMaxpassFilter_METFilters = 1;
   static constexpr Int_t kMaxpassFilter_CSCTightHaloTrkMuUnvetoFilter = 1;
   static constexpr Int_t kMaxpassFilter_globalTightHalo2016 = 1;
   static constexpr Int_t kMaxpassFilter_HcalStripHalo = 1;
   static constexpr Int_t kMaxpassFilter_chargedHadronTrackResolution = 1;
   static constexpr Int_t kMaxpassFilter_muonBadTrack = 1;
   static constexpr Int_t kMaxflag_badMuons = 1;
   static constexpr Int_t kMaxflag_duplicateMuons = 1;
   static constexpr Int_t kMaxflag_nobadMuons = 1;

   // Declaration of leaf types
   Int_t           ph_N;
   vector<int>     *ph_pdgId;
   vector<float>   *ph_charge;
   vector<float>   *ph_e;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_mass;
   vector<float>   *ph_pt;
   vector<float>   *ph_et;
   vector<float>   *ph_rho;
   vector<float>   *ph_superCluster_eta;
   vector<float>   *ph_superCluster_phi;
   vector<float>   *ph_sigmaIetaIeta;
   vector<float>   *ph_hOverE;
   vector<float>   *ph_isoGamma;
   vector<float>   *ph_isoCh;
   vector<bool>    *ph_passEleVeto;
   vector<int>     *ph_passLooseId;
   vector<int>     *ph_passMediumId;
   vector<int>     *ph_passTightId;
   vector<float>   *ph_mvaVal;
   vector<float>   *ph_mvaCat;
   Int_t           el_N;
   vector<int>     *el_pdgId;
   vector<float>   *el_charge;
   vector<float>   *el_e;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_mass;
   vector<float>   *el_pt;
   vector<float>   *el_et;
   vector<float>   *el_superCluster_eta;
   vector<float>   *el_pfRhoCorrRelIso03;
   vector<float>   *el_pfRhoCorrRelIso04;
   vector<float>   *el_pfDeltaCorrRelIso;
   vector<float>   *el_photonIso;
   vector<float>   *el_neutralHadIso;
   vector<float>   *el_chargedHadIso;
   vector<int>     *el_passConversionVeto;
   vector<float>   *el_full5x5_sigmaIetaIeta;
   vector<float>   *el_dEtaIn;
   vector<float>   *el_dPhiIn;
   vector<float>   *el_hOverE;
   vector<float>   *el_relIsoWithDBeta;
   vector<float>   *el_ooEmooP;
   vector<int>     *el_expectedMissingInnerHits;
   vector<float>   *el_d0;
   vector<float>   *el_dz;
   vector<float>   *el_d0_allvertices;
   vector<float>   *el_dz_allvertices;
   vector<float>   *el_dr03EcalRecHitSumEt;
   vector<float>   *el_dr03HcalDepth1TowerSumEt;
   vector<float>   *el_rho;
   vector<bool>    *el_ecalDriven;
   vector<float>   *el_dEtaInSeed;
   vector<float>   *el_full5x5_e2x5Max;
   vector<float>   *el_full5x5_e5x5;
   vector<float>   *el_full5x5_e1x5;
   vector<float>   *el_full5x5_r9;
   vector<float>   *el_dr03TkSumPt;
   vector<float>   *el_superCluster_e;
   vector<float>   *el_hadronicOverEm;
   vector<float>   *el_seedEnergy;
   vector<int>     *el_isVetoElectron;
   vector<int>     *el_isLooseElectron;
   vector<int>     *el_isMediumElectron;
   vector<int>     *el_isTightElectron;
   vector<int>     *el_isHeepElectron;
   vector<int>     *el_isHltElectron;
   vector<int>     *el_isMVAMediumElectron;
   vector<int>     *el_isMVATightElectron;
   vector<float>   *el_MVAscore;
   vector<int>     *el_MVAcategory;
   vector<int>     *el_isVetoElectronWithoutIPandIsolation;
   vector<int>     *el_isMediumElectronWithoutIPandIsolation;
   vector<int>     *el_isTightElectronWithoutIPandIsolation;
   vector<int>     *el_isHeepElectronWithoutIPandIsolation;
   vector<int>     *el_isLooseElectronWithoutIPandIsolation;
   vector<float>   *el_SemileptonicPFIso;
   vector<float>   *el_SemileptonicCorrPFIso;
   Int_t           mu_N;
   vector<int>     *mu_pdgId;
   vector<float>   *mu_charge;
   vector<float>   *mu_e;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   vector<float>   *mu_mass;
   vector<float>   *mu_pt;
   vector<int>     *mu_isHighPtMuon;
   vector<int>     *mu_isTightMuon;
   vector<int>     *mu_isMediumMuon;
   vector<int>     *mu_isMediumMuonGH;
   vector<int>     *mu_isLooseMuon;
   vector<int>     *mu_isPFMuon;
   vector<int>     *mu_isSoftMuon;
   vector<int>     *mu_isGlobalMuon;
   vector<int>     *mu_isTrackerMuon;
   vector<int>     *mu_isTrackerHighPtMuon;
   vector<float>   *mu_pfDeltaCorrRelIso;
   vector<float>   *mu_photonIso;
   vector<float>   *mu_neutralHadIso;
   vector<float>   *mu_chargedHadIso;
   vector<float>   *mu_trackIso;
   vector<float>   *mu_trackCorrIso;
   vector<float>   *mu_d0;
   vector<float>   *mu_dz;
   vector<float>   *mu_d0_allvertices;
   vector<float>   *mu_dz_allvertices;
   vector<float>   *mu_innerTrack_pt;
   vector<float>   *mu_bestTrack_pt;
   vector<float>   *mu_bestTrack_ptErr;
   vector<float>   *mu_tunePTrack_pt;
   vector<float>   *mu_tunePTrack_ptErr;
   vector<float>   *mu_normChi2;
   vector<int>     *mu_trackerHits;
   vector<int>     *mu_matchedStations;
   vector<int>     *mu_pixelHits;
   vector<int>     *mu_globalHits;
   vector<float>   *mu_SemileptonicPFIso;
   vector<float>   *mu_SemileptonicCorrPFIso;
   Float_t         rho;
   Int_t           jetAK4_N;
   vector<float>   *jetAK4_pt;
   vector<float>   *jetAK4_eta;
   vector<float>   *jetAK4_mass;
   vector<float>   *jetAK4_phi;
   vector<float>   *jetAK4_e;
   vector<float>   *jetAK4_jec;
   vector<float>   *jetAK4_jecUp;
   vector<float>   *jetAK4_jecDown;
   vector<bool>    *jetAK4_IDLoose;
   vector<bool>    *jetAK4_IDTight;
   vector<bool>    *jetAK4_IDTightLepVeto;
   vector<float>   *jetAK4_PUIDdiscriminat;
   vector<bool>    *jetAK4_PUIDloose;
   vector<bool>    *jetAK4_PUIDmedium;
   vector<bool>    *jetAK4_PUIDtight;
   vector<float>   *jetAK4_muf;
   vector<float>   *jetAK4_phf;
   vector<float>   *jetAK4_emf;
   vector<float>   *jetAK4_nhf;
   vector<float>   *jetAK4_chf;
   vector<float>   *jetAK4_area;
   vector<int>     *jetAK4_cm;
   vector<int>     *jetAK4_nm;
   vector<float>   *jetAK4_che;
   vector<float>   *jetAK4_ne;
   vector<float>   *jetAK4_hf_hf;
   vector<float>   *jetAK4_hf_emf;
   vector<float>   *jetAK4_hof;
   vector<int>     *jetAK4_chm;
   vector<int>     *jetAK4_neHadMult;
   vector<int>     *jetAK4_phoMult;
   vector<float>   *jetAK4_nemf;
   vector<float>   *jetAK4_cemf;
   vector<int>     *jetAK4_charge;
   vector<float>   *jetAK4_csv;
   vector<float>   *jetAK4_deep_csv_b;
   vector<float>   *jetAK4_deep_csv_bb;
   vector<float>   *jetAK4_vtxMass;
   vector<float>   *jetAK4_vtxNtracks;
   vector<float>   *jetAK4_vtx3DVal;
   vector<float>   *jetAK4_vtx3DSig;
   vector<float>   *jetAK4_etaAxis;
   vector<float>   *jetAK4_phiAxis;
   vector<float>   *jetAK4_phiT;
   vector<float>   *jetAK4_qg_axis1;
   vector<float>   *jetAK4_qg_axis2;
   vector<int>     *jetAK4_qg_charged;
   vector<float>   *jetAK4_qg_ptD;
   vector<float>   *jetAK4_qg_pt_dr;
   Int_t           jetAK8_N;
   vector<float>   *jetAK8_pt;
   vector<float>   *jetAK8_eta;
   vector<float>   *jetAK8_mass;
   vector<float>   *jetAK8_phi;
   vector<float>   *jetAK8_e;
   vector<float>   *jetAK8_jec;
   vector<float>   *jetAK8_jecUp;
   vector<float>   *jetAK8_jecDown;
   vector<bool>    *jetAK8_IDLoose;
   vector<bool>    *jetAK8_IDTight;
   vector<bool>    *jetAK8_IDTightLepVeto;
   vector<float>   *jetAK8_muf;
   vector<float>   *jetAK8_phf;
   vector<float>   *jetAK8_emf;
   vector<float>   *jetAK8_nhf;
   vector<float>   *jetAK8_chf;
   vector<float>   *jetAK8_area;
   vector<int>     *jetAK8_cm;
   vector<int>     *jetAK8_nm;
   vector<float>   *jetAK8_che;
   vector<float>   *jetAK8_ne;
   vector<float>   *jetAK8_hf_hf;
   vector<float>   *jetAK8_hf_emf;
   vector<float>   *jetAK8_hof;
   vector<int>     *jetAK8_chm;
   vector<int>     *jetAK8_neHadMult;
   vector<int>     *jetAK8_phoMult;
   vector<float>   *jetAK8_nemf;
   vector<float>   *jetAK8_cemf;
   vector<int>     *jetAK8_charge;
   vector<float>   *jetAK8_csv;
   vector<float>   *jetAK8_deep_csv_b;
   vector<float>   *jetAK8_deep_csv_bb;
   vector<float>   *jetAK8_tau1;
   vector<float>   *jetAK8_tau2;
   vector<float>   *jetAK8_tau3;
   vector<float>   *jetAK8_pull1;
   vector<float>   *jetAK8_pull2;
   vector<float>   *jetAK8_chs_pruned_mass;
   vector<float>   *jetAK8_chs_softdrop_mass;
   vector<float>   *jetAK8_chs_pruned_massCorr;
   vector<float>   *jetAK8_chs_pruned_jec;
   vector<float>   *jetAK8_chs_pruned_jecUp;
   vector<float>   *jetAK8_chs_pruned_jecDown;
   vector<float>   *jetAK8_chs_tau1;
   vector<float>   *jetAK8_chs_tau2;
   vector<float>   *jetAK8_chs_tau3;
   vector<float>   *jetAK8_softdrop_mass;
   vector<float>   *jetAK8_softdrop_massCorr;
   vector<float>   *jetAK8_softdrop_jec;
   vector<float>   *jetAK8_softdrop_jecUp;
   vector<float>   *jetAK8_softdrop_jecDown;
   vector<float>   *jetAK8_puppi_softdrop_mass;
   vector<float>   *jetAK8_puppi_softdrop_massCorr;
   vector<float>   *jetAK8_puppi_softdrop_pt;
   vector<float>   *jetAK8_puppi_softdrop_eta;
   vector<float>   *jetAK8_puppi_softdrop_phi;
   vector<float>   *jetAK8_puppi_softdrop_e;
   vector<float>   *jetAK8_puppi_softdrop_jec;
   Int_t           jetAK8_puppi_N;
   vector<float>   *jetAK8_puppi_pt;
   vector<float>   *jetAK8_puppi_eta;
   vector<float>   *jetAK8_puppi_mass;
   vector<float>   *jetAK8_puppi_phi;
   vector<float>   *jetAK8_puppi_e;
   vector<float>   *jetAK8_puppi_jec;
   vector<float>   *jetAK8_puppi_jecUp;
   vector<float>   *jetAK8_puppi_jecDown;
   vector<float>   *jetAK8_puppi_tau1;
   vector<float>   *jetAK8_puppi_tau2;
   vector<float>   *jetAK8_puppi_tau3;
   vector<int>     *jetAK8_subjet_puppi_softdrop_N;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_pt;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_eta;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_mass;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_phi;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_e;
   vector<vector<int> > *jetAK8_subjet_puppi_softdrop_charge;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_csv;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_deep_csv_b;
   vector<vector<float> > *jetAK8_subjet_puppi_softdrop_deep_csv_bb;
   map<string,bool> *HLT_isFired;
   Bool_t          passFilter_HBHE;
   Bool_t          passFilter_HBHELoose;
   Bool_t          passFilter_HBHETight;
   Bool_t          passFilter_HBHEIso;
   Bool_t          passFilter_CSCHalo;
   Bool_t          passFilter_CSCTightHalo2015;
   Bool_t          passFilter_HCALlaser;
   Bool_t          passFilter_ECALDeadCell;
   Bool_t          passFilter_GoodVtx;
   Bool_t          passFilter_TrkFailure;
   Bool_t          passFilter_EEBadSc;
   Bool_t          passFilter_ECALlaser;
   Bool_t          passFilter_TrkPOG;
   Bool_t          passFilter_TrkPOG_manystrip;
   Bool_t          passFilter_TrkPOG_toomanystrip;
   Bool_t          passFilter_TrkPOG_logError;
   Bool_t          passFilter_METFilters;
   Bool_t          passFilter_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          passFilter_globalTightHalo2016;
   Bool_t          passFilter_HcalStripHalo;
   Bool_t          passFilter_chargedHadronTrackResolution;
   Bool_t          passFilter_muonBadTrack;
   Bool_t          flag_badMuons;
   Bool_t          flag_duplicateMuons;
   Bool_t          flag_nobadMuons;
   vector<float>   *METraw_et;
   vector<float>   *METraw_phi;
   vector<float>   *METraw_sumEt;
   vector<float>   *MET_corrPx;
   vector<float>   *MET_corrPy;
   vector<float>   *MET_et;
   vector<float>   *MET_phi;
   vector<float>   *MET_puppi_et;
   vector<float>   *MET_puppi_phi;
   vector<float>   *MET_sumEt;
   vector<float>   *MET_JetEnUp;
   vector<float>   *MET_JetEnDown;
   vector<float>   *MET_JetResUp;
   vector<float>   *MET_JetResDown;
   vector<float>   *MET_UnclusteredEnUp;
   vector<float>   *MET_UnclusteredEnDown;
   vector<float>   *MET_significance;
   vector<float>   *MET_cov00;
   vector<float>   *MET_cov10;
   vector<float>   *MET_cov11;
   Int_t           EVENT_event;
   Int_t           EVENT_run;
   Int_t           EVENT_lumiBlock;
   Int_t           PV_N;
   Bool_t          PV_filter;
   vector<float>   *PV_chi2;
   vector<float>   *PV_ndof;
   vector<float>   *PV_rho;
   vector<float>   *PV_z;

   // List of branches
   TBranch        *b_ph_N;   //!
   TBranch        *b_ph_pdgId;   //!
   TBranch        *b_ph_charge;   //!
   TBranch        *b_ph_e;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_mass;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_et;   //!
   TBranch        *b_ph_rho;   //!
   TBranch        *b_ph_superCluster_eta;   //!
   TBranch        *b_ph_superCluster_phi;   //!
   TBranch        *b_ph_sigmaIetaIeta;   //!
   TBranch        *b_ph_hOverE;   //!
   TBranch        *b_ph_isoGamma;   //!
   TBranch        *b_ph_isoCh;   //!
   TBranch        *b_ph_passEleVeto;   //!
   TBranch        *b_ph_passLooseId;   //!
   TBranch        *b_ph_passMediumId;   //!
   TBranch        *b_ph_passTightId;   //!
   TBranch        *b_ph_mvaVal;   //!
   TBranch        *b_ph_mvaCat;   //!
   TBranch        *b_el_N;   //!
   TBranch        *b_el_pdgId;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_e;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_mass;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_et;   //!
   TBranch        *b_el_superCluster_eta;   //!
   TBranch        *b_el_pfRhoCorrRelIso03;   //!
   TBranch        *b_el_pfRhoCorrRelIso04;   //!
   TBranch        *b_el_pfDeltaCorrRelIso;   //!
   TBranch        *b_el_photonIso;   //!
   TBranch        *b_el_neutralHadIso;   //!
   TBranch        *b_el_chargedHadIso;   //!
   TBranch        *b_el_passConversionVeto;   //!
   TBranch        *b_el_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_el_dEtaIn;   //!
   TBranch        *b_el_dPhiIn;   //!
   TBranch        *b_el_hOverE;   //!
   TBranch        *b_el_relIsoWithDBeta;   //!
   TBranch        *b_el_ooEmooP;   //!
   TBranch        *b_el_expectedMissingInnerHits;   //!
   TBranch        *b_el_d0;   //!
   TBranch        *b_el_dz;   //!
   TBranch        *b_el_d0_allvertices;   //!
   TBranch        *b_el_dz_allvertices;   //!
   TBranch        *b_el_dr03EcalRecHitSumEt;   //!
   TBranch        *b_el_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_el_rho;   //!
   TBranch        *b_el_ecalDriven;   //!
   TBranch        *b_el_dEtaInSeed;   //!
   TBranch        *b_el_full5x5_e2x5Max;   //!
   TBranch        *b_el_full5x5_e5x5;   //!
   TBranch        *b_el_full5x5_e1x5;   //!
   TBranch        *b_el_full5x5_r9;   //!
   TBranch        *b_el_dr03TkSumPt;   //!
   TBranch        *b_el_superCluster_e;   //!
   TBranch        *b_el_hadronicOverEm;   //!
   TBranch        *b_el_seedEnergy;   //!
   TBranch        *b_el_isVetoElectron;   //!
   TBranch        *b_el_isLooseElectron;   //!
   TBranch        *b_el_isMediumElectron;   //!
   TBranch        *b_el_isTightElectron;   //!
   TBranch        *b_el_isHeepElectron;   //!
   TBranch        *b_el_isHltElectron;   //!
   TBranch        *b_el_isMVAMediumElectron;   //!
   TBranch        *b_el_isMVATightElectron;   //!
   TBranch        *b_el_MVAscore;   //!
   TBranch        *b_el_MVAcategory;   //!
   TBranch        *b_el_isVetoElectronWithoutIPandIsolation;   //!
   TBranch        *b_el_isMediumElectronWithoutIPandIsolation;   //!
   TBranch        *b_el_isTightElectronWithoutIPandIsolation;   //!
   TBranch        *b_el_isHeepElectronWithoutIPandIsolation;   //!
   TBranch        *b_el_isLooseElectronWithoutIPandIsolation;   //!
   TBranch        *b_el_SemileptonicPFIso;   //!
   TBranch        *b_el_SemileptonicCorrPFIso;   //!
   TBranch        *b_mu_N;   //!
   TBranch        *b_mu_pdgId;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_e;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_mass;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_isHighPtMuon;   //!
   TBranch        *b_mu_isTightMuon;   //!
   TBranch        *b_mu_isMediumMuon;   //!
   TBranch        *b_mu_isMediumMuonGH;   //!
   TBranch        *b_mu_isLooseMuon;   //!
   TBranch        *b_mu_isPFMuon;   //!
   TBranch        *b_mu_isSoftMuon;   //!
   TBranch        *b_mu_isGlobalMuon;   //!
   TBranch        *b_mu_isTrackerMuon;   //!
   TBranch        *b_mu_isTrackerHighPtMuon;   //!
   TBranch        *b_mu_pfDeltaCorrRelIso;   //!
   TBranch        *b_mu_photonIso;   //!
   TBranch        *b_mu_neutralHadIso;   //!
   TBranch        *b_mu_chargedHadIso;   //!
   TBranch        *b_mu_trackIso;   //!
   TBranch        *b_mu_trackCorrIso;   //!
   TBranch        *b_mu_d0;   //!
   TBranch        *b_mu_dz;   //!
   TBranch        *b_mu_d0_allvertices;   //!
   TBranch        *b_mu_dz_allvertices;   //!
   TBranch        *b_mu_innerTrack_pt;   //!
   TBranch        *b_mu_bestTrack_pt;   //!
   TBranch        *b_mu_bestTrack_ptErr;   //!
   TBranch        *b_mu_tunePTrack_pt;   //!
   TBranch        *b_mu_tunePTrack_ptErr;   //!
   TBranch        *b_mu_normChi2;   //!
   TBranch        *b_mu_trackerHits;   //!
   TBranch        *b_mu_matchedStations;   //!
   TBranch        *b_mu_pixelHits;   //!
   TBranch        *b_mu_globalHits;   //!
   TBranch        *b_mu_SemileptonicPFIso;   //!
   TBranch        *b_mu_SemileptonicCorrPFIso;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_jetAK4_N;   //!
   TBranch        *b_jetAK4_pt;   //!
   TBranch        *b_jetAK4_eta;   //!
   TBranch        *b_jetAK4_mass;   //!
   TBranch        *b_jetAK4_phi;   //!
   TBranch        *b_jetAK4_e;   //!
   TBranch        *b_jetAK4_jec;   //!
   TBranch        *b_jetAK4_jecUp;   //!
   TBranch        *b_jetAK4_jecDown;   //!
   TBranch        *b_jetAK4_IDLoose;   //!
   TBranch        *b_jetAK4_IDTight;   //!
   TBranch        *b_jetAK4_IDTightLepVeto;   //!
   TBranch        *b_jetAK4_PUIDdiscriminat;   //!
   TBranch        *b_jetAK4_PUIDloose;   //!
   TBranch        *b_jetAK4_PUIDmedium;   //!
   TBranch        *b_jetAK4_PUIDtight;   //!
   TBranch        *b_jetAK4_muf;   //!
   TBranch        *b_jetAK4_phf;   //!
   TBranch        *b_jetAK4_emf;   //!
   TBranch        *b_jetAK4_nhf;   //!
   TBranch        *b_jetAK4_chf;   //!
   TBranch        *b_jetAK4_area;   //!
   TBranch        *b_jetAK4_cm;   //!
   TBranch        *b_jetAK4_nm;   //!
   TBranch        *b_jetAK4_che;   //!
   TBranch        *b_jetAK4_ne;   //!
   TBranch        *b_jetAK4_hf_hf;   //!
   TBranch        *b_jetAK4_hf_emf;   //!
   TBranch        *b_jetAK4_hof;   //!
   TBranch        *b_jetAK4_chm;   //!
   TBranch        *b_jetAK4_neHadMult;   //!
   TBranch        *b_jetAK4_phoMult;   //!
   TBranch        *b_jetAK4_nemf;   //!
   TBranch        *b_jetAK4_cemf;   //!
   TBranch        *b_jetAK4_charge;   //!
   TBranch        *b_jetAK4_csv;   //!
   TBranch        *b_jetAK4_deep_csv_b;   //!
   TBranch        *b_jetAK4_deep_csv_bb;   //!
   TBranch        *b_jetAK4_vtxMass;   //!
   TBranch        *b_jetAK4_vtxNtracks;   //!
   TBranch        *b_jetAK4_vtx3DVal;   //!
   TBranch        *b_jetAK4_vtx3DSig;   //!
   TBranch        *b_jetAK4_etaAxis;   //!
   TBranch        *b_jetAK4_phiAxis;   //!
   TBranch        *b_jetAK4_phiT;   //!
   TBranch        *b_jetAK4_qg_axis1;   //!
   TBranch        *b_jetAK4_qg_axis2;   //!
   TBranch        *b_jetAK4_qg_charged;   //!
   TBranch        *b_jetAK4_qg_ptD;   //!
   TBranch        *b_jetAK4_qg_pt_dr;   //!
   TBranch        *b_jetAK8_N;   //!
   TBranch        *b_jetAK8_pt;   //!
   TBranch        *b_jetAK8_eta;   //!
   TBranch        *b_jetAK8_mass;   //!
   TBranch        *b_jetAK8_phi;   //!
   TBranch        *b_jetAK8_e;   //!
   TBranch        *b_jetAK8_jec;   //!
   TBranch        *b_jetAK8_jecUp;   //!
   TBranch        *b_jetAK8_jecDown;   //!
   TBranch        *b_jetAK8_IDLoose;   //!
   TBranch        *b_jetAK8_IDTight;   //!
   TBranch        *b_jetAK8_IDTightLepVeto;   //!
   TBranch        *b_jetAK8_muf;   //!
   TBranch        *b_jetAK8_phf;   //!
   TBranch        *b_jetAK8_emf;   //!
   TBranch        *b_jetAK8_nhf;   //!
   TBranch        *b_jetAK8_chf;   //!
   TBranch        *b_jetAK8_area;   //!
   TBranch        *b_jetAK8_cm;   //!
   TBranch        *b_jetAK8_nm;   //!
   TBranch        *b_jetAK8_che;   //!
   TBranch        *b_jetAK8_ne;   //!
   TBranch        *b_jetAK8_hf_hf;   //!
   TBranch        *b_jetAK8_hf_emf;   //!
   TBranch        *b_jetAK8_hof;   //!
   TBranch        *b_jetAK8_chm;   //!
   TBranch        *b_jetAK8_neHadMult;   //!
   TBranch        *b_jetAK8_phoMult;   //!
   TBranch        *b_jetAK8_nemf;   //!
   TBranch        *b_jetAK8_cemf;   //!
   TBranch        *b_jetAK8_charge;   //!
   TBranch        *b_jetAK8_csv;   //!
   TBranch        *b_jetAK8_deep_csv_b;   //!
   TBranch        *b_jetAK8_deep_csv_bb;   //!
   TBranch        *b_jetAK8_tau1;   //!
   TBranch        *b_jetAK8_tau2;   //!
   TBranch        *b_jetAK8_tau3;   //!
   TBranch        *b_jetAK8_pull1;   //!
   TBranch        *b_jetAK8_pull2;   //!
   TBranch        *b_jetAK8_chs_pruned_mass;   //!
   TBranch        *b_jetAK8_chs_softdrop_mass;   //!
   TBranch        *b_jetAK8_chs_pruned_massCorr;   //!
   TBranch        *b_jetAK8_chs_pruned_jec;   //!
   TBranch        *b_jetAK8_chs_pruned_jecUp;   //!
   TBranch        *b_jetAK8_chs_pruned_jecDown;   //!
   TBranch        *b_jetAK8_chs_tau1;   //!
   TBranch        *b_jetAK8_chs_tau2;   //!
   TBranch        *b_jetAK8_chs_tau3;   //!
   TBranch        *b_jetAK8_softdrop_mass;   //!
   TBranch        *b_jetAK8_softdrop_massCorr;   //!
   TBranch        *b_jetAK8_softdrop_jec;   //!
   TBranch        *b_jetAK8_softdrop_jecUp;   //!
   TBranch        *b_jetAK8_softdrop_jecDown;   //!
   TBranch        *b_jetAK8_puppi_softdrop_mass;   //!
   TBranch        *b_jetAK8_puppi_softdrop_massCorr;   //!
   TBranch        *b_jetAK8_puppi_softdrop_pt;   //!
   TBranch        *b_jetAK8_puppi_softdrop_eta;   //!
   TBranch        *b_jetAK8_puppi_softdrop_phi;   //!
   TBranch        *b_jetAK8_puppi_softdrop_e;   //!
   TBranch        *b_jetAK8_puppi_softdrop_jec;   //!
   TBranch        *b_jetAK8_puppi_N;   //!
   TBranch        *b_jetAK8_puppi_pt;   //!
   TBranch        *b_jetAK8_puppi_eta;   //!
   TBranch        *b_jetAK8_puppi_mass;   //!
   TBranch        *b_jetAK8_puppi_phi;   //!
   TBranch        *b_jetAK8_puppi_e;   //!
   TBranch        *b_jetAK8_puppi_jec;   //!
   TBranch        *b_jetAK8_puppi_jecUp;   //!
   TBranch        *b_jetAK8_puppi_jecDown;   //!
   TBranch        *b_jetAK8_puppi_tau1;   //!
   TBranch        *b_jetAK8_puppi_tau2;   //!
   TBranch        *b_jetAK8_puppi_tau3;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_N;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_pt;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_eta;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_mass;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_phi;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_e;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_charge;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_csv;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_deep_csv_b;   //!
   TBranch        *b_jetAK8_subjet_puppi_softdrop_deep_csv_bb;   //!
   TBranch        *b_HLT_isFired;   //!
   TBranch        *b_passFilter_HBHE_;   //!
   TBranch        *b_passFilter_HBHELoose_;   //!
   TBranch        *b_passFilter_HBHETight_;   //!
   TBranch        *b_passFilter_HBHEIso_;   //!
   TBranch        *b_passFilter_CSCHalo_;   //!
   TBranch        *b_passFilter_CSCTightHalo2015_;   //!
   TBranch        *b_passFilter_HCALlaser_;   //!
   TBranch        *b_passFilter_ECALDeadCell_;   //!
   TBranch        *b_passFilter_GoodVtx_;   //!
   TBranch        *b_passFilter_TrkFailure_;   //!
   TBranch        *b_passFilter_EEBadSc_;   //!
   TBranch        *b_passFilter_ECALlaser_;   //!
   TBranch        *b_passFilter_TrkPOG_;   //!
   TBranch        *b_passFilter_TrkPOG_manystrip_;   //!
   TBranch        *b_passFilter_TrkPOG_toomanystrip_;   //!
   TBranch        *b_passFilter_TrkPOG_logError_;   //!
   TBranch        *b_passFilter_METFilters_;   //!
   TBranch        *b_passFilter_CSCTightHaloTrkMuUnvetoFilter_;   //!
   TBranch        *b_passFilter_globalTightHalo2016_;   //!
   TBranch        *b_passFilter_HcalStripHalo_;   //!
   TBranch        *b_passFilter_chargedHadronTrackResolution_;   //!
   TBranch        *b_passFilter_muonBadTrack_;   //!
   TBranch        *b_flag_badMuons_;   //!
   TBranch        *b_flag_duplicateMuons_;   //!
   TBranch        *b_flag_nobadMuons_;   //!
   TBranch        *b_METraw_et;   //!
   TBranch        *b_METraw_phi;   //!
   TBranch        *b_METraw_sumEt;   //!
   TBranch        *b_MET_corrPx;   //!
   TBranch        *b_MET_corrPy;   //!
   TBranch        *b_MET_et;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_puppi_et;   //!
   TBranch        *b_MET_puppi_phi;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_JetEnUp;   //!
   TBranch        *b_MET_JetEnDown;   //!
   TBranch        *b_MET_JetResUp;   //!
   TBranch        *b_MET_JetResDown;   //!
   TBranch        *b_MET_UnclusteredEnUp;   //!
   TBranch        *b_MET_UnclusteredEnDown;   //!
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_cov00;   //!
   TBranch        *b_MET_cov10;   //!
   TBranch        *b_MET_cov11;   //!
   TBranch        *b_EVENT_event;   //!
   TBranch        *b_EVENT_run;   //!
   TBranch        *b_EVENT_lumiBlock;   //!
   TBranch        *b_PV_N;   //!
   TBranch        *b_PV_filter;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_rho;   //!
   TBranch        *b_PV_z;   //!

   smallify(TTree *tree=0);
   virtual ~smallify();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(std::string outputFileName);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef smallify_cxx
smallify::smallify(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("2017SinglePhoton/flatTuple.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("2017SinglePhoton/flatTuple.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("2017SinglePhoton/flatTuple.root:/ntuplizer");
      dir->GetObject("tree",tree);

   }
   Init(tree);
}

smallify::~smallify()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t smallify::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t smallify::LoadTree(Long64_t entry)
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

void smallify::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   ph_pdgId = 0;
   ph_charge = 0;
   ph_e = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_mass = 0;
   ph_pt = 0;
   ph_et = 0;
   ph_rho = 0;
   ph_superCluster_eta = 0;
   ph_superCluster_phi = 0;
   ph_sigmaIetaIeta = 0;
   ph_hOverE = 0;
   ph_isoGamma = 0;
   ph_isoCh = 0;
   ph_passEleVeto = 0;
   ph_passLooseId = 0;
   ph_passMediumId = 0;
   ph_passTightId = 0;
   ph_mvaVal = 0;
   ph_mvaCat = 0;
   el_pdgId = 0;
   el_charge = 0;
   el_e = 0;
   el_eta = 0;
   el_phi = 0;
   el_mass = 0;
   el_pt = 0;
   el_et = 0;
   el_superCluster_eta = 0;
   el_pfRhoCorrRelIso03 = 0;
   el_pfRhoCorrRelIso04 = 0;
   el_pfDeltaCorrRelIso = 0;
   el_photonIso = 0;
   el_neutralHadIso = 0;
   el_chargedHadIso = 0;
   el_passConversionVeto = 0;
   el_full5x5_sigmaIetaIeta = 0;
   el_dEtaIn = 0;
   el_dPhiIn = 0;
   el_hOverE = 0;
   el_relIsoWithDBeta = 0;
   el_ooEmooP = 0;
   el_expectedMissingInnerHits = 0;
   el_d0 = 0;
   el_dz = 0;
   el_d0_allvertices = 0;
   el_dz_allvertices = 0;
   el_dr03EcalRecHitSumEt = 0;
   el_dr03HcalDepth1TowerSumEt = 0;
   el_rho = 0;
   el_ecalDriven = 0;
   el_dEtaInSeed = 0;
   el_full5x5_e2x5Max = 0;
   el_full5x5_e5x5 = 0;
   el_full5x5_e1x5 = 0;
   el_full5x5_r9 = 0;
   el_dr03TkSumPt = 0;
   el_superCluster_e = 0;
   el_hadronicOverEm = 0;
   el_seedEnergy = 0;
   el_isVetoElectron = 0;
   el_isLooseElectron = 0;
   el_isMediumElectron = 0;
   el_isTightElectron = 0;
   el_isHeepElectron = 0;
   el_isHltElectron = 0;
   el_isMVAMediumElectron = 0;
   el_isMVATightElectron = 0;
   el_MVAscore = 0;
   el_MVAcategory = 0;
   el_isVetoElectronWithoutIPandIsolation = 0;
   el_isMediumElectronWithoutIPandIsolation = 0;
   el_isTightElectronWithoutIPandIsolation = 0;
   el_isHeepElectronWithoutIPandIsolation = 0;
   el_isLooseElectronWithoutIPandIsolation = 0;
   el_SemileptonicPFIso = 0;
   el_SemileptonicCorrPFIso = 0;
   mu_pdgId = 0;
   mu_charge = 0;
   mu_e = 0;
   mu_eta = 0;
   mu_phi = 0;
   mu_mass = 0;
   mu_pt = 0;
   mu_isHighPtMuon = 0;
   mu_isTightMuon = 0;
   mu_isMediumMuon = 0;
   mu_isMediumMuonGH = 0;
   mu_isLooseMuon = 0;
   mu_isPFMuon = 0;
   mu_isSoftMuon = 0;
   mu_isGlobalMuon = 0;
   mu_isTrackerMuon = 0;
   mu_isTrackerHighPtMuon = 0;
   mu_pfDeltaCorrRelIso = 0;
   mu_photonIso = 0;
   mu_neutralHadIso = 0;
   mu_chargedHadIso = 0;
   mu_trackIso = 0;
   mu_trackCorrIso = 0;
   mu_d0 = 0;
   mu_dz = 0;
   mu_d0_allvertices = 0;
   mu_dz_allvertices = 0;
   mu_innerTrack_pt = 0;
   mu_bestTrack_pt = 0;
   mu_bestTrack_ptErr = 0;
   mu_tunePTrack_pt = 0;
   mu_tunePTrack_ptErr = 0;
   mu_normChi2 = 0;
   mu_trackerHits = 0;
   mu_matchedStations = 0;
   mu_pixelHits = 0;
   mu_globalHits = 0;
   mu_SemileptonicPFIso = 0;
   mu_SemileptonicCorrPFIso = 0;
   jetAK4_pt = 0;
   jetAK4_eta = 0;
   jetAK4_mass = 0;
   jetAK4_phi = 0;
   jetAK4_e = 0;
   jetAK4_jec = 0;
   jetAK4_jecUp = 0;
   jetAK4_jecDown = 0;
   jetAK4_IDLoose = 0;
   jetAK4_IDTight = 0;
   jetAK4_IDTightLepVeto = 0;
   jetAK4_PUIDdiscriminat = 0;
   jetAK4_PUIDloose = 0;
   jetAK4_PUIDmedium = 0;
   jetAK4_PUIDtight = 0;
   jetAK4_muf = 0;
   jetAK4_phf = 0;
   jetAK4_emf = 0;
   jetAK4_nhf = 0;
   jetAK4_chf = 0;
   jetAK4_area = 0;
   jetAK4_cm = 0;
   jetAK4_nm = 0;
   jetAK4_che = 0;
   jetAK4_ne = 0;
   jetAK4_hf_hf = 0;
   jetAK4_hf_emf = 0;
   jetAK4_hof = 0;
   jetAK4_chm = 0;
   jetAK4_neHadMult = 0;
   jetAK4_phoMult = 0;
   jetAK4_nemf = 0;
   jetAK4_cemf = 0;
   jetAK4_charge = 0;
   jetAK4_csv = 0;
   jetAK4_deep_csv_b = 0;
   jetAK4_deep_csv_bb = 0;
   jetAK4_vtxMass = 0;
   jetAK4_vtxNtracks = 0;
   jetAK4_vtx3DVal = 0;
   jetAK4_vtx3DSig = 0;
   jetAK4_etaAxis = 0;
   jetAK4_phiAxis = 0;
   jetAK4_phiT = 0;
   jetAK4_qg_axis1 = 0;
   jetAK4_qg_axis2 = 0;
   jetAK4_qg_charged = 0;
   jetAK4_qg_ptD = 0;
   jetAK4_qg_pt_dr = 0;
   jetAK8_pt = 0;
   jetAK8_eta = 0;
   jetAK8_mass = 0;
   jetAK8_phi = 0;
   jetAK8_e = 0;
   jetAK8_jec = 0;
   jetAK8_jecUp = 0;
   jetAK8_jecDown = 0;
   jetAK8_IDLoose = 0;
   jetAK8_IDTight = 0;
   jetAK8_IDTightLepVeto = 0;
   jetAK8_muf = 0;
   jetAK8_phf = 0;
   jetAK8_emf = 0;
   jetAK8_nhf = 0;
   jetAK8_chf = 0;
   jetAK8_area = 0;
   jetAK8_cm = 0;
   jetAK8_nm = 0;
   jetAK8_che = 0;
   jetAK8_ne = 0;
   jetAK8_hf_hf = 0;
   jetAK8_hf_emf = 0;
   jetAK8_hof = 0;
   jetAK8_chm = 0;
   jetAK8_neHadMult = 0;
   jetAK8_phoMult = 0;
   jetAK8_nemf = 0;
   jetAK8_cemf = 0;
   jetAK8_charge = 0;
   jetAK8_csv = 0;
   jetAK8_deep_csv_b = 0;
   jetAK8_deep_csv_bb = 0;
   jetAK8_tau1 = 0;
   jetAK8_tau2 = 0;
   jetAK8_tau3 = 0;
   jetAK8_pull1 = 0;
   jetAK8_pull2 = 0;
   jetAK8_chs_pruned_mass = 0;
   jetAK8_chs_softdrop_mass = 0;
   jetAK8_chs_pruned_massCorr = 0;
   jetAK8_chs_pruned_jec = 0;
   jetAK8_chs_pruned_jecUp = 0;
   jetAK8_chs_pruned_jecDown = 0;
   jetAK8_chs_tau1 = 0;
   jetAK8_chs_tau2 = 0;
   jetAK8_chs_tau3 = 0;
   jetAK8_softdrop_mass = 0;
   jetAK8_softdrop_massCorr = 0;
   jetAK8_softdrop_jec = 0;
   jetAK8_softdrop_jecUp = 0;
   jetAK8_softdrop_jecDown = 0;
   jetAK8_puppi_softdrop_mass = 0;
   jetAK8_puppi_softdrop_massCorr = 0;
   jetAK8_puppi_softdrop_pt = 0;
   jetAK8_puppi_softdrop_eta = 0;
   jetAK8_puppi_softdrop_phi = 0;
   jetAK8_puppi_softdrop_e = 0;
   jetAK8_puppi_softdrop_jec = 0;
   jetAK8_puppi_pt = 0;
   jetAK8_puppi_eta = 0;
   jetAK8_puppi_mass = 0;
   jetAK8_puppi_phi = 0;
   jetAK8_puppi_e = 0;
   jetAK8_puppi_jec = 0;
   jetAK8_puppi_jecUp = 0;
   jetAK8_puppi_jecDown = 0;
   jetAK8_puppi_tau1 = 0;
   jetAK8_puppi_tau2 = 0;
   jetAK8_puppi_tau3 = 0;
   jetAK8_subjet_puppi_softdrop_N = 0;
   jetAK8_subjet_puppi_softdrop_pt = 0;
   jetAK8_subjet_puppi_softdrop_eta = 0;
   jetAK8_subjet_puppi_softdrop_mass = 0;
   jetAK8_subjet_puppi_softdrop_phi = 0;
   jetAK8_subjet_puppi_softdrop_e = 0;
   jetAK8_subjet_puppi_softdrop_charge = 0;
   jetAK8_subjet_puppi_softdrop_csv = 0;
   jetAK8_subjet_puppi_softdrop_deep_csv_b = 0;
   jetAK8_subjet_puppi_softdrop_deep_csv_bb = 0;
   HLT_isFired = 0;
   METraw_et = 0;
   METraw_phi = 0;
   METraw_sumEt = 0;
   MET_corrPx = 0;
   MET_corrPy = 0;
   MET_et = 0;
   MET_phi = 0;
   MET_puppi_et = 0;
   MET_puppi_phi = 0;
   MET_sumEt = 0;
   MET_JetEnUp = 0;
   MET_JetEnDown = 0;
   MET_JetResUp = 0;
   MET_JetResDown = 0;
   MET_UnclusteredEnUp = 0;
   MET_UnclusteredEnDown = 0;
   MET_significance = 0;
   MET_cov00 = 0;
   MET_cov10 = 0;
   MET_cov11 = 0;
   PV_chi2 = 0;
   PV_ndof = 0;
   PV_rho = 0;
   PV_z = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   //fChain->SetMakeClass(1);

   fChain->SetBranchAddress("ph_N", &ph_N, &b_ph_N);
   fChain->SetBranchAddress("ph_pdgId", &ph_pdgId, &b_ph_pdgId);
   fChain->SetBranchAddress("ph_charge", &ph_charge, &b_ph_charge);
   fChain->SetBranchAddress("ph_e", &ph_e, &b_ph_e);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_mass", &ph_mass, &b_ph_mass);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_et", &ph_et, &b_ph_et);
   fChain->SetBranchAddress("ph_rho", &ph_rho, &b_ph_rho);
   fChain->SetBranchAddress("ph_superCluster_eta", &ph_superCluster_eta, &b_ph_superCluster_eta);
   fChain->SetBranchAddress("ph_superCluster_phi", &ph_superCluster_phi, &b_ph_superCluster_phi);
   fChain->SetBranchAddress("ph_sigmaIetaIeta", &ph_sigmaIetaIeta, &b_ph_sigmaIetaIeta);
   fChain->SetBranchAddress("ph_hOverE", &ph_hOverE, &b_ph_hOverE);
   fChain->SetBranchAddress("ph_isoGamma", &ph_isoGamma, &b_ph_isoGamma);
   fChain->SetBranchAddress("ph_isoCh", &ph_isoCh, &b_ph_isoCh);
   fChain->SetBranchAddress("ph_passEleVeto", &ph_passEleVeto, &b_ph_passEleVeto);
   fChain->SetBranchAddress("ph_passLooseId", &ph_passLooseId, &b_ph_passLooseId);
   fChain->SetBranchAddress("ph_passMediumId", &ph_passMediumId, &b_ph_passMediumId);
   fChain->SetBranchAddress("ph_passTightId", &ph_passTightId, &b_ph_passTightId);
   fChain->SetBranchAddress("ph_mvaVal", &ph_mvaVal, &b_ph_mvaVal);
   fChain->SetBranchAddress("ph_mvaCat", &ph_mvaCat, &b_ph_mvaCat);
   fChain->SetBranchAddress("el_N", &el_N, &b_el_N);
   fChain->SetBranchAddress("el_pdgId", &el_pdgId, &b_el_pdgId);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_e", &el_e, &b_el_e);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_mass", &el_mass, &b_el_mass);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_et", &el_et, &b_el_et);
   fChain->SetBranchAddress("el_superCluster_eta", &el_superCluster_eta, &b_el_superCluster_eta);
   fChain->SetBranchAddress("el_pfRhoCorrRelIso03", &el_pfRhoCorrRelIso03, &b_el_pfRhoCorrRelIso03);
   fChain->SetBranchAddress("el_pfRhoCorrRelIso04", &el_pfRhoCorrRelIso04, &b_el_pfRhoCorrRelIso04);
   fChain->SetBranchAddress("el_pfDeltaCorrRelIso", &el_pfDeltaCorrRelIso, &b_el_pfDeltaCorrRelIso);
   fChain->SetBranchAddress("el_photonIso", &el_photonIso, &b_el_photonIso);
   fChain->SetBranchAddress("el_neutralHadIso", &el_neutralHadIso, &b_el_neutralHadIso);
   fChain->SetBranchAddress("el_chargedHadIso", &el_chargedHadIso, &b_el_chargedHadIso);
   fChain->SetBranchAddress("el_passConversionVeto", &el_passConversionVeto, &b_el_passConversionVeto);
   fChain->SetBranchAddress("el_full5x5_sigmaIetaIeta", &el_full5x5_sigmaIetaIeta, &b_el_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("el_dEtaIn", &el_dEtaIn, &b_el_dEtaIn);
   fChain->SetBranchAddress("el_dPhiIn", &el_dPhiIn, &b_el_dPhiIn);
   fChain->SetBranchAddress("el_hOverE", &el_hOverE, &b_el_hOverE);
   fChain->SetBranchAddress("el_relIsoWithDBeta", &el_relIsoWithDBeta, &b_el_relIsoWithDBeta);
   fChain->SetBranchAddress("el_ooEmooP", &el_ooEmooP, &b_el_ooEmooP);
   fChain->SetBranchAddress("el_expectedMissingInnerHits", &el_expectedMissingInnerHits, &b_el_expectedMissingInnerHits);
   fChain->SetBranchAddress("el_d0", &el_d0, &b_el_d0);
   fChain->SetBranchAddress("el_dz", &el_dz, &b_el_dz);
   fChain->SetBranchAddress("el_d0_allvertices", &el_d0_allvertices, &b_el_d0_allvertices);
   fChain->SetBranchAddress("el_dz_allvertices", &el_dz_allvertices, &b_el_dz_allvertices);
   fChain->SetBranchAddress("el_dr03EcalRecHitSumEt", &el_dr03EcalRecHitSumEt, &b_el_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("el_dr03HcalDepth1TowerSumEt", &el_dr03HcalDepth1TowerSumEt, &b_el_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("el_rho", &el_rho, &b_el_rho);
   fChain->SetBranchAddress("el_ecalDriven", &el_ecalDriven, &b_el_ecalDriven);
   fChain->SetBranchAddress("el_dEtaInSeed", &el_dEtaInSeed, &b_el_dEtaInSeed);
   fChain->SetBranchAddress("el_full5x5_e2x5Max", &el_full5x5_e2x5Max, &b_el_full5x5_e2x5Max);
   fChain->SetBranchAddress("el_full5x5_e5x5", &el_full5x5_e5x5, &b_el_full5x5_e5x5);
   fChain->SetBranchAddress("el_full5x5_e1x5", &el_full5x5_e1x5, &b_el_full5x5_e1x5);
   fChain->SetBranchAddress("el_full5x5_r9", &el_full5x5_r9, &b_el_full5x5_r9);
   fChain->SetBranchAddress("el_dr03TkSumPt", &el_dr03TkSumPt, &b_el_dr03TkSumPt);
   fChain->SetBranchAddress("el_superCluster_e", &el_superCluster_e, &b_el_superCluster_e);
   fChain->SetBranchAddress("el_hadronicOverEm", &el_hadronicOverEm, &b_el_hadronicOverEm);
   fChain->SetBranchAddress("el_seedEnergy", &el_seedEnergy, &b_el_seedEnergy);
   fChain->SetBranchAddress("el_isVetoElectron", &el_isVetoElectron, &b_el_isVetoElectron);
   fChain->SetBranchAddress("el_isLooseElectron", &el_isLooseElectron, &b_el_isLooseElectron);
   fChain->SetBranchAddress("el_isMediumElectron", &el_isMediumElectron, &b_el_isMediumElectron);
   fChain->SetBranchAddress("el_isTightElectron", &el_isTightElectron, &b_el_isTightElectron);
   fChain->SetBranchAddress("el_isHeepElectron", &el_isHeepElectron, &b_el_isHeepElectron);
   fChain->SetBranchAddress("el_isHltElectron", &el_isHltElectron, &b_el_isHltElectron);
   fChain->SetBranchAddress("el_isMVAMediumElectron", &el_isMVAMediumElectron, &b_el_isMVAMediumElectron);
   fChain->SetBranchAddress("el_isMVATightElectron", &el_isMVATightElectron, &b_el_isMVATightElectron);
   fChain->SetBranchAddress("el_MVAscore", &el_MVAscore, &b_el_MVAscore);
   fChain->SetBranchAddress("el_MVAcategory", &el_MVAcategory, &b_el_MVAcategory);
   fChain->SetBranchAddress("el_isVetoElectronWithoutIPandIsolation", &el_isVetoElectronWithoutIPandIsolation, &b_el_isVetoElectronWithoutIPandIsolation);
   fChain->SetBranchAddress("el_isMediumElectronWithoutIPandIsolation", &el_isMediumElectronWithoutIPandIsolation, &b_el_isMediumElectronWithoutIPandIsolation);
   fChain->SetBranchAddress("el_isTightElectronWithoutIPandIsolation", &el_isTightElectronWithoutIPandIsolation, &b_el_isTightElectronWithoutIPandIsolation);
   fChain->SetBranchAddress("el_isHeepElectronWithoutIPandIsolation", &el_isHeepElectronWithoutIPandIsolation, &b_el_isHeepElectronWithoutIPandIsolation);
   fChain->SetBranchAddress("el_isLooseElectronWithoutIPandIsolation", &el_isLooseElectronWithoutIPandIsolation, &b_el_isLooseElectronWithoutIPandIsolation);
   fChain->SetBranchAddress("el_SemileptonicPFIso", &el_SemileptonicPFIso, &b_el_SemileptonicPFIso);
   fChain->SetBranchAddress("el_SemileptonicCorrPFIso", &el_SemileptonicCorrPFIso, &b_el_SemileptonicCorrPFIso);
   fChain->SetBranchAddress("mu_N", &mu_N, &b_mu_N);
   fChain->SetBranchAddress("mu_pdgId", &mu_pdgId, &b_mu_pdgId);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("mu_e", &mu_e, &b_mu_e);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_mass", &mu_mass, &b_mu_mass);
   fChain->SetBranchAddress("mu_pt", &mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_isHighPtMuon", &mu_isHighPtMuon, &b_mu_isHighPtMuon);
   fChain->SetBranchAddress("mu_isTightMuon", &mu_isTightMuon, &b_mu_isTightMuon);
   fChain->SetBranchAddress("mu_isMediumMuon", &mu_isMediumMuon, &b_mu_isMediumMuon);
   fChain->SetBranchAddress("mu_isMediumMuonGH", &mu_isMediumMuonGH, &b_mu_isMediumMuonGH);
   fChain->SetBranchAddress("mu_isLooseMuon", &mu_isLooseMuon, &b_mu_isLooseMuon);
   fChain->SetBranchAddress("mu_isPFMuon", &mu_isPFMuon, &b_mu_isPFMuon);
   fChain->SetBranchAddress("mu_isSoftMuon", &mu_isSoftMuon, &b_mu_isSoftMuon);
   fChain->SetBranchAddress("mu_isGlobalMuon", &mu_isGlobalMuon, &b_mu_isGlobalMuon);
   fChain->SetBranchAddress("mu_isTrackerMuon", &mu_isTrackerMuon, &b_mu_isTrackerMuon);
   fChain->SetBranchAddress("mu_isTrackerHighPtMuon", &mu_isTrackerHighPtMuon, &b_mu_isTrackerHighPtMuon);
   fChain->SetBranchAddress("mu_pfDeltaCorrRelIso", &mu_pfDeltaCorrRelIso, &b_mu_pfDeltaCorrRelIso);
   fChain->SetBranchAddress("mu_photonIso", &mu_photonIso, &b_mu_photonIso);
   fChain->SetBranchAddress("mu_neutralHadIso", &mu_neutralHadIso, &b_mu_neutralHadIso);
   fChain->SetBranchAddress("mu_chargedHadIso", &mu_chargedHadIso, &b_mu_chargedHadIso);
   fChain->SetBranchAddress("mu_trackIso", &mu_trackIso, &b_mu_trackIso);
   fChain->SetBranchAddress("mu_trackCorrIso", &mu_trackCorrIso, &b_mu_trackCorrIso);
   fChain->SetBranchAddress("mu_d0", &mu_d0, &b_mu_d0);
   fChain->SetBranchAddress("mu_dz", &mu_dz, &b_mu_dz);
   fChain->SetBranchAddress("mu_d0_allvertices", &mu_d0_allvertices, &b_mu_d0_allvertices);
   fChain->SetBranchAddress("mu_dz_allvertices", &mu_dz_allvertices, &b_mu_dz_allvertices);
   fChain->SetBranchAddress("mu_innerTrack_pt", &mu_innerTrack_pt, &b_mu_innerTrack_pt);
   fChain->SetBranchAddress("mu_bestTrack_pt", &mu_bestTrack_pt, &b_mu_bestTrack_pt);
   fChain->SetBranchAddress("mu_bestTrack_ptErr", &mu_bestTrack_ptErr, &b_mu_bestTrack_ptErr);
   fChain->SetBranchAddress("mu_tunePTrack_pt", &mu_tunePTrack_pt, &b_mu_tunePTrack_pt);
   fChain->SetBranchAddress("mu_tunePTrack_ptErr", &mu_tunePTrack_ptErr, &b_mu_tunePTrack_ptErr);
   fChain->SetBranchAddress("mu_normChi2", &mu_normChi2, &b_mu_normChi2);
   fChain->SetBranchAddress("mu_trackerHits", &mu_trackerHits, &b_mu_trackerHits);
   fChain->SetBranchAddress("mu_matchedStations", &mu_matchedStations, &b_mu_matchedStations);
   fChain->SetBranchAddress("mu_pixelHits", &mu_pixelHits, &b_mu_pixelHits);
   fChain->SetBranchAddress("mu_globalHits", &mu_globalHits, &b_mu_globalHits);
   fChain->SetBranchAddress("mu_SemileptonicPFIso", &mu_SemileptonicPFIso, &b_mu_SemileptonicPFIso);
   fChain->SetBranchAddress("mu_SemileptonicCorrPFIso", &mu_SemileptonicCorrPFIso, &b_mu_SemileptonicCorrPFIso);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("jetAK4_N", &jetAK4_N, &b_jetAK4_N);
   fChain->SetBranchAddress("jetAK4_pt", &jetAK4_pt, &b_jetAK4_pt);
   fChain->SetBranchAddress("jetAK4_eta", &jetAK4_eta, &b_jetAK4_eta);
   fChain->SetBranchAddress("jetAK4_mass", &jetAK4_mass, &b_jetAK4_mass);
   fChain->SetBranchAddress("jetAK4_phi", &jetAK4_phi, &b_jetAK4_phi);
   fChain->SetBranchAddress("jetAK4_e", &jetAK4_e, &b_jetAK4_e);
   fChain->SetBranchAddress("jetAK4_jec", &jetAK4_jec, &b_jetAK4_jec);
   fChain->SetBranchAddress("jetAK4_jecUp", &jetAK4_jecUp, &b_jetAK4_jecUp);
   fChain->SetBranchAddress("jetAK4_jecDown", &jetAK4_jecDown, &b_jetAK4_jecDown);
   fChain->SetBranchAddress("jetAK4_IDLoose", &jetAK4_IDLoose, &b_jetAK4_IDLoose);
   fChain->SetBranchAddress("jetAK4_IDTight", &jetAK4_IDTight, &b_jetAK4_IDTight);
   fChain->SetBranchAddress("jetAK4_IDTightLepVeto", &jetAK4_IDTightLepVeto, &b_jetAK4_IDTightLepVeto);
   fChain->SetBranchAddress("jetAK4_PUIDdiscriminat", &jetAK4_PUIDdiscriminat, &b_jetAK4_PUIDdiscriminat);
   fChain->SetBranchAddress("jetAK4_PUIDloose", &jetAK4_PUIDloose, &b_jetAK4_PUIDloose);
   fChain->SetBranchAddress("jetAK4_PUIDmedium", &jetAK4_PUIDmedium, &b_jetAK4_PUIDmedium);
   fChain->SetBranchAddress("jetAK4_PUIDtight", &jetAK4_PUIDtight, &b_jetAK4_PUIDtight);
   fChain->SetBranchAddress("jetAK4_muf", &jetAK4_muf, &b_jetAK4_muf);
   fChain->SetBranchAddress("jetAK4_phf", &jetAK4_phf, &b_jetAK4_phf);
   fChain->SetBranchAddress("jetAK4_emf", &jetAK4_emf, &b_jetAK4_emf);
   fChain->SetBranchAddress("jetAK4_nhf", &jetAK4_nhf, &b_jetAK4_nhf);
   fChain->SetBranchAddress("jetAK4_chf", &jetAK4_chf, &b_jetAK4_chf);
   fChain->SetBranchAddress("jetAK4_area", &jetAK4_area, &b_jetAK4_area);
   fChain->SetBranchAddress("jetAK4_cm", &jetAK4_cm, &b_jetAK4_cm);
   fChain->SetBranchAddress("jetAK4_nm", &jetAK4_nm, &b_jetAK4_nm);
   fChain->SetBranchAddress("jetAK4_che", &jetAK4_che, &b_jetAK4_che);
   fChain->SetBranchAddress("jetAK4_ne", &jetAK4_ne, &b_jetAK4_ne);
   fChain->SetBranchAddress("jetAK4_hf_hf", &jetAK4_hf_hf, &b_jetAK4_hf_hf);
   fChain->SetBranchAddress("jetAK4_hf_emf", &jetAK4_hf_emf, &b_jetAK4_hf_emf);
   fChain->SetBranchAddress("jetAK4_hof", &jetAK4_hof, &b_jetAK4_hof);
   fChain->SetBranchAddress("jetAK4_chm", &jetAK4_chm, &b_jetAK4_chm);
   fChain->SetBranchAddress("jetAK4_neHadMult", &jetAK4_neHadMult, &b_jetAK4_neHadMult);
   fChain->SetBranchAddress("jetAK4_phoMult", &jetAK4_phoMult, &b_jetAK4_phoMult);
   fChain->SetBranchAddress("jetAK4_nemf", &jetAK4_nemf, &b_jetAK4_nemf);
   fChain->SetBranchAddress("jetAK4_cemf", &jetAK4_cemf, &b_jetAK4_cemf);
   fChain->SetBranchAddress("jetAK4_charge", &jetAK4_charge, &b_jetAK4_charge);
   fChain->SetBranchAddress("jetAK4_csv", &jetAK4_csv, &b_jetAK4_csv);
   fChain->SetBranchAddress("jetAK4_deep_csv_b", &jetAK4_deep_csv_b, &b_jetAK4_deep_csv_b);
   fChain->SetBranchAddress("jetAK4_deep_csv_bb", &jetAK4_deep_csv_bb, &b_jetAK4_deep_csv_bb);
   fChain->SetBranchAddress("jetAK4_vtxMass", &jetAK4_vtxMass, &b_jetAK4_vtxMass);
   fChain->SetBranchAddress("jetAK4_vtxNtracks", &jetAK4_vtxNtracks, &b_jetAK4_vtxNtracks);
   fChain->SetBranchAddress("jetAK4_vtx3DVal", &jetAK4_vtx3DVal, &b_jetAK4_vtx3DVal);
   fChain->SetBranchAddress("jetAK4_vtx3DSig", &jetAK4_vtx3DSig, &b_jetAK4_vtx3DSig);
   fChain->SetBranchAddress("jetAK4_etaAxis", &jetAK4_etaAxis, &b_jetAK4_etaAxis);
   fChain->SetBranchAddress("jetAK4_phiAxis", &jetAK4_phiAxis, &b_jetAK4_phiAxis);
   fChain->SetBranchAddress("jetAK4_phiT", &jetAK4_phiT, &b_jetAK4_phiT);
   fChain->SetBranchAddress("jetAK4_qg_axis1", &jetAK4_qg_axis1, &b_jetAK4_qg_axis1);
   fChain->SetBranchAddress("jetAK4_qg_axis2", &jetAK4_qg_axis2, &b_jetAK4_qg_axis2);
   fChain->SetBranchAddress("jetAK4_qg_charged", &jetAK4_qg_charged, &b_jetAK4_qg_charged);
   fChain->SetBranchAddress("jetAK4_qg_ptD", &jetAK4_qg_ptD, &b_jetAK4_qg_ptD);
   fChain->SetBranchAddress("jetAK4_qg_pt_dr", &jetAK4_qg_pt_dr, &b_jetAK4_qg_pt_dr);
   fChain->SetBranchAddress("jetAK8_N", &jetAK8_N, &b_jetAK8_N);
   fChain->SetBranchAddress("jetAK8_pt", &jetAK8_pt, &b_jetAK8_pt);
   fChain->SetBranchAddress("jetAK8_eta", &jetAK8_eta, &b_jetAK8_eta);
   fChain->SetBranchAddress("jetAK8_mass", &jetAK8_mass, &b_jetAK8_mass);
   fChain->SetBranchAddress("jetAK8_phi", &jetAK8_phi, &b_jetAK8_phi);
   fChain->SetBranchAddress("jetAK8_e", &jetAK8_e, &b_jetAK8_e);
   fChain->SetBranchAddress("jetAK8_jec", &jetAK8_jec, &b_jetAK8_jec);
   fChain->SetBranchAddress("jetAK8_jecUp", &jetAK8_jecUp, &b_jetAK8_jecUp);
   fChain->SetBranchAddress("jetAK8_jecDown", &jetAK8_jecDown, &b_jetAK8_jecDown);
   fChain->SetBranchAddress("jetAK8_IDLoose", &jetAK8_IDLoose, &b_jetAK8_IDLoose);
   fChain->SetBranchAddress("jetAK8_IDTight", &jetAK8_IDTight, &b_jetAK8_IDTight);
   fChain->SetBranchAddress("jetAK8_IDTightLepVeto", &jetAK8_IDTightLepVeto, &b_jetAK8_IDTightLepVeto);
   fChain->SetBranchAddress("jetAK8_muf", &jetAK8_muf, &b_jetAK8_muf);
   fChain->SetBranchAddress("jetAK8_phf", &jetAK8_phf, &b_jetAK8_phf);
   fChain->SetBranchAddress("jetAK8_emf", &jetAK8_emf, &b_jetAK8_emf);
   fChain->SetBranchAddress("jetAK8_nhf", &jetAK8_nhf, &b_jetAK8_nhf);
   fChain->SetBranchAddress("jetAK8_chf", &jetAK8_chf, &b_jetAK8_chf);
   fChain->SetBranchAddress("jetAK8_area", &jetAK8_area, &b_jetAK8_area);
   fChain->SetBranchAddress("jetAK8_cm", &jetAK8_cm, &b_jetAK8_cm);
   fChain->SetBranchAddress("jetAK8_nm", &jetAK8_nm, &b_jetAK8_nm);
   fChain->SetBranchAddress("jetAK8_che", &jetAK8_che, &b_jetAK8_che);
   fChain->SetBranchAddress("jetAK8_ne", &jetAK8_ne, &b_jetAK8_ne);
   fChain->SetBranchAddress("jetAK8_hf_hf", &jetAK8_hf_hf, &b_jetAK8_hf_hf);
   fChain->SetBranchAddress("jetAK8_hf_emf", &jetAK8_hf_emf, &b_jetAK8_hf_emf);
   fChain->SetBranchAddress("jetAK8_hof", &jetAK8_hof, &b_jetAK8_hof);
   fChain->SetBranchAddress("jetAK8_chm", &jetAK8_chm, &b_jetAK8_chm);
   fChain->SetBranchAddress("jetAK8_neHadMult", &jetAK8_neHadMult, &b_jetAK8_neHadMult);
   fChain->SetBranchAddress("jetAK8_phoMult", &jetAK8_phoMult, &b_jetAK8_phoMult);
   fChain->SetBranchAddress("jetAK8_nemf", &jetAK8_nemf, &b_jetAK8_nemf);
   fChain->SetBranchAddress("jetAK8_cemf", &jetAK8_cemf, &b_jetAK8_cemf);
   fChain->SetBranchAddress("jetAK8_charge", &jetAK8_charge, &b_jetAK8_charge);
   fChain->SetBranchAddress("jetAK8_csv", &jetAK8_csv, &b_jetAK8_csv);
   fChain->SetBranchAddress("jetAK8_deep_csv_b", &jetAK8_deep_csv_b, &b_jetAK8_deep_csv_b);
   fChain->SetBranchAddress("jetAK8_deep_csv_bb", &jetAK8_deep_csv_bb, &b_jetAK8_deep_csv_bb);
   fChain->SetBranchAddress("jetAK8_tau1", &jetAK8_tau1, &b_jetAK8_tau1);
   fChain->SetBranchAddress("jetAK8_tau2", &jetAK8_tau2, &b_jetAK8_tau2);
   fChain->SetBranchAddress("jetAK8_tau3", &jetAK8_tau3, &b_jetAK8_tau3);
   fChain->SetBranchAddress("jetAK8_pull1", &jetAK8_pull1, &b_jetAK8_pull1);
   fChain->SetBranchAddress("jetAK8_pull2", &jetAK8_pull2, &b_jetAK8_pull2);
   fChain->SetBranchAddress("jetAK8_chs_pruned_mass", &jetAK8_chs_pruned_mass, &b_jetAK8_chs_pruned_mass);
   fChain->SetBranchAddress("jetAK8_chs_softdrop_mass", &jetAK8_chs_softdrop_mass, &b_jetAK8_chs_softdrop_mass);
   fChain->SetBranchAddress("jetAK8_chs_pruned_massCorr", &jetAK8_chs_pruned_massCorr, &b_jetAK8_chs_pruned_massCorr);
   fChain->SetBranchAddress("jetAK8_chs_pruned_jec", &jetAK8_chs_pruned_jec, &b_jetAK8_chs_pruned_jec);
   fChain->SetBranchAddress("jetAK8_chs_pruned_jecUp", &jetAK8_chs_pruned_jecUp, &b_jetAK8_chs_pruned_jecUp);
   fChain->SetBranchAddress("jetAK8_chs_pruned_jecDown", &jetAK8_chs_pruned_jecDown, &b_jetAK8_chs_pruned_jecDown);
   fChain->SetBranchAddress("jetAK8_chs_tau1", &jetAK8_chs_tau1, &b_jetAK8_chs_tau1);
   fChain->SetBranchAddress("jetAK8_chs_tau2", &jetAK8_chs_tau2, &b_jetAK8_chs_tau2);
   fChain->SetBranchAddress("jetAK8_chs_tau3", &jetAK8_chs_tau3, &b_jetAK8_chs_tau3);
   fChain->SetBranchAddress("jetAK8_softdrop_mass", &jetAK8_softdrop_mass, &b_jetAK8_softdrop_mass);
   fChain->SetBranchAddress("jetAK8_softdrop_massCorr", &jetAK8_softdrop_massCorr, &b_jetAK8_softdrop_massCorr);
   fChain->SetBranchAddress("jetAK8_softdrop_jec", &jetAK8_softdrop_jec, &b_jetAK8_softdrop_jec);
   fChain->SetBranchAddress("jetAK8_softdrop_jecUp", &jetAK8_softdrop_jecUp, &b_jetAK8_softdrop_jecUp);
   fChain->SetBranchAddress("jetAK8_softdrop_jecDown", &jetAK8_softdrop_jecDown, &b_jetAK8_softdrop_jecDown);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_mass", &jetAK8_puppi_softdrop_mass, &b_jetAK8_puppi_softdrop_mass);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_massCorr", &jetAK8_puppi_softdrop_massCorr, &b_jetAK8_puppi_softdrop_massCorr);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_pt", &jetAK8_puppi_softdrop_pt, &b_jetAK8_puppi_softdrop_pt);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_eta", &jetAK8_puppi_softdrop_eta, &b_jetAK8_puppi_softdrop_eta);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_phi", &jetAK8_puppi_softdrop_phi, &b_jetAK8_puppi_softdrop_phi);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_e", &jetAK8_puppi_softdrop_e, &b_jetAK8_puppi_softdrop_e);
   fChain->SetBranchAddress("jetAK8_puppi_softdrop_jec", &jetAK8_puppi_softdrop_jec, &b_jetAK8_puppi_softdrop_jec);
   fChain->SetBranchAddress("jetAK8_puppi_N", &jetAK8_puppi_N, &b_jetAK8_puppi_N);
   fChain->SetBranchAddress("jetAK8_puppi_pt", &jetAK8_puppi_pt, &b_jetAK8_puppi_pt);
   fChain->SetBranchAddress("jetAK8_puppi_eta", &jetAK8_puppi_eta, &b_jetAK8_puppi_eta);
   fChain->SetBranchAddress("jetAK8_puppi_mass", &jetAK8_puppi_mass, &b_jetAK8_puppi_mass);
   fChain->SetBranchAddress("jetAK8_puppi_phi", &jetAK8_puppi_phi, &b_jetAK8_puppi_phi);
   fChain->SetBranchAddress("jetAK8_puppi_e", &jetAK8_puppi_e, &b_jetAK8_puppi_e);
   fChain->SetBranchAddress("jetAK8_puppi_jec", &jetAK8_puppi_jec, &b_jetAK8_puppi_jec);
   fChain->SetBranchAddress("jetAK8_puppi_jecUp", &jetAK8_puppi_jecUp, &b_jetAK8_puppi_jecUp);
   fChain->SetBranchAddress("jetAK8_puppi_jecDown", &jetAK8_puppi_jecDown, &b_jetAK8_puppi_jecDown);
   fChain->SetBranchAddress("jetAK8_puppi_tau1", &jetAK8_puppi_tau1, &b_jetAK8_puppi_tau1);
   fChain->SetBranchAddress("jetAK8_puppi_tau2", &jetAK8_puppi_tau2, &b_jetAK8_puppi_tau2);
   fChain->SetBranchAddress("jetAK8_puppi_tau3", &jetAK8_puppi_tau3, &b_jetAK8_puppi_tau3);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_N", &jetAK8_subjet_puppi_softdrop_N, &b_jetAK8_subjet_puppi_softdrop_N);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_pt", &jetAK8_subjet_puppi_softdrop_pt, &b_jetAK8_subjet_puppi_softdrop_pt);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_eta", &jetAK8_subjet_puppi_softdrop_eta, &b_jetAK8_subjet_puppi_softdrop_eta);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_mass", &jetAK8_subjet_puppi_softdrop_mass, &b_jetAK8_subjet_puppi_softdrop_mass);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_phi", &jetAK8_subjet_puppi_softdrop_phi, &b_jetAK8_subjet_puppi_softdrop_phi);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_e", &jetAK8_subjet_puppi_softdrop_e, &b_jetAK8_subjet_puppi_softdrop_e);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_charge", &jetAK8_subjet_puppi_softdrop_charge, &b_jetAK8_subjet_puppi_softdrop_charge);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_csv", &jetAK8_subjet_puppi_softdrop_csv, &b_jetAK8_subjet_puppi_softdrop_csv);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_deep_csv_b", &jetAK8_subjet_puppi_softdrop_deep_csv_b, &b_jetAK8_subjet_puppi_softdrop_deep_csv_b);
   fChain->SetBranchAddress("jetAK8_subjet_puppi_softdrop_deep_csv_bb", &jetAK8_subjet_puppi_softdrop_deep_csv_bb, &b_jetAK8_subjet_puppi_softdrop_deep_csv_bb);
   fChain->SetBranchAddress("HLT_isFired", &HLT_isFired, &b_HLT_isFired);
   fChain->SetBranchAddress("passFilter_HBHE", &passFilter_HBHE, &b_passFilter_HBHE_);
   fChain->SetBranchAddress("passFilter_HBHELoose", &passFilter_HBHELoose, &b_passFilter_HBHELoose_);
   fChain->SetBranchAddress("passFilter_HBHETight", &passFilter_HBHETight, &b_passFilter_HBHETight_);
   fChain->SetBranchAddress("passFilter_HBHEIso", &passFilter_HBHEIso, &b_passFilter_HBHEIso_);
   fChain->SetBranchAddress("passFilter_CSCHalo", &passFilter_CSCHalo, &b_passFilter_CSCHalo_);
   fChain->SetBranchAddress("passFilter_CSCTightHalo2015", &passFilter_CSCTightHalo2015, &b_passFilter_CSCTightHalo2015_);
   fChain->SetBranchAddress("passFilter_HCALlaser", &passFilter_HCALlaser, &b_passFilter_HCALlaser_);
   fChain->SetBranchAddress("passFilter_ECALDeadCell", &passFilter_ECALDeadCell, &b_passFilter_ECALDeadCell_);
   fChain->SetBranchAddress("passFilter_GoodVtx", &passFilter_GoodVtx, &b_passFilter_GoodVtx_);
   fChain->SetBranchAddress("passFilter_TrkFailure", &passFilter_TrkFailure, &b_passFilter_TrkFailure_);
   fChain->SetBranchAddress("passFilter_EEBadSc", &passFilter_EEBadSc, &b_passFilter_EEBadSc_);
   fChain->SetBranchAddress("passFilter_ECALlaser", &passFilter_ECALlaser, &b_passFilter_ECALlaser_);
   fChain->SetBranchAddress("passFilter_TrkPOG", &passFilter_TrkPOG, &b_passFilter_TrkPOG_);
   fChain->SetBranchAddress("passFilter_TrkPOG_manystrip", &passFilter_TrkPOG_manystrip, &b_passFilter_TrkPOG_manystrip_);
   fChain->SetBranchAddress("passFilter_TrkPOG_toomanystrip", &passFilter_TrkPOG_toomanystrip, &b_passFilter_TrkPOG_toomanystrip_);
   fChain->SetBranchAddress("passFilter_TrkPOG_logError", &passFilter_TrkPOG_logError, &b_passFilter_TrkPOG_logError_);
   fChain->SetBranchAddress("passFilter_METFilters", &passFilter_METFilters, &b_passFilter_METFilters_);
   fChain->SetBranchAddress("passFilter_CSCTightHaloTrkMuUnvetoFilter", &passFilter_CSCTightHaloTrkMuUnvetoFilter, &b_passFilter_CSCTightHaloTrkMuUnvetoFilter_);
   fChain->SetBranchAddress("passFilter_globalTightHalo2016", &passFilter_globalTightHalo2016, &b_passFilter_globalTightHalo2016_);
   fChain->SetBranchAddress("passFilter_HcalStripHalo", &passFilter_HcalStripHalo, &b_passFilter_HcalStripHalo_);
   fChain->SetBranchAddress("passFilter_chargedHadronTrackResolution", &passFilter_chargedHadronTrackResolution, &b_passFilter_chargedHadronTrackResolution_);
   fChain->SetBranchAddress("passFilter_muonBadTrack", &passFilter_muonBadTrack, &b_passFilter_muonBadTrack_);
   fChain->SetBranchAddress("flag_badMuons", &flag_badMuons, &b_flag_badMuons_);
   fChain->SetBranchAddress("flag_duplicateMuons", &flag_duplicateMuons, &b_flag_duplicateMuons_);
   fChain->SetBranchAddress("flag_nobadMuons", &flag_nobadMuons, &b_flag_nobadMuons_);
   fChain->SetBranchAddress("METraw_et", &METraw_et, &b_METraw_et);
   fChain->SetBranchAddress("METraw_phi", &METraw_phi, &b_METraw_phi);
   fChain->SetBranchAddress("METraw_sumEt", &METraw_sumEt, &b_METraw_sumEt);
   fChain->SetBranchAddress("MET_corrPx", &MET_corrPx, &b_MET_corrPx);
   fChain->SetBranchAddress("MET_corrPy", &MET_corrPy, &b_MET_corrPy);
   fChain->SetBranchAddress("MET_et", &MET_et, &b_MET_et);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_puppi_et", &MET_puppi_et, &b_MET_puppi_et);
   fChain->SetBranchAddress("MET_puppi_phi", &MET_puppi_phi, &b_MET_puppi_phi);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("MET_JetEnUp", &MET_JetEnUp, &b_MET_JetEnUp);
   fChain->SetBranchAddress("MET_JetEnDown", &MET_JetEnDown, &b_MET_JetEnDown);
   fChain->SetBranchAddress("MET_JetResUp", &MET_JetResUp, &b_MET_JetResUp);
   fChain->SetBranchAddress("MET_JetResDown", &MET_JetResDown, &b_MET_JetResDown);
   fChain->SetBranchAddress("MET_UnclusteredEnUp", &MET_UnclusteredEnUp, &b_MET_UnclusteredEnUp);
   fChain->SetBranchAddress("MET_UnclusteredEnDown", &MET_UnclusteredEnDown, &b_MET_UnclusteredEnDown);
   fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   fChain->SetBranchAddress("MET_cov00", &MET_cov00, &b_MET_cov00);
   fChain->SetBranchAddress("MET_cov10", &MET_cov10, &b_MET_cov10);
   fChain->SetBranchAddress("MET_cov11", &MET_cov11, &b_MET_cov11);
   fChain->SetBranchAddress("EVENT_event", &EVENT_event, &b_EVENT_event);
   fChain->SetBranchAddress("EVENT_run", &EVENT_run, &b_EVENT_run);
   fChain->SetBranchAddress("EVENT_lumiBlock", &EVENT_lumiBlock, &b_EVENT_lumiBlock);
   fChain->SetBranchAddress("PV_N", &PV_N, &b_PV_N);
   fChain->SetBranchAddress("PV_filter", &PV_filter, &b_PV_filter);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_rho", &PV_rho, &b_PV_rho);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   Notify();
}

Bool_t smallify::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void smallify::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
#endif // #ifdef smallify_cxx
