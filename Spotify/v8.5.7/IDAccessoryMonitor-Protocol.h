//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4APacketReaderWriterRegistry, IDA4AProxyInfo, IDMessagingService, IDVehicleInfo, IDVersionInfo, NSDictionary, NSString;

@protocol IDAccessoryMonitor <NSObject>
@property(readonly) _Bool supportsA4AMultisession;
@property(readonly) _Bool supportsA4AConnectionInBackground;
@property(readonly, nonatomic) IDVersionInfo *etchVersion;
@property(readonly, nonatomic) IDVersionInfo *cdsVersion;
@property(readonly, nonatomic) IDVehicleInfo *vehicleInfo;
@property(readonly, nonatomic) IDMessagingService *messagingService;
@property(readonly, nonatomic) IDA4APacketReaderWriterRegistry *packetReaderWriterRegistry;
- (void)overrideSystemInfoWithCustomSettings:(NSDictionary *)arg1;
- (void)disconnectAppswitcher;
- (void)connectAppswitcher;
- (IDA4AProxyInfo *)proxyInfo;
- (void)deregisterApplication:(NSString *)arg1;
- (void)registerNonStickyApplication:(NSString *)arg1;
- (void)registerStickyApplication:(NSString *)arg1;
- (void)registerApplicationForApplicationLaunch;
- (void)launchApplication:(NSString *)arg1;
- (void)disconnectAccessory;
- (void)stopMonitoring;
- (void)startMonitoringWithManifest:(NSDictionary *)arg1;
- (void)startMonitoring;
- (id)init;
@end
