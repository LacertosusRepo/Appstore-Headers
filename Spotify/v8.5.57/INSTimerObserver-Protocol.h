//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol INSTimer;

@protocol INSTimerObserver <NSObject>
- (void)timerDidFire:(id <INSTimer>)arg1;
- (void)timer:(id <INSTimer>)arg1 didScheduleWithInterval:(double)arg2 attempt:(unsigned long long)arg3;
@end

