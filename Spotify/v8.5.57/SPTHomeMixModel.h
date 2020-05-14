//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTHomeMixMetadataModelEntity, SPTHomeMixModelDataLoader;
@protocol SPTHomeMixModelDelegate, SPTPlaylistModel, SPTPlaylistPlatformDataLoaderRequestToken, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTHomeMixModel : NSObject
{
    id <SPTHomeMixModelDelegate> _delegate;
    NSURL *_URI;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    SPTHomeMixModelDataLoader *_homeMixDataLoader;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistViewDataLoaderRequestToken;
    SPTHomeMixMetadataModelEntity *_currentEntity;
}

@property(retain, nonatomic) SPTHomeMixMetadataModelEntity *currentEntity; // @synthesize currentEntity=_currentEntity;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistViewDataLoaderRequestToken; // @synthesize playlistViewDataLoaderRequestToken=_playlistViewDataLoaderRequestToken;
@property(readonly, nonatomic) SPTHomeMixModelDataLoader *homeMixDataLoader; // @synthesize homeMixDataLoader=_homeMixDataLoader;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) __weak id <SPTHomeMixModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleUpdateError:(id)arg1;
- (void)handleUpdateToMetadata:(id)arg1 tracks:(id)arg2;
- (void)load;
- (void)updateWelcomeStatus;
- (void)updateMemberBlacklist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchToMood:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEnabledSetting:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePublishExplicitTracksSetting:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toggleLikeState;
- (void)dealloc;
- (id)initWithURI:(id)arg1 playlistDataLoader:(id)arg2 playlistModel:(id)arg3 homeMixDataLoader:(id)arg4;

@end

