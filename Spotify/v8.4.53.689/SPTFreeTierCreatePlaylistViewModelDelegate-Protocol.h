//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTFreeTierCreatePlaylistViewModelDelegate <NSObject>
- (void)createPlaylistViewModel:(id <SPTFreeTierCreatePlaylistViewModel>)arg1 didRenamePlaylistWithURL:(NSURL *)arg2;
- (void)createPlaylistViewModel:(id <SPTFreeTierCreatePlaylistViewModel>)arg1 didCreatePlaylistWithURL:(NSURL *)arg2;
@end

