//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPPlayableContentManager;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, SPTPlaybackQueueInitializer;

@protocol SPTMediaPlayerContentBridge <NSObject>
@property(readonly, nonatomic) MPPlayableContentManager *contentManager;
@property(nonatomic) __weak id <SPTPlaybackQueueInitializer> playbackQueueInitializer;
@property(nonatomic) __weak id <MPPlayableContentDelegate> playableContentSubDelegate;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource;
@end

