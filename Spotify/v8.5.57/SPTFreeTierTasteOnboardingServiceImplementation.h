//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierTasteOnboardingService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierTasteOnboardingCompoundCuration, SPTFreeTierTasteOnboardingCurator, SPTFreeTierTasteOnboardingDeeplinkServiceImplementation, SPTFreeTierTasteOnboardingFlowCoordinator, SPTFreeTierTasteOnboardingTestManagerImplementation;
@protocol FollowFeature, SPTAudioPreviewService, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTHomeMixUIService, SPTInstrumentationService, SPTLoginService, SPTMandatoryPremiumTrialService, SPTNetworkService, SPTPerformanceMetricsService, SPTPlaylistPlatformService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTUIPresentationService, SPTURIDispatchService, _TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_;

@interface SPTFreeTierTasteOnboardingServiceImplementation : NSObject <SPTFreeTierTasteOnboardingService, SPTURISubtypeHandler>
{
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <FollowFeature> _followService;
    id <SPTGLUEService> _glueService;
    id <SPTHomeMixUIService> _homeMixUIService;
    id <SPTLoginService> _loginService;
    id <SPTNetworkService> _networkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTInstrumentationService> _instrumentationService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    SPTFreeTierTasteOnboardingDeeplinkServiceImplementation *_onboardingDeeplinkService;
    id <SPTMandatoryPremiumTrialService> _mandatoryPremiumTrialService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <_TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_> _podcastOnboardingService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTContainerUIService> _containerUIService;
    SPTFreeTierTasteOnboardingCurator *_curator;
    SPTFreeTierTasteOnboardingFlowCoordinator *_flowCoordinator;
    SPTFreeTierTasteOnboardingTestManagerImplementation *_testManager;
    SPTFreeTierTasteOnboardingCompoundCuration *_compoundCuration;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingCompoundCuration *compoundCuration; // @synthesize compoundCuration=_compoundCuration;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingCurator *curator; // @synthesize curator=_curator;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <_TtP24PodcastOnboardingFeature27SPTPodcastOnboardingService_> podcastOnboardingService; // @synthesize podcastOnboardingService=_podcastOnboardingService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTMandatoryPremiumTrialService> mandatoryPremiumTrialService; // @synthesize mandatoryPremiumTrialService=_mandatoryPremiumTrialService;
@property(nonatomic) __weak SPTFreeTierTasteOnboardingDeeplinkServiceImplementation *onboardingDeeplinkService; // @synthesize onboardingDeeplinkService=_onboardingDeeplinkService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTHomeMixUIService> homeMixUIService; // @synthesize homeMixUIService=_homeMixUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <FollowFeature> followService; // @synthesize followService=_followService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
- (void).cxx_destruct;
- (id)seedASessionCurator;
- (id)artistPickerViewControllerProvider;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (unsigned long long)tasteOnboardingFlowCoordinatorStateForURI:(id)arg1;
- (void)initializeFlowCoordinator;
- (void)initializeCurator;
- (void)setupTestManager;
- (id)provideCoordinator;
- (id)provideCurator;
@property(readonly, nonatomic, getter=isOnboardingCoordinationEnabled) _Bool onboardingCoordinationEnabled;
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

