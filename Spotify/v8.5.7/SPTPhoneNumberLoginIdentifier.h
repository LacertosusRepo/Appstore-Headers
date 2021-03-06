//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLoginIdentifier.h"

#import "NSCopying-Protocol.h"
#import "SPTCredentialsLoginIdentifier-Protocol.h"

@class NSString;

@interface SPTPhoneNumberLoginIdentifier : SPTLoginIdentifier <NSCopying, SPTCredentialsLoginIdentifier>
{
    NSString *_number;
    NSString *_isoCountryCode;
    NSString *_countryCallingCode;
}

@property(copy, nonatomic) NSString *countryCallingCode; // @synthesize countryCallingCode=_countryCallingCode;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (variant_c2ba9f29)credentials;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (id)initWithNumber:(id)arg1 isoCountryCode:(id)arg2 countryCallingCode:(id)arg3;

@end

