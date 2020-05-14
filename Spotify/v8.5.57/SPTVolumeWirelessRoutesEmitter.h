//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaWirelessRoutesObserver-Protocol.h"
#import "SPTVolumeEventEmitter-Protocol.h"

@class NSString;
@protocol SPTGaiaWirelessRoutesAPI, SPTVolumeEventReceiver;

@interface SPTVolumeWirelessRoutesEmitter : NSObject <SPTGaiaWirelessRoutesObserver, SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    id <SPTGaiaWirelessRoutesAPI> _wirelessRoutesManager;
}

@property(readonly, nonatomic) id <SPTGaiaWirelessRoutesAPI> wirelessRoutesManager; // @synthesize wirelessRoutesManager=_wirelessRoutesManager;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)eventForCurrentRoutes;
- (void)wirelessActiveDeviceDidChange;
- (void)wirelessRoutesDidChangeAvailability:(_Bool)arg1;
- (void)emitInitialState;
- (void)dealloc;
- (void)setupObservation;
- (id)initWithWirelessRoutesManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

