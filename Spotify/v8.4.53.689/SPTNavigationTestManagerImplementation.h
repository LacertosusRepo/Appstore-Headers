//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTNavigationTestManager.h"

@class NSString, SPTNavigationSettingsRegistration;

@interface SPTNavigationTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTNavigationTestManager>
{
    id <SPTFeatureFlagSignal> _stateRestorationDisabledSignal;
    SPTNavigationSettingsRegistration *_navigationSettingsRegistration;
    id <SPTFeatureFlagSignal> _threeTabNavigationSignal;
    id <SPTFeatureFlagSignal> _threeTabNavigationRolloutSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> threeTabNavigationRolloutSignal; // @synthesize threeTabNavigationRolloutSignal=_threeTabNavigationRolloutSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> threeTabNavigationSignal; // @synthesize threeTabNavigationSignal=_threeTabNavigationSignal;
@property(retain, nonatomic) SPTNavigationSettingsRegistration *navigationSettingsRegistration; // @synthesize navigationSettingsRegistration=_navigationSettingsRegistration;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> stateRestorationDisabledSignal; // @synthesize stateRestorationDisabledSignal=_stateRestorationDisabledSignal;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)initWithAbbaService:(id)arg1 localSettings:(id)arg2 settingsRegistration:(id)arg3 featureFlagFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

