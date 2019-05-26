//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistViewModelConfiguration-Protocol.h"

@class NSString;

@interface SPTFreeTierPlaylistViewModelConfigurationNFT : NSObject <SPTFreeTierPlaylistViewModelConfiguration>
{
    _Bool _addSongsDisabled;
    _Bool _albumTitleIncludedInItemSubtitles;
    _Bool _collectionMenuIconsEnabled;
    _Bool _compactQuickActionsEnabled;
    _Bool _likeActionPlacedInsideHeader;
    _Bool _playButtonPausingPlay;
    _Bool _playlistOwnerPageEnabled;
    _Bool _tappingUnavailableTracksAllowed;
    _Bool _editModeSupported;
    _Bool _youMightAlsoLikeEnabled;
    _Bool _extendedContextMenuActionSet;
    _Bool _likeUsedForCollection;
    unsigned long long _searchBarType;
}

@property(readonly, nonatomic, getter=isLikeUsedForCollection) _Bool likeUsedForCollection; // @synthesize likeUsedForCollection=_likeUsedForCollection;
@property(readonly, nonatomic, getter=isExtendedContextMenuActionSet) _Bool extendedContextMenuActionSet; // @synthesize extendedContextMenuActionSet=_extendedContextMenuActionSet;
@property(readonly, nonatomic, getter=isYouMightAlsoLikeEnabled) _Bool youMightAlsoLikeEnabled; // @synthesize youMightAlsoLikeEnabled=_youMightAlsoLikeEnabled;
@property(readonly, nonatomic, getter=isEditModeSupported) _Bool editModeSupported; // @synthesize editModeSupported=_editModeSupported;
@property(readonly, nonatomic, getter=isTappingUnavailableTracksAllowed) _Bool tappingUnavailableTracksAllowed; // @synthesize tappingUnavailableTracksAllowed=_tappingUnavailableTracksAllowed;
@property(readonly, nonatomic) unsigned long long searchBarType; // @synthesize searchBarType=_searchBarType;
@property(readonly, nonatomic, getter=isPlaylistOwnerPageEnabled) _Bool playlistOwnerPageEnabled; // @synthesize playlistOwnerPageEnabled=_playlistOwnerPageEnabled;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay; // @synthesize playButtonPausingPlay=_playButtonPausingPlay;
@property(readonly, nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader; // @synthesize likeActionPlacedInsideHeader=_likeActionPlacedInsideHeader;
@property(readonly, nonatomic, getter=isCompactQuickActionsEnabled) _Bool compactQuickActionsEnabled; // @synthesize compactQuickActionsEnabled=_compactQuickActionsEnabled;
@property(readonly, nonatomic, getter=isCollectionMenuIconsEnabled) _Bool collectionMenuIconsEnabled; // @synthesize collectionMenuIconsEnabled=_collectionMenuIconsEnabled;
@property(readonly, nonatomic, getter=isAlbumTitleIncludedInItemSubtitles) _Bool albumTitleIncludedInItemSubtitles; // @synthesize albumTitleIncludedInItemSubtitles=_albumTitleIncludedInItemSubtitles;
@property(readonly, nonatomic, getter=isAddSongsDisabled) _Bool addSongsDisabled; // @synthesize addSongsDisabled=_addSongsDisabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

