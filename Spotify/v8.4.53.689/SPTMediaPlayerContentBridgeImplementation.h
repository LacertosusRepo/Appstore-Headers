//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPPlayableContentDataSource.h"
#import "MPPlayableContentDelegate.h"
#import "SPTMediaPlayerContentBridge.h"

@class MPPlayableContentManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SPTMediaPlayerContentBridgeImplementation : NSObject <SPTMediaPlayerContentBridge, MPPlayableContentDataSource, MPPlayableContentDelegate>
{
    id <MPPlayableContentDelegate> _playableContentSubDelegate;
    id <MPPlayableContentDataSource> _playableContentDataSource;
    id <SPTPlaybackQueueInitializer> _playbackQueueInitializer;
    MPPlayableContentManager *_contentManager;
    NSObject<OS_dispatch_queue> *_playableContentDataSourceWaitForAvailabilityQueue;
    NSMutableArray *_playableContentDataSourceAvailabilitySemaphores;
}

@property(retain, nonatomic) NSMutableArray *playableContentDataSourceAvailabilitySemaphores; // @synthesize playableContentDataSourceAvailabilitySemaphores=_playableContentDataSourceAvailabilitySemaphores;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playableContentDataSourceWaitForAvailabilityQueue; // @synthesize playableContentDataSourceWaitForAvailabilityQueue=_playableContentDataSourceWaitForAvailabilityQueue;
@property(retain, nonatomic) MPPlayableContentManager *contentManager; // @synthesize contentManager=_contentManager;
@property(nonatomic) __weak id <SPTPlaybackQueueInitializer> playbackQueueInitializer; // @synthesize playbackQueueInitializer=_playbackQueueInitializer;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource; // @synthesize playableContentDataSource=_playableContentDataSource;
@property(nonatomic) __weak id <MPPlayableContentDelegate> playableContentSubDelegate; // @synthesize playableContentSubDelegate=_playableContentSubDelegate;
- (void).cxx_destruct;
- (void)playableContentManager:(id)arg1 didUpdateContext:(id)arg2;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithContentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

