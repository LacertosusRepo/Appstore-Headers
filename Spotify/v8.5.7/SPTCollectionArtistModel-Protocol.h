//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FollowModel, NSIndexPath, NSString, NSURL, SPTCollectionContextMenuComponent;
@protocol SPTCollectionArtistModelDelegate, SPTCollectionEntityListTrackItem;

@protocol SPTCollectionArtistModel <NSObject>
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isSessionOffline) _Bool sessionOffline;
@property(readonly, nonatomic, getter=isFollowedByCurrentUser) _Bool followedByCurrentUser;
@property(nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic) NSURL *collectionArtistLink;
@property(readonly, nonatomic) FollowModel *followModel;
@property(readonly, nonatomic) NSURL *currentlyPlayingURL;
@property(readonly, nonatomic) NSURL *artistURL;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSURL *headerImageURL;
@property(readonly, nonatomic) NSURL *portraitImageURL;
@property(nonatomic) __weak id <SPTCollectionArtistModelDelegate> delegate;
@property(readonly, nonatomic) _Bool loaded;
- (unsigned long long)offlineAvailability;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id <SPTCollectionEntityListTrackItem>)itemAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)hasNoSavedTracks;
- (void)load;
- (void)toggleFollowState;
- (unsigned long long)offlineSyncStateForTrackAtIndexPath:(NSIndexPath *)arg1;
- (void)shufflePlayArtistEnforceShuffle:(_Bool)arg1;
- (SPTCollectionContextMenuComponent *)artistContextMenuComponent;
- (SPTCollectionContextMenuComponent *)contextMenuComponentForTrackAtIndexPath:(NSIndexPath *)arg1;
@end

