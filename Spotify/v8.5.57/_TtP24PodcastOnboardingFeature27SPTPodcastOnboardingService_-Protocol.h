//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTFeatureFlagSignal, SPTFreeTierTasteOnboardingCurationProvider, SPTOnboardingFlowCoordinator;

@protocol _TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_ <SPTService>
- (id <SPTFreeTierTasteOnboardingCurationProvider>)provideCurator;
- (_Bool (^)(void))provideFirstTimeFlowExperimentOn;
- (id <SPTFeatureFlagSignal>)provideFirstTimeFlowEnabledSignal;
- (id <SPTOnboardingFlowCoordinator>)provideCoordinator;
@end

