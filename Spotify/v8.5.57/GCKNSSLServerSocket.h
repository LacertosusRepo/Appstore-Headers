//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKNTCPServerSocket.h"

@class NSArray;

@interface GCKNSSLServerSocket : GCKNTCPServerSocket
{
    unsigned long long _bufferSize;
    NSArray *_certificates;
}

- (void).cxx_destruct;
- (void)acceptConnection:(int)arg1;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2 certificates:(id)arg3 bufferSize:(unsigned long long)arg4;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2 certificates:(id)arg3;

@end

