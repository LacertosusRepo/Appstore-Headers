//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTFreeTierCreatePlaylistModel <NSObject>
@property(readonly, nonatomic) unsigned long long playlistNameMaxLength;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistModelDelegate> delegate;
- (void)renamePlaylistURL:(NSURL *)arg1 name:(NSString *)arg2;
- (void)createPlaylistWithName:(NSString *)arg1;
- (void)loadModel;
@end

