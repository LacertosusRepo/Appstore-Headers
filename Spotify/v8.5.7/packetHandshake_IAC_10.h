//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasePacket.h"

@class String_IAC_10, Version_IAC_10;

@interface packetHandshake_IAC_10 : BasePacket
{
    String_IAC_10 *_bundleIdentifier;
    Version_IAC_10 *_protocolVersion;
}

@property(retain) Version_IAC_10 *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain) String_IAC_10 *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

