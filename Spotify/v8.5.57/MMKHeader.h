//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKHeader : NSObject
{
    NSString *_version;
    NSString *_transactionId;
    NSString *_domain;
    NSString *_serviceType;
}

@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithVersion:(id)arg1 transactionId:(id)arg2 domain:(id)arg3 serviceType:(id)arg4;

@end

