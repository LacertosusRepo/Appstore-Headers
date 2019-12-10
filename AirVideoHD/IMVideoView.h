//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMTVOutManagerDelegate-Protocol.h"
#import "IMVideoOutputViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMPlayer, IMPlayerItem, IMSubtitleView, IMVideoOutputView, IMVideoViewTapGestureRecognizer, NSString, UIPinchGestureRecognizer;
@protocol IMVideoViewDelegate;

@interface IMVideoView : UIView <UIGestureRecognizerDelegate, IMVideoOutputViewDelegate, IMTVOutManagerDelegate>
{
    IMPlayerItem *currentItem;
    IMPlayer *currentPlayer;
    struct CGSize placeholderImageSize;
    IMVideoOutputView *outputView;
    struct CGSize presentationSize;
    IMSubtitleView *subtitleView;
    float defaultTvOutAspect;
    IMVideoOutputView *tvOutOutputView;
    UIView *tvOutContainer;
    id externalPlaybackToken;
    id currentPlayerToken;
    id currentItemToken;
    id presentationSizeToken;
    _Bool subtitleDimmed;
    _Bool paused;
    double initialZoom;
    UIPinchGestureRecognizer *pinchRecognizer;
    IMVideoViewTapGestureRecognizer *doubleTapRecognizer;
    UIView *videoOverlayView;
    double subtitleAlpha;
    _Bool tvOutActive;
    _Bool layoutUsingTransform;
    float zoom;
    float zoomOverride;
    int tvOutAspectRatio;
    float tvOutOverscanCompensation;
    double overrideHeight;
    id <IMVideoViewDelegate> delegate;
}

@property(nonatomic) _Bool layoutUsingTransform; // @synthesize layoutUsingTransform;
@property(nonatomic) __weak id <IMVideoViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) float tvOutOverscanCompensation; // @synthesize tvOutOverscanCompensation;
@property(nonatomic) int tvOutAspectRatio; // @synthesize tvOutAspectRatio;
@property(nonatomic) _Bool tvOutActive; // @synthesize tvOutActive;
@property(nonatomic) double overrideHeight; // @synthesize overrideHeight;
@property(nonatomic) float zoomOverride; // @synthesize zoomOverride;
@property(nonatomic) float zoom; // @synthesize zoom;
- (void).cxx_destruct;
- (void)leavePictureInPicture;
- (void)enterPictureInPicture;
- (void)playerLayerIsAvailable:(id)arg1;
@property(nonatomic) double exposure;
@property(nonatomic) double contrast;
@property(nonatomic) double brightness;
@property(readonly, nonatomic) _Bool supportsAdjustments;
- (void)showSubtitles;
- (void)hideSubtitles;
@property(nonatomic) _Bool subtitleDimmed;
- (void)updateSubtitleAlpha;
- (void)setPlayer:(id)arg1;
- (void)updateCurrentPlayer:(id)arg1;
- (void)updateCurrentItem:(id)arg1;
- (void)updatePresentationSize:(struct CGSize)arg1;
- (void)tearDownTVOut:(id)arg1;
- (void)setupTVOut:(id)arg1;
- (void)externalPlaybackDidChange;
- (void)updateExternalPlaybackViews;
- (void)reset;
- (void)resume;
- (void)pause;
- (void)updateLastImage;
- (id)fallbackPauseImage;
- (void)pauseWithImage:(id)arg1 presentationSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (double)actualZoom;
- (void)setFrame:(struct CGRect)arg1 forView:(id)arg2;
- (float)tvOutAspectRatioAsFloat;
- (struct CGRect)containerRect;
- (struct CGRect)videoFrameForParentBounds:(struct CGRect)arg1 zoom:(double)arg2;
- (struct CGRect)visibleVideoRectForParentBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) double videoAspectRatio;
- (struct CGSize)videoSize;
- (void)pinchGestureRecognizerAction:(id)arg1;
- (void)dealloc;
- (void)doubleTapGestureRecognizerAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setVideoOverlayView:(id)arg1;
- (void)updateOutputViewAlpha;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)haveLastImage:(id)arg1 forPlayerItem:(id)arg2;
- (void)videoContentBecameAvailable;
- (id)newOutputView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
