//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaSettingsProvider-Protocol.h"

@class NSString, SPTGaiaDependencyInjectorImplementation, SPTGaiaHomeDeviceManager, SPTGaiaLogger, SPTGaiaUbiLogger, SPTObserverManager;
@protocol SPTGaiaDevicePickerDeviceSpecificConfigurationProvider, SPTGaiaDevicePickerPresenter, SPTGaiaLockScreenPlayerFlagsProvider><SPTGaiaHomeDeviceFlagsProvider, SPTGaiaSettingsStorageProtocol, SPTLinkDispatcher, SPTLogCenter;

@interface SPTGaiaSettingsManager : NSObject <SPTGaiaSettingsProvider>
{
    id <SPTGaiaDevicePickerPresenter> _devicePickerPresenter;
    id <SPTGaiaSettingsStorageProtocol> _settingsStorage;
    id <SPTLogCenter> _logCenter;
    id <SPTGaiaLockScreenPlayerFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> _settingsFlags;
    SPTObserverManager *_observers;
    SPTGaiaHomeDeviceManager *_savedDeviceManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTGaiaLogger *_logger;
    SPTGaiaUbiLogger *_ubiLogger;
    id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> _deviceConfiguration;
    SPTGaiaDependencyInjectorImplementation *_dependencyInjector;
}

+ (id)createDefaultSettingStorage;
@property(readonly, nonatomic) SPTGaiaDependencyInjectorImplementation *dependencyInjector; // @synthesize dependencyInjector=_dependencyInjector;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
@property(readonly, nonatomic) SPTGaiaUbiLogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTGaiaLockScreenPlayerFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> settingsFlags; // @synthesize settingsFlags=_settingsFlags;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTGaiaSettingsStorageProtocol> settingsStorage; // @synthesize settingsStorage=_settingsStorage;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerPresenter> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
- (void).cxx_destruct;
- (id)provideHomeDeviceResetSectionWithSettingsViewController:(id)arg1;
- (id)provideHomeDeviceHeaderSectionWithSettingsViewController:(id)arg1;
- (id)provideLockScreenControlsSectionWithSettingsViewController:(id)arg1;
- (id)provideLocalDevicesSectionWithSettingsViewController:(id)arg1;
- (id)providePickerSectionWithSettingsViewController:(id)arg1;
- (id)provideHeaderSectionWithSettingsViewController:(id)arg1;
- (void)registerSettingsInSettingsRegistry:(id)arg1 withGaiaFeature:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) _Bool automaticallyTransfersPlaybackForHomeDevice;
@property(nonatomic) _Bool lockScreenControlsEnabled;
@property(nonatomic) _Bool localDevicesFilterEnabled;
- (void)notifyObserversLocalDevicesOnlySettingChanged;
- (void)notifyObserversLockScreenControlsEnabledSettingsChanged;
- (void)registerDefaultSettingsIfNotExist;
- (id)initWithDevicePickerPresenter:(id)arg1 storage:(id)arg2 logCenter:(id)arg3 settingsFlags:(id)arg4 savedDeviceManager:(id)arg5 linkDispatcher:(id)arg6 logger:(id)arg7 ubiLogger:(id)arg8 deviceConfiguration:(id)arg9 dependencyInjector:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

