//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPlaylistModelDecorator.h"

@class SPTShadowPlaylistURIResolver;

@interface SPTShadowPlaylistModel : SPTPlaylistModelDecorator
{
    SPTShadowPlaylistURIResolver *_shadowUriResolver;
}

@property(retain, nonatomic) SPTShadowPlaylistURIResolver *shadowUriResolver; // @synthesize shadowUriResolver=_shadowUriResolver;
- (void).cxx_destruct;
- (void)playlistContainsTrackURLs:(id)arg1 playlistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOfflinePlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTrackURLs:(id)arg1 fromPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTrackURLs:(id)arg1 toPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOfflinePlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaylistModel:(id)arg1 uriResolver:(id)arg2;

@end

