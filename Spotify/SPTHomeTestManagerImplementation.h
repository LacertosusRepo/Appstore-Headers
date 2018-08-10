//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTHomeTestManager.h"
#import "SPTLocalSettingsObserver.h"
#import "SPTProductStateObserver.h"

@class NSHashTable, NSString;

@interface SPTHomeTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTLocalSettingsObserver, SPTProductStateObserver, SPTHomeTestManager>
{
    _Bool _featureEnabled;
    _Bool _badgeTestEnabled;
    _Bool _legacyHomeFeatureEnabled;
    NSString *_customSpaceID;
    id <SPTFeatureFlagSignal> _legacyHomeFeatureEnabledSignal;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaService> _abbaService;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTAlertController> _alertController;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFeatureFlagSignal> _badgeFlagSignal;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isLegacyHomeFeatureEnabled) _Bool legacyHomeFeatureEnabled; // @synthesize legacyHomeFeatureEnabled=_legacyHomeFeatureEnabled;
@property(nonatomic, getter=isBadgeTestEnabled) _Bool badgeTestEnabled; // @synthesize badgeTestEnabled=_badgeTestEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> badgeFlagSignal; // @synthesize badgeFlagSignal=_badgeFlagSignal;
@property(nonatomic, getter=isFeatureEnabled) _Bool featureEnabled; // @synthesize featureEnabled=_featureEnabled;
@property(readonly, nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(readonly, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> legacyHomeFeatureEnabledSignal; // @synthesize legacyHomeFeatureEnabledSignal=_legacyHomeFeatureEnabledSignal;
- (void).cxx_destruct;
- (void)updateFeatureEnabledValueBasedOnHomeFeatureFlagValue:(id)arg1;
- (id)customSpaceIDFromLocalSettings:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)localSettingsDidChange:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(copy, nonatomic) NSString *customSpaceID; // @synthesize customSpaceID=_customSpaceID;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 localSettings:(id)arg2 abbaService:(id)arg3 featureFlagFactory:(id)arg4 featureSettingsItemFactory:(id)arg5 alertController:(id)arg6 freeTierService:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

