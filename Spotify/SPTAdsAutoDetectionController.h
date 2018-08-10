//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccessoryStateObserver.h"
#import "SPTExternalIntegrationDriverDistractionObserver.h"
#import "SPTLegacyFeatureFlagObserver.h"

@class NSSet, NSString, SPTAdGlobalSettingsController;

@interface SPTAdsAutoDetectionController : NSObject <SPTLegacyFeatureFlagObserver, SPTAccessoryStateObserver, SPTExternalIntegrationDriverDistractionObserver>
{
    SPTAdGlobalSettingsController *_adSettingsController;
    id <SPTLegacyFeatureFlag> _featureFlag;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistraction;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    NSSet *_currentAccessories;
}

@property(retain, nonatomic) NSSet *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> featureFlag; // @synthesize featureFlag=_featureFlag;
@property(retain, nonatomic) SPTAdGlobalSettingsController *adSettingsController; // @synthesize adSettingsController=_adSettingsController;
- (void).cxx_destruct;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
- (void)disableAdSlots:(_Bool)arg1 reason:(id)arg2;
- (void)externalIntegrationDriverDistractionController:(id)arg1 didChangeEnabledState:(_Bool)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (id)accessoriesContainCar:(id)arg1;
- (id)serializeAccessoryInfo:(id)arg1;
- (void)registerDeviceInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAutoDeviceStateManagerFlag:(id)arg1 adSettingsController:(id)arg2 stateManager:(id)arg3 driverDistraction:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
