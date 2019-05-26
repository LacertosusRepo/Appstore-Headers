//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTPlayer;

@interface SPTStorylinesLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logStorylinesCardImpressionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logArtistNavigationInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3 percentInView:(double)arg4;
- (void)logUnfollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3;
- (void)logFollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3;
- (void)logStorylinesPauseInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesPreviousInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesForwardInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logPlayerStateWithImpression:(id)arg1;
- (void)logPlayerStateWithInteraction:(id)arg1;
- (id)initWithLogCenter:(id)arg1 player:(id)arg2;

@end
