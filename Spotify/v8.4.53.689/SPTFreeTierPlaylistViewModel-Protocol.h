//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SPTCollectionSorting.h"

@class NSIndexPath, NSString, NSURL;

@protocol SPTFreeTierPlaylistViewModel <NSObject, SPTCollectionSorting>
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel;
@property(readonly, nonatomic) unsigned long long type;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) unsigned long long countOfSections;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
@property(readonly, nonatomic, getter=isAddSongsDisabled) _Bool addSongsDisabled;
@property(readonly, nonatomic, getter=isCustomPlaylistHeaderEnabled) _Bool customPlaylistHeaderEnabled;
@property(readonly, nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable;
@property(readonly, nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback;
@property(readonly, nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader;
@property(readonly, nonatomic, getter=isConsolidatedViewEnabled) _Bool consolidatedViewEnabled;
@property(readonly, nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled;
@property(readonly, nonatomic, getter=isFilterSortBarEnabled) _Bool filterSortBarEnabled;
@property(readonly, nonatomic, getter=isFollowed) _Bool followed;
@property(readonly, nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf;
@property(readonly, nonatomic) NSString *playlistOwnerName;
@property(readonly, copy, nonatomic) NSString *madeForName;
@property(readonly, nonatomic) NSString *numberOfLikesText;
@property(readonly, nonatomic) NSString *creatorTitle;
@property(readonly, nonatomic) NSString *playlistName;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(readonly, nonatomic) NSURL *playlistURL;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)showShuffleBadgeEducationDialog;
- (void)sectionHeaderButtonTapped;
- (void)deletePlaylist;
- (void)toggleFollow;
- (void)play;
- (void)viewDidLoad;
- (void)changeOffline:(_Bool)arg1;
- (void)toggleTrackBanAtIndexPath:(NSIndexPath *)arg1;
- (void)toggleTrackLikeAtIndexPath:(NSIndexPath *)arg1;
- (void)trackSelectedAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistCloudViewModel>)cloudViewModelAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistTrackViewModel>)trackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isApproachingEndIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleOfButtonSectionHeader:(unsigned long long)arg1;
- (_Bool)showButtonSectionHeader:(unsigned long long)arg1;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (_Bool)isTracksSection:(unsigned long long)arg1;
- (_Bool)isAdditionalControlsSection:(unsigned long long)arg1;
- (_Bool)isSponsoredPlaylistSection:(unsigned long long)arg1;
@end

