//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFollowShelfService.h"
#import "SPTFollowShelfTestManagerObserver.h"

@class NSString, SPTAllocationContext, SPTFollowShelfTestManager, SPTFollowShelfViewModel;

@interface SPTFollowShelfServiceImplementation : NSObject <SPTFollowShelfTestManagerObserver, SPTFeatureFlagSignalObserver, SPTFollowShelfService>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTSettingsFeature> _settings;
    SPTFollowShelfTestManager *_testManager;
    id <SPTSessionService> _clientSessionService;
    id <FollowFeature> _followFeature;
    id <SPTFeatureFlagSignal> _enabledSignal;
    SPTFollowShelfViewModel *_viewModel;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFollowShelfViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(retain, nonatomic) SPTFollowShelfTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)testManagerDidChangeFollowShelfEnabledState:(_Bool)arg1;
- (_Bool)isReleaseRadarP2SEnabled;
- (_Bool)isFollowShelfEnabled;
- (id)provideFollowShelfEnabledSignal;
- (id)provideFactoryWithItems:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)provideTestManager;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

