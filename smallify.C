#define smallify_cxx
#include <iostream>
#include <iomanip>
#include "smallify.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

using namespace std;

void smallify::Loop(std::string outputFileName) {
  //   This is the loop skeleton where:
  //     jentry is the global entry number in the chain
  //     ientry is the entry number in the current Tree
  //   Note that the argument to GetEntry must be:
  //     jentry for TChain::GetEntry
  //     ientry for TTree::GetEntry and TBranch::GetEntry
  fChain->SetBranchStatus("*",0);  // disable all branches
  fChain->SetBranchStatus("HLT_isFired"                  , 1);  
  fChain->SetBranchStatus("passFilter_GoodVtx"           , 1);  
  fChain->SetBranchStatus("passFilter_CSCTightHalo2015"  , 1);  
  fChain->SetBranchStatus("passFilter_muonBadTrack"      , 1);  
  fChain->SetBranchStatus("passFilter_HBHE"              , 1);  
  fChain->SetBranchStatus("passFilter_HBHEIso"           , 1);  
  fChain->SetBranchStatus("passFilter_EEBadSc"           , 1);  
  fChain->SetBranchStatus("passFilter_EEBadSc"           , 1);  
  fChain->SetBranchStatus("jetAK8_IDLoose"               , 1);
  fChain->SetBranchStatus("ph_mvaVal"                    , 1);
  fChain->SetBranchStatus("ph_mvaCat"                    , 1);
  fChain->SetBranchStatus("ph_passEleVeto"               , 1);
  //fChain->SetBranchStatus("genParticle_dau"              , 1);
  //fChain->SetBranchStatus("lheV_pt"                      , 1);
  //fChain->SetBranchStatus("lheHT"                        , 1);
  //fChain->SetBranchStatus("lheNj"                        , 1);
  //fChain->SetBranchStatus("genWeight"                    , 1);
  //fChain->SetBranchStatus("qScale"                       , 1);
  //fChain->SetBranchStatus("PDF_x"                        , 1);
  //fChain->SetBranchStatus("PDF_xPDF"                     , 1);
  //fChain->SetBranchStatus("PDF_id"                       , 1);
  //fChain->SetBranchStatus("jetAK4_partonFlavour"         , 1);
  //fChain->SetBranchStatus("jetAK4_hadronFlavour"         , 1);
  //fChain->SetBranchStatus("jetAK4_genParton_pdgID"       , 1);
  //fChain->SetBranchStatus("jetAK4_nbHadrons"             , 1);
  //fChain->SetBranchStatus("jetAK4_ncHadrons"             , 1);
  fChain->SetBranchStatus("ph_N"                         , 1);
  fChain->SetBranchStatus("ph_pdgId"                     , 1);
  fChain->SetBranchStatus("ph_charge"                    , 1);
  fChain->SetBranchStatus("ph_e"                         , 1);
  fChain->SetBranchStatus("ph_eta"                       , 1);
  fChain->SetBranchStatus("ph_phi"                       , 1);
  fChain->SetBranchStatus("ph_mass"                      , 1);
  fChain->SetBranchStatus("ph_pt"                        , 1);
  fChain->SetBranchStatus("ph_et"                        , 1);
  fChain->SetBranchStatus("ph_rho"                       , 1);
  fChain->SetBranchStatus("ph_superCluster_eta"          , 1);
  fChain->SetBranchStatus("ph_superCluster_phi"          , 1);
  fChain->SetBranchStatus("ph_sigmaIetaIeta"             , 1);
  fChain->SetBranchStatus("ph_hOverE"                    , 1);
  fChain->SetBranchStatus("ph_isoGamma"                  , 1);
  fChain->SetBranchStatus("ph_isoCh"                     , 1);
  fChain->SetBranchStatus("ph_passEleVeto"               , 1);
  fChain->SetBranchStatus("ph_passLooseId"               , 1);
  fChain->SetBranchStatus("ph_passMediumId"              , 1);
  fChain->SetBranchStatus("ph_passTightId"               , 1);
  fChain->SetBranchStatus("ph_mvaVal"                    , 1);
  fChain->SetBranchStatus("ph_mvaCat"                    , 1);
  fChain->SetBranchStatus("rho"                          , 1);
  fChain->SetBranchStatus("jetAK4_N"                     , 1);
  fChain->SetBranchStatus("jetAK4_pt"                    , 1);
  fChain->SetBranchStatus("jetAK4_eta"                   , 1);
  fChain->SetBranchStatus("jetAK4_mass"                  , 1);
  fChain->SetBranchStatus("jetAK4_phi"                   , 1);
  fChain->SetBranchStatus("jetAK4_e"                     , 1);
  fChain->SetBranchStatus("jetAK4_jec"                   , 1);
  fChain->SetBranchStatus("jetAK4_IDLoose"               , 1);
  fChain->SetBranchStatus("jetAK4_IDTight"               , 1);
  fChain->SetBranchStatus("jetAK4_IDTightLepVeto"        , 1);
  fChain->SetBranchStatus("jetAK4_charge"                , 1);
  //fChain->SetBranchStatus("jetAK4_cisv"                  , 1);
  fChain->SetBranchStatus("jetAK4_vtxMass"               , 1);
  fChain->SetBranchStatus("jetAK4_vtxNtracks"            , 1);
  fChain->SetBranchStatus("jetAK4_vtx3DVal"              , 1);
  fChain->SetBranchStatus("jetAK4_vtx3DSig"              , 1);
  fChain->SetBranchStatus("jetAK8_N"                     , 1);
  fChain->SetBranchStatus("jetAK8_pt"                    , 1);
  fChain->SetBranchStatus("jetAK8_eta"                   , 1);
  fChain->SetBranchStatus("jetAK8_mass"                  , 1);
  fChain->SetBranchStatus("jetAK8_phi"                   , 1);
  fChain->SetBranchStatus("jetAK8_e"                     , 1);
  fChain->SetBranchStatus("jetAK8_jec"                   , 1);
  fChain->SetBranchStatus("jetAK8_jecUp"                 , 1);
  fChain->SetBranchStatus("jetAK8_jecDown"               , 1);
  fChain->SetBranchStatus("jetAK8_IDLoose"               , 1);
  fChain->SetBranchStatus("jetAK8_IDTight"               , 1);
  fChain->SetBranchStatus("jetAK8_IDTightLepVeto"        , 1);
  fChain->SetBranchStatus("jetAK8_charge"                , 1);
  fChain->SetBranchStatus("jetAK8_Hbbtag"                , 1);
  fChain->SetBranchStatus("jetAK8_csv"                   , 1);
  fChain->SetBranchStatus("jetAK8_tau1"                  , 1);
  fChain->SetBranchStatus("jetAK8_tau2"                  , 1);
  fChain->SetBranchStatus("jetAK8_tau3"                  , 1);
  fChain->SetBranchStatus("jetAK8_pruned_mass"           , 1);
  fChain->SetBranchStatus("jetAK8_pruned_massCorr"       , 1);
  fChain->SetBranchStatus("jetAK8_pruned_jec"            , 1);
  fChain->SetBranchStatus("jetAK8_pruned_jecUp"          , 1);
  fChain->SetBranchStatus("jetAK8_pruned_jecDown"        , 1);
  fChain->SetBranchStatus("jetAK8_softdrop_mass"         , 1);
  fChain->SetBranchStatus("jetAK8_softdrop_massCorr"     , 1);
  fChain->SetBranchStatus("jetAK8_softdrop_jec"          , 1);
  fChain->SetBranchStatus("jetAK8_puppi_pt"                , 1);
  fChain->SetBranchStatus("jetAK8_puppi_softdrop_mass"     , 1);
  fChain->SetBranchStatus("jetAK8_puppi_softdrop_massCorr" , 1);
  fChain->SetBranchStatus("jetAK8_puppi_e"                 , 1);
  fChain->SetBranchStatus("jetAK8_puppi_eta"               , 1);
  fChain->SetBranchStatus("jetAK8_puppi_phi"               , 1);
  fChain->SetBranchStatus("jetAK8_puppi_tau1"              , 1);
  fChain->SetBranchStatus("jetAK8_puppi_tau2"              , 1);
  fChain->SetBranchStatus("jetAK8_puppi_tau3 "             , 1);
  fChain->SetBranchStatus("EVENT_event"                  , 1);
  fChain->SetBranchStatus("EVENT_run"                    , 1);
  fChain->SetBranchStatus("EVENT_lumiBlock"              , 1);

  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntries();

  Long64_t nbytes = 0, nb = 0;
  TFile* skimFile = new TFile(outputFileName.c_str(), "recreate");
  TDirectory* dir = skimFile -> mkdir("ntuplizer");
  dir->cd();
  TTree* skimTree = fChain->CloneTree(0);


  for (Long64_t jentry=0; jentry<nentries;++jentry) {
    if (stopAfter==jentry) break;
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);  nbytes += nb;
    if (jentry%25000 == 0) {
      cout.flush();
      cout << fixed << setw(4) << setprecision(2) << (float(jentry)/float(nentries))*100 << "% done: Scanned " << jentry << " events." << '\r';
    }
    if (useTriggerInfo) {
      passTrig = false;
      for(map<string,bool>::iterator it = HLT_isFired->begin(); it != HLT_isFired->end(); ++it) {
        if (it->first == "HLT_Photon175_v1" || it->first == "HLT_Photon175_v2" ||  it->first == "HLT_Photon175_v3" || "HLT_Photon175_v4" || "HLT_Photon175_v5" ||  it->first =="HLT_Photon165_HE10_v1" ||  it->first =="HLT_Photon165_HE10_v2" ||  it->first =="HLT_Photon165_HE10_v3" || it->first =="HLT_Photon165_HE10_v4"|| it->first =="HLT_Photon165_HE10_v5")  {
          passTrig |= (1==it->second);
        }
      }
      if (!passTrig) continue;
    }
    if (Cut(ientry) < 0) continue;
    skimTree->Fill();
  }
  skimFile->Write();
  skimFile->Close();
}

Int_t smallify::Cut(Long64_t entry) {
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  passPh  = false;
  passJet = false;
  iPh = 0;
  phVec.SetPtEtaPhiE(0,0,0,0);
  jetVec.SetPtEtaPhiE(0,0,0,0);
  for(std::vector<float>::iterator it = ph_pt->begin(); it != ph_pt->end(); ++it) {
    if (*it > 180                && 
        ( (ph_mvaCat->at(iPh)==0 && ph_mvaVal->at(iPh)>0.20) || 
          (ph_mvaCat->at(iPh)==1 && ph_mvaVal->at(iPh)>0.20) 
        )                        && 
        ph_passEleVeto->at(iPh)  &&
        std::abs(ph_eta->at(iPh)) < 2.4

       )  {
      passPh = true;
      phVec.SetPtEtaPhiE(ph_pt->at(iPh), ph_eta->at(iPh), ph_phi->at(iPh), ph_e->at(iPh));

      iJet = 0;
      for(std::vector<float>::iterator jt = jetAK8_pt->begin(); jt != jetAK8_pt->end(); ++jt) {
      //TODO: Add jet eta cut???  
	if ( *jt > 180                             && 
            jetAK8_IDLoose->at(iJet)   //            &&
            //jetAK8_pruned_massCorr->at(iJet) > 30 
           ) {
          passJet = true;
          jetVec.SetPtEtaPhiE(jetAK8_pt->at(iJet), jetAK8_eta->at(iJet), jetAK8_phi->at(iJet), jetAK8_e->at(iJet));
          if (phVec.DeltaR(jetVec) < 1.1) {
            passJet = false;
          }
        }
        if (passJet) break;
        ++iJet;
      }

    }
    ++iPh;
  }
  if (  passPh && passJet ) return 1;
  else return -1;
}
