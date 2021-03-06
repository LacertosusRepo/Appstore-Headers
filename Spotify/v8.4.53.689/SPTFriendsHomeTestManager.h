//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString, SPTObserverManager;

@interface SPTFriendsHomeTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _existingUserFRUPEnabled;
    _Bool _existingUserFDWEnabled;
    _Bool _existingUserSOPOEnabled;
    _Bool _newUserFRUPEnabled;
    _Bool _newUserFDWEnabled;
    _Bool _heavyRotationEnabled;
    _Bool _friendsWeeklyStandaloneEnabled;
    _Bool _friendsWeeklyEmployeeEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _socialHomeExistingUserEnabledSignalCtrl;
    id <SPTFeatureFlagSignal> _socialHomeExistingUserEnabledSignalFRUP;
    id <SPTFeatureFlagSignal> _socialHomeExistingUserEnabledSignalFDW;
    id <SPTFeatureFlagSignal> _socialHomeExistingUserEnabledSignalSOPO;
    id <SPTFeatureFlagSignal> _socialHomeNewUserEnabledSignalCtrl;
    id <SPTFeatureFlagSignal> _socialHomeNewUserEnabledSignalFRUP;
    id <SPTFeatureFlagSignal> _socialHomeNewUserEnabledSignalFDW;
    id <SPTFeatureFlagSignal> _friendsWeeklyEnabledSignal;
    id <SPTFeatureFlagSignal> _heavyRotationEnabledSignal;
    id <SPTFeatureFlagSignal> _friendsWeeklyEmployeeEnabledSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isFriendsWeeklyEmployeeEnabled) _Bool friendsWeeklyEmployeeEnabled; // @synthesize friendsWeeklyEmployeeEnabled=_friendsWeeklyEmployeeEnabled;
@property(nonatomic, getter=isFriendsWeeklyStandaloneEnabled) _Bool friendsWeeklyStandaloneEnabled; // @synthesize friendsWeeklyStandaloneEnabled=_friendsWeeklyStandaloneEnabled;
@property(nonatomic, getter=isHeavyRotationEnabled) _Bool heavyRotationEnabled; // @synthesize heavyRotationEnabled=_heavyRotationEnabled;
@property(nonatomic, getter=isNewUserFDWEnabled) _Bool newUserFDWEnabled; // @synthesize newUserFDWEnabled=_newUserFDWEnabled;
@property(nonatomic, getter=isNewUserFRUPEnabled) _Bool newUserFRUPEnabled; // @synthesize newUserFRUPEnabled=_newUserFRUPEnabled;
@property(nonatomic, getter=isExistingUserSOPOEnabled) _Bool existingUserSOPOEnabled; // @synthesize existingUserSOPOEnabled=_existingUserSOPOEnabled;
@property(nonatomic, getter=isExistingUserFDWEnabled) _Bool existingUserFDWEnabled; // @synthesize existingUserFDWEnabled=_existingUserFDWEnabled;
@property(nonatomic, getter=isExistingUserFRUPEnabled) _Bool existingUserFRUPEnabled; // @synthesize existingUserFRUPEnabled=_existingUserFRUPEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> friendsWeeklyEmployeeEnabledSignal; // @synthesize friendsWeeklyEmployeeEnabledSignal=_friendsWeeklyEmployeeEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> heavyRotationEnabledSignal; // @synthesize heavyRotationEnabledSignal=_heavyRotationEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> friendsWeeklyEnabledSignal; // @synthesize friendsWeeklyEnabledSignal=_friendsWeeklyEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeNewUserEnabledSignalFDW; // @synthesize socialHomeNewUserEnabledSignalFDW=_socialHomeNewUserEnabledSignalFDW;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeNewUserEnabledSignalFRUP; // @synthesize socialHomeNewUserEnabledSignalFRUP=_socialHomeNewUserEnabledSignalFRUP;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeNewUserEnabledSignalCtrl; // @synthesize socialHomeNewUserEnabledSignalCtrl=_socialHomeNewUserEnabledSignalCtrl;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeExistingUserEnabledSignalSOPO; // @synthesize socialHomeExistingUserEnabledSignalSOPO=_socialHomeExistingUserEnabledSignalSOPO;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeExistingUserEnabledSignalFDW; // @synthesize socialHomeExistingUserEnabledSignalFDW=_socialHomeExistingUserEnabledSignalFDW;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeExistingUserEnabledSignalFRUP; // @synthesize socialHomeExistingUserEnabledSignalFRUP=_socialHomeExistingUserEnabledSignalFRUP;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> socialHomeExistingUserEnabledSignalCtrl; // @synthesize socialHomeExistingUserEnabledSignalCtrl=_socialHomeExistingUserEnabledSignalCtrl;
@property(retain, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)didDisplayFirstUseModalForID:(id)arg1;
- (_Bool)shouldDisplayFirstUseModalForID:(id)arg1;
- (id)enabledFriendsHomeVariants;
- (_Bool)isFriendsWeeklyEnabled;
- (_Bool)isFriendsHomeEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupDebugSetting;
- (void)setupFlags;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2 featureSettingsItemFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

