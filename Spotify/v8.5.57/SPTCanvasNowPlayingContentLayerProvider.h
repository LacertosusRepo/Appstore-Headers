//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasNowPlayingViewContentLoaderDelegate-Protocol.h"
#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@class NSString, SPTCanvasForceArtworkManager, SPTCanvasLoggingService, SPTCanvasTestManager;
@protocol SPTCanvasNowPlayingViewContentLoader, SPTNowPlayingContentLayerProviderDelegate;

@interface SPTCanvasNowPlayingContentLayerProvider : NSObject <SPTNowPlayingContentLayerProvider, SPTCanvasNowPlayingViewContentLoaderDelegate>
{
    id <SPTNowPlayingContentLayerProviderDelegate> delegate;
    id <SPTCanvasNowPlayingViewContentLoader> _contentLoader;
    SPTCanvasTestManager *_testManager;
    SPTCanvasForceArtworkManager *_forceArtworkManager;
    SPTCanvasLoggingService *_logService;
}

@property(readonly, nonatomic) SPTCanvasLoggingService *logService; // @synthesize logService=_logService;
@property(readonly, nonatomic) SPTCanvasForceArtworkManager *forceArtworkManager; // @synthesize forceArtworkManager=_forceArtworkManager;
@property(readonly, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCanvasNowPlayingViewContentLoader> contentLoader; // @synthesize contentLoader=_contentLoader;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)contentNeedsReloadForTrack:(id)arg1;
- (void)didSelectCell:(id)arg1 withProvider:(id)arg2 withTrack:(id)arg3 containerViewController:(id)arg4;
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)canHideControlsForTrack:(id)arg1;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (void)didEndDisplayingCell:(id)arg1 withTrack:(id)arg2 containerViewController:(id)arg3;
- (void)willDisplayCell:(id)arg1 withTrack:(id)arg2 containerViewController:(id)arg3;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (id)reuseIdentifier;
- (unsigned long long)contentType;
- (id)initWithCanvasContentLoader:(id)arg1 testManager:(id)arg2 logService:(id)arg3 forceArtworkManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

