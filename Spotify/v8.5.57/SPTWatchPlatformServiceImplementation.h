//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivitySessionObserver-Protocol.h"
#import "SPTWatchPlatformService-Protocol.h"
#import "SPTWatchPlatformTestManagerObserver-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTAllocationContext, SPTWatchConnectivityDataLoader, SPTWatchPlatformLogging, SPTWatchPlatformOfflineManagerImplementation, SPTWatchPlatformTestManager, SPTWatchPlatformWatchApplicationLogSubscriber;
@protocol GaiaFeature, SPTAccessoryManagerService, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlatformService, SPTFeatureFlaggingService, SPTGLUEService, SPTLoginService, SPTNetworkService, SPTPodcastFeature, SPTRadioService, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTSessionService, SPTSiriIntentsService, SPTUIPresentationService, SPTVolumeService;

@interface SPTWatchPlatformServiceImplementation : NSObject <SPTWatchPlatformTestManagerObserver, SPTWatchConnectivitySessionObserver, SPTWatchPlatformService>
{
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTRadioService> _radioService;
    id <SPTSessionService> _sessionService;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTExternalIntegrationDebugLogService> _externalIntegrationDebugLogService;
    id <SPTExternalIntegrationPlatformService> _externalIntegrationPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTVolumeService> _volumeService;
    id <SPTLoginService> _loginService;
    id <SPTSiriIntentsService> _siriIntentsService;
    SPTWatchPlatformLogging *_logger;
    SPTWatchConnectivityDataLoader *_watchConnectivityDataLoader;
    SPTWatchPlatformTestManager *_testManager;
    SPTWatchPlatformOfflineManagerImplementation *_offlineManager;
    NSDictionary *_requestHandlers;
    NSArray *_publishers;
    SPTWatchPlatformWatchApplicationLogSubscriber *_applicationDebugLogSubscriber;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTWatchPlatformWatchApplicationLogSubscriber *applicationDebugLogSubscriber; // @synthesize applicationDebugLogSubscriber=_applicationDebugLogSubscriber;
@property(retain, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(retain, nonatomic) NSDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(retain, nonatomic) SPTWatchPlatformOfflineManagerImplementation *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTWatchPlatformTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTWatchConnectivityDataLoader *watchConnectivityDataLoader; // @synthesize watchConnectivityDataLoader=_watchConnectivityDataLoader;
@property(retain, nonatomic) SPTWatchPlatformLogging *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSiriIntentsService> siriIntentsService; // @synthesize siriIntentsService=_siriIntentsService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTVolumeService> volumeService; // @synthesize volumeService=_volumeService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlatformService> externalIntegrationPlatformService; // @synthesize externalIntegrationPlatformService=_externalIntegrationPlatformService;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> externalIntegrationDebugLogService; // @synthesize externalIntegrationDebugLogService=_externalIntegrationDebugLogService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void).cxx_destruct;
- (id)watchConnectivityManager;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)testManager:(id)arg1 didUpdateWatchIntegrationEnabledState:(_Bool)arg2;
- (void)testManager:(id)arg1 didUpdateWatchAccessoryLoggingEnabledState:(_Bool)arg2;
- (id)provideOfflineManager;
- (void)enableApplicationDebugLogSubscriber;
- (void)disableIntegration;
- (void)enableIntegration;
- (void)disableLogging;
- (void)enableLogging;
- (void)updateEnablement;
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

