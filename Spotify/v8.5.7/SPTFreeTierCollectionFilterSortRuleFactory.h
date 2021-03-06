//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFreeTierCollectionTestManager, SPTProductState;

@interface SPTFreeTierCollectionFilterSortRuleFactory : NSObject
{
    id <SPTProductState> _productState;
    id <SPTFreeTierCollectionTestManager> _testManager;
}

+ (id)nameSortRule:(id)arg1 title:(id)arg2;
+ (id)nameSortRuleWithIdentifier:(id)arg1 title:(id)arg2;
@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)customPlaylistsSortRuleWithOptions;
- (id)namePlaylistsSortRuleWithOptions;
- (id)relevancePlaylistsSortRule;
- (id)recentlyPlayedPlaylistsSortRuleWithOptions;
- (id)recentlyAddedPlaylistsSortRuleWithOptions;
- (id)recentlyAddedSongsSortRule;
- (id)recentlyAddedSortRule;
- (id)songsAlbumSortRule;
- (id)artistNameSortRule:(id)arg1;
- (id)albumArtistNameSortRule;
- (id)songsArtistNameSortRule;
- (id)albumNameSortRule;
- (id)artistNameSortRule;
- (id)songsNameSortRule;
- (id)recentlyPlayedCollectionEntitySortRuleWithIdentifier:(id)arg1;
- (id)downloadedPlaylistsFilterRule;
- (id)downloadedFilterRule;
- (id)songsAvailableFilterRules;
- (long long)songsDefaultSortRuleIndex;
- (id)songsAvailableSortRules;
- (id)playlistsAvailableFilterRules;
- (long long)playlistsDefaultSortRuleIndex;
- (id)playlistsAvailableSortRules;
- (id)artistsAvailableFilterRules;
- (long long)artistsDefaultSortRuleIndex;
- (id)artistsAvailableSortRules;
- (id)albumsAvailableFilterRules;
- (long long)albumsDefaultSortRuleIndex;
- (id)albumsAvailableSortRules;
- (id)initWithProductState:(id)arg1 testManager:(id)arg2;

@end

