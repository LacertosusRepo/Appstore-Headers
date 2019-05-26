//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderService-Protocol.h"

@class INSEventSender, NSString, SPTAllocationContext, SPTEventSenderDebugState, SPTEventSenderImplementation;
@protocol SPTContainerService, SPTDebugService, SPTNetworkService;

@interface SPTEventSenderServiceImplementation : NSObject <SPTEventSenderService>
{
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
    id <SPTNetworkService> _networkService;
    INSEventSender *_sdk;
    SPTEventSenderImplementation *_eventSender;
    SPTEventSenderDebugState *_eventSenderDebugState;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTEventSenderDebugState *eventSenderDebugState; // @synthesize eventSenderDebugState=_eventSenderDebugState;
@property(retain, nonatomic) SPTEventSenderImplementation *eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) INSEventSender *sdk; // @synthesize sdk=_sdk;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideEventSenderStateViewController;
- (id)provideEventSender;
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
