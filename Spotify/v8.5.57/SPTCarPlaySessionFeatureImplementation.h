//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAccessory, SPTAllocationContext, SPTCarPlayDataSourceStateManager, SPTCarPlayFeatureProperties, SPTCarPlayRemoteControlEventController, SPTCarPlayUBILogger;
@protocol GaiaFeature, SPTAccessoryManagerService, SPTAccessoryStateManager, SPTCarPlayAppFeature, SPTExternalIntegrationDebugLog, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlatformService, SPTNetworkService, SPTNowPlayingPlatformService, SPTRemoteConfigurationService, SPTUBIService;

@interface SPTCarPlaySessionFeatureImplementation : NSObject <SPTService>
{
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTExternalIntegrationPlatformService> _externalIntegrationPlatformService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTNetworkService> _networkService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTUBIService> _ubiService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTCarPlayDataSourceStateManager *_stateManager;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    SPTAccessory *_currentAccessory;
    SPTCarPlayRemoteControlEventController *_remoteControlEventController;
    SPTCarPlayFeatureProperties *_properties;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTCarPlayUBILogger *_ubiLogger;
    id <SPTCarPlayAppFeature> _carPlayAppFeature;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTCarPlayAppFeature> carPlayAppFeature; // @synthesize carPlayAppFeature=_carPlayAppFeature;
@property(retain, nonatomic) SPTCarPlayUBILogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) SPTCarPlayFeatureProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) SPTCarPlayRemoteControlEventController *remoteControlEventController; // @synthesize remoteControlEventController=_remoteControlEventController;
@property(retain, nonatomic) SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(readonly, nonatomic) __weak SPTCarPlayDataSourceStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(readonly, nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(readonly, nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlatformService> externalIntegrationPlatformService; // @synthesize externalIntegrationPlatformService=_externalIntegrationPlatformService;
@property(readonly, nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void).cxx_destruct;
- (id)provideUBILogger;
- (void)handleRouteChangeWithNotification:(id)arg1 audioSession:(id)arg2;
- (void)audioRouteChanged:(id)arg1;
- (void)stopObservingAudioOutputRoute;
- (void)startObservingAudioOutputRoute;
- (void)stopCarPlaySession;
- (void)startCarPlaySession;
- (void)startSessionIfAudioRouteIsCarPlay;
- (void)unload;
- (void)disable;
- (void)disableAndApplyRestrictedDataSource;
- (void)setupLoggedInDataSource;
- (void)tearDownRemoteControlEventController;
- (void)enable;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

