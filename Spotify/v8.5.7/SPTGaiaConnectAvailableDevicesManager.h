//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectStateObserver-Protocol.h"

@class NSArray, NSString, SPTGaiaConnectDevice, SPTGaiaConnectStateObservingManager;
@protocol SPTGaiaConnectAvailableDevicesDelegate, SPTGaiaLocalDeviceProtocol;

@interface SPTGaiaConnectAvailableDevicesManager : NSObject <SPTGaiaConnectStateObserver>
{
    SPTGaiaConnectDevice *_activeDevice;
    SPTGaiaConnectDevice *_deviceBeingActivated;
    NSArray *_devices;
    id <SPTGaiaLocalDeviceProtocol> _localDevice;
    id <SPTGaiaConnectAvailableDevicesDelegate> _delegate;
    SPTGaiaConnectStateObservingManager *_stateObservingManager;
    SPTGaiaConnectDevice *_deviceRequiringOnboarding;
}

@property(retain, nonatomic) SPTGaiaConnectDevice *deviceRequiringOnboarding; // @synthesize deviceRequiringOnboarding=_deviceRequiringOnboarding;
@property(readonly, nonatomic) SPTGaiaConnectStateObservingManager *stateObservingManager; // @synthesize stateObservingManager=_stateObservingManager;
@property(nonatomic) __weak id <SPTGaiaConnectAvailableDevicesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPTGaiaLocalDeviceProtocol> localDevice; // @synthesize localDevice=_localDevice;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) SPTGaiaConnectDevice *deviceBeingActivated; // @synthesize deviceBeingActivated=_deviceBeingActivated;
@property(retain, nonatomic) SPTGaiaConnectDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
- (void).cxx_destruct;
- (id)findDeviceMatching:(CDUnknownBlockType)arg1;
- (id)deviceIdIndexForDevices:(id)arg1;
- (void)updateAllSpecialDevices;
- (void)reactToUpdatedDevice:(id)arg1 previousInstance:(id)arg2;
- (void)findDifferencesWithNewDevices:(id)arg1 andPreviousDevices:(id)arg2;
- (void)updateDevicesWithNewData:(id)arg1;
- (id)findDeviceWithPhysicalIdentifier:(id)arg1;
- (id)findDeviceWithIdentifier:(id)arg1;
- (void)connectInternalStateDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithStateObservingManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

