#define KNUTree_cxx
#include "KNUTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TMath.h>

void KNUTree::Loop()
{
  //   In a ROOT session, you can do:
  //      Root > .L KNUTree.C
  //      Root > KNUTree t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
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
  if (fChain == NULL) { std::cerr << "fChain is NULL! Abort." << std::endl; return;}

  Long64_t nentries = fChain->GetEntriesFast();

  Long64_t nbytes = 0, nb = 0;

  // Declare derived variables
  Double_t tofChargeAsymmetry;
  Double_t rigAsymmetry;
  Double_t rInv;
  Double_t invrBeta;
  Double_t betaCorrected;
  Double_t trackerMeanEnergyDeposit;
  Double_t trackerTruncMeanEnergyDeposit;
  Double_t tofMeanEdep;
  Double_t uTofMeanEdep;
  Double_t lTofMeanEdep;
  Double_t tofEdepAsymmetry;
  Double_t betaGamma;
  Double_t Z;
  Double_t mInv;
  Double_t mass;
  Double_t gamma;
  Double_t gammaM;
  Double_t invGammaM;
  Double_t genBeta;
  Double_t betaAsymmetry;
  Double_t betaAccuracy;
  Double_t betaCompatibility;
  Double_t betaDifference;
  Double_t KineticEnergyPerNucleon;
  Double_t DeltaEdep;
  Float_t logChi2X;
  Float_t logChi2Y;
  Float_t richCharge;
  Int_t tofCounter = 0;

  // Loop over entries !
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    // calculate charge correction first to be used in the following cut process
    if( trkInnerCharge != 0 ) CorrectedTrkInnerZ = trkInnerCharge * GetCorrectedTrackerCharge(tofBeta, trkInnerCharge);
    if (Cut(ientry) < 0) continue;

    // Calculate values
    rInv                          = 1. / trkRigidityInner;
    invrBeta                      = 1. / tofBeta;
    trackerMeanEnergyDeposit      =      GetMeanEdep(9, trkEdepLayerJ);
    tofMeanEdep                   =      GetMeanEdep(4, tofDepositedEnergyOnLayer);
    uTofMeanEdep                  =      GetMeanEdep(2, tofDepositedEnergyOnLayer);
    tofCounter = 0;
    lTofMeanEdep = 0;
    for( Int_t j = 2; j < 4; ++j )
    {
      if( tofDepositedEnergyOnLayer[j] != 0 )
      {
        lTofMeanEdep += tofDepositedEnergyOnLayer[j];
        tofCounter++;
      }
    }
    if( tofCounter != 0 ) lTofMeanEdep /= (Double_t)tofCounter;
    else lTofMeanEdep = 0;

    DeltaEdep = 0;
    for( Int_t j = 1 ; j <= 8; j++ )
    {
      if( trkEdepLayerJ[j] != 0 && trkEdepLayerJ[j+1] != 0 )
      {
        DeltaEdep += trkEdepLayerJ[j+1] - trkEdepLayerJ[j];
      }
    }

    betaGamma                = tofBeta / TMath::Sqrt( TMath::Abs( 1. - tofBeta * tofBeta ) );
    gamma                    = 1./TMath::Sqrt( TMath::Abs( 1. - tofBeta * tofBeta ));
    Z                        = 2.;
    mInv                     = ( betaGamma / Z ) * rInv;
    mass                     = 1./mInv;
    invGammaM                = mInv/gamma;
    betaAccuracy             = fabs( genBeta - tofBeta ) / genBeta;
    logChi2X                 = TMath::Log10(trkReducedChisquareInnerX);
    logChi2Y                 = TMath::Log10(trkReducedChisquareInnerY);
    KineticEnergyPerNucleon  = ( gamma - 1. ) * .938;
    if( trkLayerJQ[0]  != 0 ) CorrectedTrkL1Z    = trkLayerJQ[0]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[0]);
    if( trkLayerJQ[1]  != 0 ) CorrectedTrkL2Z    = trkLayerJQ[1]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[1]);
    if( trkLayerJQ[2]  != 0 ) CorrectedTrkL3Z    = trkLayerJQ[2]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[2]);
    if( trkLayerJQ[3]  != 0 ) CorrectedTrkL4Z    = trkLayerJQ[3]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[3]);
    if( trkLayerJQ[4]  != 0 ) CorrectedTrkL5Z    = trkLayerJQ[4]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[4]);
    if( trkLayerJQ[5]  != 0 ) CorrectedTrkL6Z    = trkLayerJQ[5]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[5]);
    if( trkLayerJQ[6]  != 0 ) CorrectedTrkL7Z    = trkLayerJQ[6]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[6]);
    if( trkLayerJQ[7]  != 0 ) CorrectedTrkL8Z    = trkLayerJQ[7]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[7]);
    if( trkLayerJQ[8]  != 0 ) CorrectedTrkL9Z    = trkLayerJQ[8]  * GetCorrectedTrackerCharge(tofBeta, trkLayerJQ[8]);

    if ( trkRigidityInner > 200 ) hTofBetaResolution->Fill( tofBeta );
    hRigidity                                   ->Fill( trkRigidityInner );
    hRigidity_Beta                              ->Fill( trkRigidityInner, tofBeta );
    hKinetic_Rigidity                           ->Fill( KineticEnergyPerNucleon, trkRigidityInner );
    hTofBeta_Rigidity                           ->Fill( tofBeta, trkRigidityInner );
    hTofBeta_InverseRigidity                    ->Fill( tofBeta, rInv );
    hTofBeta_Mass                               ->Fill( tofBeta, mass );
    hTofBeta_InverseMass                        ->Fill( tofBeta, mInv );
    hTofBeta_GammaM                             ->Fill( tofBeta, 1./invGammaM );
    hTofBeta_InverseGammaM                      ->Fill( tofBeta, invGammaM );
    hTofBeta_DeltaEdep                          ->Fill( tofBeta, DeltaEdep );
    hTofKinetic_InverseGammaM                   ->Fill( KineticEnergyPerNucleon, invGammaM );
    hTofBeta_TrkMeanEdep                        ->Fill( tofBeta, trackerMeanEnergyDeposit );
    if( trkEdepLayerJ[0] != 0 )
    {
      hTofBeta_TrkL1Edep                          ->Fill( tofBeta, trkEdepLayerJ[0]);
      hTofKinetic_TrkL1Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[0]);
    }
    if( trkEdepLayerJ[1] != 0 )
    {
      hTofBeta_TrkL2Edep                          ->Fill( tofBeta, trkEdepLayerJ[1]);
      hTofKinetic_TrkL2Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[1]);
    }
    if( trkEdepLayerJ[2] != 0 )
    {
      hTofBeta_TrkL3Edep                          ->Fill( tofBeta, trkEdepLayerJ[2]);
      hTofKinetic_TrkL3Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[2]);
    }
    if( trkEdepLayerJ[3] != 0 )
    {
      hTofBeta_TrkL4Edep                          ->Fill( tofBeta, trkEdepLayerJ[3]);
      hTofKinetic_TrkL4Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[3]);
    }
    if( trkEdepLayerJ[4] != 0 )
    {
      hTofBeta_TrkL5Edep                          ->Fill( tofBeta, trkEdepLayerJ[4]);
      hTofKinetic_TrkL5Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[4]);
    }
    if( trkEdepLayerJ[5] != 0 )
    {
      hTofBeta_TrkL6Edep                          ->Fill( tofBeta, trkEdepLayerJ[5]);
      hTofKinetic_TrkL6Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[5]);
    }
    if( trkEdepLayerJ[6] != 0 )
    {
      hTofBeta_TrkL7Edep                          ->Fill( tofBeta, trkEdepLayerJ[6]);
      hTofKinetic_TrkL7Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[6]);
    }
    if( trkEdepLayerJ[7] != 0 )
    {
      hTofBeta_TrkL8Edep                          ->Fill( tofBeta, trkEdepLayerJ[7]);
      hTofKinetic_TrkL8Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[7]);
    }
    if( trkEdepLayerJ[8] != 0 )
    {
      hTofBeta_TrkL9Edep                          ->Fill( tofBeta, trkEdepLayerJ[8]);
      hTofKinetic_TrkL9Edep                       ->Fill( KineticEnergyPerNucleon, trkEdepLayerJ[8]);
    }

    if( trkLayerJQ[0] != 0 )
    {
      hTofBeta_TrackerL1Charge                    ->Fill( tofBeta, trkLayerJQ[0] );
      hTofBeta_TrackerL1ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL1Z );
      hTofKinetic_TrackerL1Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[0] );
    }
    if( trkLayerJQ[1] != 0 )
    {
      hTofBeta_TrackerL2Charge                    ->Fill( tofBeta, trkLayerJQ[1] );
      hTofBeta_TrackerL2ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL2Z );
      hTofKinetic_TrackerL2Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[1] );
    }
    if( trkLayerJQ[2] != 0 )
    {
      hTofBeta_TrackerL3Charge                    ->Fill( tofBeta, trkLayerJQ[2] );
      hTofBeta_TrackerL3ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL3Z );
      hTofKinetic_TrackerL3Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[2] );
    }
    if( trkLayerJQ[3] != 0 )
    {
      hTofBeta_TrackerL4Charge                    ->Fill( tofBeta, trkLayerJQ[3] );
      hTofBeta_TrackerL4ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL4Z );
      hTofKinetic_TrackerL4Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[3] );
    }
    if( trkLayerJQ[4] != 0 )
    {
      hTofBeta_TrackerL5Charge                    ->Fill( tofBeta, trkLayerJQ[4] );
      hTofBeta_TrackerL5ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL5Z );
      hTofKinetic_TrackerL5Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[4] );
    }
    if( trkLayerJQ[5] != 0 )
    {
      hTofBeta_TrackerL6Charge                    ->Fill( tofBeta, trkLayerJQ[5] );
      hTofBeta_TrackerL6ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL6Z );
      hTofKinetic_TrackerL6Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[5] );
    }
    if( trkLayerJQ[6] != 0 )
    {
      hTofBeta_TrackerL7Charge                    ->Fill( tofBeta, trkLayerJQ[6] );
      hTofBeta_TrackerL7ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL7Z );
      hTofKinetic_TrackerL7Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[6] );
    }
    if( trkLayerJQ[7] != 0 )
    {
      hTofBeta_TrackerL8Charge                    ->Fill( tofBeta, trkLayerJQ[7] );
      hTofBeta_TrackerL8ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL8Z );
      hTofKinetic_TrackerL8Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[7] );
    }
    if( trkLayerJQ[8] != 0 )
    {
      hTofBeta_TrackerL9Charge                    ->Fill( tofBeta, trkLayerJQ[8] );
      hTofBeta_TrackerL9ChargeCorrected           ->Fill( tofBeta, CorrectedTrkL9Z );
      hTofKinetic_TrackerL9Charge                 ->Fill( KineticEnergyPerNucleon, trkLayerJQ[8] );
    }
    if( trkInnerCharge != 0 )
    {
      hTofBeta_TrackerInnerCharge                 ->Fill( tofBeta, trkInnerCharge );
      hTofBeta_TrackerInnerChargeCorrected        ->Fill( tofBeta, CorrectedTrkInnerZ );
      hTofKinetic_TrackerInnerCharge              ->Fill( KineticEnergyPerNucleon, trkInnerCharge );
    }

    hTofKinetic_TrkMeanEdep                     ->Fill( KineticEnergyPerNucleon, trackerMeanEnergyDeposit );
    hTofBeta_TofMeanEdep                        ->Fill( tofBeta, tofMeanEdep );
    hTofBeta_UTofMeanEdep                       ->Fill( tofBeta, uTofMeanEdep );
    hTofBeta_LTofMeanEdep                       ->Fill( tofBeta, lTofMeanEdep );
    hTofBeta_TofAcUpperCharge                   ->Fill( tofBeta, tofAcUpperCharge );
    hTofBeta_TofAcLowerCharge                   ->Fill( tofBeta, tofAcLowerCharge );
    hTofBeta_UTofLTofDiff                       ->Fill( tofBeta, tofAcUpperCharge - tofAcLowerCharge );
    hTofBeta_DeltaPhiTrdRich                    ->Fill( tofBeta, trdTrackPhi - richPhi );
  }
}
