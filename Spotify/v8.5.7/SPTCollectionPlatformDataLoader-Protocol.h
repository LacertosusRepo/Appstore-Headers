//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, SPTCollectionPlatformFetchOptions;
@protocol SPTCollectionPlatformDataLoaderRequestToken;

@protocol SPTCollectionPlatformDataLoader <NSObject>
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeBansWithWithOptions:(SPTCollectionPlatformFetchOptions *)arg1 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *, struct SPTCollectionPlatformDataLoaderResponse *))arg2 onError:(void (^)(NSError *))arg3;
- (void)fetchBansWithOptions:(SPTCollectionPlatformFetchOptions *)arg1 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *, struct SPTCollectionPlatformDataLoaderResponse *))arg2 onError:(void (^)(NSError *))arg3;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribePodcastsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (void)fetchPodcastsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeAllTracksWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (void)fetchAllTracksWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeArtistTracksForArtistURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 options:(SPTCollectionPlatformFetchOptions *)arg3 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (void)fetchArtistViewForArtistURL:(NSURL *)arg1 withMetadataProtocols:(NSArray *)arg2 andTracksProtocols:(NSArray *)arg3 options:(SPTCollectionPlatformFetchOptions *)arg4 completion:(void (^)(id <SPTCollectionPlatformArtistMetadataFields>, struct SPTCollectionPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeArtistViewForArtistURL:(NSURL *)arg1 withMetadataProtocols:(NSArray *)arg2 andTracksProtocols:(NSArray *)arg3 options:(SPTCollectionPlatformFetchOptions *)arg4 completion:(void (^)(id <SPTCollectionPlatformDataLoaderField>, struct SPTCollectionPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (void)fetchArtistTracksForArtistURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 options:(SPTCollectionPlatformFetchOptions *)arg3 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeArtistsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (void)fetchArtistsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeAlbumTracksForAlbumURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 options:(SPTCollectionPlatformFetchOptions *)arg3 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (void)fetchAlbumTracksForAlbumURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 options:(SPTCollectionPlatformFetchOptions *)arg3 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg4 onError:(void (^)(NSError *))arg5;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeAlbumViewForAlbumURL:(NSURL *)arg1 withMetadataProtocols:(NSArray *)arg2 andTracksProtocols:(NSArray *)arg3 options:(SPTCollectionPlatformFetchOptions *)arg4 completion:(void (^)(id <SPTCollectionPlatformDataLoaderField>, struct SPTCollectionPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (void)fetchAlbumViewForAlbumURL:(NSURL *)arg1 withMetadataProtocols:(NSArray *)arg2 andTracksProtocols:(NSArray *)arg3 options:(SPTCollectionPlatformFetchOptions *)arg4 completion:(void (^)(id <SPTCollectionPlatformAlbumMetadataFields>, struct SPTCollectionPlatformDataLoaderResponse *))arg5 onError:(void (^)(NSError *))arg6;
- (id <SPTCollectionPlatformDataLoaderRequestToken>)subscribeAlbumsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (void)fetchAlbumsMetadataWithPolicyProtocols:(NSArray *)arg1 options:(SPTCollectionPlatformFetchOptions *)arg2 completion:(void (^)(struct SPTCollectionPlatformDataLoaderResponse *))arg3 onError:(void (^)(NSError *))arg4;
- (void)decorateAlbumsURLs:(NSArray *)arg1 withPolicyProtocols:(NSArray *)arg2 completion:(void (^)(NSArray *))arg3 onError:(void (^)(NSError *))arg4;
- (void)decorateAlbumURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 completion:(void (^)(id <SPTCollectionPlatformAlbumMetadataFields>))arg3 onError:(void (^)(NSError *))arg4;
- (void)decorateArtistURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 completion:(void (^)(id <SPTCollectionPlatformArtistMetadataFields>))arg3 onError:(void (^)(NSError *))arg4;
- (void)decorateTrackURL:(NSURL *)arg1 withPolicyProtocols:(NSArray *)arg2 completion:(void (^)(id <SPTCollectionPlatformTrackFields>))arg3 onError:(void (^)(NSError *))arg4;
@end

