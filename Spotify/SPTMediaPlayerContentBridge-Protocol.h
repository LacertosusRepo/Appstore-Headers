//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPPlayableContentManager;

@protocol SPTMediaPlayerContentBridge <NSObject>
@property(readonly, nonatomic) MPPlayableContentManager *contentManager;
@property(nonatomic) __weak id <SPTPlaybackQueueInitializer> playbackQueueInitializer;
@property(nonatomic) __weak id <MPPlayableContentDelegate> playableContentSubDelegate;
@property(nonatomic) __weak id <MPPlayableContentDataSource> playableContentDataSource;
@end
