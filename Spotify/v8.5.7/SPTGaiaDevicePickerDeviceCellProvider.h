//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerCellProvider-Protocol.h"

@class NSString, SPTCastManager, SPTGaiaConnectDevice, SPTGaiaDeviceAppearanceMapping, SPTGaiaDevicePickerAppearanceManager, SPTPlayerState;
@protocol SPTGaiaActiveDeviceProvider, SPTGaiaContextMenuModelProvider;

@interface SPTGaiaDevicePickerDeviceCellProvider : NSObject <SPTGaiaDevicePickerCellProvider>
{
    _Bool _playbackRestricted;
    SPTGaiaConnectDevice *_device;
    id <SPTGaiaContextMenuModelProvider> _contextMenuModelProvider;
    id <SPTGaiaActiveDeviceProvider> _activeDeviceProvider;
    SPTPlayerState *_playerState;
    SPTCastManager *_castManager;
    SPTGaiaDeviceAppearanceMapping *_deviceIconMapper;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    id _contextMenuActionTarget;
    SEL _contextMenuActionSelector;
}

@property(nonatomic) SEL contextMenuActionSelector; // @synthesize contextMenuActionSelector=_contextMenuActionSelector;
@property(nonatomic) __weak id contextMenuActionTarget; // @synthesize contextMenuActionTarget=_contextMenuActionTarget;
@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *deviceIconMapper; // @synthesize deviceIconMapper=_deviceIconMapper;
@property(readonly, nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) _Bool playbackRestricted; // @synthesize playbackRestricted=_playbackRestricted;
@property(readonly, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) id <SPTGaiaActiveDeviceProvider> activeDeviceProvider; // @synthesize activeDeviceProvider=_activeDeviceProvider;
@property(readonly, nonatomic) id <SPTGaiaContextMenuModelProvider> contextMenuModelProvider; // @synthesize contextMenuModelProvider=_contextMenuModelProvider;
@property(readonly, nonatomic) SPTGaiaConnectDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)setTargetForContextMenuAction:(id)arg1 action:(SEL)arg2;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (long long)accessoryIcon;
- (long long)icon;
- (_Bool)shouldDisplayDeviceAsShuffleOnly;
- (_Bool)isDeviceCast;
- (id)subtitle;
- (id)title;
- (id)deviceDisplayName;
- (_Bool)isDeviceLoggedIn;
- (_Bool)isDeviceDisabled;
- (_Bool)isDeviceConnecting;
- (_Bool)isDeviceActive;
- (id)initWithDevice:(id)arg1 contextMenuModelProvider:(id)arg2 activeDeviceProvider:(id)arg3 playerState:(id)arg4 playbackRestricted:(_Bool)arg5 castManager:(id)arg6 deviceIconMapper:(id)arg7 appearanceManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

