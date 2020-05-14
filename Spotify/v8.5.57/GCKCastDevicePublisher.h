//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKAnalyticsEventLogger, GCKCastOptions, GCKDBNetworkInfo, GCKDatabase, GCKDevice, GCKDiscoveryCriteria, GCKNNetworkReachability, GCKProberScheduler, GCKRuntimeConfiguration, NSArray, NSMutableDictionary, NSTimer;
@protocol GCKCastDevicePublisherDelegate;

@interface GCKCastDevicePublisher : NSObject
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKCastOptions *_castOptions;
    GCKDatabase *_database;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKNNetworkReachability *_networkReachability;
    GCKDBNetworkInfo *_currentNetworkInfo;
    unsigned short _currentIPAddressHighBytes;
    NSTimer *_processDatabaseTimer;
    NSMutableDictionary *_publishedDevices;
    GCKDiscoveryCriteria *_discoveryCriteria;
    GCKProberScheduler *_proberScheduler;
    unsigned long long _iterationCount;
    GCKDevice *_nearbyDevice;
    _Bool _isNearbyDevicePublished;
    long long _status;
    id <GCKCastDevicePublisherDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKCastDevicePublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)supportStateForDiscoveryCriteriaInAppSupportState:(id)arg1;
- (long long)supportedStateForGuestMode;
- (long long)supportStateForDiscoveryCriteriaInDevice:(id)arg1;
- (void)updateDevices:(id)arg1 asGuestMode:(_Bool)arg2;
- (void)unpublishDevices:(id)arg1;
- (void)publishDevices:(id)arg1 asGuestMode:(_Bool)arg2;
- (id)deviceWithDeviceInfo:(id)arg1 asGuestMode:(_Bool)arg2;
- (void)logPublishedDevices:(id)arg1 rejectedDevices:(id)arg2;
- (void)handleNetworkReachabilityChange;
- (unsigned long long)priorityFromProbingReason:(int)arg1;
- (void)probeNetworkAddress:(id)arg1 servicePort:(unsigned short)arg2 reason:(int)arg3;
- (unsigned long long)devicePublishActionWithLocalConnectionInfo:(id)arg1 probingEnabled:(_Bool)arg2;
- (void)scanDatabaseForOnlineDevices:(id)arg1 rejectedDevices:(id)arg2;
- (id)devicePublished:(id)arg1;
- (id)networkPublishedDevices;
- (id)guestModePublishedDevices;
@property(readonly, copy, nonatomic) NSArray *publishedDevices;
- (void)processDatabase;
- (void)stopPublishing;
- (void)startPublishing;
- (id)createProberScheduler;
- (void)dealloc;
- (id)initWithAnalyticsEventLogger:(id)arg1 castOptions:(id)arg2 database:(id)arg3 networkReachability:(id)arg4 runtimeConfiguration:(id)arg5;

@end
