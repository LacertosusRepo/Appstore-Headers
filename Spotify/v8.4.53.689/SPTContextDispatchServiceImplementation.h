//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextAwareURITypeRegistry.h"
#import "SPTContextDispatchService.h"

@class NSMutableSet, NSString, SPTAllocationContext;

@interface SPTContextDispatchServiceImplementation : NSObject <SPTContextAwareURITypeRegistry, SPTContextDispatchService>
{
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    NSMutableSet *_URITypeRegistries;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableSet *URITypeRegistries; // @synthesize URITypeRegistries=_URITypeRegistries;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)registerContextAwareURITypeManager:(id)arg1;
- (id)provideContextDispatchPageForURI:(id)arg1 context:(id)arg2;
- (id)provideContextAwareURITypeRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

