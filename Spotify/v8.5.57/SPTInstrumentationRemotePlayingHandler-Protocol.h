//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTInstrumentationRemotePlayingObserver;

@protocol SPTInstrumentationRemotePlayingHandler <NSObject>
@property(readonly, nonatomic) _Bool playingRemotely;
- (void)removeObserver:(id <SPTInstrumentationRemotePlayingObserver>)arg1;
- (void)addObserver:(id <SPTInstrumentationRemotePlayingObserver>)arg1;
- (void)remotePlayingStateChanged:(_Bool)arg1;
@end

