//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL;
@protocol SPTEntityCancelationToken;

@protocol SPTEntityService <NSObject>
- (void)cancelAllTasks;
- (id <SPTEntityCancelationToken>)lookupDecoratedEntitiesWithURLs:(NSArray *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupDecoratedAlbumWithURL:(NSURL *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupDecoratedArtistWithURL:(NSURL *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupEntitiesWithURLs:(NSArray *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupAlbumWithURL:(NSURL *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupArtistWithURL:(NSURL *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
- (id <SPTEntityCancelationToken>)lookupTrackWithURL:(NSURL *)arg1 completionHandler:(void (^)(SPTEntityLookupResponse *))arg2;
@end

