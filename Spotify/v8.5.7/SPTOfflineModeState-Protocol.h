//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTOfflineModeStateObserver;

@protocol SPTOfflineModeState <NSObject>
- (void)removeOfflineModeObserver:(id <SPTOfflineModeStateObserver>)arg1;
- (void)addOfflineModeObserver:(id <SPTOfflineModeStateObserver>)arg1;
- (_Bool)isOffline;

// Remaining properties
@property(nonatomic, readonly) _Bool offline;
@end
