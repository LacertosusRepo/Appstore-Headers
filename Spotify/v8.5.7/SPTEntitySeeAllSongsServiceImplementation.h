//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEntitySeeAllSongsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTCoreService, SPTEntitySeeAllSongsRegistry, SPTFeatureFlagSignal, SPTSwiftAllSongsService, SPTURIDispatchService;

@interface SPTEntitySeeAllSongsServiceImplementation : NSObject <SPTEntitySeeAllSongsService>
{
    _Bool _isSwiftAllSongEnabled;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTCoreService> _coreService;
    id <SPTSwiftAllSongsService> _swiftAllSongsService;
    id <SPTFeatureFlagSignal> _swiftAllSongsSignal;
    id <SPTEntitySeeAllSongsRegistry> _registry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTEntitySeeAllSongsRegistry> registry; // @synthesize registry=_registry;
@property(nonatomic) _Bool isSwiftAllSongEnabled; // @synthesize isSwiftAllSongEnabled=_isSwiftAllSongEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> swiftAllSongsSignal; // @synthesize swiftAllSongsSignal=_swiftAllSongsSignal;
@property(nonatomic) __weak id <SPTSwiftAllSongsService> swiftAllSongsService; // @synthesize swiftAllSongsService=_swiftAllSongsService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)createCommandHandlersWithInteractionLogger:(id)arg1;
- (id)provideRegistry;
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

