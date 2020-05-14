//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastSocket, GCKError, GCKSSecurityTrust, NSData;

@protocol GCKCastSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSocket *)arg1 didDisconnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 canAcceptDataOfLength:(unsigned long long)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didFailToConnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didConnectWithPeerSecurityTrust:(GCKSSecurityTrust *)arg2;
@end

