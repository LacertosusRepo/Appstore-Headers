//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingTestManager, SPTTheme, UIViewController<SPTNowPlayingContentViewController>;

@interface SPTNowPlayingContentViewProvider : NSObject
{
    SPTNowPlayingLogger *_nowPlayingLogger;
    SPTNowPlayingModel *_nowPlayingModel;
    SPTTheme *_theme;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
    SPTNowPlayingTestManager *_testManager;
    id <SPTUpsellManager> _upsellManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNowPlayingCarouselContentProviderRegistry> _carouselRegistry;
    id <SPTPlayer> _player;
    UIViewController<SPTNowPlayingContentViewController> *_contentViewController;
}

@property(retain, nonatomic) UIViewController<SPTNowPlayingContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderRegistry> carouselRegistry; // @synthesize carouselRegistry=_carouselRegistry;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(readonly, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(readonly, nonatomic) SPTNowPlayingLogger *nowPlayingLogger; // @synthesize nowPlayingLogger=_nowPlayingLogger;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 imageLoaderFactory:(id)arg2 theme:(id)arg3 logger:(id)arg4 videoSurfaceManager:(id)arg5 nowPlayingVideoManager:(id)arg6 testManager:(id)arg7 upsellManager:(id)arg8 linkDispatcher:(id)arg9 carouselRegistry:(id)arg10 player:(id)arg11;

@end
