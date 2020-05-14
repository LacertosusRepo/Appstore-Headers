//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSDate, NSString, SPTGaiaHomeDeviceManager, UIApplication;
@protocol SPTGaiaConnectManager, SPTGaiaHomeDeviceTriggerManagerDelegate, SPTNetworkConnectivityController, SPTPlayer;

@interface SPTGaiaHomeDeviceTriggerManager : NSObject <SPTGaiaConnectManagerObserver, SPTNetworkConnectivityControllerObserver>
{
    _Bool _activelyWaitingForHomeDevice;
    id <SPTGaiaHomeDeviceTriggerManagerDelegate> _delegate;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTGaiaConnectManager> _connectManager;
    UIApplication *_application;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    id <SPTPlayer> _player;
    NSDate *_lastWifiJoinDate;
    NSDate *_lastWifiLeaveDate;
}

@property(nonatomic) _Bool activelyWaitingForHomeDevice; // @synthesize activelyWaitingForHomeDevice=_activelyWaitingForHomeDevice;
@property(retain, nonatomic) NSDate *lastWifiLeaveDate; // @synthesize lastWifiLeaveDate=_lastWifiLeaveDate;
@property(retain, nonatomic) NSDate *lastWifiJoinDate; // @synthesize lastWifiJoinDate=_lastWifiJoinDate;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <SPTGaiaHomeDeviceTriggerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)userLeftWifi;
- (void)userJoinedWifi;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (_Bool)hasWifiLeaveCooldownPassed;
- (_Bool)hasWifiJoinTimeoutPassed;
- (_Bool)isPlaybackLocal;
- (_Bool)isPlaying;
- (_Bool)isHomeDeviceEligibleForTransition:(id)arg1;
- (_Bool)isApplicationInForeground;
- (double)secondsSinceDate:(id)arg1;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithNetworkConnectivityController:(id)arg1 connectManager:(id)arg2 application:(id)arg3 homeDeviceManager:(id)arg4 player:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
