//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTFreeTierPlaylistModel, SPTFreeTierPlaylistModelEntity;

@protocol SPTFreeTierPlaylistModelObserver <NSObject>
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 error:(NSError *)arg2;
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id <SPTFreeTierPlaylistModel>)arg1 playlistModelEntityDidChange:(id <SPTFreeTierPlaylistModelEntity>)arg2;
@end

