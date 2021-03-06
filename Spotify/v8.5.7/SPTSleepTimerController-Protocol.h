//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTSleepTimerEventObserver, SPTSleepTimerTimeObserver;

@protocol SPTSleepTimerController <NSObject>
@property(readonly, nonatomic, getter=isSleepTimerSet) _Bool sleepTimerSet;
@property(readonly, nonatomic, getter=shouldEndAfterEpisode) _Bool endAfterEpisode;
- (void)removeEventObserver:(id <SPTSleepTimerEventObserver>)arg1;
- (void)removeTimeObserver:(id <SPTSleepTimerTimeObserver>)arg1;
- (void)addEventObserver:(id <SPTSleepTimerEventObserver>)arg1;
- (void)addTimeObserver:(id <SPTSleepTimerTimeObserver>)arg1;
- (void)setShouldEndAfterEpisode:(_Bool)arg1;
- (NSString *)minutesLeft;
- (double)timeRemaining;
- (NSString *)defaultFormattedTime;
@end

