//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerCellProvider-Protocol.h"

@class NSString, SPTGaiaConnectDevice, SPTGaiaHomeDeviceManager, SPTGaiaHomeDeviceTooltipManager;

@interface SPTGaiaDevicePickerHomeDeviceEducationCellProvider : NSObject <SPTGaiaDevicePickerCellProvider>
{
    SPTGaiaConnectDevice *_device;
    SPTGaiaHomeDeviceTooltipManager *_homeDeviceEducationManager;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
}

@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) SPTGaiaHomeDeviceTooltipManager *homeDeviceEducationManager; // @synthesize homeDeviceEducationManager=_homeDeviceEducationManager;
@property(readonly, nonatomic) SPTGaiaConnectDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)deviceIsHomeDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 homeDeviceEducationManager:(id)arg2 homeDeviceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

