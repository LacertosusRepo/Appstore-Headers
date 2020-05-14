//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKNetworkAddress, NSString;

@interface GCKSessionEndpoint : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _port;
    NSString *_endpointDeviceID;
    NSString *_sessionID;
    GCKNetworkAddress *_networkAddress;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) GCKNetworkAddress *networkAddress; // @synthesize networkAddress=_networkAddress;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *endpointDeviceID; // @synthesize endpointDeviceID=_endpointDeviceID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithEndpointDeviceID:(id)arg1 sessionID:(id)arg2 networkAddress:(id)arg3 port:(unsigned short)arg4;

@end

