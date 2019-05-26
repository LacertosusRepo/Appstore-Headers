//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchConnectivityRequestHandler.h"

@class NSString, SPTWatchConnectivityManager, SPTask;

@interface SPTWatchPlatformPlayerRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    id <SPTPlayer> _player;
    SPTWatchConnectivityManager *_connectivityManager;
    SPTask *_activePlaybackControlTask;
}

@property(retain, nonatomic) SPTask *activePlaybackControlTask; // @synthesize activePlaybackControlTask=_activePlaybackControlTask;
@property(readonly, nonatomic) SPTWatchConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)sendCompletionResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithConnectivityManager:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
