//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTSignupMarketRestrictionsModel;

@interface SPTSignupTermsAndPolicyDialogCopyProvider : NSObject
{
    NSString *_countryCode;
    SPTSignupMarketRestrictionsModel *_marketRestrictions;
}

@property(retain, nonatomic) SPTSignupMarketRestrictionsModel *marketRestrictions; // @synthesize marketRestrictions=_marketRestrictions;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)specificTermsAndPolicyLicenseDialogText;
@property(readonly, nonatomic) NSString *policyLicenseDetailsButtonTitle;
@property(readonly, nonatomic) NSString *termsLicenseDetailsButtonTitle;
@property(readonly, nonatomic) NSString *termsAndPolicyLicenseDialogText;
@property(readonly, nonatomic) NSString *termsAndPolicyLicenseDialogTitle;
@property(readonly, nonatomic) NSString *policyLicenseDialogText;
@property(readonly, nonatomic) NSString *policyLicenseDialogTitle;
@property(readonly, nonatomic) NSString *termsLicenseDialogText;
@property(readonly, nonatomic) NSString *termsLicenseDialogTitle;
- (_Bool)shouldUseSpecificLicense;
- (id)initWithCountryCode:(id)arg1 marketRestrictions:(id)arg2;

@end
