//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPlayerItemNotificationObservable, SPTVideoApplicationStateObservable;
@protocol BMConnectionModeObservable, BMDataLoader, BMKVOControllerFactory, BMLogger, SPTNotificationCenter, SPTVideoPlaybackErrorFormatter;

@interface BMBetamaxPlayerFactory : NSObject
{
    id <BMDataLoader> _dataLoader;
    id <BMConnectionModeObservable> _connectionModeObservable;
    id <BMKVOControllerFactory> _kvoControllerFactory;
    id <BMLogger> _logger;
    id <SPTNotificationCenter> _notificationCenter;
    SPTVideoApplicationStateObservable *_appStateObservable;
    SPTPlayerItemNotificationObservable *_playerItemObservable;
    id <SPTVideoPlaybackErrorFormatter> _playbackErrorFormatter;
}

@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> playbackErrorFormatter; // @synthesize playbackErrorFormatter=_playbackErrorFormatter;
@property(retain, nonatomic) SPTPlayerItemNotificationObservable *playerItemObservable; // @synthesize playerItemObservable=_playerItemObservable;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <BMLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <BMKVOControllerFactory> kvoControllerFactory; // @synthesize kvoControllerFactory=_kvoControllerFactory;
@property(retain, nonatomic) id <BMConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <BMDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)defaultEventObserverFactoriesWithLoggerDataProvider:(id)arg1;
- (id)createPlayerWithSurfaceManager:(id)arg1 configuration:(id)arg2 loggerDataProvider:(id)arg3 eventObserverFactories:(id)arg4 cache:(id)arg5 allowRoyaltyMedia:(_Bool)arg6;
- (id)createPlayerWithSurface:(id)arg1 configuration:(id)arg2 loggerDataProvider:(id)arg3 eventObserverFactories:(id)arg4 cache:(id)arg5 allowRoyaltyMedia:(_Bool)arg6;
- (id)initWithDataLoader:(id)arg1 connectionModeObservable:(id)arg2 kvoControllerFactory:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5 appStateObservable:(id)arg6 playerItemObservable:(id)arg7 playbackErrorFormatter:(id)arg8;
- (id)initWithDataLoader:(id)arg1 connectionModeObservable:(id)arg2 kvoControllerFactory:(id)arg3 logger:(id)arg4;

@end

