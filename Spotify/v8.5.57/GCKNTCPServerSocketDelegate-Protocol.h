//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKNTCPServerSocket, GCKNTCPSocket;

@protocol GCKNTCPServerSocketDelegate <NSObject>
- (void)GCKNTCPServerSocket:(GCKNTCPServerSocket *)arg1 didAcceptConnection:(GCKNTCPSocket *)arg2;
@end
