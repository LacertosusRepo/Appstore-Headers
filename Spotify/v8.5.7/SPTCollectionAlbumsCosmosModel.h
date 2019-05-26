//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionAlbumsModel-Protocol.h"

@class NSArray, NSHashTable, NSString, SPTCollectionPlatformFetchOptions;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTCollectionPlatformTestManager, SPTFreeTierTestManager, SPTLinkDispatcher, SPTLocalSettings, SPTOfflineManager, SPTOfflineModeState, SPTProductState;

@interface SPTCollectionAlbumsCosmosModel : NSObject <SPTCollectionAlbumsModel>
{
    _Bool _ascendingSortOrder;
    _Bool _dataLoaded;
    _Bool _loadStarted;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTProductState> _productState;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTLocalSettings> _localSettings;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTFreeTierTestManager> _freeTierTestManager;
    id <SPTOfflineManager> _offlineManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSArray *_sectionedAlbums;
    NSArray *_sections;
    unsigned long long _numberOfAlbums;
    unsigned long long _unfilteredLength;
    unsigned long long _sortColumn;
    NSHashTable *_observers;
    id <SPTCollectionPlatformDataLoaderRequestToken> _subscriptionToken;
    SPTCollectionPlatformFetchOptions *_subscribeOptions;
    NSString *_username;
}

@property(nonatomic) _Bool loadStarted; // @synthesize loadStarted=_loadStarted;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) SPTCollectionPlatformFetchOptions *subscribeOptions; // @synthesize subscribeOptions=_subscribeOptions;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> subscriptionToken; // @synthesize subscriptionToken=_subscriptionToken;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(nonatomic) unsigned long long unfilteredLength; // @synthesize unfilteredLength=_unfilteredLength;
@property(nonatomic) unsigned long long numberOfAlbums; // @synthesize numberOfAlbums=_numberOfAlbums;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *sectionedAlbums; // @synthesize sectionedAlbums=_sectionedAlbums;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)updateLocalSettingsForKey:(id)arg1 value:(id)arg2;
- (void)loadLocalSettings;
- (unsigned long long)flatIndexForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (void)resetFilters;
@property(nonatomic) _Bool showsOnlyOfflinedContent;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (id)albumEntityForAlbum:(id)arg1;
- (void)updateAlbumsWithResponse:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (void)updateAlbumsWithSortOptions:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEditList;
- (_Bool)removeItemAtIndexPath:(id)arg1;
- (_Bool)canRemoveItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)notifyObservers;
- (void)removeEntityListObserver:(id)arg1;
- (void)addEntityListObserver:(id)arg1;
@property(nonatomic) _Bool showOnlyCompleteAlbums;
- (unsigned long long)offlineSyncStateForAlbumAtIndexPath:(id)arg1;
- (void)load;
- (id)initWithDataLoader:(id)arg1 username:(id)arg2 offlineNotifier:(id)arg3 productState:(id)arg4 localSettings:(id)arg5 collectionTestManager:(id)arg6 freeTierTestManager:(id)arg7 offlineManager:(id)arg8 linkDispatcher:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

