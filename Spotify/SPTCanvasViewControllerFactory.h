//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTCanvasBackendService, SPTCanvasLoadEventLogger, SPTCanvasLoadStateTracker, SPTCanvasLoggingService, SPTCanvasTrackCheckerImplementation;

@interface SPTCanvasViewControllerFactory : NSObject
{
    _Bool _shouldUseStreamingVideoPlayer;
    SPTCanvasTrackCheckerImplementation *_trackChecker;
    SPTCanvasLoadStateTracker *_loadStateTracker;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTVideoURLAssetLoader> _videoManager;
    SPTCanvasLoggingService *_loggingService;
    SPTCanvasLoadEventLogger *_loadEventLogger;
    SPTCanvasBackendService *_backendService;
    id <SPTCanvasIdleMonitorObserverDelegate> _delegate;
    id <SPTVideoFeature> _videoFeature;
    id <SPTPlayerFeature> _playerFeature;
}

@property(readonly, nonatomic) id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTVideoFeature> videoFeature; // @synthesize videoFeature=_videoFeature;
@property(nonatomic) __weak id <SPTCanvasIdleMonitorObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTCanvasBackendService *backendService; // @synthesize backendService=_backendService;
@property(readonly, nonatomic) SPTCanvasLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
@property(readonly, nonatomic) SPTCanvasLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoManager; // @synthesize videoManager=_videoManager;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTCanvasLoadStateTracker *loadStateTracker; // @synthesize loadStateTracker=_loadStateTracker;
@property(readonly, nonatomic) SPTCanvasTrackCheckerImplementation *trackChecker; // @synthesize trackChecker=_trackChecker;
@property(nonatomic) _Bool shouldUseStreamingVideoPlayer; // @synthesize shouldUseStreamingVideoPlayer=_shouldUseStreamingVideoPlayer;
- (void).cxx_destruct;
- (id)createCanvasViewController;
- (id)initWithCanvasTrackChecker:(id)arg1 loadStateTracker:(id)arg2 imageLoaderFactory:(id)arg3 videoManager:(id)arg4 loggingService:(id)arg5 loadEventLogger:(id)arg6 idleMonitorDelegate:(id)arg7 backendService:(id)arg8 videoFeature:(id)arg9 playerFeature:(id)arg10;

@end
