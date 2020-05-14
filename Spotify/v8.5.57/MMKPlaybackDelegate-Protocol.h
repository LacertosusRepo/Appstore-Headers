//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MMKMessageEnvelope;

@protocol MMKPlaybackDelegate
- (void)unfavoriteWithMessage:(MMKMessageEnvelope *)arg1;
- (void)favoriteWithMessage:(MMKMessageEnvelope *)arg1;
- (void)disableRepeatWithMessage:(MMKMessageEnvelope *)arg1;
- (void)enableRepeatAllWithMessage:(MMKMessageEnvelope *)arg1;
- (void)enableRepeatOneWithMessage:(MMKMessageEnvelope *)arg1;
- (void)disableShuffleWithMessage:(MMKMessageEnvelope *)arg1;
- (void)enableShuffleWithMessage:(MMKMessageEnvelope *)arg1;
- (void)setSeekPositionWithMessage:(MMKMessageEnvelope *)arg1;
- (void)adjustSeekPositionWithMessage:(MMKMessageEnvelope *)arg1;
- (void)fastForwardWithMessage:(MMKMessageEnvelope *)arg1;
- (void)rewindWithMessage:(MMKMessageEnvelope *)arg1;
- (void)startOverWithMessage:(MMKMessageEnvelope *)arg1;
- (void)nextWithMessage:(MMKMessageEnvelope *)arg1;
- (void)previousWithMessage:(MMKMessageEnvelope *)arg1;
- (void)stopWithMessage:(MMKMessageEnvelope *)arg1;
- (void)resumeWithMessage:(MMKMessageEnvelope *)arg1;
- (void)pauseWithMessage:(MMKMessageEnvelope *)arg1;
- (void)playWithMessage:(MMKMessageEnvelope *)arg1;
@end

