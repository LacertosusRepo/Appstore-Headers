//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierPlaylistEditViewModel.h"
#import "SPTFreeTierPlaylistModelDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, NSURL;

@interface SPTFreeTierPlaylistEditViewModelImplementation : NSObject <SPTFreeTierPlaylistEditViewModel, SPTFreeTierPlaylistModelDelegate>
{
    _Bool _renameEnabled;
    _Bool _hasBeenSaved;
    id <SPTFreeTierPlaylistEditViewModelDelegate> _delegate;
    NSString *_originalPlaylistName;
    NSString *_editedPlaylistName;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    NSMutableArray *_tracks;
    NSIndexPath *_undoableDeletionIndexPath;
    NSMutableArray *_trackReorders;
    NSMutableArray *_trackDeletions;
}

@property(nonatomic) _Bool hasBeenSaved; // @synthesize hasBeenSaved=_hasBeenSaved;
@property(retain, nonatomic) NSMutableArray *trackDeletions; // @synthesize trackDeletions=_trackDeletions;
@property(retain, nonatomic) NSMutableArray *trackReorders; // @synthesize trackReorders=_trackReorders;
@property(retain, nonatomic) NSIndexPath *undoableDeletionIndexPath; // @synthesize undoableDeletionIndexPath=_undoableDeletionIndexPath;
@property(nonatomic) _Bool renameEnabled; // @synthesize renameEnabled=_renameEnabled;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(copy, nonatomic) NSString *editedPlaylistName; // @synthesize editedPlaylistName=_editedPlaylistName;
@property(copy, nonatomic) NSString *originalPlaylistName; // @synthesize originalPlaylistName=_originalPlaylistName;
@property(nonatomic) __weak id <SPTFreeTierPlaylistEditViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)saveMovesWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableUndoDeletion;
- (void)undoDeletion;
- (void)moveTrackAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)removeTrackAtIndexPath:(id)arg1;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)viewDidLoad;
- (id)trackViewModelAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) NSURL *playlistURL;
- (id)initWithPlaylistModel:(id)arg1 collectionConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
