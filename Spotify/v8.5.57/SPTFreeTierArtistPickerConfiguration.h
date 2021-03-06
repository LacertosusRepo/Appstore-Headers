//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTDataLoaderFactory, SPTFreeTierTasteOnboardingDeeplinkStore, SPTFreeTierTasteOnboardingLoggerFactory, SPTFreeTierTasteOnboardingTheme, SPTPopupManager, SPTSeedASessionCurator;
@protocol SPTAlertInterface, SPTFollowModelFactory, SPTFreeTierTasteOnboardingTestManager, SPTGLUEImageLoaderFactory, SPTInstrumentationModalPresentationMonitor, SPTLinkDispatcher, SPTModalPresentationController, SPTNetworkConnectivityController, SPTPerformanceMetricsViewLoggerFactory, SPTPlaylistModel;

@interface SPTFreeTierArtistPickerConfiguration : NSObject
{
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTFreeTierTasteOnboardingLoggerFactory *_loggerFactory;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    SPTPopupManager *_popupManager;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    SPTFreeTierTasteOnboardingDeeplinkStore *_deeplinkStore;
    NSString *_sourceIdentifier;
    id <SPTInstrumentationModalPresentationMonitor> _modalPresentationMonitor;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTSeedASessionCurator *_curator;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTAlertInterface> _alertInterface;
}

@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) SPTSeedASessionCurator *curator; // @synthesize curator=_curator;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTInstrumentationModalPresentationMonitor> modalPresentationMonitor; // @synthesize modalPresentationMonitor=_modalPresentationMonitor;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingDeeplinkStore *deeplinkStore; // @synthesize deeplinkStore=_deeplinkStore;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingLoggerFactory *loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)initWithTheme:(id)arg1 loggerFactory:(id)arg2 viewLoggerFactory:(id)arg3 popupManager:(id)arg4 dataLoaderFactory:(id)arg5 imageLoaderFactory:(id)arg6 followModelFactory:(id)arg7 networkConnectivityController:(id)arg8 testManager:(id)arg9 deeplinkStore:(id)arg10 sourceIdentifier:(id)arg11 modalPresentationMonitor:(id)arg12 linkDispatcher:(id)arg13 modalPresentationController:(id)arg14 curator:(id)arg15 playlistModel:(id)arg16 alertInterface:(id)arg17;

@end

