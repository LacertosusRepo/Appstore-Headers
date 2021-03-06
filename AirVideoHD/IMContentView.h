//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMVideoView, UIImageView;

@interface IMContentView : UIView
{
    IMVideoView *videoView;
    UIView *overlayView;
    _Bool inTransition;
    UIImageView *container;
    UIView *backgroundView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IMVideoView *videoView;
- (void)reset;
- (void)endTransitionToRegularPlayer:(_Bool)arg1;
- (void)animateTransitionToRegularPlayer;
- (void)beginTransitionToRegularPlayerWithSize:(struct CGSize)arg1;
- (void)endTransitionToMiniPlayer:(_Bool)arg1;
- (void)animateTransitionToMiniPlayer;
- (void)beginTransitionToMiniPlayerWithSize:(struct CGSize)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize extraSize;
- (struct UIEdgeInsets)borderInsetsReverse;
- (struct UIEdgeInsets)borderInsets;
@property(readonly, nonatomic) double borderWidth;
- (_Bool)slowDevice;
- (id)initWithFrame:(struct CGRect)arg1 videoView:(id)arg2 overlayView:(id)arg3;

@end

