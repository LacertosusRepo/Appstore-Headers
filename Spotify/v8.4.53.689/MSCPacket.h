//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MSCPacket : NSObject
{
    unsigned char _packetType;
    NSData *_rawPacketData;
}

@property(readonly) NSData *rawPacketData; // @synthesize rawPacketData=_rawPacketData;
@property(readonly) unsigned char packetType; // @synthesize packetType=_packetType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPacketType:(unsigned char)arg1 withContents:(const char *)arg2 andPacketLength:(unsigned long long)arg3;

@end

