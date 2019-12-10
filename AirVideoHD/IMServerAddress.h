//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMServerAddress : NSObject
{
    NSString *hostName;
    long long port;
}

+ (id)addressWithHostName:(id)arg1 andPort:(long long)arg2;
@property(nonatomic) long long port; // @synthesize port;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName;
- (void).cxx_destruct;
- (_Bool)isLocal;
- (_Bool)isIPv6AddressLocal:(struct in6_addr *)arg1;
- (id)secureUrlWithFormat:(id)arg1;
- (id)urlWithFormat:(id)arg1;
- (id)urlWithProtocol:(id)arg1 format:(id)arg2 arguments:(char *)arg3;
- (_Bool)isInteger:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAddress:(id)arg1;
- (id)description;

@end

