//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTFreeTierMarketRestrictionsModel;

@interface SPTFreeTierSignupTermsAndPolicyDialogCopyProvider : NSObject
{
    NSString *_countryCode;
    SPTFreeTierMarketRestrictionsModel *_marketRestrictions;
}

@property(retain, nonatomic) SPTFreeTierMarketRestrictionsModel *marketRestrictions; // @synthesize marketRestrictions=_marketRestrictions;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
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

