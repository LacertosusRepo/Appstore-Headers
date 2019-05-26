//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKBWeakListenerList, GCKMediaQueue, GCKMediaStatus, NSMutableDictionary, NSTimer;
@protocol GCKRemoteMediaClientAdInfoParserDelegate;

@interface GCKRemoteMediaClient : NSObject
{
    GCKBWeakListenerList *_listenerList;
    GCKBWeakListenerList *_progressListenerList;
    NSMutableDictionary *_requests;
    GCKMediaQueue *_mediaQueue;
    NSTimer *_progressIntervalTimer;
    GCKMediaStatus *_mediaStatus;
    double _timeSinceLastMediaStatusUpdate;
    id <GCKRemoteMediaClientAdInfoParserDelegate> _adInfoParserDelegate;
}

@property(nonatomic) __weak id <GCKRemoteMediaClientAdInfoParserDelegate> adInfoParserDelegate; // @synthesize adInfoParserDelegate=_adInfoParserDelegate;
@property(readonly, nonatomic) double timeSinceLastMediaStatusUpdate; // @synthesize timeSinceLastMediaStatusUpdate=_timeSinceLastMediaStatusUpdate;
@property(readonly, nonatomic) GCKMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(readonly, nonatomic) GCKMediaStatus *mediaStatus; // @synthesize mediaStatus=_mediaStatus;
- (void).cxx_destruct;
- (id)requestStatus;
- (id)setStreamMuted:(_Bool)arg1 customData:(id)arg2;
- (id)setStreamMuted:(_Bool)arg1;
- (id)setStreamVolume:(float)arg1 customData:(id)arg2;
- (id)setStreamVolume:(float)arg1;
- (id)queueSetRepeatMode:(long long)arg1;
- (id)queuePreviousItem;
- (id)queueNextItem;
- (id)queueJumpToItemWithID:(unsigned long long)arg1 playPosition:(double)arg2 customData:(id)arg3;
- (id)queueJumpToItemWithID:(unsigned long long)arg1 customData:(id)arg2;
- (id)queueJumpToItemWithID:(unsigned long long)arg1;
- (id)queueMoveItemWithID:(unsigned long long)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (id)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2;
- (id)queueRemoveItemWithID:(unsigned long long)arg1;
- (id)queueRemoveItemsWithIDs:(id)arg1 customData:(id)arg2;
- (id)queueRemoveItemsWithIDs:(id)arg1;
- (id)queueUpdateItems:(id)arg1 customData:(id)arg2;
- (id)queueUpdateItems:(id)arg1;
- (id)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (id)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueInsertItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (id)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueLoadItems:(id)arg1 withOptions:(id)arg2;
- (id)queueLoadItems:(id)arg1 withQueueData:(id)arg2 options:(id)arg3;
- (id)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 playPosition:(double)arg3 repeatMode:(long long)arg4 customData:(id)arg5;
- (id)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 repeatMode:(long long)arg3 customData:(id)arg4;
- (id)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 repeatMode:(long long)arg3;
- (id)queueFetchItemsForIDs:(id)arg1;
- (id)queueFetchItemIDs;
- (id)seekWithOptions:(id)arg1;
- (id)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2 customData:(id)arg3;
- (id)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2;
- (id)seekToTimeInterval:(double)arg1;
- (id)skipAd;
- (id)playWithCustomData:(id)arg1;
- (id)play;
- (id)stopWithCustomData:(id)arg1;
- (id)stop;
- (id)pauseWithCustomData:(id)arg1;
- (id)pause;
- (id)setTextTrackStyle:(id)arg1;
- (id)setActiveTrackIDs:(id)arg1;
- (id)setPlaybackRate:(float)arg1 customData:(id)arg2;
- (id)setPlaybackRate:(float)arg1;
- (id)loadMedia:(id)arg1 withOptions:(id)arg2;
- (id)loadMedia:(id)arg1 withQueueData:(id)arg2 options:(id)arg3;
- (id)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4 customData:(id)arg5;
- (id)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4;
- (id)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (id)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3;
- (id)loadMedia:(id)arg1 autoplay:(_Bool)arg2;
- (id)loadMedia:(id)arg1;
- (id)nonImplementedRequest:(id)arg1;
- (void)notifyDidUpdateProgress;
- (void)notifyDidReceiveQueueItems:(id)arg1;
- (void)notifyDidRemoveQueueItemsWithIDs:(id)arg1;
- (void)notifyDidUpdateQueueItemsWithIDs:(id)arg1;
- (void)notifyDidInsertQueueItemsWithIDs:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (void)notifyDidReceiveQueueItemIDs:(id)arg1;
- (void)notifyDidUpdateMetadata;
- (void)notifyDidUpdatePreloadStatus;
- (void)notifyDidUpdateQueue;
- (void)notifyDidUpdateMediaStatus;
- (void)notifyDidStartMediaSession;
- (void)removeProgressListener:(id)arg1;
- (void)addProgressListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)intervalTimerDidFire:(id)arg1;
- (void)stopIntervalTimer;
- (void)startIntervalTimer;
- (double)approximateSeekableRangeEnd;
- (double)approximateSeekableRangeStart;
- (double)approximateStreamPosition;
- (_Bool)isSeekable;
- (_Bool)isPlayingLiveStream;
@property(readonly, nonatomic) _Bool connected;
- (id)init;

@end

