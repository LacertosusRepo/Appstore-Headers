//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTGaiaOfflineModeStateObserver;

@protocol SPTGaiaOfflineModeState <NSObject>
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)removeOfflineModeObserver:(id <SPTGaiaOfflineModeStateObserver>)arg1;
- (void)addOfflineModeObserver:(id <SPTGaiaOfflineModeStateObserver>)arg1;
@end

