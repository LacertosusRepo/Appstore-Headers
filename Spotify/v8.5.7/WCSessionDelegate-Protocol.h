//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, WCSession, WCSessionFile, WCSessionFileTransfer, WCSessionUserInfoTransfer;

@protocol WCSessionDelegate <NSObject>
- (void)sessionDidDeactivate:(WCSession *)arg1;
- (void)sessionDidBecomeInactive:(WCSession *)arg1;
- (void)session:(WCSession *)arg1 activationDidCompleteWithState:(long long)arg2 error:(NSError *)arg3;

@optional
- (void)session:(WCSession *)arg1 didReceiveFile:(WCSessionFile *)arg2;
- (void)session:(WCSession *)arg1 didFinishFileTransfer:(WCSessionFileTransfer *)arg2 error:(NSError *)arg3;
- (void)session:(WCSession *)arg1 didReceiveUserInfo:(NSDictionary *)arg2;
- (void)session:(WCSession *)arg1 didFinishUserInfoTransfer:(WCSessionUserInfoTransfer *)arg2 error:(NSError *)arg3;
- (void)session:(WCSession *)arg1 didReceiveApplicationContext:(NSDictionary *)arg2;
- (void)session:(WCSession *)arg1 didReceiveMessageData:(NSData *)arg2 replyHandler:(void (^)(NSData *))arg3;
- (void)session:(WCSession *)arg1 didReceiveMessageData:(NSData *)arg2;
- (void)session:(WCSession *)arg1 didReceiveMessage:(NSDictionary *)arg2 replyHandler:(void (^)(NSDictionary *))arg3;
- (void)session:(WCSession *)arg1 didReceiveMessage:(NSDictionary *)arg2;
- (void)sessionReachabilityDidChange:(WCSession *)arg1;
- (void)sessionWatchStateDidChange:(WCSession *)arg1;
@end
