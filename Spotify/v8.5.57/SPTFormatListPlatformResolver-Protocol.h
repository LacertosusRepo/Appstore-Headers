//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTPlaylistPlatformPlaylistMetadataFetchOptions, SPTPlaylistPlatformPlaylistMetadataSubscriptionOptions, SPTPlaylistPlatformPlaylistTracksFetchOptions, SPTPlaylistPlatformPlaylistTracksSubscriptionOptions;
@protocol SPTPlaylistPlatformDataLoaderRequestToken;

@protocol SPTFormatListPlatformResolver <NSObject>
- (void)resolveFollowerCountForPlaylistURL:(NSURL *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)synchronisePlaylistURL:(NSURL *)arg1;
- (void)resolveFormatListFromPlaylistURL:(NSURL *)arg1 metadataFetchOptions:(SPTPlaylistPlatformPlaylistMetadataFetchOptions *)arg2 tracksFetchOptions:(SPTPlaylistPlatformPlaylistTracksFetchOptions *)arg3 completion:(void (^)(id <SPTFormatListModel>, NSError *))arg4;
- (void)resolveFormatListFromPlaylistURL:(NSURL *)arg1 completion:(void (^)(id <SPTFormatListModel>, NSError *))arg2;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribeFormatListFromPlaylistURL:(NSURL *)arg1 metadataSubscribeOptions:(SPTPlaylistPlatformPlaylistMetadataSubscriptionOptions *)arg2 tracksSubscribeOptions:(SPTPlaylistPlatformPlaylistTracksSubscriptionOptions *)arg3 completion:(void (^)(id <SPTFormatListModel>, NSError *))arg4;
- (void)resolveFormatListTypeFromPlaylistURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg2;
@end

