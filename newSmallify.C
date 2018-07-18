#define newSmallify_cxx
#include "newSmallify.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void newSmallify::Loop(std::string outputFileName)
{
//   In a ROOT session, you can do:
//      root> .L newSmallify.C
//      root> newSmallify t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
  TFile* skimFile = new TFile(outputFileName.c_str(), "recreate");
  TDirectory* dir = skimFile -> mkdir("ntuplizer");
  dir->cd();
  TTree* skimTree = fChain->CloneTree(0);

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {



//    if (stopAfter==jentry) break;
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);  nbytes += nb;
    if (jentry%25000 == 0) {
  //    cout.flush();
    //  cout << fixed << setw(4) << setprecision(2) << (float(jentry)/float(nentries))*100 << "% done: Scanned " << jentry << " events." << '\r';
    }
  //  if (useTriggerInfo) {
  //    passTrig = false;
  //    for(map<string,bool>::iterator it = HLT_isFired->begin(); it != HLT_isFired->end(); ++it) {
  //      if (it->first.find( "HLT_Photon200_v") != std::string::npos)  {
  //        passTrig |= (1==it->second);
  //      }
  //    }
  //    if (!passTrig) continue;
  //  }
  //  if (Cut(ientry) < 0) continue;
    //cout << "passed cut" <<endl;
    skimTree->Fill();
  }
  skimFile->Write();
  skimFile->Close();



}
