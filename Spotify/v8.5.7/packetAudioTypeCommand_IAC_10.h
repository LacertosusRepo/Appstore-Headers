//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasePacket.h"

@interface packetAudioTypeCommand_IAC_10 : BasePacket
{
    unsigned char _command;
    unsigned char _type;
    unsigned short _maximumDuration;
    unsigned int _requestID;
}

@property unsigned short maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property unsigned char type; // @synthesize type=_type;
@property unsigned char command; // @synthesize command=_command;
@property unsigned int requestID; // @synthesize requestID=_requestID;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

