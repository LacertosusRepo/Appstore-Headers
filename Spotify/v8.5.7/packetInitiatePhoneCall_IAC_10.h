//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasePacket.h"

@class String_IAC_10;

@interface packetInitiatePhoneCall_IAC_10 : BasePacket
{
    String_IAC_10 *_displayName;
    String_IAC_10 *_number;
}

@property(retain) String_IAC_10 *number; // @synthesize number=_number;
@property(retain) String_IAC_10 *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

