//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SPTPhoneNumberSignupPhoneNumberEntryModel : NSObject
{
    NSDictionary *_allowedCallingCodes;
    NSString *_selectedCountryCode;
    NSString *_nationalPhoneNumber;
}

@property(copy, nonatomic) NSString *nationalPhoneNumber; // @synthesize nationalPhoneNumber=_nationalPhoneNumber;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(readonly, copy, nonatomic) NSDictionary *allowedCallingCodes; // @synthesize allowedCallingCodes=_allowedCallingCodes;
- (void).cxx_destruct;
- (void)verifyCountryCodeInCountries;
- (id)initWithAllowedCallingCodes:(id)arg1 selectedCountryCode:(id)arg2;

@end
