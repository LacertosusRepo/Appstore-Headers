//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDApplication, IDVehicleInfo, NSError;

@protocol IDApplicationDelegate <NSObject>
- (void)applicationRestoreMainHmiState:(IDApplication *)arg1;

@optional
- (void)applicationDidStop:(IDApplication *)arg1;
- (void)application:(IDApplication *)arg1 didFailToStartWithError:(NSError *)arg2;
- (void)applicationDidStart:(IDApplication *)arg1;
- (void)application:(IDApplication *)arg1 didConnectToVehicle:(IDVehicleInfo *)arg2;
@end

