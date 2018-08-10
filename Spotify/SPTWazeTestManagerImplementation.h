//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLegacyFeatureFlagObserver.h"
#import "SPTWazeTestManager.h"

@class NSString, SPTObserverManager, SPTWazeLogger, UIColor, UIImage;

@interface SPTWazeTestManagerImplementation : NSObject <SPTLegacyFeatureFlagObserver, SPTWazeTestManager>
{
    id <SPTAbbaService> _abbaService;
    id <SPTLocalSettings> _localSettings;
    SPTWazeLogger *_logger;
    id <SPTWazeTestManagerImplementationDataSource> _dataSource;
    id <SPTLegacyFeatureFlag> _featureEnabledFlag;
    id <SPTLegacyFeatureFlag> _autoLaunchFlag;
    id <SPTLegacyFeatureFlag> _connectBannerGreenColorFlag;
    id <SPTLegacyFeatureFlag> _connectBannerDarkColorFlag;
    id <SPTLegacyFeatureFlag> _connectBannerWildcardColorFlag;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> connectBannerWildcardColorFlag; // @synthesize connectBannerWildcardColorFlag=_connectBannerWildcardColorFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> connectBannerDarkColorFlag; // @synthesize connectBannerDarkColorFlag=_connectBannerDarkColorFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> connectBannerGreenColorFlag; // @synthesize connectBannerGreenColorFlag=_connectBannerGreenColorFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> autoLaunchFlag; // @synthesize autoLaunchFlag=_autoLaunchFlag;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> featureEnabledFlag; // @synthesize featureEnabledFlag=_featureEnabledFlag;
@property(readonly, nonatomic) id <SPTWazeTestManagerImplementationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SPTWazeLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) UIImage *connectBannerIconImage;
@property(readonly, nonatomic) UIColor *connectBannerBackgroundColor;
@property(readonly, nonatomic, getter=isAutoLaunchEnabled) _Bool autoLaunchEnabled;
@property(nonatomic, getter=isOnboardingCompleted) _Bool onboardingCompleted;
@property(nonatomic, getter=isWazeIntegrationEnabled) _Bool wazeIntegrationEnabled;
@property(readonly, nonatomic, getter=isWazeFeatureEnabled) _Bool wazeFeatureEnabled;
- (id)provideWazeSettingsSection:(id)arg1;
- (void)teardownFeatureFlags;
- (void)setupFeatureFlags;
- (void)dealloc;
- (id)initWithAbbaService:(id)arg1 localSettings:(id)arg2 dataSource:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

