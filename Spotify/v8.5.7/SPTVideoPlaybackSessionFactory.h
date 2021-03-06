//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoAVFactory, SPTVideoApplicationStateObservable, SPTVideoCDNSelector;
@protocol SPTConnectionModeObservable, SPTKVOControllerFactory, SPTNotificationCenter, SPTVideoPlaybackErrorFormatter, SPTVideoPlayerConfiguration, SPTVideoResourceLoaderFactory;

@interface SPTVideoPlaybackSessionFactory : NSObject
{
    SPTVideoCDNSelector *_cdnSelector;
    id <SPTVideoPlayerConfiguration> _playerConfiguration;
    id <SPTVideoResourceLoaderFactory> _resourceLoaderFactory;
    id <SPTKVOControllerFactory> _kvoControllerFactory;
    id <SPTConnectionModeObservable> _connectionModeObservable;
    id <SPTNotificationCenter> _notificationCenter;
    id <SPTVideoPlaybackErrorFormatter> _videoPlaybackErrorFormatter;
    SPTVideoApplicationStateObservable *_appStateObservable;
    SPTVideoAVFactory *_avFactory;
}

@property(retain, nonatomic) SPTVideoAVFactory *avFactory; // @synthesize avFactory=_avFactory;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> videoPlaybackErrorFormatter; // @synthesize videoPlaybackErrorFormatter=_videoPlaybackErrorFormatter;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <SPTConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <SPTKVOControllerFactory> kvoControllerFactory; // @synthesize kvoControllerFactory=_kvoControllerFactory;
@property(retain, nonatomic) id <SPTVideoResourceLoaderFactory> resourceLoaderFactory; // @synthesize resourceLoaderFactory=_resourceLoaderFactory;
@property(retain, nonatomic) id <SPTVideoPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
- (void).cxx_destruct;
- (id)createSessionWithPlaybackIdentity:(id)arg1 options:(id)arg2 playerSource:(id)arg3 notifierProxyHolder:(id)arg4;
- (id)initWithCDNSelector:(id)arg1 resourceLoaderFactory:(id)arg2 connectionModeObservable:(id)arg3 playerConfiguration:(id)arg4 kvoControllerFactory:(id)arg5 notificationCenter:(id)arg6 videoPlaybackErrorFormatter:(id)arg7 appStateObservable:(id)arg8 avFactory:(id)arg9;

@end

