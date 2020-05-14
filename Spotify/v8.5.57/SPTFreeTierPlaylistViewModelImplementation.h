//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistIsTrackActive-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"
#import "SPTFreeTierPlaylistPlayViewModel-Protocol.h"
#import "SPTFreeTierPlaylistViewModel-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSAttributedString, NSDate, NSDictionary, NSNumber, NSString, NSURL, SPTFreeTierPlaylistLogger, SPTPlayOrigin, SPTPlayerState, UIColor;
@protocol SPTAlertInterface, SPTFreeTierEntityOfflineDelegate, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistPlayObserver, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistTestManager, SPTFreeTierPlaylistViewModelConfiguration, SPTFreeTierPlaylistViewModelDelegate, SPTLinkDispatcher, SPTOfflineModeState, SPTPlayer, _TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_;

@interface SPTFreeTierPlaylistViewModelImplementation : NSObject <SPTPlayerObserver, SPTFreeTierPlaylistViewModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistModelObserver, SPTFreeTierPlaylistIsTrackActive>
{
    _Bool _formatList;
    _Bool _wantsForceLinearPlay;
    _Bool _ownedBySelf;
    _Bool _collaborative;
    _Bool _isPublished;
    _Bool _followed;
    _Bool _reportAbuseEnabled;
    _Bool _editModeEnabled;
    _Bool _shouldIncludeTrackOwner;
    _Bool _extendedContextMenuActionSet;
    _Bool _likeActionPlacedInsideHeader;
    _Bool _shuffleBadgeEducationAvailable;
    _Bool _containsOnlyEpisodes;
    _Bool _containsOnlyTracks;
    _Bool _contentSupportsRadio;
    _Bool _containsOnlyVideoEpisodes;
    _Bool _shouldShowPlayButton;
    _Bool _shouldShowPlaylistOwnerPage;
    _Bool _contextAwareEnabled;
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistViewModelDelegate> _delegate;
    id <SPTFreeTierEntityOfflineDelegate> _offlineDelegate;
    id <SPTAlertInterface> alertInterface;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <SPTFreeTierPlaylistPlayObserver> _playObserver;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    SPTPlayOrigin *_playOrigin;
    NSURL *_playlistImageURL;
    NSString *_playlistName;
    NSString *_creatorTitle;
    NSString *_playlistOwnerName;
    NSString *_playlistOwnerUsername;
    NSString *_numberOfLikesText;
    NSString *_madeForName;
    NSURL *_creatorImageURL;
    NSAttributedString *_creatorText;
    NSString *_metadataText;
    NSString *_metadataAccessibilityLabel;
    unsigned long long _offlineAvailability;
    unsigned long long _onDemandType;
    NSDate *_lastModifiedTime;
    double _totalDuration;
    NSString *_playlistDescription;
    NSString *_ownerUsername;
    NSURL *_ownerImageURL;
    NSURL *_ownerLink;
    NSDictionary *_formatListAttributes;
    NSString *_formatListSubtitle;
    NSURL *_formatListImageURL;
    UIColor *_formatListPrimaryColor;
    id <SPTPlayer> _player;
    SPTPlayerState *_lastPlayerState;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTOfflineModeState> _offlineModeState;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    NSNumber *_lastTrackCount;
    id <SPTFreeTierPlaylistViewModelConfiguration> _viewModelConfiguration;
    id <_TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_> _playInitiatedNotifier;
    long long _playBehaviour;
}

+ (_Bool)isRecommendationContext:(id)arg1 forPlaylist:(id)arg2;
@property(nonatomic) long long playBehaviour; // @synthesize playBehaviour=_playBehaviour;
@property(nonatomic) __weak id <_TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_> playInitiatedNotifier; // @synthesize playInitiatedNotifier=_playInitiatedNotifier;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModelConfiguration> viewModelConfiguration; // @synthesize viewModelConfiguration=_viewModelConfiguration;
@property(retain, nonatomic) NSNumber *lastTrackCount; // @synthesize lastTrackCount=_lastTrackCount;
@property(nonatomic, getter=isContextAwareEnabled) _Bool contextAwareEnabled; // @synthesize contextAwareEnabled=_contextAwareEnabled;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) _Bool shouldShowPlaylistOwnerPage; // @synthesize shouldShowPlaylistOwnerPage=_shouldShowPlaylistOwnerPage;
@property(nonatomic) _Bool shouldShowPlayButton; // @synthesize shouldShowPlayButton=_shouldShowPlayButton;
@property(retain, nonatomic) UIColor *formatListPrimaryColor; // @synthesize formatListPrimaryColor=_formatListPrimaryColor;
@property(retain, nonatomic) NSURL *formatListImageURL; // @synthesize formatListImageURL=_formatListImageURL;
@property(copy, nonatomic) NSString *formatListSubtitle; // @synthesize formatListSubtitle=_formatListSubtitle;
@property(copy, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
@property(retain, nonatomic) NSURL *ownerLink; // @synthesize ownerLink=_ownerLink;
@property(retain, nonatomic) NSURL *ownerImageURL; // @synthesize ownerImageURL=_ownerImageURL;
@property(copy, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
@property(copy, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType=_onDemandType;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(copy, nonatomic) NSString *metadataAccessibilityLabel; // @synthesize metadataAccessibilityLabel=_metadataAccessibilityLabel;
@property(copy, nonatomic) NSString *metadataText; // @synthesize metadataText=_metadataText;
@property(copy, nonatomic) NSAttributedString *creatorText; // @synthesize creatorText=_creatorText;
@property(retain, nonatomic) NSURL *creatorImageURL; // @synthesize creatorImageURL=_creatorImageURL;
@property(nonatomic) _Bool containsOnlyVideoEpisodes; // @synthesize containsOnlyVideoEpisodes=_containsOnlyVideoEpisodes;
@property(nonatomic) _Bool contentSupportsRadio; // @synthesize contentSupportsRadio=_contentSupportsRadio;
@property(nonatomic) _Bool containsOnlyTracks; // @synthesize containsOnlyTracks=_containsOnlyTracks;
@property(nonatomic) _Bool containsOnlyEpisodes; // @synthesize containsOnlyEpisodes=_containsOnlyEpisodes;
@property(nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable; // @synthesize shuffleBadgeEducationAvailable=_shuffleBadgeEducationAvailable;
@property(nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader; // @synthesize likeActionPlacedInsideHeader=_likeActionPlacedInsideHeader;
@property(nonatomic, getter=isExtendedContextMenuActionSet) _Bool extendedContextMenuActionSet; // @synthesize extendedContextMenuActionSet=_extendedContextMenuActionSet;
@property(nonatomic, getter=shouldIncludeTrackOwner) _Bool shouldIncludeTrackOwner; // @synthesize shouldIncludeTrackOwner=_shouldIncludeTrackOwner;
@property(nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled; // @synthesize editModeEnabled=_editModeEnabled;
@property(nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled; // @synthesize reportAbuseEnabled=_reportAbuseEnabled;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic) _Bool isPublished; // @synthesize isPublished=_isPublished;
@property(nonatomic, getter=isCollaborative) _Bool collaborative; // @synthesize collaborative=_collaborative;
@property(nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf; // @synthesize ownedBySelf=_ownedBySelf;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(copy, nonatomic) NSString *numberOfLikesText; // @synthesize numberOfLikesText=_numberOfLikesText;
@property(copy, nonatomic) NSString *playlistOwnerUsername; // @synthesize playlistOwnerUsername=_playlistOwnerUsername;
@property(copy, nonatomic) NSString *playlistOwnerName; // @synthesize playlistOwnerName=_playlistOwnerName;
@property(copy, nonatomic) NSString *creatorTitle; // @synthesize creatorTitle=_creatorTitle;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) _Bool wantsForceLinearPlay; // @synthesize wantsForceLinearPlay=_wantsForceLinearPlay;
@property(nonatomic) __weak id <SPTFreeTierPlaylistPlayObserver> playObserver; // @synthesize playObserver=_playObserver;
@property(nonatomic) __weak id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface;
@property(nonatomic) __weak id <SPTFreeTierEntityOfflineDelegate> offlineDelegate; // @synthesize offlineDelegate=_offlineDelegate;
@property(nonatomic, getter=isFormatList) _Bool formatList; // @synthesize formatList=_formatList;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (_Bool)isTrackActive:(id)arg1;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
- (_Bool)isInPlaylistContext;
@property(readonly, nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay;
- (void)playTrackEntity:(id)arg1;
- (void)togglePlay;
- (id)forceLinearPlayOptions;
- (void)doubleStateForceLinearPlay;
- (void)singleStateForceLinearPlay;
- (void)doubleStatePreferLinearPlay;
- (void)doubleStateShufflePlay;
- (void)singleStateShufflePlay;
- (void)play;
- (void)setEntityOffline:(_Bool)arg1;
- (_Bool)isEntityOffline;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) _Bool showSearchBar;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (id)durationTextAccessibilityLabel;
- (id)durationText;
- (void)updateFollowCount:(unsigned long long)arg1;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)navigateToAllSongs;
- (void)playTrack:(id)arg1;
- (void)playTrackURL:(id)arg1;
- (void)navigateToPlaylistOwnerPage;
- (void)loadMoreTracksIfApproachingEndOfLoadedTracks:(id)arg1;
- (_Bool)isApproachingEndIndexPath:(id)arg1 countOfItemsInSection:(long long)arg2;
- (void)toggleTrackLikeAtIndexPath:(id)arg1;
- (void)toggleTrackBanAtIndexPath:(id)arg1;
- (void)trackSelectedAtIndexPath:(id)arg1;
- (void)deletePlaylist;
- (id)sharingURLForTrackViewModelAtIndexPath:(id)arg1;
- (void)changeOffline:(_Bool)arg1;
- (void)showShuffleBadgeEducationDialog;
- (void)toggleFollow;
@property(readonly, nonatomic) long long followButtonType;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)load;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithPlaylistModel:(id)arg1 playOrigin:(id)arg2 player:(id)arg3 linkDispatcher:(id)arg4 offlineModeState:(id)arg5 logger:(id)arg6 testManager:(id)arg7 contextAwareEnabled:(_Bool)arg8 viewModelConfiguration:(id)arg9 playInitiatedNotifier:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

