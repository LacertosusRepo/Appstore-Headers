//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCBasePacket.h"

@interface MSCPacketSoftkeyEvent : MSCBasePacket
{
    unsigned char _softkeyEvent;
    unsigned char _softkey;
}

@property unsigned char softkey; // @synthesize softkey=_softkey;
@property unsigned char softkeyEvent; // @synthesize softkeyEvent=_softkeyEvent;

@end

