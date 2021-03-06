//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVoicePlayerEventsObserver;

@protocol SPTVoicePlayerEventsListener <NSObject>
- (void)removeObserver:(id <SPTVoicePlayerEventsObserver>)arg1;
- (void)addObserver:(id <SPTVoicePlayerEventsObserver>)arg1;
- (void)pausePlayback;
- (void)resumePlayback;
- (_Bool)isPaused;
- (_Bool)isAdvertisement;
- (_Bool)isPlaying;
- (void)fetchTrackMetadata;
@end

