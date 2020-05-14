//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class GCKNNetworkAddress, NSData, NSString;

@interface GCKNetworkAddress : NSObject <NSCopying, NSCoding>
{
    GCKNNetworkAddress *_privateImplementation;
}

+ (id)addressWithIPCPath:(id)arg1;
+ (id)addressWithIPv6Address:(id)arg1;
+ (id)addressWithIPv4Address:(id)arg1;
+ (id)IPv4BroadcastAddress;
+ (id)loopbackAddressOfType:(long long)arg1;
+ (id)wildcardAddressOfType:(long long)arg1;
@property(retain, nonatomic) GCKNNetworkAddress *privateImplementation; // @synthesize privateImplementation=_privateImplementation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSData *addressData;
@property(readonly, copy, nonatomic) NSString *ipAddress;
@property(readonly, nonatomic) long long type;
- (id)initWithType:(long long)arg1 addressData:(id)arg2;
- (id)initWithType:(long long)arg1 ipAddress:(id)arg2;
- (id)initWithPrivateImplementation:(id)arg1;

@end

