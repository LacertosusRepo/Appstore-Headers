//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SPTPhoneNumberSignupPhoneNumberEntryModel : NSObject
{
    NSDictionary *_countries;
    NSString *_selectedCountryCode;
    NSString *_nationalPhoneNumber;
}

@property(copy, nonatomic) NSString *nationalPhoneNumber; // @synthesize nationalPhoneNumber=_nationalPhoneNumber;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(copy, nonatomic) NSDictionary *countries; // @synthesize countries=_countries;
- (void).cxx_destruct;
- (void)verifyCountryCodeInCountries;
- (id)initWithCountries:(id)arg1 selectedCountryCode:(id)arg2;

@end
