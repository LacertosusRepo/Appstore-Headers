//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTConnectionModeObserver;

@protocol SPTConnectionModeObservable <NSObject>
@property(readonly, nonatomic) unsigned long long connectionMode;
- (void)removeObserver:(id <SPTConnectionModeObserver>)arg1;
- (void)addObserver:(id <SPTConnectionModeObserver>)arg1;
@end

