//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, SPForegroundObserver, SPTStorylinesLogger;
@protocol SPTNowPlayingManager, SPTPlayer, SPTUBILogger;

@interface SPTStorylinesUBILogger : NSObject
{
    NSString *_pageIdentifier;
    id <SPTUBILogger> _ubiLogger;
    SPTStorylinesLogger *_legacyLogger;
    id <SPTPlayer> _player;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPForegroundObserver *_foregroundObserver;
    NSString *_currentPlaybackId;
    NSMutableSet *_impressionsCache;
}

@property(readonly, nonatomic) NSMutableSet *impressionsCache; // @synthesize impressionsCache=_impressionsCache;
@property(copy, nonatomic) NSString *currentPlaybackId; // @synthesize currentPlaybackId=_currentPlaybackId;
@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTStorylinesLogger *legacyLogger; // @synthesize legacyLogger=_legacyLogger;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldSendMessage;
@property(readonly, nonatomic) _Bool isAwake;
@property(readonly, nonatomic) _Bool isNowPlayingViewHidden;
- (id)impressionIdentifierForPlayerState:(id)arg1 trackUri:(id)arg2 cardIndex:(long long)arg3;
- (void)logStorylinesCardImpressionWithTrackUri:(id)arg1 cardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logArtistNavigationInteractionWithSpotifyUri:(id)arg1 trackUri:(id)arg2 cardIndex:(long long)arg3 percentInView:(double)arg4;
- (void)logUnfollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 cardIndex:(long long)arg3;
- (void)logFollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 cardIndex:(long long)arg3;
- (void)logStorylinesPauseInteractionWithTrackUri:(id)arg1 cardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesPreviousInteractionWithTrackUri:(id)arg1 cardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesForwardInteractionWithTrackUri:(id)arg1 cardIndex:(long long)arg2 percentInView:(double)arg3;
- (id)itemURLWithIndex:(long long)arg1;
- (id)cardFactoryWithIndex:(long long)arg1 trackUri:(id)arg2;
- (id)factoryForTrackUri:(id)arg1;
- (void)dealloc;
- (id)initWithPageIdentifier:(id)arg1 logger:(id)arg2 legacyLogger:(id)arg3 player:(id)arg4 nowPlayingManager:(id)arg5 foregroundObserver:(id)arg6;

@end

