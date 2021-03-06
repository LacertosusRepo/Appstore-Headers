//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFeatureSettingsItemFactory, SPTLocalSettings;

@interface SPTSpeakerActivationTestManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
}

@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (id)provideAccountLinkingSetting;
- (void)registerFeatureSettingsPage;
- (void)initializeSettings;
- (void)setupFeatureFlags;
- (id)initWithFeatureSettingsItemFactory:(id)arg1 localSettings:(id)arg2;

@end

