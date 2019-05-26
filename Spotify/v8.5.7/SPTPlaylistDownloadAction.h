//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTCollectionLogger, SPTPlaylistModel;

@interface SPTPlaylistDownloadAction : SPAction
{
    _Bool _offline;
    _Bool _followed;
    id <SPTPlaylistModel> _playlistModel;
    NSURL *_playlistURL;
    id <SPTCollectionLogger> _logger;
}

@property(readonly, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)iconColor;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 playlistModel:(id)arg2 isOffline:(_Bool)arg3 isFollowed:(_Bool)arg4 logContext:(id)arg5 logger:(id)arg6;

@end

