//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTSleepTimerController;

@protocol SPTSleepTimerEventObserver <NSObject>
- (void)timerDidCancel:(id <SPTSleepTimerController>)arg1;
- (void)timerDidEnd:(id <SPTSleepTimerController>)arg1;
- (void)timerDidStart:(id <SPTSleepTimerController>)arg1;
@end

