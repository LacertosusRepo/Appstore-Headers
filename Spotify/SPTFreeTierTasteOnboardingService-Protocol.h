//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTService.h"

@protocol SPTFreeTierTasteOnboardingService <SPTService>
@property(readonly, nonatomic, getter=isOnboardingCoordinationEnabled) _Bool onboardingCoordinationEnabled;
- (id <SPTOnboardingFlowCoordinator>)provideCoordinator;
- (id <SPTFreeTierTasteOnboardingCurationProvider>)provideCurator;
- (_Bool)isMinimumTasteGatheringCompleted;
@end
