//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowModelObserver.h"
#import "SPTCollectionArtistModel.h"
#import "SPTCollectionSongItemPlaying.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"

@class FollowModel, NSArray, NSString, NSURL, SPTCollectionContextMenuComponentFactory, SPTCollectionCurrentlyPlayingIndex, SPTCollectionPlatformFetchOptions, SPTPlayOrigin;

@interface SPTCollectionArtistCosmosModel : NSObject <SPTCollectionSongItemPlaying, SPTPlayerObserver, SPTOfflineModeStateObserver, FollowModelObserver, SPTCollectionArtistModel>
{
    _Bool _sessionOffline;
    _Bool _loaded;
    id <SPTCollectionArtistModelDelegate> _delegate;
    SPTCollectionContextMenuComponentFactory *_contextMenuComponentFactory;
    SPTCollectionCurrentlyPlayingIndex *_currentlyPlayingIndex;
    id <SPTPlayer> _player;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTPlayOrigin *_playOrigin;
    SPTCollectionPlatformFetchOptions *_fetchOptions;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTCollectionPlatformDataLoaderRequestToken> _viewSubscription;
    FollowModel *_followModel;
    NSURL *_collectionArtistURL;
    NSArray *_songItems;
    id <SPTClientSettings> _clientSettings;
    id <SPTCollectionArtistCosmosMetadataFields> _metadata;
    NSArray *_tracks;
    id <FollowFeature> _followFeature;
    id <SPTProductState> _productState;
    id <SPTUpsellManager> _upsellManager;
}

@property(readonly, nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <SPTCollectionArtistCosmosMetadataFields> metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) NSArray *songItems; // @synthesize songItems=_songItems;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSURL *collectionArtistURL; // @synthesize collectionArtistURL=_collectionArtistURL;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> viewSubscription; // @synthesize viewSubscription=_viewSubscription;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(retain, nonatomic) SPTCollectionPlatformFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTCollectionCurrentlyPlayingIndex *currentlyPlayingIndex; // @synthesize currentlyPlayingIndex=_currentlyPlayingIndex;
@property(retain, nonatomic) SPTCollectionContextMenuComponentFactory *contextMenuComponentFactory; // @synthesize contextMenuComponentFactory=_contextMenuComponentFactory;
@property(nonatomic, getter=isSessionOffline) _Bool sessionOffline; // @synthesize sessionOffline=_sessionOffline;
@property(nonatomic) __weak id <SPTCollectionArtistModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)checkPlayabilityOfCollectionSongTrackItem:(id)arg1;
- (void)playCollectionSongTrackItem:(id)arg1;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)toggleFollowState;
- (void)setupFollowModel;
- (void)shufflePlayArtistEnforceShuffle:(_Bool)arg1;
- (unsigned long long)offlineAvailability;
- (_Bool)hasNoSavedTracks;
@property(readonly, nonatomic, getter=isFollowedByCurrentUser) _Bool followedByCurrentUser;
- (unsigned long long)offlineSyncStateForTrackAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSURL *headerImageURL;
@property(readonly, nonatomic) NSURL *portraitImageURL;
@property(readonly, nonatomic) NSURL *artistURL;
@property(readonly, nonatomic) NSString *artistName;
@property(nonatomic, getter=isOffline) _Bool offline;
- (unsigned long long)offlineState;
- (id)artistContextMenuComponent;
- (id)contextMenuComponentForTrackAtIndexPath:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) NSURL *currentlyPlayingURL;
- (void)updateCurrentlyPlayingTrack:(id)arg1;
@property(readonly, nonatomic) NSURL *collectionArtistLink;
- (unsigned long long)count;
- (void)load;
- (void)dealloc;
- (id)initWithCollectionArtistURL:(id)arg1 collectionPlatform:(id)arg2 player:(id)arg3 playOrigin:(id)arg4 clientSettings:(id)arg5 followFeature:(id)arg6 upsellManager:(id)arg7 productState:(id)arg8 contextMenuComponentFactory:(id)arg9 offlineNotifier:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

