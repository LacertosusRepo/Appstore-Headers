//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVideoPlayerOverlayDelegate.h"

@class UIView;

@protocol YTContentVideoPlayerOverlayDelegate <YTVideoPlayerOverlayDelegate>
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (void)showAddToMenuFromView:(UIView *)arg1;

@optional
- (void)setPinchToRotateEnabled:(_Bool)arg1;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)enableCaptionsIfAvailable;
- (void)playIfPermitted;
- (void)seekToEnd;
@end

