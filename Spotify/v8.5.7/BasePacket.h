//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PacketHeader_IAC_10;

@interface BasePacket : NSObject
{
    PacketHeader_IAC_10 *_packetHeader;
}

@property(retain) PacketHeader_IAC_10 *packetHeader; // @synthesize packetHeader=_packetHeader;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

