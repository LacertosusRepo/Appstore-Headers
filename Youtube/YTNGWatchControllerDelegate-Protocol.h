//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView, UIViewController<YTNGWatchViewControllerProtocol>, UIViewController<YTWatchPlayerViewControllerDelegate>, YTICommand, YTIWatchNextResponse, YTNGWatchController, YTPlaybackData, YTPlayerResponse, YTStickyVarispeedController;

@protocol YTNGWatchControllerDelegate <NSObject>
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) YTStickyVarispeedController *stickyVarispeedController;
- (void)runNonCriticalTasks;
- (void)newScreenLoggingStarted;
- (void)updateCurrentWatchTransitionNavigationEndpoint:(YTICommand *)arg1;
- (void)playbackControllerDidPressPause;
- (void)playbackControllerDidPlay;
- (void)playbackControllerDidReceivePlayerResponse:(YTPlayerResponse *)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(YTPlaybackData *)arg1;
- (void)playbackControllerContentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerWillFailWithError:(NSError *)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)watchController:(YTNGWatchController *)arg1 didReceiveWatchNextResponse:(YTIWatchNextResponse *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didClearPlayerViewControllerWithThumbnailView:(UIView *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didSetPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didCreateWatchViewController:(UIViewController<YTNGWatchViewControllerProtocol> *)arg2;
@end

