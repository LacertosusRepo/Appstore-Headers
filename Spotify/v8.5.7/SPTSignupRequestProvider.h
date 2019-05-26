//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar;
@protocol SPTSignupParameterShuffler;

@interface SPTSignupRequestProvider : NSObject
{
    NSCalendar *_calendar;
    id <SPTSignupParameterShuffler> _parameterShuffler;
}

@property(retain, nonatomic) id <SPTSignupParameterShuffler> parameterShuffler; // @synthesize parameterShuffler=_parameterShuffler;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)encodeString:(id)arg1;
- (id)valueKeyPairsStringWithRequestBodyDictionary:(id)arg1;
- (id)dataFromRequestBodyDictionary:(id)arg1;
- (id)requestBodyDictionaryWithUserInfoParameters:(id)arg1;
- (id)createUserRequestWithURL:(id)arg1 requiredRequestParameters:(id)arg2;
- (id)requestWithURL:(id)arg1 method:(long long)arg2 maximumRetryCount:(unsigned long long)arg3 skipNSURLCache:(_Bool)arg4 cachePolicy:(unsigned long long)arg5 body:(id)arg6 timeout:(double)arg7 header:(id)arg8;
- (id)requestWithURL:(id)arg1 method:(long long)arg2 timeout:(double)arg3;
- (id)requestWithURL:(id)arg1 method:(long long)arg2 body:(id)arg3 header:(id)arg4;
- (id)ageValidationRequestWithBirthday:(id)arg1;
- (id)usernameValidationRequestWithUsername:(id)arg1;
- (id)displayNameSuggestionRequestWithEmail:(id)arg1;
- (id)emailValidationRequestWithEmail:(id)arg1;
- (id)createFacebookUserRequestWithRequiredParameters:(id)arg1;
- (id)createUserRequestWithRequiredParameters:(id)arg1;
- (id)signupConfigurationRequest;
- (id)initWithParameterShuffler:(id)arg1;

@end

