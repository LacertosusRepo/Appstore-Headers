//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTCreatePlaylistModelDelegate;

@protocol SPTCreatePlaylistModel <NSObject>
@property(readonly, nonatomic) unsigned long long playlistNameMaxLength;
@property(nonatomic) __weak id <SPTCreatePlaylistModelDelegate> delegate;
- (void)renamePlaylistURL:(NSURL *)arg1 name:(NSString *)arg2;
- (void)createPlaylistWithName:(NSString *)arg1;
- (void)loadModel;
@end

