//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasePacket.h"

@interface packetClientState_IAC_10 : BasePacket
{
    unsigned char _stateType;
    unsigned char _value;
}

@property unsigned char value; // @synthesize value=_value;
@property unsigned char stateType; // @synthesize stateType=_stateType;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

