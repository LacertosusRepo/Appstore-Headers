//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSLayoutConstraint, SPTNowPlayingSliderV2, UILabel;
@protocol SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationViewV2Delegate;

@interface SPTNowPlayingDurationViewV2 : UIView
{
    _Bool _labelsHidden;
    id <SPTNowPlayingDurationViewV2Delegate> _delegate;
    SPTNowPlayingSliderV2 *_progressSlider;
    UILabel *_timeRemainingLabel;
    UILabel *_timeTakenLabel;
    id <SPTNowPlayingDurationViewV2DataSource> _dataSource;
    CADisplayLink *_displayLink;
    UIView *_animationView;
    NSLayoutConstraint *_sliderHeightConstraint;
    NSLayoutConstraint *_timeTakenCenterYConstraint;
    NSLayoutConstraint *_timeRemainingCenterYConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *timeRemainingCenterYConstraint; // @synthesize timeRemainingCenterYConstraint=_timeRemainingCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timeTakenCenterYConstraint; // @synthesize timeTakenCenterYConstraint=_timeTakenCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *sliderHeightConstraint; // @synthesize sliderHeightConstraint=_sliderHeightConstraint;
@property(readonly, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak id <SPTNowPlayingDurationViewV2DataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *timeTakenLabel; // @synthesize timeTakenLabel=_timeTakenLabel;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) SPTNowPlayingSliderV2 *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(nonatomic) __weak id <SPTNowPlayingDurationViewV2Delegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool labelsHidden; // @synthesize labelsHidden=_labelsHidden;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)description;
- (void)dealloc;
- (void)onDisplayLink:(id)arg1;
- (void)progressSliderTouchCancel:(id)arg1;
- (void)progressSliderTouchBegin:(id)arg1;
- (void)progressSliderValueScrubbed:(id)arg1;
- (void)progressSliderValueChanged:(id)arg1;
- (void)progressSliderTapped:(id)arg1;
- (void)setupSliderGestureRecognizers;
- (void)setupSlider;
- (void)timeRemainingLabelTapped:(id)arg1;
- (void)setupLabels;
- (void)updateProgressSlider;
- (void)stopUpdatingDurationLabels;
- (void)startUpdatingDurationLabels;
- (void)setupDisplayLink;
- (void)updateDurationLabels;
- (void)modifyLabelAppearance;
- (void)applyThemeLayout;
- (void)reloadData;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 animationView:(id)arg2 dataSource:(id)arg3;

@end

