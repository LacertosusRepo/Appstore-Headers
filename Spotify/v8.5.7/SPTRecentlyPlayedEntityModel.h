//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, SPTRecentlyPlayedDataLoader;
@protocol SPTAbbaFeatureFlags, SPTCollectionPlatformTestManager, SPTFreeTierTestManager, SPTLinkDispatcher, SPTOfflineModeState;

@interface SPTRecentlyPlayedEntityModel : NSObject
{
    _Bool _dataLoaded;
    _Bool _evaluateOfflineSyncStatus;
    SPTRecentlyPlayedDataLoader *_dataLoader;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSMutableArray *_allEntities;
    NSHashTable *_observers;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(readonly, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(nonatomic) _Bool evaluateOfflineSyncStatus; // @synthesize evaluateOfflineSyncStatus=_evaluateOfflineSyncStatus;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *allEntities; // @synthesize allEntities=_allEntities;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) __weak id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) SPTRecentlyPlayedDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
- (void).cxx_destruct;
- (void)enableEntityListContentType:(unsigned long long)arg1;
- (_Bool)removeItem:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObservers;
@property(readonly, nonatomic) NSArray *recentlyPlayedEntities;
- (void)subscribe;
- (id)initWithDataLoader:(id)arg1 collectionTestManager:(id)arg2 featureFlags:(id)arg3 offlineNotifier:(id)arg4 linkDispatcher:(id)arg5 evaluateOfflineSyncStatus:(_Bool)arg6 freeTierTestManager:(id)arg7;

@end

