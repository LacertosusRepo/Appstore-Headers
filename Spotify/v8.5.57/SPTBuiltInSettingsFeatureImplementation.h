//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPlaybackPreferencesObserver, SPTSettingsLogger;
@protocol CosmosFeature, SPTAbbaFeatureFlags, SPTAbbaService, SPTBannerFeature, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTDataSaverService, SPTDebugService, SPTDebugUIService, SPTFeatureFlagSignal, SPTFreeTierService, SPTInAppMessageService, SPTLoginDelayedSignupService, SPTLoginService, SPTNetworkService, SPTSessionService, SPTSettingsDataSource, SPTSettingsFeature, SPTURIDispatchService, SPTVoiceService, _TtP16ProfileV2Feature19SPTProfileV2Service_;

@interface SPTBuiltInSettingsFeatureImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTService>
{
    _Bool _freeTierEnabled;
    _Bool _dataSaverActivated;
    id <CosmosFeature> _cosmosFeature;
    id <SPTNetworkService> _networkService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTAbbaService> _abbaService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTDebugService> _debugService;
    id <SPTDebugUIService> _debugUIService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTVoiceService> _voiceService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTDataSaverService> _dataSaverService;
    id <SPTLoginService> _loginService;
    id <_TtP16ProfileV2Feature19SPTProfileV2Service_> _profileV2Service;
    id <SPTInAppMessageService> _inAppMessageService;
    id <SPTLoginDelayedSignupService> _delayedSignupService;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTSettingsDataSource> _settingsDataSource;
    id <SPTFeatureFlagSignal> _freeTierFeatureSignal;
    id <SPTFeatureFlagSignal> _dataSaverActivatedSignal;
    SPTSettingsLogger *_settingsLogger;
    SPTPlaybackPreferencesObserver *_playbackPreferencesObserver;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPlaybackPreferencesObserver *playbackPreferencesObserver; // @synthesize playbackPreferencesObserver=_playbackPreferencesObserver;
@property(retain, nonatomic) SPTSettingsLogger *settingsLogger; // @synthesize settingsLogger=_settingsLogger;
@property(nonatomic) _Bool dataSaverActivated; // @synthesize dataSaverActivated=_dataSaverActivated;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> dataSaverActivatedSignal; // @synthesize dataSaverActivatedSignal=_dataSaverActivatedSignal;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureSignal; // @synthesize freeTierFeatureSignal=_freeTierFeatureSignal;
@property(retain, nonatomic) id <SPTSettingsDataSource> settingsDataSource; // @synthesize settingsDataSource=_settingsDataSource;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTLoginDelayedSignupService> delayedSignupService; // @synthesize delayedSignupService=_delayedSignupService;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <_TtP16ProfileV2Feature19SPTProfileV2Service_> profileV2Service; // @synthesize profileV2Service=_profileV2Service;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTDataSaverService> dataSaverService; // @synthesize dataSaverService=_dataSaverService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTDebugUIService> debugUIService; // @synthesize debugUIService=_debugUIService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)provideTermsSettingsWithSettingsViewController:(id)arg1;
- (id)provideLicensesSettingsWithSettingsViewController:(id)arg1;
- (id)provideVersionSettingsWithSettingsViewController:(id)arg1;
- (id)provideFacebookSettingsWithSettingsViewController:(id)arg1;
- (id)provideRecentlyPlayedArtistsSettingsWithSettingsViewController:(id)arg1;
- (id)providePublishActivitySettingsWithSettingsViewController:(id)arg1;
- (id)providePrivateSessionSettingsWithSettingsViewController:(id)arg1;
- (id)provideStorageSettingsWithSettingsViewController:(id)arg1;
- (id)provideOfflineSettingsSectionWithSettingsViewController:(id)arg1;
- (id)provideAutomixSettingsWithSettingsViewController:(id)arg1;
- (id)provideAudioNormalisationSettingsWithSettingsViewController:(id)arg1;
- (id)provideUnplayableTracksSettingsWithSettingsViewController:(id)arg1;
- (id)provideGaplessSettingsWithSettingsViewController:(id)arg1;
- (id)provideCellularSyncSettingsWithSettingsViewController:(id)arg1;
- (id)provideSyncQualitySettingsWithSettingsViewController:(id)arg1;
- (id)provideStreamQualitySettingsWithSettingsViewController:(id)arg1;
- (id)provideLoudnessSettingsWithSettingsViewController:(id)arg1;
- (id)provideProfileSettingsWithSettingsViewController:(id)arg1;
- (id)provideLogoutSettingsSection:(id)arg1;
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

