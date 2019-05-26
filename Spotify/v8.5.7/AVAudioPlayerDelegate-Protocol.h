//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioPlayer, NSError;

@protocol AVAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerBeginInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer *)arg1 error:(NSError *)arg2;
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)arg1 successfully:(_Bool)arg2;
@end

