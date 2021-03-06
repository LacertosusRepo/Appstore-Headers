//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageRegistryObserver-Protocol.h"
#import "SPTUserActivityService-Protocol.h"

@class NSString, SPTAllocationContext, SPTUserActivityControllerImpl;
@protocol SPTContainerService, SPTURIDispatchService;

@interface SPTUserActivityServiceImplementation : NSObject <SPTPageRegistryObserver, SPTUserActivityService>
{
    id <SPTContainerService> _containerService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTUserActivityControllerImpl *_userActivityController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTUserActivityControllerImpl *userActivityController; // @synthesize userActivityController=_userActivityController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)pageRegistry:(id)arg1 didCreateViewController:(id)arg2 forViewURI:(id)arg3;
- (id)provideUserActivityController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

