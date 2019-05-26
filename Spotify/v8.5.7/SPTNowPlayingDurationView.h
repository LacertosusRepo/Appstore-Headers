//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTNowPlayingSliderDataSource-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class CADisplayLink, NSString, SPTNowPlayingSlider, UILabel;
@protocol SPTNowPlayingDurationViewDataSource, SPTNowPlayingDurationViewDelegate, SPTNowPlayingDurationViewFlexibleLayoutSource, SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingDurationView : UIView <SPTNowPlayingSliderDataSource, SPTThemableView>
{
    _Bool _layoutLabelsOnTop;
    _Bool _alwaysShowDurationLabels;
    _Bool _labelsHidden;
    _Bool _timeRemainingLabelShowsDuration;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_timeTakenLabel;
    SPTNowPlayingSlider *_durationSlider;
    UILabel *_timeRemainingLabel;
    id <SPTNowPlayingDurationViewDataSource> _dataSource;
    id <SPTNowPlayingDurationViewDelegate> _delegate;
    id <SPTNowPlayingDurationViewFlexibleLayoutSource> _flexibleLayoutSource;
    long long _appearance;
    UIView *_animationView;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool timeRemainingLabelShowsDuration; // @synthesize timeRemainingLabelShowsDuration=_timeRemainingLabelShowsDuration;
@property(nonatomic) _Bool labelsHidden; // @synthesize labelsHidden=_labelsHidden;
@property(nonatomic, getter=shouldAlwaysShowDurationLabels) _Bool alwaysShowDurationLabels; // @synthesize alwaysShowDurationLabels=_alwaysShowDurationLabels;
@property(nonatomic) _Bool layoutLabelsOnTop; // @synthesize layoutLabelsOnTop=_layoutLabelsOnTop;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) __weak id <SPTNowPlayingDurationViewFlexibleLayoutSource> flexibleLayoutSource; // @synthesize flexibleLayoutSource=_flexibleLayoutSource;
@property(nonatomic) __weak id <SPTNowPlayingDurationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTNowPlayingDurationViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) SPTNowPlayingSlider *durationSlider; // @synthesize durationSlider=_durationSlider;
@property(retain, nonatomic) UILabel *timeTakenLabel; // @synthesize timeTakenLabel=_timeTakenLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)durationSliderTouchCancel:(id)arg1;
- (void)durationSliderTouchBegin:(id)arg1;
- (void)durationSliderValueScrubbed:(id)arg1;
- (void)durationSliderValueChanged:(id)arg1;
- (void)durationSliderTapped:(id)arg1;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (void)reloadData;
- (void)updateDurationSlider;
- (void)onDisplayLink:(id)arg1;
- (void)stopUpdatingDurationLabels;
- (void)startUpdatingDurationLabels;
- (void)updateDurationLabels;
- (void)userDidDoubleTapViewWithGestureRecognizer:(id)arg1;
- (void)timeRemainingLabelTapped:(id)arg1;
- (id)timeIntervalToString:(double)arg1;
- (void)applyThemeLayout;
- (void)modifyLabelAppearance;
- (void)setLabelsTrackingState:(_Bool)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoSurface:(id)arg2 animationView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

