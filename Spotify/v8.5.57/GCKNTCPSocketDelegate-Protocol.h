//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKNError, GCKNTCPSocket;

@protocol GCKNTCPSocketDelegate <NSObject>
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didCloseWithError:(GCKNError *)arg2;
- (void)tcpSocketDidBecomeWritable:(GCKNTCPSocket *)arg1;
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didFailToConnectWithError:(GCKNError *)arg2;
- (void)tcpSocketDidConnect:(GCKNTCPSocket *)arg1;
@end

