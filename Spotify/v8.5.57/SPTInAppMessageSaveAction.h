//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageActionHandler-Protocol.h"

@class FollowModel, NSString;
@protocol SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTFollowModelFactory, SPTPlaylistModel, SPTPodcastTestManager;

@interface SPTInAppMessageSaveAction : NSObject <SPTInAppMessageActionHandler>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTPlaylistModel> _playlistModel;
    FollowModel *_followModel;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
}

@property(retain, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (_Bool)isSaveAlbumOrTrackAction:(id)arg1;
- (_Bool)isFollowPodcastAction:(id)arg1;
- (void)executeActionWithURL:(id)arg1;
- (id)initWithCollectionPlatform:(id)arg1 followModelFactory:(id)arg2 podcastTestManager:(id)arg3 playlistModel:(id)arg4 collectionTestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

