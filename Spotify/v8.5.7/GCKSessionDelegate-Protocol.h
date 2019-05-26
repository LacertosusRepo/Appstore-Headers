//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKSession, GCKSessionEndpoint, NSError, NSString;

@protocol GCKSessionDelegate <NSObject>
- (void)session:(GCKSession *)arg1 didReceiveDeviceStatus:(NSString *)arg2;
- (void)session:(GCKSession *)arg1 didReceiveDeviceVolume:(float)arg2 muted:(_Bool)arg3;
- (void)session:(GCKSession *)arg1 didFailToMoveEndpoint:(GCKSessionEndpoint *)arg2 error:(GCKError *)arg3;
- (void)sessionDidMoveEndpoint:(GCKSession *)arg1;
- (void)session:(GCKSession *)arg1 willMoveEndpoint:(GCKSessionEndpoint *)arg2;
- (void)session:(GCKSession *)arg1 didEndWithError:(NSError *)arg2 willTryToResume:(_Bool)arg3;
- (void)session:(GCKSession *)arg1 didFailToStartWithError:(NSError *)arg2;
- (void)sessionDidStart:(GCKSession *)arg1;
@end
