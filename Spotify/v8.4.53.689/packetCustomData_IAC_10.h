//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePacket.h"

@class NSData;

@interface packetCustomData_IAC_10 : BasePacket
{
    unsigned char _event;
    unsigned short _type;
    unsigned short _length;
    NSData *_data;
}

@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned short length; // @synthesize length=_length;
@property unsigned short type; // @synthesize type=_type;
@property unsigned char event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

