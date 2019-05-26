//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPermissionsService.h"

@class NSString, SPTAllocationContext;

@interface SPTPermissionsServiceImplementation : NSObject <SPTPermissionsService>
{
    id <SPTSessionService> _sessionService;
    id <SPTPermissionsOnDemandState> _onDemandPermissionState;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPermissionsOnDemandState> onDemandPermissionState; // @synthesize onDemandPermissionState=_onDemandPermissionState;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
- (void).cxx_destruct;
- (id)provideOnDemandPermissionState;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
