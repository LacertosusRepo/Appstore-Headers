//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeContextMenuFactory-Protocol.h"
#import "SPTDrivingModePivotViewFactory-Protocol.h"
#import "SPTDrivingModeService-Protocol.h"
#import "SPTDrivingModeTestManagerObserver-Protocol.h"
#import "SPTDrivingModeViewControllerFactory-Protocol.h"

@class NSString, SPTAllocationContext, SPTDrivingModeControllerImplementation, SPTDrivingModeDistractionTestController, SPTDrivingModeLogger, SPTDrivingModePivotList, SPTDrivingModeViewControllerCacheImplementation;
@protocol SPTContainerService, SPTDrivingModeTestManager, SPTDrivingStateDetectionService, SPTExternalIntegrationDriverDistractionService, SPTExternalIntegrationPlaybackService, SPTFeatureFlaggingService, SPTGLUEService, SPTNetworkService, SPTNowPlayingMode, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTPlayer, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTUIPresentationService;

@interface SPTDrivingModeServiceImplementation : NSObject <SPTDrivingModeTestManagerObserver, SPTDrivingModeViewControllerFactory, SPTDrivingModeContextMenuFactory, SPTDrivingModePivotViewFactory, SPTDrivingModeService>
{
    _Bool _carViewEnabled;
    _Bool _driverDistractionTestEnabled;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTDrivingStateDetectionService> _drivingDetectionService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTGLUEService> _glueService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    SPTDrivingModeLogger *_logger;
    id <SPTDrivingModeTestManager> _testManager;
    SPTDrivingModeViewControllerCacheImplementation *_viewControllerCache;
    SPTDrivingModeControllerImplementation *_drivingModeController;
    id <SPTNowPlayingMode> _nowPlayingDefaultMode;
    id <SPTNowPlayingMode> _nowPlayingFeedbackMode;
    id <SPTNowPlayingMode> _nowPlayingPodcastMode;
    id <SPTNowPlayingMode> _nowPlayingAdsMode;
    SPTDrivingModePivotList *_pivotList;
    id <SPTPlayer> _player;
    SPTDrivingModeDistractionTestController *_driverDistractionTestController;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool driverDistractionTestEnabled; // @synthesize driverDistractionTestEnabled=_driverDistractionTestEnabled;
@property(retain, nonatomic) SPTDrivingModeDistractionTestController *driverDistractionTestController; // @synthesize driverDistractionTestController=_driverDistractionTestController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTDrivingModePivotList *pivotList; // @synthesize pivotList=_pivotList;
@property(retain, nonatomic) id <SPTNowPlayingMode> nowPlayingAdsMode; // @synthesize nowPlayingAdsMode=_nowPlayingAdsMode;
@property(retain, nonatomic) id <SPTNowPlayingMode> nowPlayingPodcastMode; // @synthesize nowPlayingPodcastMode=_nowPlayingPodcastMode;
@property(retain, nonatomic) id <SPTNowPlayingMode> nowPlayingFeedbackMode; // @synthesize nowPlayingFeedbackMode=_nowPlayingFeedbackMode;
@property(retain, nonatomic) id <SPTNowPlayingMode> nowPlayingDefaultMode; // @synthesize nowPlayingDefaultMode=_nowPlayingDefaultMode;
@property(nonatomic) _Bool carViewEnabled; // @synthesize carViewEnabled=_carViewEnabled;
@property(retain, nonatomic) SPTDrivingModeControllerImplementation *drivingModeController; // @synthesize drivingModeController=_drivingModeController;
@property(retain, nonatomic) SPTDrivingModeViewControllerCacheImplementation *viewControllerCache; // @synthesize viewControllerCache=_viewControllerCache;
@property(retain, nonatomic) id <SPTDrivingModeTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTDrivingStateDetectionService> drivingDetectionService; // @synthesize drivingDetectionService=_drivingDetectionService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (id)createPivotViewViewController;
- (id)createContextMenuViewController;
- (id)createFooterUnitViewController;
- (id)createAdsHeadUnitViewController;
- (id)createPodcastHeadUnitViewController;
- (id)createFeedbackHeadUnitViewController;
- (id)createDefaultHeadUnitViewController;
- (id)createDurationUnitViewController;
- (id)createInformationUnitViewController;
- (id)createNavigationBarUnitViewController;
- (void)testManager:(id)arg1 didChangeDriverDistractionTestEnabled:(_Bool)arg2;
- (void)testManager:(id)arg1 didChangeCarViewEnabled:(_Bool)arg2;
- (void)disableDriverDistractionTest;
- (void)enableDriverDistractionTest;
- (void)disableDrivingMode;
- (void)enableDrivingMode;
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

