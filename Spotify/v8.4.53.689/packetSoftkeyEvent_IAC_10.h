//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePacket.h"

@interface packetSoftkeyEvent_IAC_10 : BasePacket
{
    unsigned char _softkeyEvent;
    unsigned char _softkey;
}

@property unsigned char softkey; // @synthesize softkey=_softkey;
@property unsigned char softkeyEvent; // @synthesize softkeyEvent=_softkeyEvent;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

