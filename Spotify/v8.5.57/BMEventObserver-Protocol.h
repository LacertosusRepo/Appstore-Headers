//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, OS_dispatch_queue;
@protocol BMAudioFormat, BMPlaybackIdentity, BMSeekableWindow, BMSubtitle, BMVideoFormat, BMVideoSurface;

@protocol BMEventObserver <NSObject>

@optional
- (void)didChangeSeekableWindow:(id <BMSeekableWindow>)arg1 timestamp:(double)arg2;
- (void)didChangeSubtitle:(id <BMSubtitle>)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didDropVideoFrames:(unsigned long long)arg1 timestamp:(double)arg2;
- (void)didTransferBytes:(long long)arg1 forBitrate:(double)arg2 withElapsedTime:(double)arg3 timestamp:(double)arg4;
- (void)didChangeAudioFormat:(id <BMAudioFormat>)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didChangeVideoFormat:(id <BMVideoFormat>)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didChangeSurface:(id <BMVideoSurface>)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didChangeBackgroundState:(_Bool)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithRecoverableError:(NSError *)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithFatalError:(NSError *)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didEndPlaybackWithReason:(long long)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)willSeekToPosition:(double)arg1 fromPosition:(double)arg2 timestamp:(double)arg3;
- (void)didChangePlaybackSpeed:(float)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didResumeWithTimestamp:(double)arg1;
- (void)didPauseAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didChangeDuration:(double)arg1 timestamp:(double)arg2;
- (void)didBecomeReadyAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didStartBufferingAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didLoadEncriptionKeyOfType:(long long)arg1 timestamp:(double)arg2;
- (void)willLoadEncryptionKeyWithTimestamp:(double)arg1;
- (void)didLoadManifestWithAvailableSubtitles:(NSArray *)arg1 timestamp:(double)arg2;
- (void)willLoadManifestWithTimestamp:(double)arg1;
- (void)willEndPlaybackWithNextIdentity:(id <BMPlaybackIdentity>)arg1 timestamp:(double)arg2;
- (void)didCreatePlaybackInBackground:(_Bool)arg1 timestamp:(double)arg2;
@property(nonatomic, readonly) OS_dispatch_queue *dispatchQueue;
@end
