//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

#import "SPTNowPlayingTestManagerObserver-Protocol.h"

@class NSString, SPTNowPlayingBarLogger, SPTNowPlayingBarModel, SPTNowPlayingModel, SPTStatefulPlayer, SPTTheme, UIViewController;
@protocol BMVideoSurfaceManager, SPTGLUEImageLoaderFactory, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingManager, SPTNowPlayingTestManager;

@interface SPTNowPlayingBarLeftAccessoryUnitProvider : SPTNowPlayingBaseUnitProvider <SPTNowPlayingTestManagerObserver>
{
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTTheme *_theme;
    id <SPTNowPlayingTestManager> _testManager;
    UIViewController *_leftAccessoryViewController;
    SPTNowPlayingModel *_nowPlayingModel;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTNowPlayingBarLogger *_logger;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    SPTNowPlayingBarModel *_nowPlayingBarModel;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    SPTStatefulPlayer *_statefulPlayer;
}

@property(readonly, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTNowPlayingBarModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTNowPlayingBarLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) UIViewController *leftAccessoryViewController; // @synthesize leftAccessoryViewController=_leftAccessoryViewController;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)nowPlayingTestManagerDidEnableBarImprovements:(id)arg1;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (void)createVideoUnit;
- (void)createCoverArtUnit;
- (void)createHeartUnit;
- (void)createOpenUnit;
- (void)createEmptyUnit;
- (id)initWithPlayer:(id)arg1 nowPlayingManager:(id)arg2 theme:(id)arg3 nowPlayingModel:(id)arg4 auxiliaryActionsHandler:(id)arg5 logger:(id)arg6 testManager:(id)arg7 imageLoaderFactory:(id)arg8 nowPlayingBarModel:(id)arg9 videoSurfaceManager:(id)arg10 statefulPlayer:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

