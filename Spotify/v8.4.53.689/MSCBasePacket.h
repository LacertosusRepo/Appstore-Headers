//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSCPacketHeader;

@interface MSCBasePacket : NSObject
{
    MSCPacketHeader *_header;
}

@property(readonly) MSCPacketHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly) unsigned char packetType;
- (id)init;

@end

