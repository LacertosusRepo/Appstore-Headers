//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIGAIAMobileConnectSettingsPage_DeviceLockScreenToggleEventFactory, SPTUBIGAIAMobileConnectSettingsPage_DeviceMenuButtonEventFactory, SPTUBIGAIAMobileConnectSettingsPage_LocalDeviceToggleEventFactory;

@protocol SPTUBIGAIAMobileConnectSettingsPageEventFactory <NSObject>
- (id <SPTUBIGAIAMobileConnectSettingsPage_DeviceLockScreenToggleEventFactory>)deviceLockScreenToggleFactory;
- (id <SPTUBIGAIAMobileConnectSettingsPage_LocalDeviceToggleEventFactory>)localDeviceToggleFactory;
- (id <SPTUBIGAIAMobileConnectSettingsPage_DeviceMenuButtonEventFactory>)deviceMenuButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

