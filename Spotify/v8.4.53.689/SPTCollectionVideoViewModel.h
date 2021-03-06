//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityList.h"
#import "SPTCollectionEntityViewModel.h"

@class NSArray, NSHashTable, NSString;

@interface SPTCollectionVideoViewModel : NSObject <SPTCollectionEntityList, SPTCollectionEntityViewModel>
{
    _Bool _videoFeatureEnabled;
    _Bool _hasOfflineEpisodes;
    _Bool _dataLoaded;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSArray *_entries;
    NSHashTable *_observers;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionRequestToken;
}

@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionRequestToken; // @synthesize collectionRequestToken=_collectionRequestToken;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) _Bool hasOfflineEpisodes; // @synthesize hasOfflineEpisodes=_hasOfflineEpisodes;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic, getter=isVideoFeatureEnabled) _Bool videoFeatureEnabled; // @synthesize videoFeatureEnabled=_videoFeatureEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOfflineEpisodesEmpty) _Bool offlineEpisodesEmpty;
- (_Bool)hasNewItem;
- (_Bool)removeItemAtIndexPath:(id)arg1;
- (_Bool)canRemoveItemAtIndexPath:(id)arg1;
- (_Bool)canEditList;
- (id)itemAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) long long numberOfItems;
- (void)suspend;
- (void)load;
- (void)initialLoad;
- (void)removeEntityListObserver:(id)arg1;
- (void)addEntityListObserver:(id)arg1;
- (void)entityList:(id)arg1 loadedWithError:(id)arg2;
- (void)entityListDidReload:(id)arg1;
- (id)initWithDataLoader:(id)arg1 isVideoFeatureEnabled:(_Bool)arg2 linkDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

