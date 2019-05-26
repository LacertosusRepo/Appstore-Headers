//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoPlaybackState : SPTVideoPlayerMessage
{
    _Bool _paused;
    _Bool _buffering;
    NSString *_ID;
    double _timestamp;
    double _position;
    double _duration;
    double _playbackSpeed;
}

@property(readonly, nonatomic, getter=isBuffering) _Bool buffering; // @synthesize buffering=_buffering;
@property(readonly, nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1 delta:(double)arg2;
- (_Bool)isEqualExcludingTimestamp:(id)arg1;
- (_Bool)isEqualExcludingTimestampAndPosition:(id)arg1;
- (id)serializedDictionary;
- (id)initWithID:(id)arg1 timestamp:(double)arg2 position:(double)arg3 duration:(double)arg4 paused:(_Bool)arg5 playbackSpeed:(double)arg6 buffering:(_Bool)arg7;

@end
