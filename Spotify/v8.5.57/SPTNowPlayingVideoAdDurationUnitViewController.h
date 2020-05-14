//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdPlayerObserver-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTAdPlayerObservable, SPTTheme, UIProgressView;
@protocol SPTNowPlayingContainingViewController, SPTNowPlayingVideoControlsVisibilityDelegate;

@interface SPTNowPlayingVideoAdDurationUnitViewController : UIViewController <SPTAdPlayerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    id <SPTNowPlayingVideoControlsVisibilityDelegate> _visibilityDelegate;
    UIProgressView *_durationProgressView;
    SPTTheme *_theme;
    SPTAdPlayerObservable *_observer;
    double _animationDuration;
    double _safeAreaBottomMargin;
}

@property(nonatomic) double safeAreaBottomMargin; // @synthesize safeAreaBottomMargin=_safeAreaBottomMargin;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) SPTAdPlayerObservable *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIProgressView *durationProgressView; // @synthesize durationProgressView=_durationProgressView;
@property(nonatomic) __weak id <SPTNowPlayingVideoControlsVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
- (void).cxx_destruct;
- (id)timeIntervalToAccessibilityString:(double)arg1;
- (id)durationAccessibilityValue;
- (void)adPlayerDisplayLinkFiredWithTrack:(id)arg1;
- (void)didTapVideoView:(id)arg1;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (double)currentTrackLength;
- (double)currentTrackProgress;
- (void)setupConstraints;
- (void)dealloc;
- (id)initWithPlayerObservable:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

