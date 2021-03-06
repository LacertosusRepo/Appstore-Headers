//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPushTokenUserTrackerService.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTPushTokenUserTrackerServiceImplementation : NSObject <SPTService, SPTPushTokenUserTrackerService>
{
    id <SPTPushTokenUserTracker> _pushTokenUserTracker;
    id <SPTPushTokenBroadcaster> _pushTokenBroadcaster;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPushTokenBroadcaster> pushTokenBroadcaster; // @synthesize pushTokenBroadcaster=_pushTokenBroadcaster;
@property(retain, nonatomic) id <SPTPushTokenUserTracker> pushTokenUserTracker; // @synthesize pushTokenUserTracker=_pushTokenUserTracker;
- (void).cxx_destruct;
- (id)providePushTokenUserTracker;
- (id)providePushTokenBroadcaster;
- (void)unload;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

