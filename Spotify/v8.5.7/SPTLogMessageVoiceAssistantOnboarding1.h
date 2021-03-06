//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageVoiceAssistantOnboarding1 : SPTLogMessage
{
    NSString *_utteranceIdValue;
    NSString *_referrerValue;
    long long _pagesViewedValue;
    long long _totalPagesValue;
    NSString *_onboardingVersionValue;
    NSString *_exitMethodValue;
}

+ (id)messageWithUtteranceId:(id)arg1 referrer:(id)arg2 pagesViewed:(long long)arg3 totalPages:(long long)arg4 onboardingVersion:(id)arg5 exitMethod:(id)arg6;
@property(copy, nonatomic) NSString *exitMethodValue; // @synthesize exitMethodValue=_exitMethodValue;
@property(copy, nonatomic) NSString *onboardingVersionValue; // @synthesize onboardingVersionValue=_onboardingVersionValue;
@property(nonatomic) long long totalPagesValue; // @synthesize totalPagesValue=_totalPagesValue;
@property(nonatomic) long long pagesViewedValue; // @synthesize pagesViewedValue=_pagesViewedValue;
@property(copy, nonatomic) NSString *referrerValue; // @synthesize referrerValue=_referrerValue;
@property(copy, nonatomic) NSString *utteranceIdValue; // @synthesize utteranceIdValue=_utteranceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

