//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerPresenter-Protocol.h"

@class NSString;
@protocol SPTGaiaDevicePickerDeviceSpecificConfigurationProvider, SPTGaiaManager;

@interface SPTGaiaDevicePickerPresenterImplementation : NSObject <SPTGaiaDevicePickerPresenter>
{
    id <SPTGaiaManager> _gaiaManager;
    id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> _deviceConfiguration;
}

@property(readonly, nonatomic) id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
- (void).cxx_destruct;
- (void)presentDevicePickerFromView:(id)arg1 withContext:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasAvailableDevices;
- (id)initWithGaiaManager:(id)arg1 deviceConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

