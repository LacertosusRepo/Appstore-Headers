//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageResubscriptionModalMessage1 : SPTLogMessage
{
    NSString *_eventValue;
    long long _daysLeftValue;
    NSString *_testNameValue;
    NSString *_testVariantValue;
    NSString *_extrasValue;
}

+ (id)messageWithEvent:(id)arg1 daysLeft:(long long)arg2 testName:(id)arg3 testVariant:(id)arg4 extras:(id)arg5;
@property(copy, nonatomic) NSString *extrasValue; // @synthesize extrasValue=_extrasValue;
@property(copy, nonatomic) NSString *testVariantValue; // @synthesize testVariantValue=_testVariantValue;
@property(copy, nonatomic) NSString *testNameValue; // @synthesize testNameValue=_testNameValue;
@property(nonatomic) long long daysLeftValue; // @synthesize daysLeftValue=_daysLeftValue;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

