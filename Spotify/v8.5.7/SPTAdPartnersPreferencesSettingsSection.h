//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class NSString, SPSession, SPTAccesspointWebTokenRequest, SPTAdsLogger;
@protocol SPTLinkDispatcher;

@interface SPTAdPartnersPreferencesSettingsSection : SettingsSection
{
    SPSession *_session;
    SPTAccesspointWebTokenRequest *_webAccessTokenRequest;
    NSString *_adPartnerPreferenceURLWithToken;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAdsLogger *_adsLogger;
}

@property(retain, nonatomic) SPTAdsLogger *adsLogger; // @synthesize adsLogger=_adsLogger;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSString *adPartnerPreferenceURLWithToken; // @synthesize adPartnerPreferenceURLWithToken=_adPartnerPreferenceURLWithToken;
@property(retain, nonatomic) SPTAccesspointWebTokenRequest *webAccessTokenRequest; // @synthesize webAccessTokenRequest=_webAccessTokenRequest;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)startWebAccessTokenRequest;
- (void)didSelectRow:(long long)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 session:(id)arg2 linkDispatcher:(id)arg3 adsLogger:(id)arg4;

@end

