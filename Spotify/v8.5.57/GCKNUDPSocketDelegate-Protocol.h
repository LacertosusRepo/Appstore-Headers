//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKNError, GCKNSocketAddress, GCKNUDPSocket, NSData;

@protocol GCKNUDPSocketDelegate <NSObject>
- (void)udpSocket:(GCKNUDPSocket *)arg1 didCloseWithError:(GCKNError *)arg2;
- (void)udpSocket:(GCKNUDPSocket *)arg1 didReceivePacket:(NSData *)arg2 fromAddress:(GCKNSocketAddress *)arg3;
@end

