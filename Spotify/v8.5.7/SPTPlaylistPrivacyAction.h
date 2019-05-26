//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTPlaylistModel;

@interface SPTPlaylistPrivacyAction : SPAction
{
    _Bool _public;
    id <SPTPlaylistModel> _playlistModel;
    NSURL *_playlistURL;
}

@property(readonly, nonatomic, getter=isPublic) _Bool public; // @synthesize public=_public;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 playlistModel:(id)arg2 isPublic:(_Bool)arg3 logContext:(id)arg4;

@end

