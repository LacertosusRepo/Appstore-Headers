//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface GCKVASTAdsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_adTagUrl;
    NSString *_adsResponse;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *adsResponse; // @synthesize adsResponse=_adsResponse;
@property(retain, nonatomic) NSURL *adTagUrl; // @synthesize adTagUrl=_adTagUrl;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithAdTagURL:(id)arg1 adsResponse:(id)arg2;

@end
