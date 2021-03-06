//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectAPI-Protocol.h"
#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaManagerObserver-Protocol.h"

@class NSArray, NSString, SPTObserverManager;
@protocol SPTGaiaConnectManager, SPTGaiaDeviceProtocol, SPTGaiaLocalDeviceProtocol, SPTGaiaManager;

@interface SPTGaiaConnectAPIImplementation : NSObject <SPTGaiaConnectManagerObserver, SPTGaiaManagerObserver, SPTGaiaConnectAPI>
{
    id <SPTGaiaConnectManager> _connectManager;
    id <SPTGaiaManager> _gaiaManager;
    SPTObserverManager *_observers;
}

@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
- (void).cxx_destruct;
- (void)gaiaManagerDidChangeConnectionTypesAvailable:(id)arg1;
- (void)gaiaManagerDidChangeAvailable:(id)arg1;
- (void)gaiaManagerDidChangeActiveDeviceName:(id)arg1;
- (void)gaiaManagerDidChangeRemoteConnectionState:(id)arg1;
- (void)connectManager:(id)arg1 deviceBeingActivatedDidChange:(id)arg2;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)connectManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (id)modelNameForCastGaiaDevice:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)renameDevice:(id)arg1 name:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)deactivateActiveDeviceWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)activateDevice:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)findDeviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *activeDeviceDisplayName;
@property(readonly, nonatomic) long long activeConnectionType;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> deviceBeingActivated;
@property(readonly, nonatomic) id <SPTGaiaLocalDeviceProtocol> localDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> activeDevice;
@property(readonly, nonatomic) NSArray *devices;
- (void)dealloc;
- (id)initWithConnectManager:(id)arg1 gaiaManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

