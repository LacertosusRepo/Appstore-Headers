//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTTimer;

@protocol SPTTimerDelegate <NSObject>
- (void)timerDidCancel:(SPTTimer *)arg1;
- (void)timerDidEnd:(SPTTimer *)arg1;
- (void)timerDidStart:(SPTTimer *)arg1;
- (void)timer:(SPTTimer *)arg1 didUpdateTime:(double)arg2;
@end

