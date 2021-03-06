//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTFreeTierCollectionRangeDataSourceDelegate-Protocol.h"
#import "SPTFreeTierCollectionSongsDataLoaderDelegate-Protocol.h"
#import "SPTFreeTierCollectionSongsModel-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSArray, NSMutableArray, NSSet, NSString, SPTFreeTierCollectionFilterSortManager;
@protocol SPTClientSettings, SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken, SPTExplicitContentAccessManager, SPTFreeTierCollectionRangeDataSource, SPTFreeTierCollectionSkippedRecommendedTracks, SPTFreeTierCollectionSongsModelDelegate, SPTFreeTierCollectionTestManager, SPTFreeTierRecommendationsTracksDataLoader, SPTProductState, SPTSortingFilteringSortRule;

@interface SPTFreeTierCollectionSongsModelImplementation : NSObject <SPTExplicitContentEnabledStateObserver, SPTProductStateObserver, SPTFreeTierCollectionSongsModel, SPTFreeTierCollectionRangeDataSourceDelegate, SPTFreeTierCollectionSongsDataLoaderDelegate>
{
    _Bool _firstLoadPerformed;
    _Bool _loaded;
    id <SPTFreeTierCollectionSongsModelDelegate> delegate;
    NSString *_textFilter;
    NSArray *_activeFilters;
    NSArray *_availableFilters;
    id <SPTSortingFilteringSortRule> _selectedSortRule;
    NSArray *_availableSortRules;
    id <SPTFreeTierCollectionRangeDataSource> _rangeDataSource;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFreeTierRecommendationsTracksDataLoader> _recommendationsTracksDataLoader;
    id <SPTClientSettings> _clientSettings;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTProductState> _productState;
    SPTFreeTierCollectionFilterSortManager *_filterSortManager;
    id <SPTFreeTierCollectionTestManager> _testManager;
    NSMutableArray *_recommendedTracks;
    id <SPTCollectionPlatformDataLoaderRequestToken> _bannedTrackSubscription;
    NSSet *_bannedTracks;
    unsigned long long _offlineAvailability;
    NSString *_currentUsername;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionStateRequestToken;
    id <SPTFreeTierCollectionSkippedRecommendedTracks> _skippedRecommendedTracks;
}

@property(retain, nonatomic) id <SPTFreeTierCollectionSkippedRecommendedTracks> skippedRecommendedTracks; // @synthesize skippedRecommendedTracks=_skippedRecommendedTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionStateRequestToken; // @synthesize collectionStateRequestToken=_collectionStateRequestToken;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(retain, nonatomic) NSSet *bannedTracks; // @synthesize bannedTracks=_bannedTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> bannedTrackSubscription; // @synthesize bannedTrackSubscription=_bannedTrackSubscription;
@property(retain, nonatomic) NSMutableArray *recommendedTracks; // @synthesize recommendedTracks=_recommendedTracks;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic, getter=isFirstLoadPerformed) _Bool firstLoadPerformed; // @synthesize firstLoadPerformed=_firstLoadPerformed;
@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierCollectionFilterSortManager *filterSortManager; // @synthesize filterSortManager=_filterSortManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTFreeTierRecommendationsTracksDataLoader> recommendationsTracksDataLoader; // @synthesize recommendationsTracksDataLoader=_recommendationsTracksDataLoader;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTFreeTierCollectionRangeDataSource> rangeDataSource; // @synthesize rangeDataSource=_rangeDataSource;
@property(readonly, copy, nonatomic) NSArray *availableSortRules; // @synthesize availableSortRules=_availableSortRules;
@property(copy, nonatomic) id <SPTSortingFilteringSortRule> selectedSortRule; // @synthesize selectedSortRule=_selectedSortRule;
@property(readonly, nonatomic) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
@property(copy, nonatomic) NSArray *activeFilters; // @synthesize activeFilters=_activeFilters;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)songsDataLoader:(id)arg1 didUpdateOfflineAvailability:(unsigned long long)arg2;
- (void)rangeDataSource:(id)arg1 error:(id)arg2;
- (void)rangeDataSourceUpdated:(id)arg1;
- (_Bool)filterDuplicatedRecommendations;
- (_Bool)filterBannedRecommentations;
- (void)subscribeBannedTracks;
- (id)collectionOptions;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (void)playWithPlayOrigin:(id)arg1 options:(id)arg2;
- (void)playWithRecommendationsUsingPlayer:(id)arg1 options:(id)arg2;
- (void)removeObserverForTrackStateWithTrackURL:(id)arg1;
- (void)addObserverForTrackStateWithTrackURL:(id)arg1 inCollection:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)changeTrackURL:(id)arg1 likeState:(_Bool)arg2;
- (void)changeTrackURL:(id)arg1 banState:(_Bool)arg2;
- (void)setAvailableOffline:(_Bool)arg1;
- (_Bool)isPlaybackRestrictedForItemURL:(id)arg1 itemExplicit:(_Bool)arg2 playbackPrevented:(_Bool)arg3;
- (void)playTrackEntity:(id)arg1 andPlayOrigin:(id)arg2;
- (void)shufflePlayWithPlayOrigin:(id)arg1 fallbackPlayer:(id)arg2;
- (void)loadRecommendationsIfNeeded;
- (void)notifyModelUpdateIfLoaded;
- (void)requestRecommendations;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isPreviewsAvailable) _Bool previewsAvailable;
- (void)reloadData;
- (void)loadModel;
- (void)deleteRecommendedItemAtIndex:(unsigned long long)arg1;
- (void)addSkippedRecommendedTrackURL:(id)arg1;
- (id)recommendedItemAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberRecommendedItems;
@property(readonly, nonatomic) unsigned long long numberItems;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 recommendedTracksDataLoader:(id)arg2 clientSettings:(id)arg3 explicitContentAccessManager:(id)arg4 productState:(id)arg5 currentUsername:(id)arg6 filterSortManager:(id)arg7 testManager:(id)arg8 skippedRecommendedTracks:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

