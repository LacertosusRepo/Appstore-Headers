//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastSession, GCKDevice, GCKSession, GCKSessionManager, NSError, NSString;

@protocol GCKSessionManagerListener <NSObject>

@optional
- (void)sessionManager:(GCKSessionManager *)arg1 didUpdateDefaultSessionOptionsForDeviceCategory:(NSString *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 castSession:(GCKCastSession *)arg2 didReceiveDeviceStatus:(NSString *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 session:(GCKSession *)arg2 didReceiveDeviceStatus:(NSString *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 castSession:(GCKCastSession *)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sessionManager:(GCKSessionManager *)arg1 session:(GCKSession *)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sessionManager:(GCKSessionManager *)arg1 session:(GCKSession *)arg2 didUpdateDevice:(GCKDevice *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 didResumeCastSession:(GCKCastSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 willResumeCastSession:(GCKCastSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 didResumeSession:(GCKSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 willResumeSession:(GCKSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 didSuspendCastSession:(GCKCastSession *)arg2 withReason:(long long)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 didSuspendSession:(GCKSession *)arg2 withReason:(long long)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 didFailToStartCastSession:(GCKCastSession *)arg2 withError:(NSError *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 didFailToStartSession:(GCKSession *)arg2 withError:(NSError *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 didEndCastSession:(GCKCastSession *)arg2 withError:(NSError *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 willEndCastSession:(GCKCastSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 didEndSession:(GCKSession *)arg2 withError:(NSError *)arg3;
- (void)sessionManager:(GCKSessionManager *)arg1 willEndSession:(GCKSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 didStartCastSession:(GCKCastSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 willStartCastSession:(GCKCastSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 didStartSession:(GCKSession *)arg2;
- (void)sessionManager:(GCKSessionManager *)arg1 willStartSession:(GCKSession *)arg2;
@end
