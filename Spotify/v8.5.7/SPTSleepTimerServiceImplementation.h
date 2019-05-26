//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSleepTimerService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol GaiaFeature, SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTFeatureFlaggingService, SPTPlayerFeature, SPTSessionService, SPTSleepTimerContextMenuActionsProvider, SPTSleepTimerController;

@interface SPTSleepTimerServiceImplementation : NSObject <SPTSleepTimerService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTPlayerFeature> _playerFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTSleepTimerContextMenuActionsProvider> _sleepTimerContextMenuActionsProvider;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTContainerService> _containerService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(retain, nonatomic) id <SPTSleepTimerContextMenuActionsProvider> sleepTimerContextMenuActionsProvider; // @synthesize sleepTimerContextMenuActionsProvider=_sleepTimerContextMenuActionsProvider;
@property(retain, nonatomic) id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideSleepTimerContextMenuPresenter;
- (id)provideSleepTimerContextMenuActionsProvider;
- (id)provideSleepTimerController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

