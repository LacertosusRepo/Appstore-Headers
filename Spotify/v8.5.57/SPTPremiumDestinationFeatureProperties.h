//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPremiumDestinationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _mercuryPremiumHubsPageShowLegacyIos;
    _Bool _premiumHeaderVoiceoverAccessibleEnabled;
    _Bool _premiumDestinationTabbarBadgeEnabled;
}

@property(readonly, nonatomic) _Bool premiumDestinationTabbarBadgeEnabled; // @synthesize premiumDestinationTabbarBadgeEnabled=_premiumDestinationTabbarBadgeEnabled;
@property(readonly, nonatomic) _Bool premiumHeaderVoiceoverAccessibleEnabled; // @synthesize premiumHeaderVoiceoverAccessibleEnabled=_premiumHeaderVoiceoverAccessibleEnabled;
@property(readonly, nonatomic) _Bool mercuryPremiumHubsPageShowLegacyIos; // @synthesize mercuryPremiumHubsPageShowLegacyIos=_mercuryPremiumHubsPageShowLegacyIos;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
