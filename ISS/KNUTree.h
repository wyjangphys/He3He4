//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jul 19 14:17:39 2018 by ROOT version 5.34/36
// from TTree KNUTree/KNUTree
// found on file: /storage3/A_data/He3He4/ISS/set1/1306053901.root
//////////////////////////////////////////////////////////


#define KNUTree_h
#ifdef KNUTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TF1.h>
#include <TString.h>
#include <TH1.h>
#include <TH2.h>
#include <iostream>
#include <vector>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class KNUTree {
  public :
    TTree          *fChain;   //!pointer to the analyzed TTree or TChain
    Int_t           fCurrent; //!current Tree number in a TChain

    // Declaration of leaf types
    char*           outputFileName;
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
    Float_t         liveTime;
    Float_t         utcTime;
    Float_t         orbitAltitude;
    Float_t         orbitLatitude;
    Float_t         orbitLongitude;
    Float_t         orbitLatitudeM;
    Float_t         orbitLongitudeM;
    Float_t         velR;
    Float_t         velTheta;
    Float_t         velPhi;
    Float_t         yaw;
    Float_t         pitch;
    Float_t         roll;
    Float_t         gLongitude;
    Float_t         gLatitude;
    Int_t           gCoordCalcResult;
    Int_t           gCoordCalcResultBit;
    Float_t         sunPosAzimuth;
    Float_t         sunPosElevation;
    Int_t           sunPosCalcResult;
    UInt_t          unixTime;
    Float_t         acEventTime;
    Float_t         solarArrayCoord[3];
    Float_t         ptlCutOffStoermer;
    Float_t         ptlCutOffDipole;
    Int_t           isInShadow;
    Float_t         zenithAngle;
    Int_t           isInSAA;
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

    Double_t CorrectedTrkInnerZ;
    Double_t CorrectedTrkL1Z;
    Double_t CorrectedTrkL2Z;
    Double_t CorrectedTrkL3Z;
    Double_t CorrectedTrkL4Z;
    Double_t CorrectedTrkL5Z;
    Double_t CorrectedTrkL6Z;
    Double_t CorrectedTrkL7Z;
    Double_t CorrectedTrkL8Z;
    Double_t CorrectedTrkL9Z;

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
    TBranch        *b_liveTime;   //!
    TBranch        *b_utcTime;   //!
    TBranch        *b_orbitAltitude;   //!
    TBranch        *b_orbitLatitude;   //!
    TBranch        *b_orbitLongitude;   //!
    TBranch        *b_orbitLatitudeM;   //!
    TBranch        *b_orbitLongitudeM;   //!
    TBranch        *b_velR;   //!
    TBranch        *b_velTheta;   //!
    TBranch        *b_velPhi;   //!
    TBranch        *b_yaw;   //!
    TBranch        *b_pitch;   //!
    TBranch        *b_roll;   //!
    TBranch        *b_gLongitude;   //!
    TBranch        *b_gLatitude;   //!
    TBranch        *b_gCoordCalcResult;   //!
    TBranch        *b_gCoordCalcResultBit;   //!
    TBranch        *b_sunPosAzimuth;   //!
    TBranch        *b_sunPosElevation;   //!
    TBranch        *b_sunPosCalcResult;   //!
    TBranch        *b_unixTime;   //!
    TBranch        *b_acEventTime;   //!
    TBranch        *b_solarArrayCoord;   //!
    TBranch        *b_ptlCutOffStoermer;   //!
    TBranch        *b_ptlCutOffDipole;   //!
    TBranch        *b_isInShadow;   //!
    TBranch        *b_zenithAngle;   //!
    TBranch        *b_isInSAA;   //!
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

    // List of Histograms and histogram related variables
    TH1D* hTofBetaResolution;
    TH1D* hRigidity;
    TH2F* hRigidity_Beta;
    TH2F* hKinetic_Rigidity;
    TH2F* hTofBeta_Rigidity;
    TH2F* hTofBeta_InverseRigidity;
    TH2F* hTofBeta_Mass;
    TH2F* hTofBeta_InverseMass;
    TH2F* hTofBeta_GammaM;
    TH2F* hTofBeta_InverseGammaM;
    TH2F* hTofBeta_DeltaEdep;
    TH2F* hTofKinetic_InverseGammaM;
    TH2F* hTofBeta_TrkMeanEdep;
    TH2F* hTofBeta_TrkL1Edep;
    TH2F* hTofBeta_TrkL2Edep;
    TH2F* hTofBeta_TrkL3Edep;
    TH2F* hTofBeta_TrkL4Edep;
    TH2F* hTofBeta_TrkL5Edep;
    TH2F* hTofBeta_TrkL6Edep;
    TH2F* hTofBeta_TrkL7Edep;
    TH2F* hTofBeta_TrkL8Edep;
    TH2F* hTofBeta_TrkL9Edep;
    TH2F* hTofKinetic_TrkMeanEdep;
    TH2F* hTofKinetic_TrkL1Edep;
    TH2F* hTofKinetic_TrkL2Edep;
    TH2F* hTofKinetic_TrkL3Edep;
    TH2F* hTofKinetic_TrkL4Edep;
    TH2F* hTofKinetic_TrkL5Edep;
    TH2F* hTofKinetic_TrkL6Edep;
    TH2F* hTofKinetic_TrkL7Edep;
    TH2F* hTofKinetic_TrkL8Edep;
    TH2F* hTofKinetic_TrkL9Edep;
    TH2F* hTofBeta_TofMeanEdep;
    TH2F* hTofBeta_UTofMeanEdep;
    TH2F* hTofBeta_LTofMeanEdep;
    TH2F* hTofBeta_TofdEAsym;
    TH2F* hTofBeta_TrkRigidityAsym;
    TH2F* hTofBeta_GeneratedBeta;
    TH2F* hTofBeta_TrackerL1Charge;
    TH2F* hTofBeta_TrackerL2Charge;
    TH2F* hTofBeta_TrackerL3Charge;
    TH2F* hTofBeta_TrackerL4Charge;
    TH2F* hTofBeta_TrackerL5Charge;
    TH2F* hTofBeta_TrackerL6Charge;
    TH2F* hTofBeta_TrackerL7Charge;
    TH2F* hTofBeta_TrackerL8Charge;
    TH2F* hTofBeta_TrackerL9Charge;
    TH2F* hTofBeta_TrackerInnerCharge;
    TH2F* hTofBeta_TrackerL1ChargeCorrected;
    TH2F* hTofBeta_TrackerL2ChargeCorrected;
    TH2F* hTofBeta_TrackerL3ChargeCorrected;
    TH2F* hTofBeta_TrackerL4ChargeCorrected;
    TH2F* hTofBeta_TrackerL5ChargeCorrected;
    TH2F* hTofBeta_TrackerL6ChargeCorrected;
    TH2F* hTofBeta_TrackerL7ChargeCorrected;
    TH2F* hTofBeta_TrackerL8ChargeCorrected;
    TH2F* hTofBeta_TrackerL9ChargeCorrected;
    TH2F* hTofBeta_TrackerInnerChargeCorrected;
    TH2F* hTofKinetic_TrackerL1Charge;
    TH2F* hTofKinetic_TrackerL2Charge;
    TH2F* hTofKinetic_TrackerL3Charge;
    TH2F* hTofKinetic_TrackerL4Charge;
    TH2F* hTofKinetic_TrackerL5Charge;
    TH2F* hTofKinetic_TrackerL6Charge;
    TH2F* hTofKinetic_TrackerL7Charge;
    TH2F* hTofKinetic_TrackerL8Charge;
    TH2F* hTofKinetic_TrackerL9Charge;
    TH2F* hTofKinetic_TrackerInnerCharge;
    TH2F* hTofBeta_TofAcUpperCharge;
    TH2F* hTofBeta_TofAcLowerCharge;
    TH2F* hTofBeta_UTofLTofDiff;
    TH2F* hTofBeta_DeltaPhiTrdRich;


    // List of member functions
    KNUTree(TTree *tree=0);
    virtual ~KNUTree();
    virtual Int_t    Cut(Long64_t entry);
    virtual Int_t    GetEntry(Long64_t entry);
    virtual Long64_t LoadTree(Long64_t entry);
    virtual void     Init(TTree *tree);
    virtual void     Loop();
    virtual Bool_t   Notify();
    virtual void     Show(Long64_t entry = -1);
    virtual Int_t    Fragmented(Long64_t entry);
    virtual Double_t GetCorrectedTrackerCharge(Double_t, Double_t);
    virtual Double_t GetMeanEdep(Int_t nSample, Float_t* pEdepArray);
    virtual void     Write(TString outputFileName);
};

#endif

#ifdef KNUTree_cxx
KNUTree::KNUTree(TTree *tree) : fChain(0)
{/*{{{*/
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/storage3/A_data/He3He4/ISS/set1/1306053901.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("/storage3/A_data/He3He4/ISS/set1/1306053901.root");
    }
    f->GetObject("KNUTree",tree);

  }
  Init(tree);
}/*}}}*/

KNUTree::~KNUTree()
{/*{{{*/
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}/*}}}*/

Int_t KNUTree::GetEntry(Long64_t entry)
{/*{{{*/
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}/*}}}*/

Long64_t KNUTree::LoadTree(Long64_t entry)
{/*{{{*/
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
    Notify();
  }
  return centry;
}/*}}}*/

void KNUTree::Init(TTree *tree)
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
  fChain->SetBranchAddress("liveTime", &liveTime, &b_liveTime);
  fChain->SetBranchAddress("utcTime", &utcTime, &b_utcTime);
  fChain->SetBranchAddress("orbitAltitude", &orbitAltitude, &b_orbitAltitude);
  fChain->SetBranchAddress("orbitLatitude", &orbitLatitude, &b_orbitLatitude);
  fChain->SetBranchAddress("orbitLongitude", &orbitLongitude, &b_orbitLongitude);
  fChain->SetBranchAddress("orbitLatitudeM", &orbitLatitudeM, &b_orbitLatitudeM);
  fChain->SetBranchAddress("orbitLongitudeM", &orbitLongitudeM, &b_orbitLongitudeM);
  fChain->SetBranchAddress("velR", &velR, &b_velR);
  fChain->SetBranchAddress("velTheta", &velTheta, &b_velTheta);
  fChain->SetBranchAddress("velPhi", &velPhi, &b_velPhi);
  fChain->SetBranchAddress("yaw", &yaw, &b_yaw);
  fChain->SetBranchAddress("pitch", &pitch, &b_pitch);
  fChain->SetBranchAddress("roll", &roll, &b_roll);
  fChain->SetBranchAddress("gLongitude", &gLongitude, &b_gLongitude);
  fChain->SetBranchAddress("gLatitude", &gLatitude, &b_gLatitude);
  fChain->SetBranchAddress("gCoordCalcResult", &gCoordCalcResult, &b_gCoordCalcResult);
  fChain->SetBranchAddress("gCoordCalcResultBit", &gCoordCalcResultBit, &b_gCoordCalcResultBit);
  fChain->SetBranchAddress("sunPosAzimuth", &sunPosAzimuth, &b_sunPosAzimuth);
  fChain->SetBranchAddress("sunPosElevation", &sunPosElevation, &b_sunPosElevation);
  fChain->SetBranchAddress("sunPosCalcResult", &sunPosCalcResult, &b_sunPosCalcResult);
  fChain->SetBranchAddress("unixTime", &unixTime, &b_unixTime);
  fChain->SetBranchAddress("acEventTime", &acEventTime, &b_acEventTime);
  fChain->SetBranchAddress("solarArrayCoord", solarArrayCoord, &b_solarArrayCoord);
  fChain->SetBranchAddress("ptlCutOffStoermer", &ptlCutOffStoermer, &b_ptlCutOffStoermer);
  fChain->SetBranchAddress("ptlCutOffDipole", &ptlCutOffDipole, &b_ptlCutOffDipole);
  fChain->SetBranchAddress("isInShadow", &isInShadow, &b_isInShadow);
  fChain->SetBranchAddress("zenithAngle", &zenithAngle, &b_zenithAngle);
  fChain->SetBranchAddress("isInSAA", &isInSAA, &b_isInSAA);
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

  // Initialize histograms
  const Double_t x_beta_i = .2;
  const Double_t x_beta_f = 1.4;
  const Double_t x_beta_rsl = .02; // beta resolution assumed for binning plan
  Double_t x_beta = x_beta_i;
  std::vector<Double_t> x_beta_bin; x_beta_bin.clear();
  while( x_beta < x_beta_f )
  {
    x_beta_bin.push_back( x_beta );
    x_beta /= 1. - x_beta_rsl;
  }

  Double_t x_k;
  std::vector<Double_t> x_k_bin; x_k_bin.clear();
  for( std::vector<Double_t>::iterator it = x_beta_bin.begin(); (*it) < 0.9946; ++it )
  {
    x_k = ( 1./(1.-(*it)*(*it)) - 1. ) * .938;
    x_k_bin.push_back( x_k );
  }

  Int_t nTrackerDeDxBins  = 250;
  Float_t trackerDeDxLow  = 0.;
  Float_t trackerDeDxHigh = 5.;

  Int_t nTofDeDxBins  = 200;
  Float_t tofDeDxLow  = 0.;
  Float_t tofDeDxHigh = 50.;

  const UInt_t nMassBin  = 200;
  const Float_t xMassMin = 0;
  const Float_t xMassMax = 10;

  hTofBetaResolution                   = new TH1D("hTofBetaResolution",             "#beta distribution for R > 100 GV events;#beta_{TOF};Events",                                                                                1000, 0.2, 1.20);
  hRigidity                            = new TH1D("hRigidity",                      "Rigidity distribution;Rigidity [GV];Events",                                                                                                 1000, 0, 20);
  hRigidity_Beta                       = new TH2F("hRigidity_Beta",                 "#beta vs. Rigidity (Inner);Rigidity (Inner) [GV];#beta",                                                                                     2000, 0, 20, 1000, 0, 1.20);
  hKinetic_Rigidity                    = new TH2F("hKinetic_Rigidity",              "Rigidity (Inner) vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nuclen [GeV/n];Rigidity [GV]",                                            x_k_bin.size()-1, &x_k_bin[0], 500, 0, 20);
  hTofBeta_Rigidity                    = new TH2F("hTofBeta_Rigidity",              "Rigidity (Inner) vs. #beta_{TOF};#beta_{TOF};Rigidity (Inner) [GV]",                                                                         x_beta_bin.size()-1, &x_beta_bin[0], 1000, 0, 100);
  hTofBeta_InverseRigidity             = new TH2F("hTofBeta_InverseRigidity",       "Inverse Rigidity (Inner) vs. #beta_{TOF};#beta_{TOF};Inverse Rigidity (Inner) [GV]",                                                         x_beta_bin.size()-1, &x_beta_bin[0], 100, 0.001, 2.5);
  hTofBeta_Mass                        = new TH2F("hTofBeta_Mass",                  "Mass vs. #beta_{TOF};#beta_{TOF};Mass [GeV]",                                                                                                x_beta_bin.size()-1, &x_beta_bin[0], nMassBin, xMassMin, xMassMax);
  hTofBeta_InverseMass                 = new TH2F("hTofBeta_InverseMass",           "Inverse Mass vs. #beta_{TOF};#beta_{TOF};Inverse Mass [GeV^{-1}]",                                                                           x_beta_bin.size()-1, &x_beta_bin[0], 200, 0.001, 1.5);
  hTofBeta_GammaM                      = new TH2F("hTofBeta_GammaM",                "#gamma m vs. #beta_{TOF};#beta_{TOF};#gamma m [GeV]",                                                                                        x_beta_bin.size()-1, &x_beta_bin[0], 80, 2, 30);
  hTofBeta_InverseGammaM               = new TH2F("hTofBeta_InverseGammaM",         "g_{m} vs. #beta_{TOF};#beta_{TOF};g_{m} [GeV^{-1}]",                                                                                         x_beta_bin.size()-1, &x_beta_bin[0], 100, 0.001, 0.8);
  hTofBeta_DeltaEdep                   = new TH2F("hTofBeta_DeltaEdep",             "#Delta_{E. dep.} vs. #beta_{TOF};#beta_{TOF};#Delta_{E. dep.}",                                                                              x_beta_bin.size()-1, &x_beta_bin[0], 1000, -10, 10);
  hTofKinetic_InverseGammaM            = new TH2F("hTofKinetic_InverseGammaM",      "g_{m} vs. #beta_{TOF};Kinetic Energy Per Nucleon [GeV/n];g_{m} [GeV^{-1}]",                                                                  x_k_bin.size()-1, &x_k_bin[0], 400, 0.001, 1.2);
  hTofBeta_TrkMeanEdep                 = new TH2F("hTofBeta_TrkMeanEdep",           "Tracker mean energy deposit vs. #beta_{TOF};#beta_{TOF};Mean Energy Deposit on Tracker Layers [MeV]",                                        x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL1Edep                   = new TH2F("hTofBeta_TrkL1Edep",             "Tracker L1 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 1 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL2Edep                   = new TH2F("hTofBeta_TrkL2Edep",             "Tracker L2 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 2 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL3Edep                   = new TH2F("hTofBeta_TrkL3Edep",             "Tracker L3 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 3 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL4Edep                   = new TH2F("hTofBeta_TrkL4Edep",             "Tracker L4 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 4 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL5Edep                   = new TH2F("hTofBeta_TrkL5Edep",             "Tracker L5 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 5 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL6Edep                   = new TH2F("hTofBeta_TrkL6Edep",             "Tracker L6 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 6 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL7Edep                   = new TH2F("hTofBeta_TrkL7Edep",             "Tracker L7 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 7 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL8Edep                   = new TH2F("hTofBeta_TrkL8Edep",             "Tracker L8 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 8 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TrkL9Edep                   = new TH2F("hTofBeta_TrkL9Edep",             "Tracker L9 mean energy deposit vs. #beta_{TOF};#beta_{TOF};Deposited Energy on Tracker Layer 9 [MeV]",                                       x_beta_bin.size()-1, &x_beta_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkMeanEdep              = new TH2F("hTofKinetic_TrkMeanEdep",        "Tracker mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Mean Energy Deposit on Tracker Layers [MeV]",  x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL1Edep                = new TH2F("hTofKinetic_TrkL1Edep",          "Tracker L1 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 1 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL2Edep                = new TH2F("hTofKinetic_TrkL2Edep",          "Tracker L2 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 2 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL3Edep                = new TH2F("hTofKinetic_TrkL3Edep",          "Tracker L3 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 3 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL4Edep                = new TH2F("hTofKinetic_TrkL4Edep",          "Tracker L4 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 4 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL5Edep                = new TH2F("hTofKinetic_TrkL5Edep",          "Tracker L5 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 5 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL6Edep                = new TH2F("hTofKinetic_TrkL6Edep",          "Tracker L6 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 6 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL7Edep                = new TH2F("hTofKinetic_TrkL7Edep",          "Tracker L7 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 7 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL8Edep                = new TH2F("hTofKinetic_TrkL8Edep",          "Tracker L8 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 8 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofKinetic_TrkL9Edep                = new TH2F("hTofKinetic_TrkL9Edep",          "Tracker L9 mean energy deposit vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon [GeV/n];Deposited Energy on Tracker Layer 9 [MeV]", x_k_bin.size()-1, &x_k_bin[0], nTrackerDeDxBins, trackerDeDxLow, trackerDeDxHigh);
  hTofBeta_TofMeanEdep                 = new TH2F("hTofBeta_TofMeanEdep",           "TOF mean energy deposit vs. #beta_{TOF};#beta_{TOF};Mean Energy Deposit on TOF Layers [MeV]",                                                x_beta_bin.size()-1, &x_beta_bin[0], nTofDeDxBins, tofDeDxLow, tofDeDxHigh);
  hTofBeta_UTofMeanEdep                = new TH2F("hTofBeta_UTofMeanEdep",          "UTOF mean energy deposit vs. #beta_{TOF};#beta_{TOF};Upper TOF Mean Energy Deposit [MeV]",                                                   x_beta_bin.size()-1, &x_beta_bin[0], nTofDeDxBins, tofDeDxLow, tofDeDxHigh);
  hTofBeta_LTofMeanEdep                = new TH2F("hTofBeta_LTofMeanEdep",          "LTOF mean energy deposit vs. #beta_{TOF};#beta_{TOF};Lpper TOF Mean Energy Deposit [MeV]",                                                   x_beta_bin.size()-1, &x_beta_bin[0], nTofDeDxBins, tofDeDxLow, tofDeDxHigh);
  hTofBeta_TofdEAsym                   = new TH2F("hTofBeta_TofdEAsym",             "Asymmetry of TOF deposit energy vs. #beta_{TOF};#beta_{TOF};TOF Deposit Energy Asymmetry",                                                   x_beta_bin.size()-1, &x_beta_bin[0], 600, -3, 3);
  hTofBeta_TrkRigidityAsym             = new TH2F("hTofBeta_TrkRigidityAsym",       "Tracker Rigidity Asymmetry vs. #beta_{TOF};#beta_{TOF};Tracker Rigidity Asymmetry",                                                          x_beta_bin.size()-1, &x_beta_bin[0], 600, -3, 3);
  hTofBeta_GeneratedBeta               = new TH2F("hTofBeta_GeneratedBeta",         "#beta_{Generated} vs. #beta_{TOF};#beta_{TOF};#beta_{Gen.}",                                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 200, 0.45, 1.2);
  hTofBeta_TrackerL1Charge             = new TH2F("hTofBeta_TrackerL1Charge",       "Tracker L1 Charge vs. #beta_{TOF};#beta_{TOF};L1 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL2Charge             = new TH2F("hTofBeta_TrackerL2Charge",       "Tracker L2 Charge vs. #beta_{TOF};#beta_{TOF};L2 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL3Charge             = new TH2F("hTofBeta_TrackerL3Charge",       "Tracker L3 Charge vs. #beta_{TOF};#beta_{TOF};L3 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL4Charge             = new TH2F("hTofBeta_TrackerL4Charge",       "Tracker L4 Charge vs. #beta_{TOF};#beta_{TOF};L4 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL5Charge             = new TH2F("hTofBeta_TrackerL5Charge",       "Tracker L5 Charge vs. #beta_{TOF};#beta_{TOF};L5 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL6Charge             = new TH2F("hTofBeta_TrackerL6Charge",       "Tracker L6 Charge vs. #beta_{TOF};#beta_{TOF};L6 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL7Charge             = new TH2F("hTofBeta_TrackerL7Charge",       "Tracker L7 Charge vs. #beta_{TOF};#beta_{TOF};L7 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL8Charge             = new TH2F("hTofBeta_TrackerL8Charge",       "Tracker L8 Charge vs. #beta_{TOF};#beta_{TOF};L8 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL9Charge             = new TH2F("hTofBeta_TrackerL9Charge",       "Tracker L9 Charge vs. #beta_{TOF};#beta_{TOF};L9 Charge [e]",                                                                                x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerInnerCharge          = new TH2F("hTofBeta_TrackerInnerCharge",    "Inner Tracker Charge vs. #beta_{TOF};#beta_{TOF};Charge_{Inner} [e]",                                                                        x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL1ChargeCorrected    = new TH2F("hTofBeta_TrackerL1ChargeCorrected", "Tracker L1 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L1 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL2ChargeCorrected    = new TH2F("hTofBeta_TrackerL2ChargeCorrected", "Tracker L2 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L2 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL3ChargeCorrected    = new TH2F("hTofBeta_TrackerL3ChargeCorrected", "Tracker L3 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L3 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL4ChargeCorrected    = new TH2F("hTofBeta_TrackerL4ChargeCorrected", "Tracker L4 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L4 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL5ChargeCorrected    = new TH2F("hTofBeta_TrackerL5ChargeCorrected", "Tracker L5 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L5 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL6ChargeCorrected    = new TH2F("hTofBeta_TrackerL6ChargeCorrected", "Tracker L6 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L6 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL7ChargeCorrected    = new TH2F("hTofBeta_TrackerL7ChargeCorrected", "Tracker L7 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L7 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL8ChargeCorrected    = new TH2F("hTofBeta_TrackerL8ChargeCorrected", "Tracker L8 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L8 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerL9ChargeCorrected    = new TH2F("hTofBeta_TrackerL9ChargeCorrected", "Tracker L9 Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};L9 Charge [e]",                                                                 x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TrackerInnerChargeCorrected = new TH2F("hTofBeta_TrackerInnerChargeCorrected", "Tracker Inner Charge (Corrected) vs. #beta_{TOF};#beta_{TOF};Inner Charge [e]",                                                        x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL1Charge          = new TH2F("hTofKinetic_TrackerL1Charge",    "Tracker L1 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L1 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL2Charge          = new TH2F("hTofKinetic_TrackerL2Charge",    "Tracker L2 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L2 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL3Charge          = new TH2F("hTofKinetic_TrackerL3Charge",    "Tracker L3 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L3 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL4Charge          = new TH2F("hTofKinetic_TrackerL4Charge",    "Tracker L4 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L4 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL5Charge          = new TH2F("hTofKinetic_TrackerL5Charge",    "Tracker L5 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L5 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL6Charge          = new TH2F("hTofKinetic_TrackerL6Charge",    "Tracker L6 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L6 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL7Charge          = new TH2F("hTofKinetic_TrackerL7Charge",    "Tracker L7 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L7 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL8Charge          = new TH2F("hTofKinetic_TrackerL8Charge",    "Tracker L8 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L8 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerL9Charge          = new TH2F("hTofKinetic_TrackerL9Charge",    "Tracker L9 Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;L9 Charge [e]",                                                  x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofKinetic_TrackerInnerCharge       = new TH2F("hTofKinetic_TrackerInnerCharge", "Inner Tracker Charge vs. Kinetic Energy Per Nucleon;Kinetic Energy Per Nucleon;Charge_{Inner} [e]",                                          x_k_bin.size()-1, &x_k_bin[0], 50, 0., 5.);
  hTofBeta_TofAcUpperCharge            = new TH2F("hTofBeta_TofAcUpperCharge",      "UTOF Charge vs. #beta_{TOF};#beta_{TOF};Charge_{UTOF} [e]",                                                                                  x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_TofAcLowerCharge            = new TH2F("hTofBeta_TofAcLowerCharge",      "LTOF Charge vs. #beta_{TOF};#beta_{TOF};Charge_{LTOF} [e]",                                                                                  x_beta_bin.size()-1, &x_beta_bin[0], 50, 0., 5.);
  hTofBeta_UTofLTofDiff                = new TH2F("hTofBeta_UTofLTofDiff",          "Difference of UTOF Edep and LTOF Edep;#beta_{TOF};Diff. [MeV]",                                                                              x_beta_bin.size()-1, &x_beta_bin[0], 1000, -5, 5);
  hTofBeta_DeltaPhiTrdRich             = new TH2F("hTofBeta_DeltaPhiTrdRich",       "#Delta #phi between #phi_{TRD} and #phi_{RICH} vs. #beta_{RICH, NaF};#beta_{RICH, NaF};#phi_{TRD} - #phi_{RICH}",                            x_beta_bin.size()-1, &x_beta_bin[0], 800, -8, 8);
}

Bool_t KNUTree::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void KNUTree::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t KNUTree::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.

  if( trkFitCodeInner < 0 ) return -1;
  //if( trkRigidityInner > 20. ) return -1;
  if( tofBeta < 0 ) return -1;
  if( nTofClustersInTime > 1 ) return -1;
  if( trkReducedChisquareInnerX > 10. ) return -1;
  if( trkReducedChisquareInnerY > 5. ) return -1;
  if( tofReducedChisqT > 3. ) return -1;
  if( tofReducedChisqC > 3. ) return -1;
  if( trkLayerJQ[0] == 0 ) return -1;
  if( CorrectedTrkInnerZ  < 1.6 || CorrectedTrkInnerZ > 2.5 ) return -1;
  if( tofAcUpperCharge < 1.8 || tofAcUpperCharge > 2.8 ) return -1;
  if( tofAcLowerCharge < 1.9 || tofAcLowerCharge > 2.4 ) return -1;
  return 1;
}

Int_t KNUTree::Fragmented(Long64_t entry)
{
  for( Int_t i = 0; i < 9; i++ )
    if( trkEdepLayerJ[i+1] - trkEdepLayerJ[i] > 1. ) return 1;
  return -1;
}

Double_t KNUTree::GetCorrectedTrackerCharge( Double_t beta, Double_t z )
{/*{{{*/
  // beta is particle speed.
  // z is uncorrected charge.
  if( beta > 1. ) return 1.;

  Double_t z1 = 3.215*(beta-1.)*(beta-1.)+1.; // This function is obtained by fitting peaks of uncorrected charge distribution of each bins of TOF measured beta.
  Double_t z2 = z1*2.;
  Double_t z3 = z1*3.;
  Double_t z4 = z1*4.;
  Double_t z5 = z1*5.;
  Double_t corr = 1.;

  Int_t range = -1;

  if( z < z1*0.5 || z > z3*1.5 ) range = 0;   // outside of the region we concern.
  if( z > z1*0.5 && z < z1*1.5 ) range = 1;   // z ~ 1 region
  if( z > z1*1.5 && z < z1*2.5 ) range = 2;   // z ~ 2 region
  if( z > z1*2.5 && z < z1*3.5 ) range = 3;   // z ~ 3 region
  if( z > z1*3.5 && z < z1*4.5 ) range = 4;   // z ~ 3 region

  switch( range )
  {
    case 0:
      corr = 1.;
      break;
    case 1:
      corr = z1;
      break;
    case 2:
      corr = z2/2.;
      break;
    case 3:
      corr = z3/3.;
      break;
    case 4:
      corr = z4/4.;
    default :
      break;
  }

  //cout << "beta = " << beta << ", z_in: " << z << ", corr = " << 1./corr << ", z_corr = " << z/corr << ", range = " << range << ", z1 : " << z1 << ", z2 : " << z2 << ", z3 : " << z3 << "" << endl;
  /*
  switch( range ) {
    case 0:
      //cout << "out of range" << endl;
      break;
    case 1:
      //cout << "z1-z = " << z1-z << endl;
      break;
    case 2:
      //cout << "z2-z = " << z2-z << endl;
      break;
    case 3:
      //cout << "z3-z = " << z3-z << endl;
      break;
    case 4:
      //cout << "z4-z = " << z4-z << endl;
      break;
    default :
      break;
  }
  */

  return 1./corr;
}/*}}}*/

Double_t KNUTree::GetMeanEdep(Int_t nSample, Float_t* pEdepArray)
{/*{{{*/
  Double_t u = 0.;          // u is a symbol for Greek letter 'mu' which stands for 'mean'
  Int_t counter = 0;

  for( Int_t i = 0; i < nSample; ++i )
  {
    if( pEdepArray[i] == 0 ) continue;
    else
    {
      u += pEdepArray[i];
      counter++;
    }
  }

  return u/(Double_t)counter;
}/*}}}*/

void KNUTree::Write(TString outputFileName)
{
  /// Save data
  TFile* fOutput = new TFile(outputFileName, "RECREATE");
  fOutput->cd("/"); // This line prevents segmentation violation which was provoked by TFile::Write() function for unknown reason.

  hTofBetaResolution                          ->Write();
  hRigidity_Beta                              ->Write();
  hTofBeta_Rigidity                           ->Write();
  hTofBeta_InverseRigidity                    ->Write();
  hTofBeta_Mass                               ->Write();
  hTofBeta_InverseMass                        ->Write();
  hTofBeta_GammaM                             ->Write();
  hTofBeta_InverseGammaM                      ->Write();
  hTofKinetic_InverseGammaM                   ->Write();
  hTofBeta_TrkMeanEdep                        ->Write();
  hTofBeta_TrkL1Edep                          ->Write();
  hTofBeta_TrkL2Edep                          ->Write();
  hTofBeta_TrkL3Edep                          ->Write();
  hTofBeta_TrkL4Edep                          ->Write();
  hTofBeta_TrkL5Edep                          ->Write();
  hTofBeta_TrkL6Edep                          ->Write();
  hTofBeta_TrkL7Edep                          ->Write();
  hTofBeta_TrkL8Edep                          ->Write();
  hTofBeta_TrkL9Edep                          ->Write();
  hTofKinetic_TrkMeanEdep                     ->Write();
  hTofKinetic_TrkL1Edep                       ->Write();
  hTofKinetic_TrkL2Edep                       ->Write();
  hTofKinetic_TrkL3Edep                       ->Write();
  hTofKinetic_TrkL4Edep                       ->Write();
  hTofKinetic_TrkL5Edep                       ->Write();
  hTofKinetic_TrkL6Edep                       ->Write();
  hTofKinetic_TrkL7Edep                       ->Write();
  hTofKinetic_TrkL8Edep                       ->Write();
  hTofKinetic_TrkL9Edep                       ->Write();
  hTofBeta_TrackerL1Charge                    ->Write();
  hTofBeta_TrackerL2Charge                    ->Write();
  hTofBeta_TrackerL3Charge                    ->Write();
  hTofBeta_TrackerL4Charge                    ->Write();
  hTofBeta_TrackerL5Charge                    ->Write();
  hTofBeta_TrackerL6Charge                    ->Write();
  hTofBeta_TrackerL7Charge                    ->Write();
  hTofBeta_TrackerL8Charge                    ->Write();
  hTofBeta_TrackerL9Charge                    ->Write();
  hTofBeta_TrackerInnerCharge                 ->Write();
  hTofBeta_TrackerL1ChargeCorrected           ->Write();
  hTofBeta_TrackerL2ChargeCorrected           ->Write();
  hTofBeta_TrackerL3ChargeCorrected           ->Write();
  hTofBeta_TrackerL4ChargeCorrected           ->Write();
  hTofBeta_TrackerL5ChargeCorrected           ->Write();
  hTofBeta_TrackerL6ChargeCorrected           ->Write();
  hTofBeta_TrackerL7ChargeCorrected           ->Write();
  hTofBeta_TrackerL8ChargeCorrected           ->Write();
  hTofBeta_TrackerL9ChargeCorrected           ->Write();
  hTofBeta_TrackerInnerChargeCorrected        ->Write();
  hTofKinetic_TrackerL1Charge                 ->Write();
  hTofKinetic_TrackerL2Charge                 ->Write();
  hTofKinetic_TrackerL3Charge                 ->Write();
  hTofKinetic_TrackerL4Charge                 ->Write();
  hTofKinetic_TrackerL5Charge                 ->Write();
  hTofKinetic_TrackerL6Charge                 ->Write();
  hTofKinetic_TrackerL7Charge                 ->Write();
  hTofKinetic_TrackerL8Charge                 ->Write();
  hTofKinetic_TrackerL9Charge                 ->Write();
  hTofKinetic_TrackerInnerCharge              ->Write();
  hTofBeta_TofMeanEdep                        ->Write();
  hTofBeta_UTofMeanEdep                       ->Write();
  hTofBeta_LTofMeanEdep                       ->Write();
  hTofBeta_TofdEAsym                          ->Write();
  hTofBeta_TrkRigidityAsym                    ->Write();
  hTofBeta_GeneratedBeta                      ->Write();
  hTofBeta_TrackerL1Charge                    ->Write();
  hTofBeta_TofAcUpperCharge                   ->Write();
  hTofBeta_TofAcLowerCharge                   ->Write();
  hTofBeta_UTofLTofDiff                       ->Write();
  hTofBeta_DeltaPhiTrdRich                    ->Write();

  /// Useful mathematical functions
  /*
  TF1* fHe4_invR_btof = new TF1("fHe4_invR_btof", "[0]*sqrt(1-x*x)/[1]/x", 0, 1.2);
  fHe4_invR_btof->SetParameters(2, 0.938*4.);
  fHe4_invR_btof->SetLineColor(kBlue);
  fHe4_invR_btof->Write();

  TF1* fHe3_invR_btof = new TF1("fHe3_invR_btof", "[0]*sqrt(1-x*x)/[1]/x", 0, 1.2);
  fHe3_invR_btof->SetParameters(2, 0.938*3.);
  fHe3_invR_btof->SetLineColor(kViolet);
  fHe3_invR_btof->Write();
  */

  fOutput->Close();
}
#endif // #ifdef KNUTree_cxx
