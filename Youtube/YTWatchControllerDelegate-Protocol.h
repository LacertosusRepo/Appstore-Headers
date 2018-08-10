//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView, UIViewController, UIViewController<YTInfoCardDrawerOverlayProtocol>, UIViewController<YTWatchPlayerViewControllerDelegate>, YTCommandResponderEvent, YTIWatchNextResponse, YTPlaybackData, YTPlayerResponse, YTStickyVarispeedController, YTWatchNextResultsViewController;

@protocol YTWatchControllerDelegate <NSObject>
- (void)setPlaylistPanel:(id <YTPlaylistPanelControllerProtocol>)arg1 playlistUIDelegate:(id <YTPlaylistPanelControllerUIDelegate>)arg2 watchNextResults:(id <YTWatchNextResultsControllerProtocol>)arg3 descriptionDetails:(YTWatchNextResultsViewController *)arg4;
- (void)didCreateWatchNextViewController:(UIViewController *)arg1;
- (void)handleNavigationEndpointResponderEvent:(YTCommandResponderEvent *)arg1;
- (void)resetPlayerViewController;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)hideWatch;
- (void)loadCompanionAd:(id <YTCompanionAdSupportedRenderersProtocol>)arg1;
- (void)setPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg1;

@optional
@property(readonly, nonatomic) YTStickyVarispeedController *stickyVarispeedController;
- (void)playbackControllerExternalPlaybackActiveStateDidChange:(_Bool)arg1;
- (void)playbackControllerDidFinishPlayback;
- (void)playbackControllerDidPause;
- (void)playbackControllerDidPlay;
- (void)playbackControllerDidPressPause;
- (void)playbackControllerDidPressReplay;
- (void)playbackControllerDidPressPlay;
- (void)playbackControllerDidReceivePlayerResponse:(YTPlayerResponse *)arg1;
- (void)playbackRouteDidChange;
- (void)playbackControllerContentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(YTPlaybackData *)arg1;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerWillFailWithError:(NSError *)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)didSetInfoCardViewController:(UIViewController<YTInfoCardDrawerOverlayProtocol> *)arg1;
- (void)didReceiveDescriptionDetailsViewController:(YTWatchNextResultsViewController *)arg1;
- (void)didReceiveWatchNextResponse:(YTIWatchNextResponse *)arg1;
- (void)clearPlayerViewControllerWithPlayerSnapshotView:(UIView *)arg1;
@end

