//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTFreeTierPlaylistModelDelegate <NSObject>
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 playlistModelEntityDidChange:(id <SPTFreeTierPlaylistModelEntity>)arg2;

@optional
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 error:(NSError *)arg2;
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 initialFollowCount:(unsigned long long)arg2;
@end
