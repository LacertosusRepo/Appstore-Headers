//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSCBasePacket.h"

@class NSData;

@interface MSCPacketCustomData : MSCBasePacket
{
    unsigned char _event;
    unsigned short _type;
    NSData *_data;
}

@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned short type; // @synthesize type=_type;
@property unsigned char event; // @synthesize event=_event;
- (void).cxx_destruct;

@end

