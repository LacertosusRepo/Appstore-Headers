//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonAvailableEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectedEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectingEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonUnavailableEventFactory;

@protocol SPTUBIGAIAMobileConnectDevicesAvailableEventFactory <NSObject>
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectedEventFactory>)connectButtonConnectedFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectingEventFactory>)connectButtonConnectingFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonAvailableEventFactory>)connectButtonAvailableFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonUnavailableEventFactory>)connectButtonUnavailableFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
