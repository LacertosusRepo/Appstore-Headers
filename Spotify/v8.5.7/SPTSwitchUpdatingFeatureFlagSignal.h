//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFeatureFlagSignalImplementation.h"

@class NSString, SPTFeatureSettingsItem;
@protocol SPTFeatureFlagSignal;

@interface SPTSwitchUpdatingFeatureFlagSignal : SPTFeatureFlagSignalImplementation
{
    id <SPTFeatureFlagSignal> _combinedSignal;
    id <SPTFeatureFlagSignal> _defaultSignal;
    SPTFeatureSettingsItem *_settingsItem;
}

@property(retain, nonatomic) SPTFeatureSettingsItem *settingsItem; // @synthesize settingsItem=_settingsItem;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> defaultSignal; // @synthesize defaultSignal=_defaultSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> combinedSignal; // @synthesize combinedSignal=_combinedSignal;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)logExposure;
- (void)setInitialSettingItemState:(long long)arg1;
- (void)setSettingItemDefaultValueForState:(long long)arg1;
- (id)initWithCombinedSignal:(id)arg1 defaultSignal:(id)arg2 switchSettingItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
