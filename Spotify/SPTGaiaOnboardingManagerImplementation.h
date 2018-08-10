//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"

@class NSString, SPTGaiaAirplayManager, SPTGaiaDevice, SPTGaiaDeviceAppearanceMapping, SPTGaiaDeviceManager, SPTGaiaOnboardingPopupController;

@interface SPTGaiaOnboardingManagerImplementation : NSObject <SPTGaiaDeviceStateManagerObserver>
{
    SPTGaiaDevice *_newlyDiscoveredDevice;
    SPTGaiaDeviceManager *_deviceManager;
    SPTGaiaAirplayManager *_airplayManager;
    SPTGaiaOnboardingPopupController *_popupController;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
}

@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(readonly, nonatomic) SPTGaiaOnboardingPopupController *popupController; // @synthesize popupController=_popupController;
@property(readonly, nonatomic) SPTGaiaAirplayManager *airplayManager; // @synthesize airplayManager=_airplayManager;
@property(readonly, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) SPTGaiaDevice *newlyDiscoveredDevice; // @synthesize newlyDiscoveredDevice=_newlyDiscoveredDevice;
- (void).cxx_destruct;
- (_Bool)isBlockedForTA;
- (void)presentPopupOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)deviceStateManager:(id)arg1 onboardDevice:(id)arg2 enabled:(_Bool)arg3;
- (id)onboardingDevice;
- (void)dealloc;
- (id)initWithDeviceManager:(id)arg1 airplayManager:(id)arg2 popupController:(id)arg3 deviceIconMapper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

