//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent;

@protocol SPTUBIMobileNowPlayingViewPodcast_PlaybackProgressEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)dragSeekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTUBIInteractionEvent>)hitSeekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

