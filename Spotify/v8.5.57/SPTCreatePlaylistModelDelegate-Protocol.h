//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTCreatePlaylistModel;

@protocol SPTCreatePlaylistModelDelegate <NSObject>
- (void)createPlaylistModel:(id <SPTCreatePlaylistModel>)arg1 didUpdateNumberOfOwnPlaylists:(unsigned long long)arg2;
- (void)createPlaylistModel:(id <SPTCreatePlaylistModel>)arg1 didRenamePlaylistWithURL:(NSURL *)arg2;
- (void)createPlaylistModel:(id <SPTCreatePlaylistModel>)arg1 didCreatePlaylistWithURL:(NSURL *)arg2;
@end
