//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKMediaMetadata, GCKMediaStatus, GCKRemoteMediaClient, NSArray;

@protocol GCKRemoteMediaClientListener <NSObject>

@optional
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didReceiveQueueItems:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didRemoveQueueItemsWithIDs:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateQueueItemsWithIDs:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didInsertQueueItemsWithIDs:(NSArray *)arg2 beforeItemWithID:(unsigned long long)arg3;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didReceiveQueueItemIDs:(NSArray *)arg2;
- (void)remoteMediaClientDidUpdatePreloadStatus:(GCKRemoteMediaClient *)arg1;
- (void)remoteMediaClientDidUpdateQueue:(GCKRemoteMediaClient *)arg1;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateMediaMetadata:(GCKMediaMetadata *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateMediaStatus:(GCKMediaStatus *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didStartMediaSessionWithID:(long long)arg2;
@end

