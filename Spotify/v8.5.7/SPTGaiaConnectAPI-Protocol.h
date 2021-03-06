//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTGaiaConnectObserver, SPTGaiaDeviceProtocol, SPTGaiaLocalDeviceProtocol;

@protocol SPTGaiaConnectAPI <NSObject>
@property(readonly, nonatomic) NSString *activeDeviceDisplayName;
@property(readonly, nonatomic) long long activeConnectionType;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> deviceBeingActivated;
@property(readonly, nonatomic) id <SPTGaiaLocalDeviceProtocol> localDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> activeDevice;
@property(readonly, nonatomic) NSArray *devices;
- (NSString *)modelNameForCastGaiaDevice:(id <SPTGaiaDeviceProtocol>)arg1;
- (void)removeObserver:(id <SPTGaiaConnectObserver>)arg1;
- (void)addObserver:(id <SPTGaiaConnectObserver>)arg1;
- (id <SPTGaiaDeviceProtocol>)findDeviceWithIdentifier:(NSString *)arg1;
- (void)renameDevice:(id <SPTGaiaDeviceProtocol>)arg1 name:(NSString *)arg2 responseBlock:(void (^)(_Bool, NSError *))arg3;
- (void)deactivateActiveDeviceWithResponseBlock:(void (^)(_Bool, NSError *))arg1;
- (void)activateDevice:(id <SPTGaiaDeviceProtocol>)arg1 responseBlock:(void (^)(_Bool, NSError *))arg2;
@end

