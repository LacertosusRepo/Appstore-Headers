//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKNUDPSocket.h"

@class GCKNSocketAddress;

@interface GCKNBroadcastSocket : GCKNUDPSocket
{
    GCKNSocketAddress *_broadcastSocketAddress;
}

- (void).cxx_destruct;
- (_Bool)sendPacket:(id)arg1;
- (_Bool)enableBroadcast;
- (id)initWithPort:(unsigned short)arg1;

@end

