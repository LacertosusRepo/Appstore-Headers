//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSArray, NSURL;

@interface SPTPlaylistRemoveTrackAction : SPAction
{
    NSArray *_trackURLs;
    NSURL *_playlistURL;
    id <SPTPlaylistModel> _playlistModel;
}

@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTrackURLs:(id)arg1 playlistURL:(id)arg2 playlistModel:(id)arg3 logContext:(id)arg4;

@end

