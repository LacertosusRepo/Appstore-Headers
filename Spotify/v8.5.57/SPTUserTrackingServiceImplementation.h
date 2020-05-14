//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUserTrackingService-Protocol.h"

@class NSString, SPTAdjustURLSanitizer, SPTAdjustUserTracker, SPTAllocationContext, SPTTrackerBroadcaster;
@protocol SPTContainerService, SPTCoreService, SPTDebugService, SPTPushNotificationController;

@interface SPTUserTrackingServiceImplementation : NSObject <SPTUserTrackingService>
{
    SPTTrackerBroadcaster *_trackerBroadcaster;
    id <SPTPushNotificationController> _pushNotificationsController;
    SPTAdjustUserTracker *_adjustUserTracker;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTDebugService> _debugService;
    SPTAdjustURLSanitizer *_adjustURLSanitizer;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTAdjustURLSanitizer *adjustURLSanitizer; // @synthesize adjustURLSanitizer=_adjustURLSanitizer;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) SPTAdjustUserTracker *adjustUserTracker; // @synthesize adjustUserTracker=_adjustUserTracker;
@property(readonly, nonatomic) id <SPTPushNotificationController> pushNotificationsController; // @synthesize pushNotificationsController=_pushNotificationsController;
@property(retain, nonatomic) SPTTrackerBroadcaster *trackerBroadcaster; // @synthesize trackerBroadcaster=_trackerBroadcaster;
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

