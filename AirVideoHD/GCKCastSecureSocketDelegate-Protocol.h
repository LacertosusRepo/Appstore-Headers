//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastSecureSocket, NSData, NSError;

@protocol GCKCastSecureSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSecureSocket *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didFailToConnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSecureSocket *)arg1 didConnectWithPeerSecTrust:(struct __SecTrust *)arg2;
@end
