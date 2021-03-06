//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarmageddonService-Protocol.h"
#import "SPTCarmageddonTestManagerObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTCarmageddonFeedbackController, SPTCarmageddonMotionBasedStateDetector;
@protocol SPTCarmageddonRemoteConfiguration, SPTGLUEService, SPTNetworkService, SPTRemoteConfigurationService, SPTSettingsFeature, SPTUIPresentationService, SlateFeature;

@interface SPTCarmageddonServiceImplementation : NSObject <SPTCarmageddonTestManagerObserver, SPTCarmageddonService>
{
    id <SPTCarmageddonRemoteConfiguration> _remoteConfiguration;
    id <SPTNetworkService> _networkService;
    id <SlateFeature> _slateService;
    id <SPTGLUEService> _glueService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUIPresentationService> _presentationService;
    SPTCarmageddonMotionBasedStateDetector *_motionBasedCarDetector;
    SPTCarmageddonFeedbackController *_surveyController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCarmageddonFeedbackController *surveyController; // @synthesize surveyController=_surveyController;
@property(retain, nonatomic) SPTCarmageddonMotionBasedStateDetector *motionBasedCarDetector; // @synthesize motionBasedCarDetector=_motionBasedCarDetector;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SlateFeature> slateService; // @synthesize slateService=_slateService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)createFeedbackPresenter;
- (id)createMotionBasedDetectorWithDetectionLoader:(id)arg1;
- (id)createFeedbackLoader;
- (id)createMotionDetectionLoader;
- (id)createMotionRecorderViewController;
- (void)testManagerDidPerformManualSamplingAction:(id)arg1;
- (id)provideCarDetector;
@property(readonly, nonatomic) id <SPTCarmageddonRemoteConfiguration> remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

