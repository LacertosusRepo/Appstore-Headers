//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, CBUUID, NSMutableDictionary, NSString;

@interface GCKBLEDeviceVisibilityChecker : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_BLEManager;
    NSMutableDictionary *_pendingBSSIDS;
    CBUUID *_serviceUUID;
    int _bleState;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)startScan;
- (void)timeExpiredForBSSID:(id)arg1;
- (void)isDeviceVisibleWithBSSID:(id)arg1 BLEDeviceVisibilityHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
