//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTFreeTierUIServiceComponentFactory, SPTGLUEService, SPTNetworkService, SPTSessionService, SPTUIPresentationService;

@interface SPTFreeTierUIServiceImplementation : NSObject <SPTFreeTierUIService>
{
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTSessionService> _sessionService;
    id <SPTFreeTierUIServiceComponentFactory> _componentFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierUIServiceComponentFactory> componentFactory; // @synthesize componentFactory=_componentFactory;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideHubsComponentRegistry;
- (id)providePersistentCounterWithIdentifier:(id)arg1 viewURI:(id)arg2;
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

