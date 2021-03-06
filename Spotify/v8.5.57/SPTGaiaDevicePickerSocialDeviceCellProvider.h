//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerCellProvider-Protocol.h"

@class NSString, SPTCastManager, SPTGaiaConnectDevice, SPTGaiaDeviceAppearanceMapping, SPTGaiaDevicePickerAppearanceManager, SPTGaiaDevicePickerSocialDeviceCellAccessoryView, SPTGaiaSocialListeningIntegrationManager, SPTPlayerState;
@protocol GLUEImageLoader, SPTGaiaActiveDeviceProvider, SPTGaiaContextMenuModelProvider, SPTSocialListeningSocialDeviceModelEntity;

@interface SPTGaiaDevicePickerSocialDeviceCellProvider : NSObject <SPTGaiaDevicePickerCellProvider>
{
    _Bool _playbackRestricted;
    _Bool _socialDeviceFlagEnabled;
    SPTGaiaDevicePickerSocialDeviceCellAccessoryView *_joinButton;
    id _joinButtonActionTarget;
    SEL _joinButtonActionSelector;
    SPTGaiaDevicePickerSocialDeviceCellAccessoryView *_leaveButton;
    id _leaveButtonActionTarget;
    SEL _leaveButtonActionSelector;
    SPTGaiaConnectDevice *_device;
    id <SPTGaiaContextMenuModelProvider> _contextMenuModelProvider;
    id <SPTGaiaActiveDeviceProvider> _activeDeviceProvider;
    SPTPlayerState *_playerState;
    SPTCastManager *_castManager;
    SPTGaiaDeviceAppearanceMapping *_deviceIconMapper;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    id <SPTSocialListeningSocialDeviceModelEntity> _socialDevice;
    id <GLUEImageLoader> _glueImageLoader;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
}

@property(nonatomic) _Bool socialDeviceFlagEnabled; // @synthesize socialDeviceFlagEnabled=_socialDeviceFlagEnabled;
@property(retain, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTSocialListeningSocialDeviceModelEntity> socialDevice; // @synthesize socialDevice=_socialDevice;
@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *deviceIconMapper; // @synthesize deviceIconMapper=_deviceIconMapper;
@property(readonly, nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) _Bool playbackRestricted; // @synthesize playbackRestricted=_playbackRestricted;
@property(readonly, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) id <SPTGaiaActiveDeviceProvider> activeDeviceProvider; // @synthesize activeDeviceProvider=_activeDeviceProvider;
@property(readonly, nonatomic) id <SPTGaiaContextMenuModelProvider> contextMenuModelProvider; // @synthesize contextMenuModelProvider=_contextMenuModelProvider;
@property(readonly, nonatomic) SPTGaiaConnectDevice *device; // @synthesize device=_device;
@property(nonatomic) SEL leaveButtonActionSelector; // @synthesize leaveButtonActionSelector=_leaveButtonActionSelector;
@property(nonatomic) __weak id leaveButtonActionTarget; // @synthesize leaveButtonActionTarget=_leaveButtonActionTarget;
@property(retain, nonatomic) SPTGaiaDevicePickerSocialDeviceCellAccessoryView *leaveButton; // @synthesize leaveButton=_leaveButton;
@property(nonatomic) SEL joinButtonActionSelector; // @synthesize joinButtonActionSelector=_joinButtonActionSelector;
@property(nonatomic) __weak id joinButtonActionTarget; // @synthesize joinButtonActionTarget=_joinButtonActionTarget;
@property(retain, nonatomic) SPTGaiaDevicePickerSocialDeviceCellAccessoryView *joinButton; // @synthesize joinButton=_joinButton;
- (void).cxx_destruct;
- (void)setTargetForContextMenuAction:(id)arg1 action:(SEL)arg2;
- (void)setTargetForLeaveButtonAction:(id)arg1 action:(SEL)arg2;
- (void)setTargetForJoinButtonAction:(id)arg1 action:(SEL)arg2;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)defaultCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (long long)accessoryIcon;
- (long long)icon;
- (_Bool)isDeviceDisabled;
- (id)subtitle;
- (id)title;
- (id)defaultSubtitle;
- (id)defaultTitle;
- (_Bool)shouldDisplayDeviceAsShuffleOnly;
- (_Bool)isDeviceCast;
- (id)deviceDisplayName;
- (_Bool)isDeviceLoggedIn;
- (_Bool)defaultIsDeviceDisabled;
- (_Bool)isDeviceConnecting;
- (_Bool)isDeviceActive;
- (id)initWithDevice:(id)arg1 contextMenuModelProvider:(id)arg2 activeDeviceProvider:(id)arg3 playerState:(id)arg4 playbackRestricted:(_Bool)arg5 castManager:(id)arg6 deviceIconMapper:(id)arg7 appearanceManager:(id)arg8 socialListeningManager:(id)arg9 glueImageLoader:(id)arg10 socialDevice:(id)arg11 socialDeviceExposed:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

