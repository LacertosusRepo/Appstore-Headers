//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTGaiaManagerObserver <NSObject>
- (void)gaiaManagerDidChangeConnectionTypesAvailable:(id <SPTGaiaManager>)arg1;
- (void)gaiaManagerDidChangeAvailable:(id <SPTGaiaManager>)arg1;
- (void)gaiaManagerDidChangeActiveDeviceName:(id <SPTGaiaManager>)arg1;
- (void)gaiaManagerDidChangeRemoteConnectionState:(id <SPTGaiaManager>)arg1;

@optional
- (void)gaiaManagerDidChangeGaiaVolumeControlState:(id <SPTGaiaManager>)arg1;
@end

