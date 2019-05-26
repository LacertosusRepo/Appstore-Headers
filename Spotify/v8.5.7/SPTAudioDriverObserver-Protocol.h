//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAudioDriver;

@protocol SPTAudioDriverObserver <NSObject>

@optional
- (void)audioDriverWillStartRunning:(SPTAudioDriver *)arg1;
- (void)audioDriver:(SPTAudioDriver *)arg1 didFailWithError:(NSError *)arg2;
- (void)audioDriverDidStopRunning:(SPTAudioDriver *)arg1;
- (void)audioDriverDidStartRunning:(SPTAudioDriver *)arg1;
- (void)audioDriverDidEnd:(SPTAudioDriver *)arg1;
- (void)audioDriverDidBegin:(SPTAudioDriver *)arg1;
@end

