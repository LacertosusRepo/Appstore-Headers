//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEntitySeeAllSongsService-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTCoreService, SPTEntitySeeAllSongsRegistry, SPTFeatureFlagSignal, SPTHubFrameworkService, SPTUBIService, SPTUBIUserBehaviourInstrumentation, SPTURIDispatchService, _TtP21EntityAllSongsFeature24SPTEntityAllSongsService_;

@interface SPTEntitySeeAllSongsServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTEntitySeeAllSongsService>
{
    _Bool _isSwiftAllSongEnabled;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTCoreService> _coreService;
    id <_TtP21EntityAllSongsFeature24SPTEntityAllSongsService_> _entityAllSongsService;
    id <SPTFeatureFlagSignal> _entityAllSongsSignal;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTUBIService> _ubiService;
    id <SPTUBIUserBehaviourInstrumentation> _userBehaviourInstrumentation;
    id <SPTEntitySeeAllSongsRegistry> _registry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTEntitySeeAllSongsRegistry> registry; // @synthesize registry=_registry;
@property(nonatomic) _Bool isSwiftAllSongEnabled; // @synthesize isSwiftAllSongEnabled=_isSwiftAllSongEnabled;
@property(retain, nonatomic) id <SPTUBIUserBehaviourInstrumentation> userBehaviourInstrumentation; // @synthesize userBehaviourInstrumentation=_userBehaviourInstrumentation;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> entityAllSongsSignal; // @synthesize entityAllSongsSignal=_entityAllSongsSignal;
@property(nonatomic) __weak id <_TtP21EntityAllSongsFeature24SPTEntityAllSongsService_> entityAllSongsService; // @synthesize entityAllSongsService=_entityAllSongsService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)createCommandHandlersWithViewURI:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
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

