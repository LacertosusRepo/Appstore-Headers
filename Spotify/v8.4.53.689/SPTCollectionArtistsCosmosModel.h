//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionArtistsModel.h"
#import "SPTCollectionOfflineObserver.h"
#import "SPTOfflineObserver.h"

@class NSArray, NSHashTable, NSObject<SPTCollectionPlatform>, NSString;

@interface SPTCollectionArtistsCosmosModel : NSObject <SPTOfflineObserver, SPTCollectionOfflineObserver, SPTCollectionArtistsModel>
{
    _Bool _showsOnlyOfflinedContent;
    _Bool _ascendingSortOrder;
    _Bool _dataLoaded;
    id <SPTCollectionArtistsModelDelegate> _delegate;
    NSString *_textFilter;
    NSObject<SPTCollectionPlatform> *_collectionPlatform;
    id <SPTLocalSettings> _localSettings;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSArray *_sectionedArtists;
    NSArray *_sections;
    unsigned long long _numberOfArtists;
    unsigned long long _unfilteredLength;
    id <SPTCollectionPlatformDataLoaderRequestToken> _artistsSubscription;
    unsigned long long _sortColumn;
    NSString *_username;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> artistsSubscription; // @synthesize artistsSubscription=_artistsSubscription;
@property(nonatomic) unsigned long long unfilteredLength; // @synthesize unfilteredLength=_unfilteredLength;
@property(nonatomic) unsigned long long numberOfArtists; // @synthesize numberOfArtists=_numberOfArtists;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *sectionedArtists; // @synthesize sectionedArtists=_sectionedArtists;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) NSObject<SPTCollectionPlatform> *collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTCollectionArtistsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateLocalSettingsForKey:(id)arg1;
- (void)loadLocalSettings;
- (unsigned long long)flatIndexForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (void)offlineStateChanged;
- (void)resetFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) _Bool showsOnlyOfflinedContent; // @synthesize showsOnlyOfflinedContent=_showsOnlyOfflinedContent;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (id)artistEntityForArtist:(id)arg1;
- (void)updateArtistsWithResponse:(SPTCollectionPlatformDataLoaderResponse_f5c2288a *)arg1;
- (unsigned long long)offlineAvailability2SyncingState:(unsigned long long)arg1;
- (void)reloadArtists;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
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
- (unsigned long long)offlineSyncStateForArtistAtIndexPath:(id)arg1;
- (void)requestMetadataForRows:(id)arg1;
- (void)load;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 withUsername:(id)arg2 localSettings:(id)arg3 collectionTestManager:(id)arg4 linkDispatcher:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

