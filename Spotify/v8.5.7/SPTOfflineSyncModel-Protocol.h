//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTOfflineSyncModelDelegate;

@protocol SPTOfflineSyncModel <NSObject>
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic, getter=isSyncing) _Bool syncing;
@property(readonly, nonatomic) long long totalTracks;
@property(readonly, nonatomic) long long syncedTracks;
@property(nonatomic) __weak id <SPTOfflineSyncModelDelegate> delegate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)loadModel;
@end

