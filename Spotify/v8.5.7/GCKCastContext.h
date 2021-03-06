//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKRuntimeConfigurationValueObserver-Protocol.h"

@class GCKAnalyticsEventLogger, GCKCastDeviceProvider, GCKCastOptions, GCKClearcutEventSink, GCKDatabase, GCKDeviceProviderRegistry, GCKDiagnosticListener, GCKDiscoveryManager, GCKGuestModePairingUI, GCKNNetworkReachability, GCKPrecacheController, GCKRuntimeConfiguration, GCKSessionManager, GCKUIExpandedMediaControlsViewController, NSString;
@protocol GCKUIImageCache, GCKUIImagePicker;

@interface GCKCastContext : NSObject <GCKRuntimeConfigurationValueObserver>
{
    GCKCastDeviceProvider *_castDeviceProvider;
    GCKDiagnosticListener *_diagnosticListener;
    GCKClearcutEventSink *_clearcutEventSink;
    _Bool _enableClearcutAnalytics;
    GCKGuestModePairingUI *_defaultGuestModePairingUI;
    unsigned long long _castState;
    GCKDiscoveryManager *_discoveryManager;
    GCKSessionManager *_sessionManager;
    GCKDatabase *_database;
    GCKNNetworkReachability *_networkReachability;
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKDeviceProviderRegistry *_deviceProviderRegistry;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKCastOptions *_castOptions;
    GCKPrecacheController *_precacheController;
    GCKGuestModePairingUI *_customGuestModePairingUI;
}

+ (id)resourceBundle;
+ (void)unsetSharedInstance;
+ (_Bool)setSharedInstanceWithOptions:(id)arg1 error:(id *)arg2;
+ (void)setSharedInstanceWithOptions:(id)arg1;
+ (_Bool)isSharedInstanceInitialized;
+ (id)sharedInstance;
@property(retain, nonatomic) GCKGuestModePairingUI *customGuestModePairingUI; // @synthesize customGuestModePairingUI=_customGuestModePairingUI;
@property(retain, nonatomic) GCKPrecacheController *precacheController; // @synthesize precacheController=_precacheController;
@property(retain, nonatomic) GCKCastOptions *castOptions; // @synthesize castOptions=_castOptions;
@property(retain, nonatomic) GCKRuntimeConfiguration *runtimeConfiguration; // @synthesize runtimeConfiguration=_runtimeConfiguration;
@property(retain, nonatomic) GCKDeviceProviderRegistry *deviceProviderRegistry; // @synthesize deviceProviderRegistry=_deviceProviderRegistry;
@property(retain, nonatomic) GCKAnalyticsEventLogger *analyticsEventLogger; // @synthesize analyticsEventLogger=_analyticsEventLogger;
@property(retain, nonatomic) GCKNNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) GCKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) GCKSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) GCKDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
@property(nonatomic) unsigned long long castState; // @synthesize castState=_castState;
- (void).cxx_destruct;
- (id)dumpStates;
- (id)guestModePairingUI;
- (void)runtimeConfiguration:(id)arg1 value:(id)arg2 didChangeFrom:(id)arg3 to:(id)arg4;
- (void)updateCastingState;
- (void)unregisterDeviceProviderForCategory:(id)arg1;
- (void)registerDeviceProvider:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)precacheData:(id)arg1 requestItems:(id)arg2;
- (void)precacheItems:(id)arg1;
- (void)precacheData:(id)arg1;
- (void)logAPIUsageForCastOptions;
- (void)updateAnalyticsLoggingOptionsWithRuntimeConfiguration;
- (void)enableClearcutAnalyticsIfNecessary;
- (void)enableDiagnosticListenerIfNecessary;
- (id)createPrecacheController;
- (id)createAnalyticsEventLogger;
- (void)dealloc;
- (void)tearDown;
- (id)initWithCastOptions:(id)arg1;
- (_Bool)inGuestModeTest;
- (_Bool)inTestingEnvironment;
- (id)getUIContext;
- (void)presentDefaultExpandedMediaControls;
- (void)clearCastInstructionsShownFlag;
- (_Bool)presentCastInstructionsViewControllerOnceWithCastButton:(id)arg1;
- (_Bool)presentCastInstructionsViewControllerOnce;
- (id)createMiniMediaControlsViewController;
- (id)createCastContainerControllerForViewController:(id)arg1;
- (void)expandedControlsRequested;
- (void)presentCastDialog;
- (id)uiResources;
- (id)castStoryboard;
@property(readonly, nonatomic) GCKUIExpandedMediaControlsViewController *defaultExpandedMediaControlsViewController;
@property(nonatomic) _Bool useDefaultExpandedMediaControls;
@property(retain, nonatomic) id <GCKUIImagePicker> imagePicker;
@property(retain, nonatomic) id <GCKUIImageCache> imageCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

