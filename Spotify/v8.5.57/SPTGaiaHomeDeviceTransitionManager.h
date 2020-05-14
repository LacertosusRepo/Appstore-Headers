//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaHomeDeviceLocalNotificationHandler-Protocol.h"
#import "SPTGaiaHomeDeviceTriggerManagerDelegate-Protocol.h"

@class NSString, SPTGaiaHomeDeviceLocalNotificationManager, SPTGaiaHomeDeviceLogger, SPTGaiaHomeDeviceManager, SPTGaiaHomeDeviceTriggerManager;
@protocol SPTGaiaConnectManager, SPTGaiaHomeDeviceFlagsProvider, SPTGaiaSettingsProvider;

@interface SPTGaiaHomeDeviceTransitionManager : NSObject <SPTGaiaConnectManagerObserver, SPTGaiaHomeDeviceLocalNotificationHandler, SPTGaiaHomeDeviceTriggerManagerDelegate>
{
    _Bool _connectedToHomeDevice;
    id <SPTGaiaConnectManager> _connectManager;
    SPTGaiaHomeDeviceTriggerManager *_triggerManager;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    id <SPTGaiaHomeDeviceFlagsProvider> _homeDeviceFlagsProvider;
    SPTGaiaHomeDeviceLocalNotificationManager *_homeDeviceLocalNotificationManager;
    id <SPTGaiaSettingsProvider> _settingsProvider;
    SPTGaiaHomeDeviceLogger *_logger;
}

@property(nonatomic) _Bool connectedToHomeDevice; // @synthesize connectedToHomeDevice=_connectedToHomeDevice;
@property(readonly, nonatomic) SPTGaiaHomeDeviceLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTGaiaSettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(readonly, nonatomic) SPTGaiaHomeDeviceLocalNotificationManager *homeDeviceLocalNotificationManager; // @synthesize homeDeviceLocalNotificationManager=_homeDeviceLocalNotificationManager;
@property(readonly, nonatomic) id <SPTGaiaHomeDeviceFlagsProvider> homeDeviceFlagsProvider; // @synthesize homeDeviceFlagsProvider=_homeDeviceFlagsProvider;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) SPTGaiaHomeDeviceTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
- (void).cxx_destruct;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)homeDeviceTransitionCancelled;
- (void)homeDeviceTransitionTriggered:(id)arg1;
- (void)transferPlaybackFromHomeDevice;
- (void)handleActivateDeviceCallback:(id)arg1 source:(unsigned long long)arg2 error:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)transferPlaybackToSavedDeviceWithCallback:(CDUnknownBlockType)arg1 source:(unsigned long long)arg2;
- (void)logNotifcationAction:(unsigned long long)arg1;
- (void)handleNotificationActionForHomeDeviceLocalNotificationManager:(id)arg1 actionType:(unsigned long long)arg2;
- (void)performHomeDeviceTransition:(id)arg1;
- (void)dealloc;
- (id)initWithConnectManager:(id)arg1 triggerManager:(id)arg2 homeDeviceManager:(id)arg3 homeDeviceFlagsProvider:(id)arg4 homeDeviceLocalNotificationManager:(id)arg5 settingsProvider:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

