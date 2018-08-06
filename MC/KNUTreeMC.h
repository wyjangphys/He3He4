//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Aug  5 19:58:14 2018 by ROOT version 5.34/36
// from TTree KNUTree/KNUTree
// found on file: /storage4/A_data/He3He4/MC/NEW_He.B1114.he4.pl1.l1.2800.3_01.set1/1409298827_1409298878.root
//////////////////////////////////////////////////////////

#ifndef KNUTreeMC_h
#define KNUTreeMC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <set>

// Fixed size dimensions of array or collections stored in the TTree if any.

class KNUTreeMC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          nRun;
   UInt_t          nEvent;
   UInt_t          nLevel1;
   UInt_t          nParticle;
   UInt_t          nCharge;
   UInt_t          nTrTrack;
   UInt_t          nTrdTrack;
   UInt_t          nAntiCluster;
   Int_t           nTofClustersInTime;
   UInt_t          nRichRing;
   UInt_t          nRichRingB;
   UInt_t          nBeta;
   UInt_t          nBetaB;
   UInt_t          nBetaH;
   UInt_t          nShower;
   UInt_t          nVertex;
   Int_t           survived_tof;
   UInt_t          nAntiMCCluster;
   UInt_t          nTrMCCluster;
   UInt_t          nTofMCCluster;
   UInt_t          nTofMCPmtHit;
   UInt_t          nEcalMCHit;
   UInt_t          nTrdMCCluster;
   UInt_t          nRichMCCluster;
   UInt_t          nMCTrack;
   UInt_t          nMCEventg;
   Int_t           particleID;
   Int_t           trkID;
   Int_t           parentID;
   Float_t         genMomentum;
   Float_t         genPosition[3];
   Float_t         genDirCosine[3];
   Float_t         genMass;
   Float_t         genCharge;
   Int_t           conversionId;
   std::vector<int>     *conversionIdContainer;
   std::set<int>        *conversionIdSet;
   Int_t           tofNCluster;
   Int_t           tofNClusterH;
   Int_t           tofNUsedHits;
   Int_t           tofNUnusedHits;
   Int_t           tofNUsedLayersForQ;
   Float_t         tofBeta;
   Float_t         tofInvBetaErr;
   Float_t         tofNormEBetaV;
   Float_t         tofBetaS;
   Float_t         tofBetaC;
   Float_t         tofEBetaCV;
   Float_t         tofMass;
   Float_t         tofMassError;
   Int_t           isGoodBeta;
   Int_t           isTkTofMatch;
   Float_t         tofChisqT;
   Float_t         tofChisqC;
   Float_t         tofReducedChisqT;
   Float_t         tofReducedChisqC;
   Int_t           tofSumHit;
   Int_t           tofNUsedClusterH;
   Int_t           tofPatternOnLayer[4];
   Float_t         tofDepositedEnergyOnLayer[4];
   Float_t         tofEstimatedChargeOnLayer[4];
   Float_t         tofCharge;
   Float_t         tofChargeRMS;
   Float_t         tofAcCharge;
   Float_t         tofAcUpperCharge;
   Float_t         tofAcLowerCharge;
   Float_t         tofChargeOnLayer[4];
   Float_t         tofTimeOnLayer[4];
   Float_t         tofETimeOnLayer[4];
   Float_t         tofETCooOnLayer[4];
   Float_t         tofTResidualOnLayer[4];
   Float_t         tofT0;
   Float_t         tofTkTFLenOnLayer[4];
   Float_t         tofCResidualXOnLayer[4];
   Float_t         tofCResidualYOnLayer[4];
   Int_t           nTofLUsedForZ;
   Float_t         probTOFZ;
   Int_t           tofZ;
   Int_t           isEcalAvailable;
   Float_t         showerEnergyD;
   Float_t         showerEnergyDL[18];
   Float_t         showerEnergyE;
   Float_t         showerEnergyCorrected;
   Float_t         showerBDT;
   Float_t         showerCofG[3];
   Float_t         showerCofGDist;
   Float_t         showerCofGdX;
   Float_t         showerCofGdY;
   Int_t           trkFitCodeFS;
   Float_t         trkRigidityFS;
   Float_t         trkRigidityInverseErrorFS;
   Float_t         trkReducedChisquareFSX;
   Float_t         trkReducedChisquareFSY;
   Int_t           trkFitCodeL1Inner;
   Float_t         trkRigidityL1Inner;
   Float_t         trkRigidityInverseErrorL1Inner;
   Float_t         trkReducedChisquareL1InnerX;
   Float_t         trkReducedChisquareL1InnerY;
   Int_t           trkFitCodeL9Inner;
   Float_t         trkRigidityL9Inner;
   Float_t         trkRigidityInverseErrorL9Inner;
   Float_t         trkReducedChisquareL9InnerX;
   Float_t         trkReducedChisquareL9InnerY;
   Int_t           trkFitCodeUpperInner;
   Float_t         trkRigidityUpperInner;
   Float_t         trkRigidityInverseErrorUpperInner;
   Float_t         trkReducedChisquareUpperInnerX;
   Float_t         trkReducedChisquareUpperInnerY;
   Int_t           trkFitCodeLowerInner;
   Float_t         trkRigidityLowerInner;
   Float_t         trkRigidityInverseErrorLowerInner;
   Float_t         trkReducedChisquareLowerInnerX;
   Float_t         trkReducedChisquareLowerInnerY;
   Int_t           trkFitCodeMS;
   Float_t         trkRigidityMS;
   Float_t         trkRigidityInverseErrorMS;
   Float_t         trkReducedChisquareMSX;
   Float_t         trkReducedChisquareMSY;
   Int_t           trkFitCodeInner;
   Float_t         trkRigidityInner;
   Float_t         trkRigidityInverseErrorInner;
   Float_t         trkReducedChisquareInnerX;
   Float_t         trkReducedChisquareInnerY;
   Float_t         trkLayerJQ[9];
   Int_t           trkEdepLayerJXSideOK[9];
   Int_t           trkEdepLayerJYSideOK[9];
   Float_t         trkEdepLayerJ[9];
   Float_t         trkPosXLJ[9];
   Float_t         trkPosYLJ[9];
   Float_t         trkPosZLJ[9];
   Float_t         trkHitCooXLJ[9];
   Float_t         trkHitCooYLJ[9];
   Float_t         trkDirThetaLJ[9];
   Float_t         trkDirPhiLJ[9];
   Float_t         trkCharge;
   Float_t         trkInnerCharge;
   Int_t           trkZ;
   Int_t           trkInnerZ;
   Int_t           trkLayerJZ[9];
   Float_t         trkHasExtLayers;
   Int_t           isRichAvailable;
   Int_t           richRebuild;
   Int_t           richIsGood;
   Int_t           richIsClean;
   Int_t           richIsNaF;
   Int_t           richTileIndex;
   Float_t         richDistanceTileBorder;
   Int_t           richChargeCorrections;
   Int_t           richPMTCorrectionsFailed;
   Float_t         richTrackEmissionPoint[5];
   Int_t           richUsedHits;
   Float_t         richRingWidth;
   Float_t         richWidth;
   Int_t           richNHits;
   Int_t           richNPMTsOnRing;
   Float_t         richBeta;
   Float_t         richBetaError;
   Float_t         richChargeSquared;
   Float_t         richKolmogorovProbability;
   Float_t         richPhotoelectrons;
   Float_t         richExpectedPhotoelectrons;
   Float_t         richTheta;
   Float_t         richPhi;
   Float_t         richBetaConsistency;
   Int_t           richReflectedHits;
   Float_t         richPMTChargeConsistency;
   Float_t         richTrackerTrackOnRadiatorX;
   Float_t         richTrackerTrackOnRadiatorY;
   Int_t           trdNClusters;
   Int_t           trdNUnusedHits;
   Int_t           trdNTracks;
   Int_t           trdNVertex;
   Float_t         trdTrackTheta;
   Float_t         trdTrackPhi;
   Float_t         trdTrackChi2;
   Int_t           trdTrackPattern;
   Float_t         trdTrackCharge;
   Float_t         trdTrackEdepL[20];
   Float_t         trdTrackMeanDepositedEnergy;
   Float_t         trdTrackTotalDepositedEnergy;
   Float_t         trdTrackDeviationXWithInnerTrk;
   Float_t         trdTrackDeviationYWithInnerTrk;
   Float_t         trdTrackDistanceBetweenInnerTrk;
   Float_t         ResidualXBetweenInnerTrackAndSplineTrack;
   Float_t         ResidualYBetweenInnerTrackAndSplineTrack;
   Int_t           trdKNRawHits;
   Int_t           trdKIsReadAlignmentOK;
   Int_t           trdKIsReadCalibOK;
   Int_t           trdKNHits;
   Int_t           trdKIsValid;
   Float_t         trdKElectronToProtonLogLikelihoodRatio;
   Float_t         trdKHeliumToElectronLogLikelihoodRatio;
   Float_t         trdKHeliumToProtonLogLikelihoodRatio;
   Float_t         trdKCharge;
   Float_t         trdKChargeError;
   Int_t           trdKNUsedHitsForCharge;
   Float_t         trdKAmpLayer[20];
   Float_t         trdKTotalPathLength;
   Float_t         trdKTotalAmp;
   Float_t         trdKElectronLikelihood;
   Float_t         trdKProtonLikelihood;
   Float_t         trdKHeliumLikelihood;
   Float_t         trdPElectronToProtonLogLikelihoodRatio;
   Float_t         trdPHeliumToElectronLogLikelihoodRatio;
   Float_t         trdPHeliumToProtonLogLikelihoodRatio;
   Float_t         trdPElectronLikelihood;
   Float_t         trdPProtonLikelihood;
   Float_t         trdPHeliumLikelihood;
   Int_t           trdPNHybridHits;
   Int_t           trdPNActiveLayers;
   Int_t           trdPNLowAdcHits;
   Int_t           trdPNLowDxHits;
   Float_t         acTrackerTrdTrackDistanceAtTrdCenterInSigmas;
   Float_t         acTrackerTrdTrackAngularDistanceInSigmas;
   Int_t           accNHits;
   Int_t           accNRecoClPG;

   // List of branches
   TBranch        *b_nRun;   //!
   TBranch        *b_nEvent;   //!
   TBranch        *b_nLevel1;   //!
   TBranch        *b_nParticle;   //!
   TBranch        *b_nCharge;   //!
   TBranch        *b_nTrTrack;   //!
   TBranch        *b_nTrdTrack;   //!
   TBranch        *b_nAntiCluster;   //!
   TBranch        *b_nTofClustersInTime;   //!
   TBranch        *b_nRichRing;   //!
   TBranch        *b_nRichRingB;   //!
   TBranch        *b_nBeta;   //!
   TBranch        *b_nBetaB;   //!
   TBranch        *b_nBetaH;   //!
   TBranch        *b_nShower;   //!
   TBranch        *b_nVertex;   //!
   TBranch        *b_survived_tof;   //!
   TBranch        *b_nAntiMCCluster;   //!
   TBranch        *b_nTrMCCluster;   //!
   TBranch        *b_nTofMCCluster;   //!
   TBranch        *b_nTofMCPmtHit;   //!
   TBranch        *b_nEcalMCHit;   //!
   TBranch        *b_nTrdMCCluster;   //!
   TBranch        *b_nRichMCCluster;   //!
   TBranch        *b_nMCTrack;   //!
   TBranch        *b_nMCEventg;   //!
   TBranch        *b_particleID;   //!
   TBranch        *b_trkID;   //!
   TBranch        *b_parentID;   //!
   TBranch        *b_genMomentum;   //!
   TBranch        *b_genPosition;   //!
   TBranch        *b_genDirCosine;   //!
   TBranch        *b_genMass;   //!
   TBranch        *b_genCharge;   //!
   TBranch        *b_conversionId;   //!
   TBranch        *b_conversionIdContainer;   //!
   TBranch        *b_conversionIdSet;   //!
   TBranch        *b_tofNCluster;   //!
   TBranch        *b_tofNClusterH;   //!
   TBranch        *b_tofNUsedHits;   //!
   TBranch        *b_tofNUnusedHits;   //!
   TBranch        *b_tofNUsedLayersForQ;   //!
   TBranch        *b_tofBeta;   //!
   TBranch        *b_tofInvBetaErr;   //!
   TBranch        *b_tofNormEBetaV;   //!
   TBranch        *b_tofBetaS;   //!
   TBranch        *b_tofBetaC;   //!
   TBranch        *b_tofEBetaCV;   //!
   TBranch        *b_tofMass;   //!
   TBranch        *b_tofMassError;   //!
   TBranch        *b_isGoodBeta;   //!
   TBranch        *b_isTkTofMatch;   //!
   TBranch        *b_tofChisqT;   //!
   TBranch        *b_tofChisqC;   //!
   TBranch        *b_tofReducedChisqT;   //!
   TBranch        *b_tofReducedChisqC;   //!
   TBranch        *b_tofSumHit;   //!
   TBranch        *b_tofNUsedClusterH;   //!
   TBranch        *b_tofPatternOnLayer;   //!
   TBranch        *b_tofDepositedEnergyOnLayer;   //!
   TBranch        *b_tofEstimatedChargeOnLayer;   //!
   TBranch        *b_tofCharge;   //!
   TBranch        *b_tofChargeRMS;   //!
   TBranch        *b_tofAcCharge;   //!
   TBranch        *b_tofAcUpperCharge;   //!
   TBranch        *b_tofAcLowerCharge;   //!
   TBranch        *b_tofChargeOnLayer;   //!
   TBranch        *b_tofTimeOnLayer;   //!
   TBranch        *b_tofETimeOnLayer;   //!
   TBranch        *b_tofETCooOnLayer;   //!
   TBranch        *b_tofTResidualOnLayer;   //!
   TBranch        *b_tofT0;   //!
   TBranch        *b_tofTkTFLenOnLayer;   //!
   TBranch        *b_tofCResidualXOnLayer;   //!
   TBranch        *b_tofCResidualYOnLayer;   //!
   TBranch        *b_nTofLUsedForZ;   //!
   TBranch        *b_probTOFZ;   //!
   TBranch        *b_tofZ;   //!
   TBranch        *b_isEcalAvailable;   //!
   TBranch        *b_showerEnergyD;   //!
   TBranch        *b_showerEnergyDL;   //!
   TBranch        *b_showerEnergyE;   //!
   TBranch        *b_showerEnergyCorrected;   //!
   TBranch        *b_showerBDT;   //!
   TBranch        *b_showerCofG;   //!
   TBranch        *b_showerCofGDist;   //!
   TBranch        *b_showerCofGdX;   //!
   TBranch        *b_showerCofGdY;   //!
   TBranch        *b_trkFitCodeFS;   //!
   TBranch        *b_trkRigidityFS;   //!
   TBranch        *b_trkRigidityInverseErrorFS;   //!
   TBranch        *b_trkReducedChisquareFSX;   //!
   TBranch        *b_trkReducedChisquareFSY;   //!
   TBranch        *b_trkFitCodeL1Inner;   //!
   TBranch        *b_trkRigidityL1Inner;   //!
   TBranch        *b_trkRigidityInverseErrorL1Inner;   //!
   TBranch        *b_trkReducedChisquareL1InnerX;   //!
   TBranch        *b_trkReducedChisquareL1InnerY;   //!
   TBranch        *b_trkFitCodeL9Inner;   //!
   TBranch        *b_trkRigidityL9Inner;   //!
   TBranch        *b_trkRigidityInverseErrorL9Inner;   //!
   TBranch        *b_trkReducedChisquareL9InnerX;   //!
   TBranch        *b_trkReducedChisquareL9InnerY;   //!
   TBranch        *b_trkFitCodeUpperInner;   //!
   TBranch        *b_trkRigidityUpperInner;   //!
   TBranch        *b_trkRigidityInverseErrorUpperInner;   //!
   TBranch        *b_trkReducedChisquareUpperInnerX;   //!
   TBranch        *b_trkReducedChisquareUpperInnerY;   //!
   TBranch        *b_trkFitCodeLowerInner;   //!
   TBranch        *b_trkRigidityLowerInner;   //!
   TBranch        *b_trkRigidityInverseErrorLowerInner;   //!
   TBranch        *b_trkReducedChisquareLowerInnerX;   //!
   TBranch        *b_trkReducedChisquareLowerInnerY;   //!
   TBranch        *b_trkFitCodeMS;   //!
   TBranch        *b_trkRigidityMS;   //!
   TBranch        *b_trkRigidityInverseErrorMS;   //!
   TBranch        *b_trkReducedChisquareMSX;   //!
   TBranch        *b_trkReducedChisquareMSY;   //!
   TBranch        *b_trkFitCodeInner;   //!
   TBranch        *b_trkRigidityInner;   //!
   TBranch        *b_trkRigidityInverseErrorInner;   //!
   TBranch        *b_trkReducedChisquareInnerX;   //!
   TBranch        *b_trkReducedChisquareInnerY;   //!
   TBranch        *b_trkLayerJQ;   //!
   TBranch        *b_trkEdepLayerJXSideOK;   //!
   TBranch        *b_trkEdepLayerJYSideOK;   //!
   TBranch        *b_trkEdepLayerJ;   //!
   TBranch        *b_trkPosXLJ;   //!
   TBranch        *b_trkPosYLJ;   //!
   TBranch        *b_trkPosZLJ;   //!
   TBranch        *b_trkHitCooXLJ;   //!
   TBranch        *b_trkHitCooYLJ;   //!
   TBranch        *b_trkDirThetaLJ;   //!
   TBranch        *b_trkDirPhiLJ;   //!
   TBranch        *b_trkCharge;   //!
   TBranch        *b_trkInnerCharge;   //!
   TBranch        *b_trkZ;   //!
   TBranch        *b_trkInnerZ;   //!
   TBranch        *b_trkLayerJZ;   //!
   TBranch        *b_trkHasExtLayers;   //!
   TBranch        *b_isRichAvailable;   //!
   TBranch        *b_richRebuild;   //!
   TBranch        *b_richIsGood;   //!
   TBranch        *b_richIsClean;   //!
   TBranch        *b_richIsNaF;   //!
   TBranch        *b_richTileIndex;   //!
   TBranch        *b_richDistanceTileBorder;   //!
   TBranch        *b_richChargeCorrections;   //!
   TBranch        *b_richPMTCorrectionsFailed;   //!
   TBranch        *b_richTrackEmissionPoint;   //!
   TBranch        *b_richUsedHits;   //!
   TBranch        *b_richRingWidth;   //!
   TBranch        *b_richNHits;   //!
   TBranch        *b_richNPMTsOnRing;   //!
   TBranch        *b_richBeta;   //!
   TBranch        *b_richBetaError;   //!
   TBranch        *b_richChargeSquared;   //!
   TBranch        *b_richKolmogorovProbability;   //!
   TBranch        *b_richPhotoelectrons;   //!
   TBranch        *b_richExpectedPhotoelectrons;   //!
   TBranch        *b_richTheta;   //!
   TBranch        *b_richPhi;   //!
   TBranch        *b_richBetaConsistency;   //!
   TBranch        *b_richReflectedHits;   //!
   TBranch        *b_richPMTChargeConsistency;   //!
   TBranch        *b_richTrackerTrackOnRadiatorX;   //!
   TBranch        *b_richTrackerTrackOnRadiatorY;   //!
   TBranch        *b_trdNClusters;   //!
   TBranch        *b_trdNUnusedHits;   //!
   TBranch        *b_trdNTracks;   //!
   TBranch        *b_trdNVertex;   //!
   TBranch        *b_trdTrackTheta;   //!
   TBranch        *b_trdTrackPhi;   //!
   TBranch        *b_trdTrackChi2;   //!
   TBranch        *b_trdTrackPattern;   //!
   TBranch        *b_trdTrackCharge;   //!
   TBranch        *b_trdTrackEdepL;   //!
   TBranch        *b_trdTrackMeanDepositedEnergy;   //!
   TBranch        *b_trdTrackTotalDepositedEnergy;   //!
   TBranch        *b_trdTrackDeviationXWithInnerTrk;   //!
   TBranch        *b_trdTrackDeviationYWithInnerTrk;   //!
   TBranch        *b_trdTrackDistanceBetweenInnerTrk;   //!
   TBranch        *b_ResidualXBetweenInnerTrackAndSplineTrack;   //!
   TBranch        *b_ResidualYBetweenInnerTrackAndSplineTrack;   //!
   TBranch        *b_trdKNRawHits;   //!
   TBranch        *b_trdKIsReadAlignmentOK;   //!
   TBranch        *b_trdKIsReadCalibOK;   //!
   TBranch        *b_trdKNHits;   //!
   TBranch        *b_trdKIsValid;   //!
   TBranch        *b_trdKElectronToProtonLogLikelihoodRatio;   //!
   TBranch        *b_trdKHeliumToElectronLogLikelihoodRatio;   //!
   TBranch        *b_trdKHeliumToProtonLogLikelihoodRatio;   //!
   TBranch        *b_trdCharge;   //!
   TBranch        *b_trdKChargeError;   //!
   TBranch        *b_trdKNUsedHitsForCharge;   //!
   TBranch        *b_trdKAmpLayer;   //!
   TBranch        *b_trdKTotalPathLength;   //!
   TBranch        *b_trdKTotalAmp;   //!
   TBranch        *b_trdKElectronLikelihood;   //!
   TBranch        *b_trdKProtonLikelihood;   //!
   TBranch        *b_trdKHeliumLikelihood;   //!
   TBranch        *b_trdPElectronToProtonLogLikelihoodRatio;   //!
   TBranch        *b_trdPHeliumToElectronLogLikelihoodRatio;   //!
   TBranch        *b_trdPHeliumToProtonLogLikelihoodRatio;   //!
   TBranch        *b_trdPElectronLikelihood;   //!
   TBranch        *b_trdPProtonLikelihood;   //!
   TBranch        *b_trdPHeliumLikelihood;   //!
   TBranch        *b_trdPNHybridHits;   //!
   TBranch        *b_trdPNActiveLayers;   //!
   TBranch        *b_trdPNLowAdcHits;   //!
   TBranch        *b_trdPNLowDxHits;   //!
   TBranch        *b_acTrackerTrdTrackDistanceAtTrdCenterInSigmas;   //!
   TBranch        *b_acTrackerTrdTrackAngularDistanceInSigmas;   //!
   TBranch        *b_accNHits;   //!
   TBranch        *b_accNRecoClPG;   //!

   KNUTreeMC(TTree *tree=0);
   virtual ~KNUTreeMC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     Write(TString outputFileName);
};

#endif

#ifdef KNUTreeMC_cxx
KNUTreeMC::KNUTreeMC(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/storage4/A_data/He3He4/MC/NEW_He.B1114.he4.pl1.l1.2800.3_01.set1/1409298827_1409298878.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/storage4/A_data/He3He4/MC/NEW_He.B1114.he4.pl1.l1.2800.3_01.set1/1409298827_1409298878.root");
      }
      f->GetObject("KNUTree",tree);

   }
   Init(tree);
}

KNUTreeMC::~KNUTreeMC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t KNUTreeMC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t KNUTreeMC::LoadTree(Long64_t entry)
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

void KNUTreeMC::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   conversionIdContainer = 0;
   conversionIdSet = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("nRun", &nRun, &b_nRun);
   fChain->SetBranchAddress("nEvent", &nEvent, &b_nEvent);
   fChain->SetBranchAddress("nLevel1", &nLevel1, &b_nLevel1);
   fChain->SetBranchAddress("nParticle", &nParticle, &b_nParticle);
   fChain->SetBranchAddress("nCharge", &nCharge, &b_nCharge);
   fChain->SetBranchAddress("nTrTrack", &nTrTrack, &b_nTrTrack);
   fChain->SetBranchAddress("nTrdTrack", &nTrdTrack, &b_nTrdTrack);
   fChain->SetBranchAddress("nAntiCluster", &nAntiCluster, &b_nAntiCluster);
   fChain->SetBranchAddress("nTofClustersInTime", &nTofClustersInTime, &b_nTofClustersInTime);
   fChain->SetBranchAddress("nRichRing", &nRichRing, &b_nRichRing);
   fChain->SetBranchAddress("nRichRingB", &nRichRingB, &b_nRichRingB);
   fChain->SetBranchAddress("nBeta", &nBeta, &b_nBeta);
   fChain->SetBranchAddress("nBetaB", &nBetaB, &b_nBetaB);
   fChain->SetBranchAddress("nBetaH", &nBetaH, &b_nBetaH);
   fChain->SetBranchAddress("nShower", &nShower, &b_nShower);
   fChain->SetBranchAddress("nVertex", &nVertex, &b_nVertex);
   fChain->SetBranchAddress("survived_tof", &survived_tof, &b_survived_tof);
   fChain->SetBranchAddress("nAntiMCCluster", &nAntiMCCluster, &b_nAntiMCCluster);
   fChain->SetBranchAddress("nTrMCCluster", &nTrMCCluster, &b_nTrMCCluster);
   fChain->SetBranchAddress("nTofMCCluster", &nTofMCCluster, &b_nTofMCCluster);
   fChain->SetBranchAddress("nTofMCPmtHit", &nTofMCPmtHit, &b_nTofMCPmtHit);
   fChain->SetBranchAddress("nEcalMCHit", &nEcalMCHit, &b_nEcalMCHit);
   fChain->SetBranchAddress("nTrdMCCluster", &nTrdMCCluster, &b_nTrdMCCluster);
   fChain->SetBranchAddress("nRichMCCluster", &nRichMCCluster, &b_nRichMCCluster);
   fChain->SetBranchAddress("nMCTrack", &nMCTrack, &b_nMCTrack);
   fChain->SetBranchAddress("nMCEventg", &nMCEventg, &b_nMCEventg);
   fChain->SetBranchAddress("particleID", &particleID, &b_particleID);
   fChain->SetBranchAddress("trkID", &trkID, &b_trkID);
   fChain->SetBranchAddress("parentID", &parentID, &b_parentID);
   fChain->SetBranchAddress("genMomentum", &genMomentum, &b_genMomentum);
   fChain->SetBranchAddress("genPosition", genPosition, &b_genPosition);
   fChain->SetBranchAddress("genDirCosine", genDirCosine, &b_genDirCosine);
   fChain->SetBranchAddress("genMass", &genMass, &b_genMass);
   fChain->SetBranchAddress("genCharge", &genCharge, &b_genCharge);
   fChain->SetBranchAddress("conversionId", &conversionId, &b_conversionId);
   fChain->SetBranchAddress("conversionIdContainer", &conversionIdContainer, &b_conversionIdContainer);
   fChain->SetBranchAddress("conversionIdSet", &conversionIdSet, &b_conversionIdSet);
   fChain->SetBranchAddress("tofNCluster", &tofNCluster, &b_tofNCluster);
   fChain->SetBranchAddress("tofNClusterH", &tofNClusterH, &b_tofNClusterH);
   fChain->SetBranchAddress("tofNUsedHits", &tofNUsedHits, &b_tofNUsedHits);
   fChain->SetBranchAddress("tofNUnusedHits", &tofNUnusedHits, &b_tofNUnusedHits);
   fChain->SetBranchAddress("tofNUsedLayersForQ", &tofNUsedLayersForQ, &b_tofNUsedLayersForQ);
   fChain->SetBranchAddress("tofBeta", &tofBeta, &b_tofBeta);
   fChain->SetBranchAddress("tofInvBetaErr", &tofInvBetaErr, &b_tofInvBetaErr);
   fChain->SetBranchAddress("tofNormEBetaV", &tofNormEBetaV, &b_tofNormEBetaV);
   fChain->SetBranchAddress("tofBetaS", &tofBetaS, &b_tofBetaS);
   fChain->SetBranchAddress("tofBetaC", &tofBetaC, &b_tofBetaC);
   fChain->SetBranchAddress("tofEBetaCV", &tofEBetaCV, &b_tofEBetaCV);
   fChain->SetBranchAddress("tofMass", &tofMass, &b_tofMass);
   fChain->SetBranchAddress("tofMassError", &tofMassError, &b_tofMassError);
   fChain->SetBranchAddress("isGoodBeta", &isGoodBeta, &b_isGoodBeta);
   fChain->SetBranchAddress("isTkTofMatch", &isTkTofMatch, &b_isTkTofMatch);
   fChain->SetBranchAddress("tofChisqT", &tofChisqT, &b_tofChisqT);
   fChain->SetBranchAddress("tofChisqC", &tofChisqC, &b_tofChisqC);
   fChain->SetBranchAddress("tofReducedChisqT", &tofReducedChisqT, &b_tofReducedChisqT);
   fChain->SetBranchAddress("tofReducedChisqC", &tofReducedChisqC, &b_tofReducedChisqC);
   fChain->SetBranchAddress("tofSumHit", &tofSumHit, &b_tofSumHit);
   fChain->SetBranchAddress("tofNUsedClusterH", &tofNUsedClusterH, &b_tofNUsedClusterH);
   fChain->SetBranchAddress("tofPatternOnLayer", tofPatternOnLayer, &b_tofPatternOnLayer);
   fChain->SetBranchAddress("tofDepositedEnergyOnLayer", tofDepositedEnergyOnLayer, &b_tofDepositedEnergyOnLayer);
   fChain->SetBranchAddress("tofEstimatedChargeOnLayer", tofEstimatedChargeOnLayer, &b_tofEstimatedChargeOnLayer);
   fChain->SetBranchAddress("tofCharge", &tofCharge, &b_tofCharge);
   fChain->SetBranchAddress("tofChargeRMS", &tofChargeRMS, &b_tofChargeRMS);
   fChain->SetBranchAddress("tofAcCharge", &tofAcCharge, &b_tofAcCharge);
   fChain->SetBranchAddress("tofAcUpperCharge", &tofAcUpperCharge, &b_tofAcUpperCharge);
   fChain->SetBranchAddress("tofAcLowerCharge", &tofAcLowerCharge, &b_tofAcLowerCharge);
   fChain->SetBranchAddress("tofChargeOnLayer", tofChargeOnLayer, &b_tofChargeOnLayer);
   fChain->SetBranchAddress("tofTimeOnLayer", tofTimeOnLayer, &b_tofTimeOnLayer);
   fChain->SetBranchAddress("tofETimeOnLayer", tofETimeOnLayer, &b_tofETimeOnLayer);
   fChain->SetBranchAddress("tofETCooOnLayer", tofETCooOnLayer, &b_tofETCooOnLayer);
   fChain->SetBranchAddress("tofTResidualOnLayer", tofTResidualOnLayer, &b_tofTResidualOnLayer);
   fChain->SetBranchAddress("tofT0", &tofT0, &b_tofT0);
   fChain->SetBranchAddress("tofTkTFLenOnLayer", tofTkTFLenOnLayer, &b_tofTkTFLenOnLayer);
   fChain->SetBranchAddress("tofCResidualXOnLayer", tofCResidualXOnLayer, &b_tofCResidualXOnLayer);
   fChain->SetBranchAddress("tofCResidualYOnLayer", tofCResidualYOnLayer, &b_tofCResidualYOnLayer);
   fChain->SetBranchAddress("nTofLUsedForZ", &nTofLUsedForZ, &b_nTofLUsedForZ);
   fChain->SetBranchAddress("probTOFZ", &probTOFZ, &b_probTOFZ);
   fChain->SetBranchAddress("tofZ", &tofZ, &b_tofZ);
   fChain->SetBranchAddress("isEcalAvailable", &isEcalAvailable, &b_isEcalAvailable);
   fChain->SetBranchAddress("showerEnergyD", &showerEnergyD, &b_showerEnergyD);
   fChain->SetBranchAddress("showerEnergyDL", showerEnergyDL, &b_showerEnergyDL);
   fChain->SetBranchAddress("showerEnergyE", &showerEnergyE, &b_showerEnergyE);
   fChain->SetBranchAddress("showerEnergyCorrected", &showerEnergyCorrected, &b_showerEnergyCorrected);
   fChain->SetBranchAddress("showerBDT", &showerBDT, &b_showerBDT);
   fChain->SetBranchAddress("showerCofG", showerCofG, &b_showerCofG);
   fChain->SetBranchAddress("showerCofGDist", &showerCofGDist, &b_showerCofGDist);
   fChain->SetBranchAddress("showerCofGdX", &showerCofGdX, &b_showerCofGdX);
   fChain->SetBranchAddress("showerCofGdY", &showerCofGdY, &b_showerCofGdY);
   fChain->SetBranchAddress("trkFitCodeFS", &trkFitCodeFS, &b_trkFitCodeFS);
   fChain->SetBranchAddress("trkRigidityFS", &trkRigidityFS, &b_trkRigidityFS);
   fChain->SetBranchAddress("trkRigidityInverseErrorFS", &trkRigidityInverseErrorFS, &b_trkRigidityInverseErrorFS);
   fChain->SetBranchAddress("trkReducedChisquareFSX", &trkReducedChisquareFSX, &b_trkReducedChisquareFSX);
   fChain->SetBranchAddress("trkReducedChisquareFSY", &trkReducedChisquareFSY, &b_trkReducedChisquareFSY);
   fChain->SetBranchAddress("trkFitCodeL1Inner", &trkFitCodeL1Inner, &b_trkFitCodeL1Inner);
   fChain->SetBranchAddress("trkRigidityL1Inner", &trkRigidityL1Inner, &b_trkRigidityL1Inner);
   fChain->SetBranchAddress("trkRigidityInverseErrorL1Inner", &trkRigidityInverseErrorL1Inner, &b_trkRigidityInverseErrorL1Inner);
   fChain->SetBranchAddress("trkReducedChisquareL1InnerX", &trkReducedChisquareL1InnerX, &b_trkReducedChisquareL1InnerX);
   fChain->SetBranchAddress("trkReducedChisquareL1InnerY", &trkReducedChisquareL1InnerY, &b_trkReducedChisquareL1InnerY);
   fChain->SetBranchAddress("trkFitCodeL9Inner", &trkFitCodeL9Inner, &b_trkFitCodeL9Inner);
   fChain->SetBranchAddress("trkRigidityL9Inner", &trkRigidityL9Inner, &b_trkRigidityL9Inner);
   fChain->SetBranchAddress("trkRigidityInverseErrorL9Inner", &trkRigidityInverseErrorL9Inner, &b_trkRigidityInverseErrorL9Inner);
   fChain->SetBranchAddress("trkReducedChisquareL9InnerX", &trkReducedChisquareL9InnerX, &b_trkReducedChisquareL9InnerX);
   fChain->SetBranchAddress("trkReducedChisquareL9InnerY", &trkReducedChisquareL9InnerY, &b_trkReducedChisquareL9InnerY);
   fChain->SetBranchAddress("trkFitCodeUpperInner", &trkFitCodeUpperInner, &b_trkFitCodeUpperInner);
   fChain->SetBranchAddress("trkRigidityUpperInner", &trkRigidityUpperInner, &b_trkRigidityUpperInner);
   fChain->SetBranchAddress("trkRigidityInverseErrorUpperInner", &trkRigidityInverseErrorUpperInner, &b_trkRigidityInverseErrorUpperInner);
   fChain->SetBranchAddress("trkReducedChisquareUpperInnerX", &trkReducedChisquareUpperInnerX, &b_trkReducedChisquareUpperInnerX);
   fChain->SetBranchAddress("trkReducedChisquareUpperInnerY", &trkReducedChisquareUpperInnerY, &b_trkReducedChisquareUpperInnerY);
   fChain->SetBranchAddress("trkFitCodeLowerInner", &trkFitCodeLowerInner, &b_trkFitCodeLowerInner);
   fChain->SetBranchAddress("trkRigidityLowerInner", &trkRigidityLowerInner, &b_trkRigidityLowerInner);
   fChain->SetBranchAddress("trkRigidityInverseErrorLowerInner", &trkRigidityInverseErrorLowerInner, &b_trkRigidityInverseErrorLowerInner);
   fChain->SetBranchAddress("trkReducedChisquareLowerInnerX", &trkReducedChisquareLowerInnerX, &b_trkReducedChisquareLowerInnerX);
   fChain->SetBranchAddress("trkReducedChisquareLowerInnerY", &trkReducedChisquareLowerInnerY, &b_trkReducedChisquareLowerInnerY);
   fChain->SetBranchAddress("trkFitCodeMS", &trkFitCodeMS, &b_trkFitCodeMS);
   fChain->SetBranchAddress("trkRigidityMS", &trkRigidityMS, &b_trkRigidityMS);
   fChain->SetBranchAddress("trkRigidityInverseErrorMS", &trkRigidityInverseErrorMS, &b_trkRigidityInverseErrorMS);
   fChain->SetBranchAddress("trkReducedChisquareMSX", &trkReducedChisquareMSX, &b_trkReducedChisquareMSX);
   fChain->SetBranchAddress("trkReducedChisquareMSY", &trkReducedChisquareMSY, &b_trkReducedChisquareMSY);
   fChain->SetBranchAddress("trkFitCodeInner", &trkFitCodeInner, &b_trkFitCodeInner);
   fChain->SetBranchAddress("trkRigidityInner", &trkRigidityInner, &b_trkRigidityInner);
   fChain->SetBranchAddress("trkRigidityInverseErrorInner", &trkRigidityInverseErrorInner, &b_trkRigidityInverseErrorInner);
   fChain->SetBranchAddress("trkReducedChisquareInnerX", &trkReducedChisquareInnerX, &b_trkReducedChisquareInnerX);
   fChain->SetBranchAddress("trkReducedChisquareInnerY", &trkReducedChisquareInnerY, &b_trkReducedChisquareInnerY);
   fChain->SetBranchAddress("trkLayerJQ", trkLayerJQ, &b_trkLayerJQ);
   fChain->SetBranchAddress("trkEdepLayerJXSideOK", trkEdepLayerJXSideOK, &b_trkEdepLayerJXSideOK);
   fChain->SetBranchAddress("trkEdepLayerJYSideOK", trkEdepLayerJYSideOK, &b_trkEdepLayerJYSideOK);
   fChain->SetBranchAddress("trkEdepLayerJ", trkEdepLayerJ, &b_trkEdepLayerJ);
   fChain->SetBranchAddress("trkPosXLJ", trkPosXLJ, &b_trkPosXLJ);
   fChain->SetBranchAddress("trkPosYLJ", trkPosYLJ, &b_trkPosYLJ);
   fChain->SetBranchAddress("trkPosZLJ", trkPosZLJ, &b_trkPosZLJ);
   fChain->SetBranchAddress("trkHitCooXLJ", trkHitCooXLJ, &b_trkHitCooXLJ);
   fChain->SetBranchAddress("trkHitCooYLJ", trkHitCooYLJ, &b_trkHitCooYLJ);
   fChain->SetBranchAddress("trkDirThetaLJ", trkDirThetaLJ, &b_trkDirThetaLJ);
   fChain->SetBranchAddress("trkDirPhiLJ", trkDirPhiLJ, &b_trkDirPhiLJ);
   fChain->SetBranchAddress("trkCharge", &trkCharge, &b_trkCharge);
   fChain->SetBranchAddress("trkInnerCharge", &trkInnerCharge, &b_trkInnerCharge);
   fChain->SetBranchAddress("trkZ", &trkZ, &b_trkZ);
   fChain->SetBranchAddress("trkInnerZ", &trkInnerZ, &b_trkInnerZ);
   fChain->SetBranchAddress("trkLayerJZ", trkLayerJZ, &b_trkLayerJZ);
   fChain->SetBranchAddress("trkHasExtLayers", &trkHasExtLayers, &b_trkHasExtLayers);
   fChain->SetBranchAddress("isRichAvailable", &isRichAvailable, &b_isRichAvailable);
   fChain->SetBranchAddress("richRebuild", &richRebuild, &b_richRebuild);
   fChain->SetBranchAddress("richIsGood", &richIsGood, &b_richIsGood);
   fChain->SetBranchAddress("richIsClean", &richIsClean, &b_richIsClean);
   fChain->SetBranchAddress("richIsNaF", &richIsNaF, &b_richIsNaF);
   fChain->SetBranchAddress("richTileIndex", &richTileIndex, &b_richTileIndex);
   fChain->SetBranchAddress("richDistanceTileBorder", &richDistanceTileBorder, &b_richDistanceTileBorder);
   fChain->SetBranchAddress("richChargeCorrections", &richChargeCorrections, &b_richChargeCorrections);
   fChain->SetBranchAddress("richPMTCorrectionsFailed", &richPMTCorrectionsFailed, &b_richPMTCorrectionsFailed);
   fChain->SetBranchAddress("richTrackEmissionPoint", richTrackEmissionPoint, &b_richTrackEmissionPoint);
   fChain->SetBranchAddress("richUsedHits", &richUsedHits, &b_richUsedHits);
   fChain->SetBranchAddress("richRingWidth", &richRingWidth, &b_richRingWidth);
   fChain->SetBranchAddress("richWidth", &richWidth, &b_richRingWidth);
   fChain->SetBranchAddress("richNHits", &richNHits, &b_richNHits);
   fChain->SetBranchAddress("richNPMTsOnRing", &richNPMTsOnRing, &b_richNPMTsOnRing);
   fChain->SetBranchAddress("richBeta", &richBeta, &b_richBeta);
   fChain->SetBranchAddress("richBetaError", &richBetaError, &b_richBetaError);
   fChain->SetBranchAddress("richChargeSquared", &richChargeSquared, &b_richChargeSquared);
   fChain->SetBranchAddress("richKolmogorovProbability", &richKolmogorovProbability, &b_richKolmogorovProbability);
   fChain->SetBranchAddress("richPhotoelectrons", &richPhotoelectrons, &b_richPhotoelectrons);
   fChain->SetBranchAddress("richExpectedPhotoelectrons", &richExpectedPhotoelectrons, &b_richExpectedPhotoelectrons);
   fChain->SetBranchAddress("richTheta", &richTheta, &b_richTheta);
   fChain->SetBranchAddress("richPhi", &richPhi, &b_richPhi);
   fChain->SetBranchAddress("richBetaConsistency", &richBetaConsistency, &b_richBetaConsistency);
   fChain->SetBranchAddress("richReflectedHits", &richReflectedHits, &b_richReflectedHits);
   fChain->SetBranchAddress("richPMTChargeConsistency", &richPMTChargeConsistency, &b_richPMTChargeConsistency);
   fChain->SetBranchAddress("richTrackerTrackOnRadiatorX", &richTrackerTrackOnRadiatorX, &b_richTrackerTrackOnRadiatorX);
   fChain->SetBranchAddress("richTrackerTrackOnRadiatorY", &richTrackerTrackOnRadiatorY, &b_richTrackerTrackOnRadiatorY);
   fChain->SetBranchAddress("trdNClusters", &trdNClusters, &b_trdNClusters);
   fChain->SetBranchAddress("trdNUnusedHits", &trdNUnusedHits, &b_trdNUnusedHits);
   fChain->SetBranchAddress("trdNTracks", &trdNTracks, &b_trdNTracks);
   fChain->SetBranchAddress("trdNVertex", &trdNVertex, &b_trdNVertex);
   fChain->SetBranchAddress("trdTrackTheta", &trdTrackTheta, &b_trdTrackTheta);
   fChain->SetBranchAddress("trdTrackPhi", &trdTrackPhi, &b_trdTrackPhi);
   fChain->SetBranchAddress("trdTrackChi2", &trdTrackChi2, &b_trdTrackChi2);
   fChain->SetBranchAddress("trdTrackPattern", &trdTrackPattern, &b_trdTrackPattern);
   fChain->SetBranchAddress("trdTrackCharge", &trdTrackCharge, &b_trdTrackCharge);
   fChain->SetBranchAddress("trdTrackEdepL", trdTrackEdepL, &b_trdTrackEdepL);
   fChain->SetBranchAddress("trdTrackMeanDepositedEnergy", &trdTrackMeanDepositedEnergy, &b_trdTrackMeanDepositedEnergy);
   fChain->SetBranchAddress("trdTrackTotalDepositedEnergy", &trdTrackTotalDepositedEnergy, &b_trdTrackTotalDepositedEnergy);
   fChain->SetBranchAddress("trdTrackDeviationXWithInnerTrk", &trdTrackDeviationXWithInnerTrk, &b_trdTrackDeviationXWithInnerTrk);
   fChain->SetBranchAddress("trdTrackDeviationYWithInnerTrk", &trdTrackDeviationYWithInnerTrk, &b_trdTrackDeviationYWithInnerTrk);
   fChain->SetBranchAddress("trdTrackDistanceBetweenInnerTrk", &trdTrackDistanceBetweenInnerTrk, &b_trdTrackDistanceBetweenInnerTrk);
   fChain->SetBranchAddress("ResidualXBetweenInnerTrackAndSplineTrack", &ResidualXBetweenInnerTrackAndSplineTrack, &b_ResidualXBetweenInnerTrackAndSplineTrack);
   fChain->SetBranchAddress("ResidualYBetweenInnerTrackAndSplineTrack", &ResidualYBetweenInnerTrackAndSplineTrack, &b_ResidualYBetweenInnerTrackAndSplineTrack);
   fChain->SetBranchAddress("trdKNRawHits", &trdKNRawHits, &b_trdKNRawHits);
   fChain->SetBranchAddress("trdKIsReadAlignmentOK", &trdKIsReadAlignmentOK, &b_trdKIsReadAlignmentOK);
   fChain->SetBranchAddress("trdKIsReadCalibOK", &trdKIsReadCalibOK, &b_trdKIsReadCalibOK);
   fChain->SetBranchAddress("trdKNHits", &trdKNHits, &b_trdKNHits);
   fChain->SetBranchAddress("trdKIsValid", &trdKIsValid, &b_trdKIsValid);
   fChain->SetBranchAddress("trdKElectronToProtonLogLikelihoodRatio", &trdKElectronToProtonLogLikelihoodRatio, &b_trdKElectronToProtonLogLikelihoodRatio);
   fChain->SetBranchAddress("trdKHeliumToElectronLogLikelihoodRatio", &trdKHeliumToElectronLogLikelihoodRatio, &b_trdKHeliumToElectronLogLikelihoodRatio);
   fChain->SetBranchAddress("trdKHeliumToProtonLogLikelihoodRatio", &trdKHeliumToProtonLogLikelihoodRatio, &b_trdKHeliumToProtonLogLikelihoodRatio);
   fChain->SetBranchAddress("trdKCharge", &trdKCharge, &b_trdCharge);
   fChain->SetBranchAddress("trdKChargeError", &trdKChargeError, &b_trdKChargeError);
   fChain->SetBranchAddress("trdKNUsedHitsForCharge", &trdKNUsedHitsForCharge, &b_trdKNUsedHitsForCharge);
   fChain->SetBranchAddress("trdKAmpLayer", trdKAmpLayer, &b_trdKAmpLayer);
   fChain->SetBranchAddress("trdKTotalPathLength", &trdKTotalPathLength, &b_trdKTotalPathLength);
   fChain->SetBranchAddress("trdKTotalAmp", &trdKTotalAmp, &b_trdKTotalAmp);
   fChain->SetBranchAddress("trdKElectronLikelihood", &trdKElectronLikelihood, &b_trdKElectronLikelihood);
   fChain->SetBranchAddress("trdKProtonLikelihood", &trdKProtonLikelihood, &b_trdKProtonLikelihood);
   fChain->SetBranchAddress("trdKHeliumLikelihood", &trdKHeliumLikelihood, &b_trdKHeliumLikelihood);
   fChain->SetBranchAddress("trdPElectronToProtonLogLikelihoodRatio", &trdPElectronToProtonLogLikelihoodRatio, &b_trdPElectronToProtonLogLikelihoodRatio);
   fChain->SetBranchAddress("trdPHeliumToElectronLogLikelihoodRatio", &trdPHeliumToElectronLogLikelihoodRatio, &b_trdPHeliumToElectronLogLikelihoodRatio);
   fChain->SetBranchAddress("trdPHeliumToProtonLogLikelihoodRatio", &trdPHeliumToProtonLogLikelihoodRatio, &b_trdPHeliumToProtonLogLikelihoodRatio);
   fChain->SetBranchAddress("trdPElectronLikelihood", &trdPElectronLikelihood, &b_trdPElectronLikelihood);
   fChain->SetBranchAddress("trdPProtonLikelihood", &trdPProtonLikelihood, &b_trdPProtonLikelihood);
   fChain->SetBranchAddress("trdPHeliumLikelihood", &trdPHeliumLikelihood, &b_trdPHeliumLikelihood);
   fChain->SetBranchAddress("trdPNHybridHits", &trdPNHybridHits, &b_trdPNHybridHits);
   fChain->SetBranchAddress("trdPNActiveLayers", &trdPNActiveLayers, &b_trdPNActiveLayers);
   fChain->SetBranchAddress("trdPNLowAdcHits", &trdPNLowAdcHits, &b_trdPNLowAdcHits);
   fChain->SetBranchAddress("trdPNLowDxHits", &trdPNLowDxHits, &b_trdPNLowDxHits);
   fChain->SetBranchAddress("acTrackerTrdTrackDistanceAtTrdCenterInSigmas", &acTrackerTrdTrackDistanceAtTrdCenterInSigmas, &b_acTrackerTrdTrackDistanceAtTrdCenterInSigmas);
   fChain->SetBranchAddress("acTrackerTrdTrackAngularDistanceInSigmas", &acTrackerTrdTrackAngularDistanceInSigmas, &b_acTrackerTrdTrackAngularDistanceInSigmas);
   fChain->SetBranchAddress("accNHits", &accNHits, &b_accNHits);
   fChain->SetBranchAddress("accNRecoClPG", &accNRecoClPG, &b_accNRecoClPG);
   Notify();
}

Bool_t KNUTreeMC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void KNUTreeMC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t KNUTreeMC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef KNUTreeMC_cxx
