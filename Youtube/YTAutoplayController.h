//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTResponder.h"

@class GIMMe, NSString, YTAutoplayPrefetchController, YTIAutoplayRenderer;

@interface YTAutoplayController : NSObject <YTResponder>
{
    YTAutoplayPrefetchController *_prefetchController;
    long long _consecutiveFailedPlaybacks;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTIAutoplayRenderer *_autoplayRenderer;
    id <YTPlaylistPanelControlsViewDelegate> _playlistPanelControlsDelegate;
}

@property(nonatomic) __weak id <YTPlaylistPanelControlsViewDelegate> playlistPanelControlsDelegate; // @synthesize playlistPanelControlsDelegate=_playlistPanelControlsDelegate;
@property(retain, nonatomic) YTIAutoplayRenderer *autoplayRenderer; // @synthesize autoplayRenderer=_autoplayRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)navEndpointHavingWatchEndpointOrNil:(id)arg1;
- (id)prevEndpoint;
- (id)nextEndpoint;
- (int)autoPlayMode;
- (id)newAutoplayWatchTransition;
- (void)sendWatchTransitionWithNavEndpoint:(id)arg1 watchEndpointSource:(int)arg2;
- (id)autoplayEndpoint;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (void)playbackControllerDidFailWithError:(id)arg1;
- (void)contentVideoMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)playPrevious;
- (void)playNext;
- (void)playAutoplay;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
- (_Bool)hasAutoplayVideo;
- (_Bool)consecutiveFailedPlaybacksBelowAcceptanceThreshold;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

