//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTPaymentState : NSObject <NSCopying>
{
    long long _issue;
    long long _retryAttempt;
}

+ (id)paymentStateIssueStringToEnumValueMap;
+ (long long)paymentStateIssueFromString:(id)arg1;
+ (id)paymentStateForPaymentStateString:(id)arg1;
+ (id)paymentStateForNoIssue;
@property(readonly, nonatomic) long long retryAttempt; // @synthesize retryAttempt=_retryAttempt;
@property(readonly, nonatomic) long long issue; // @synthesize issue=_issue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToPaymentState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIssue:(long long)arg1 retryAttempt:(long long)arg2;

@end
