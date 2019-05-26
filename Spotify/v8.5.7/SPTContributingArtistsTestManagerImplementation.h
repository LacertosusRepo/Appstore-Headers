//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContributingArtistsTestManager-Protocol.h"

@class NSString, SPTFeatureSettingsPage;
@protocol SPTFeatureSettingsItemFactory, SPTLegacyFeatureFlag, SettingsRegistry;

@interface SPTContributingArtistsTestManagerImplementation : NSObject <SPTContributingArtistsTestManager>
{
    id <SPTLegacyFeatureFlag> _contributingArtistsFeatureFlag;
    id <SettingsRegistry> _settingsRegistry;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTFeatureSettingsPage *_settingsPage;
}

@property(readonly, nonatomic) SPTFeatureSettingsPage *settingsPage; // @synthesize settingsPage=_settingsPage;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(nonatomic) __weak id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(readonly, nonatomic) id <SPTLegacyFeatureFlag> contributingArtistsFeatureFlag; // @synthesize contributingArtistsFeatureFlag=_contributingArtistsFeatureFlag;
- (void).cxx_destruct;
- (id)initWithABBAService:(id)arg1 localSettings:(id)arg2 settingsRegistry:(id)arg3 featureSettingsItemFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
