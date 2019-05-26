//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface GCKNNetworkAddress : NSObject <NSCopying, NSCoding>
{
    NSString *_ipAddress;
    long long _type;
    NSData *_addressData;
}

+ (id)addressWithIPCPath:(id)arg1;
+ (id)addressWithIPv6Address:(id)arg1;
+ (id)addressWithIPv4Address:(id)arg1;
+ (id)IPv4BroadcastAddress;
+ (id)loopbackAddressOfType:(long long)arg1;
+ (id)wildcardAddressOfType:(long long)arg1;
@property(readonly, copy, nonatomic) NSData *addressData; // @synthesize addressData=_addressData;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)checkAddress;
@property(readonly, copy, nonatomic) NSString *ipAddress;
- (_Bool)matchAnyAddress;
- (void)setForAnyAddress;
- (id)initWithType:(long long)arg1 addressData:(id)arg2;
- (id)initWithType:(long long)arg1 ipAddress:(id)arg2;

@end
