//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerHomeDeviceEducationCellDelegate-Protocol.h"

@class NSNotificationCenter, NSString, SPTGaiaConnectDevice, SPTGaiaHomeDeviceManager, SPTGaiaHomeDeviceTooltipConnectionTracker;
@protocol SPTGaiaHomeDeviceFlagsProvider, SPTGaiaHomeDeviceTooltipManagerDelegate;

@interface SPTGaiaHomeDeviceTooltipManager : NSObject <SPTGaiaDevicePickerHomeDeviceEducationCellDelegate>
{
    id <SPTGaiaHomeDeviceTooltipManagerDelegate> _delegate;
    id <SPTGaiaHomeDeviceFlagsProvider> _homeDeviceFlagProvider;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    SPTGaiaHomeDeviceTooltipConnectionTracker *_deviceConnectionTracker;
    NSNotificationCenter *_notificationCenter;
    SPTGaiaConnectDevice *_deviceShowingEducationTooltip;
}

@property(retain, nonatomic) SPTGaiaConnectDevice *deviceShowingEducationTooltip; // @synthesize deviceShowingEducationTooltip=_deviceShowingEducationTooltip;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTGaiaHomeDeviceTooltipConnectionTracker *deviceConnectionTracker; // @synthesize deviceConnectionTracker=_deviceConnectionTracker;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) id <SPTGaiaHomeDeviceFlagsProvider> homeDeviceFlagProvider; // @synthesize homeDeviceFlagProvider=_homeDeviceFlagProvider;
@property(nonatomic) __weak id <SPTGaiaHomeDeviceTooltipManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)homeDeviceEducationCellForDevice:(id)arg1 didChangeSwitch:(_Bool)arg2;
- (void)homeDeviceEducationCellDidPressCloseForDevice:(id)arg1;
- (void)resetEducationItem;
- (_Bool)isCurrentlyShowingTooltipForDifferentDeviceThan:(id)arg1;
- (_Bool)devicePickerShouldShowHomeDeviceEducationItemForDevice:(id)arg1;
- (void)devicePickerDidSelectDevice:(id)arg1;
@property(readonly, nonatomic) _Bool devicePickerEducationEnabled;
- (void)dealloc;
- (void)setupNotificationObserving;
- (id)initWithHomeDeviceFlagProvider:(id)arg1 homeDeviceManager:(id)arg2 deviceConnectionTracker:(id)arg3 notificationCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

