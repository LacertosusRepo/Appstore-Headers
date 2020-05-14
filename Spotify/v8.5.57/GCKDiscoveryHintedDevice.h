//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKNetworkAddress;

@interface GCKDiscoveryHintedDevice : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _port;
    GCKNetworkAddress *_networkAddress;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) GCKNetworkAddress *networkAddress; // @synthesize networkAddress=_networkAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNetworkAddress:(id)arg1;
- (id)initWithNetworkAddress:(id)arg1 port:(unsigned short)arg2;

@end
