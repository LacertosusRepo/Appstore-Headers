//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaManager-Protocol.h"
#import "SPTGaiaWirelessRoutesObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class GaiaFeatureImplementation, NSArray, NSString, SPTCastManager, SPTGaiaLogger, SPTNetworkConnectivityController, SPTObserverManager, SPTPlayerState, SPTTheme;
@protocol SPTCrashReporter, SPTGaiaConnectManager, SPTGaiaDevicePickerDeviceSpecificConfigurationProvider, SPTGaiaWirelessRoutesAPI, SPTModalPresentationController, SPTOfflineModeState, SPTPlayer;

@interface SPTGaiaManagerImplementation : NSObject <SPTGaiaWirelessRoutesObserver, SPTNetworkConnectivityControllerObserver, SPTPlayerObserver, UIPopoverPresentationControllerDelegate, SPTGaiaConnectManagerObserver, SPTGaiaManager>
{
    _Bool _hasAvailableDevices;
    id <SPTGaiaConnectManager> _connectManager;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
    SPTCastManager *_castManager;
    SPTTheme *_theme;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTPlayer> _player;
    SPTGaiaLogger *_logCenter;
    long long _remoteConnectionState;
    long long _activeConnectionType;
    NSString *_activeDeviceName;
    SPTObserverManager *_observers;
    NSArray *_availableConnectionTypes;
    SPTPlayerState *_playerState;
    id <SPTOfflineModeState> _offlineModeState;
    GaiaFeatureImplementation *_feature;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTCrashReporter> _crashReporter;
    id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> _deviceConfiguration;
}

@property(readonly, nonatomic) id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak GaiaFeatureImplementation *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) NSArray *availableConnectionTypes; // @synthesize availableConnectionTypes=_availableConnectionTypes;
@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *activeDeviceName; // @synthesize activeDeviceName=_activeDeviceName;
@property(nonatomic) long long activeConnectionType; // @synthesize activeConnectionType=_activeConnectionType;
@property(nonatomic) long long remoteConnectionState; // @synthesize remoteConnectionState=_remoteConnectionState;
@property(readonly, nonatomic) SPTGaiaLogger *logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(retain, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(nonatomic) _Bool hasAvailableDevices; // @synthesize hasAvailableDevices=_hasAvailableDevices;
- (void).cxx_destruct;
- (id)calculatedDevicesAvailableState;
- (void)logDevicePickerShownFrom:(unsigned long long)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)dealloc;
- (id)deviceActiveName;
- (_Bool)isActiveDeviceCast;
- (_Bool)deviceIsBeingActivated;
- (_Bool)activeDeviceExists;
- (_Bool)isDeviceBeingActivatedSameAsActive;
- (id)devices;
- (void)presentPopoverControllerFromView:(id)arg1;
- (id)modelNameForCastGaiaDevice:(id)arg1;
- (void)presentDevicePickerPopOverFromView:(id)arg1 fromContext:(unsigned long long)arg2;
- (void)presentDevicePickerFromContext:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)wirelessRoutesDidChangeAvailability:(_Bool)arg1;
- (void)wirelessActiveDeviceDidChange;
- (void)connectManager:(id)arg1 deviceBeingActivatedDidChange:(id)arg2;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)connectManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)connectManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)calculateActiveDeviceName;
- (void)calculateActiveConnectionType;
- (void)calculateHasAvailableDevices;
- (void)calculateActive;
- (id)initWithConnectManager:(id)arg1 wirelessRoutesManager:(id)arg2 castManager:(id)arg3 theme:(id)arg4 feature:(id)arg5 networkConnectivityController:(id)arg6 player:(id)arg7 logCenter:(id)arg8 offlineModeState:(id)arg9 modalPresentationController:(id)arg10 crashReporter:(id)arg11 deviceConfiguration:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

