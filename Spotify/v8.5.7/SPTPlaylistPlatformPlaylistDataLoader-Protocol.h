//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, SPTPlayOptions, SPTPlaylistPlatformFolderItemFetchOptions, SPTPlaylistPlatformFolderItemSubscriptionOptions, SPTPlaylistPlatformPlayOptions, SPTPlaylistPlatformPlaylistMetadataFetchOptions, SPTPlaylistPlatformPlaylistMetadataSubscriptionOptions, SPTPlaylistPlatformPlaylistTracksFetchOptions, SPTPlaylistPlatformPlaylistTracksSubscriptionOptions;
@protocol SPTPlaylistPlatformDataLoaderRequestToken;

@protocol SPTPlaylistPlatformPlaylistDataLoader <NSObject>
- (void)synchronisePlaylistURL:(NSURL *)arg1;
- (void)playWithURL:(NSURL *)arg1 playOptions:(SPTPlayOptions *)arg2 playlistOptions:(SPTPlaylistPlatformPlayOptions *)arg3 completion:(void (^)(void))arg4 onError:(void (^)(NSError *))arg5;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribePlaylistViewWithRecommendationsForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistTracksSubscriptionOptions *)arg2 withMetadataProtocols:(NSArray *)arg3 andTrackProtocols:(NSArray *)arg4 completion:(void (^)(id <SPTPlaylistPlatformDataLoaderField>, struct SPTPlaylistPlatformDataLoaderResponse *, NSArray<SPTPlaylistPlatformDataLoaderField> *))arg5 onError:(void (^)(NSError *))arg6;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribePlaylistViewForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistTracksSubscriptionOptions *)arg2 withMetadataProtocols:(NSArray *)arg3 andTrackProtocols:(NSArray *)arg4 completion:(void (^)(id <SPTPlaylistPlatformDataLoaderField>, struct SPTPlaylistPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribeFolderItemsForFolderURL:(NSURL *)arg1 options:(SPTPlaylistPlatformFolderItemSubscriptionOptions *)arg2 withFolderPolicyProtocols:(NSArray *)arg3 withPlaylistPolicyProtocols:(NSArray *)arg4 completion:(void (^)(SPTPlaylistPlatformFolderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribePlaylistTracksForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistTracksSubscriptionOptions *)arg2 withPolicyProtocols:(NSArray *)arg3 completion:(void (^)(struct SPTPlaylistPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (id <SPTPlaylistPlatformDataLoaderRequestToken>)subscribePlaylistMetadataForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistMetadataSubscriptionOptions *)arg2 withPolicyProtocols:(NSArray *)arg3 completion:(void (^)(id <SPTPlaylistPlatformDataLoaderField>))arg4 onError:(void (^)(NSError *))arg5;
- (void)fetchPlaylistViewForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistTracksFetchOptions *)arg2 withMetadataProtocols:(NSArray *)arg3 andTrackProtocols:(NSArray *)arg4 completion:(void (^)(id <SPTPlaylistPlatformDataLoaderField>, struct SPTPlaylistPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (void)fetchFolderItemsForFolderURL:(NSURL *)arg1 options:(SPTPlaylistPlatformFolderItemFetchOptions *)arg2 withFolderPolicyProtocols:(NSArray *)arg3 withPlaylistPolicyProtocols:(NSArray *)arg4 completion:(void (^)(SPTPlaylistPlatformFolderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (void)fetchFolderMetadataForFolderURL:(NSURL *)arg1 withFolderPolicyProtocols:(NSArray *)arg2 completion:(void (^)(id <SPTPlaylistPlatformFolderMetadataFields>))arg3 onError:(void (^)(NSError *))arg4;
- (void)fetchPlaylistTracksForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistTracksFetchOptions *)arg2 withPolicyProtocols:(NSArray *)arg3 completion:(void (^)(struct SPTPlaylistPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (void)fetchPlaylistMetadataForPlaylistURL:(NSURL *)arg1 options:(SPTPlaylistPlatformPlaylistMetadataFetchOptions *)arg2 withPolicyProtocols:(NSArray *)arg3 completion:(void (^)(id <SPTPlaylistPlatformDataLoaderField>))arg4 onError:(void (^)(NSError *))arg5;
@end

