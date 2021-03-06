//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTVideoAVFactory, SPTVideoApplicationStateObservable, SPTVideoCDNSelector, SPTVideoPlayerSource;
@protocol BMChunkCache, BMConnectionModeObservable, BMDataLoader, BMKVOControllerFactory, BMPlayerConfiguration, SPTNotificationCenter, SPTVideoMediaExtension, SPTVideoPlaybackErrorFormatter;

@interface SPTVideoPlaybackSessionFactory : NSObject
{
    SPTVideoCDNSelector *_cdnSelector;
    SPTVideoPlayerSource *_playerSource;
    id <BMPlayerConfiguration> _playerConfiguration;
    id <BMKVOControllerFactory> _kvoControllerFactory;
    id <BMConnectionModeObservable> _connectionModeObservable;
    id <SPTNotificationCenter> _notificationCenter;
    id <SPTVideoPlaybackErrorFormatter> _videoPlaybackErrorFormatter;
    SPTVideoApplicationStateObservable *_appStateObservable;
    SPTVideoAVFactory *_avFactory;
    NSArray *_eventObserverFactories;
    id <BMDataLoader> _dataLoader;
    id <BMChunkCache> _videoChunkCache;
    id <SPTVideoMediaExtension> _spotifyVideoMediaExtension;
}

@property(retain, nonatomic) id <SPTVideoMediaExtension> spotifyVideoMediaExtension; // @synthesize spotifyVideoMediaExtension=_spotifyVideoMediaExtension;
@property(retain, nonatomic) id <BMChunkCache> videoChunkCache; // @synthesize videoChunkCache=_videoChunkCache;
@property(retain, nonatomic) id <BMDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSArray *eventObserverFactories; // @synthesize eventObserverFactories=_eventObserverFactories;
@property(retain, nonatomic) SPTVideoAVFactory *avFactory; // @synthesize avFactory=_avFactory;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> videoPlaybackErrorFormatter; // @synthesize videoPlaybackErrorFormatter=_videoPlaybackErrorFormatter;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <BMConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <BMKVOControllerFactory> kvoControllerFactory; // @synthesize kvoControllerFactory=_kvoControllerFactory;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
- (void).cxx_destruct;
- (id)createSessionWithPlaybackIdentity:(id)arg1 options:(id)arg2 playerSource:(id)arg3;
- (id)initWithCDNSelector:(id)arg1 connectionModeObservable:(id)arg2 playerConfiguration:(id)arg3 kvoControllerFactory:(id)arg4 notificationCenter:(id)arg5 videoPlaybackErrorFormatter:(id)arg6 playerSource:(id)arg7 appStateObservable:(id)arg8 avFactory:(id)arg9 eventObserverFactories:(id)arg10 dataLoader:(id)arg11 videoChunkCache:(id)arg12 spotifyVideoMediaExtension:(id)arg13;

@end

