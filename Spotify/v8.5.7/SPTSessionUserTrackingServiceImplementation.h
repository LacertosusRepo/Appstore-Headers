//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTClientReporterUserTracker, SPTCrashReporterUserTracker, SPTDeviceReporterUserTracker;
@protocol SPTCrashReporterService, SPTEventSenderService, SPTFeatureFlagSignal, SPTFreeTierService, SPTNetworkService, SPTSessionService, SPTUserTrackingService;

@interface SPTSessionUserTrackingServiceImplementation : NSObject <SPTService>
{
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTEventSenderService> _eventSenderService;
    SPTCrashReporterUserTracker *_crashReporterUserTracker;
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
    SPTClientReporterUserTracker *_clientReporterUserTracker;
    SPTDeviceReporterUserTracker *_deviceReporterUserTracker;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTDeviceReporterUserTracker *deviceReporterUserTracker; // @synthesize deviceReporterUserTracker=_deviceReporterUserTracker;
@property(retain, nonatomic) SPTClientReporterUserTracker *clientReporterUserTracker; // @synthesize clientReporterUserTracker=_clientReporterUserTracker;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
@property(retain, nonatomic) SPTCrashReporterUserTracker *crashReporterUserTracker; // @synthesize crashReporterUserTracker=_crashReporterUserTracker;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

