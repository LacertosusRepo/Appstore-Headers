//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTResponder.h"
#import "YTVideoZoomOverlayViewDelegate.h"

@class GIMMe, NSString, YTColdConfig, YTImpactFeedbackGenerator, YTInteractionLoggingProxyButton, YTVideoZoomOverlayView;

@interface YTVideoZoomOverlayController : NSObject <YTVideoZoomOverlayViewDelegate, YTResponder>
{
    YTVideoZoomOverlayView *_overlayView;
    struct CGSize _screenSize;
    double _videoAspectRatio;
    double _currentPinchZoomFactor;
    double _videoZoomFactor;
    double _snappedZoomFactor;
    double _snapZoomThresholdFactor;
    YTImpactFeedbackGenerator *_impactFeedbackGenerator;
    YTInteractionLoggingProxyButton *_snapToFillProxyButton;
    YTInteractionLoggingProxyButton *_snapToFitProxyButton;
    YTColdConfig *_coldConfig;
    _Bool _enabled;
    _Bool _videoZoomInProgress;
    _Bool _snappedToFillByDefault;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTVideoZoomOverlayControllerDelegate> _delegate;
}

@property(nonatomic, getter=isSnappedToFillByDefault) _Bool snappedToFillByDefault; // @synthesize snappedToFillByDefault=_snappedToFillByDefault;
@property(readonly, nonatomic, getter=isVideoZoomInProgress) _Bool videoZoomInProgress; // @synthesize videoZoomInProgress=_videoZoomInProgress;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak id <YTVideoZoomOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (struct CGRect)centeredRectWithSize:(struct CGSize)arg1 inViewWithSize:(struct CGSize)arg2;
- (void)updateRenderingViewFrameWithAnimationDuration:(double)arg1;
- (void)resetVideoFrame;
- (double)aspectRatioForSize:(struct CGSize)arg1;
- (struct CGSize)sizeOfVideoToFillViewSize:(struct CGSize)arg1;
- (struct CGSize)sizeOfVideoToFitViewSize:(struct CGSize)arg1;
- (double)snappedZoomFactorForSize:(struct CGSize)arg1;
- (void)updateSnapFactors;
- (void)updateScreenSizeToSize:(struct CGSize)arg1;
- (_Bool)canSnapCurrentVideoForScreenSize:(struct CGSize)arg1 snappedZoomFactor:(double)arg2;
- (_Bool)canSnapCurrentVideo;
- (void)didLayoutSubviews;
- (void)pinchDidZoomWithFactor:(double)arg1;
- (void)pinchEnded;
- (void)pinchBegan;
- (struct CGRect)playerRenderingViewCustomFrameForFullscreenSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setVideoZoomOverlayView:(id)arg1;
- (void)resetForVideoWithAspectRatio:(double)arg1;
- (id)initWithDelegate:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

