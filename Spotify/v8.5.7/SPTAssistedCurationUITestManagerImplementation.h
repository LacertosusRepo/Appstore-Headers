//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationUITestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTLocalSettings;

@interface SPTAssistedCurationUITestManagerImplementation : NSObject <SPTAssistedCurationUITestManager>
{
    _Bool _assistedCurationSearchAutocompleteEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _autocompleteSignal;
}

@property(nonatomic, getter=isAssistedCurationSearchAutocompleteEnabled) _Bool assistedCurationSearchAutocompleteEnabled; // @synthesize assistedCurationSearchAutocompleteEnabled=_assistedCurationSearchAutocompleteEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> autocompleteSignal; // @synthesize autocompleteSignal=_autocompleteSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupAutocompleteSignal;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2 featureSettingsItemFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
