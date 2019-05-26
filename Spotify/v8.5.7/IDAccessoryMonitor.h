//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDA4APacketReaderWriterRegistry, IDMessagingService, IDVehicleInfo, IDVersionInfo;
@protocol IDAccessoryMonitor;

@interface IDAccessoryMonitor : NSObject
{
    id <IDAccessoryMonitor> _accessoryMonitor;
}

+ (id)sharedInstance;
@property(retain) id <IDAccessoryMonitor> accessoryMonitor; // @synthesize accessoryMonitor=_accessoryMonitor;
- (void).cxx_destruct;
- (void)overrideSystemInfoWithCustomSettings:(id)arg1;
- (void)disconnectAppswitcher;
- (void)connectAppswitcher;
- (void)registerApplicationForApplicationLaunch;
- (void)deregisterApplication:(id)arg1;
- (void)registerNonStickyApplication:(id)arg1;
- (void)registerStickyApplication:(id)arg1;
- (void)launchApplication:(id)arg1;
@property(readonly) _Bool supportsA4AMultisession;
@property(readonly) _Bool supportsA4AConnectionInBackground;
- (id)proxyInfo;
- (void)disconnectAccessory;
- (void)stopMonitoring;
- (void)startMonitoringWithManifest:(id)arg1;
- (void)startMonitoring;
@property(readonly, nonatomic) IDA4APacketReaderWriterRegistry *packetReaderWriterRegistry;
@property(readonly, nonatomic) IDMessagingService *messagingService;
@property(readonly, nonatomic) IDVersionInfo *etchVersion;
@property(readonly, nonatomic) IDVersionInfo *cdsVersion;
@property(readonly, nonatomic) IDVehicleInfo *vehicleInfo;
- (id)initWithDefaultAccessoryMonitor:(id)arg1;

@end
