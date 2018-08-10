//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTInlinePlaybackControllerProtocol.h"
#import "YTWatchControllerDelegate.h"

@class GIMMe, NSMutableDictionary, NSString, UIViewController<YTWatchPlayerViewControllerDelegate>, YTStickyVarispeedController, YTWatchController;

@interface YTInlinePlaybackController : NSObject <YTWatchControllerDelegate, YTInlinePlaybackControllerProtocol>
{
    YTWatchController *_watchController;
    UIViewController<YTWatchPlayerViewControllerDelegate> *_playerViewController;
    NSMutableDictionary *_playedVideos;
    id <YTInlinePlaybackControllerDelegate> _delegate;
    GIMMe *_gimme;
    id <YTResponder> _parentResponder;
}

@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTInlinePlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearPlayerViewControllerWithPlayerSnapshotView:(id)arg1;
- (void)setPlaylistPanel:(id)arg1 playlistUIDelegate:(id)arg2 watchNextResults:(id)arg3 descriptionDetails:(id)arg4;
- (void)didCreateWatchNextViewController:(id)arg1;
- (void)handleNavigationEndpointResponderEvent:(id)arg1;
- (void)resetPlayerViewController;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)hideWatch;
- (void)loadCompanionAd:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (id)currentWatchEndpointForVideoId:(id)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (id)resignAndStopPlayback;
- (void)willIncept;
- (void)didTransitionToSmallScreen;
- (void)willTransitionToSmallScreen;
- (void)didTransitionToFullScreen;
- (void)willTransitionToFullScreen;
- (void)playNavigationEndpoint:(id)arg1 withThumbnailView:(id)arg2;
@property(readonly, nonatomic) int playbackControllerState;
@property(readonly, nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) YTStickyVarispeedController *stickyVarispeedController;
@property(readonly) Class superclass;

@end

