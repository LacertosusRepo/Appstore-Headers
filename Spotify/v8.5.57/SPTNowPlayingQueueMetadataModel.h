//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTPlayerQueueObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSHashTable, NSString, SPTPlayerState;
@protocol SPTNowPlayingManager, SPTNowPlayingTestManager, SPTPlayer, SPTProductState, SPTQueueService;

@interface SPTNowPlayingQueueMetadataModel : NSObject <SPTPlayerObserver, SPTPlayerQueueObserver, SPTProductStateObserver>
{
    id <SPTNowPlayingManager> _nowPlayingManager;
    NSHashTable *_observers;
    id <SPTPlayer> _player;
    SPTPlayerState *_lastUpdateState;
    long long _lastUpNextCount;
    id <SPTProductState> _productState;
    id <SPTQueueService> _queueService;
    id <SPTNowPlayingTestManager> _testManager;
}

@property(readonly, nonatomic) __weak id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTQueueService> queueService; // @synthesize queueService=_queueService;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) long long lastUpNextCount; // @synthesize lastUpNextCount=_lastUpNextCount;
@property(retain, nonatomic) SPTPlayerState *lastUpdateState; // @synthesize lastUpdateState=_lastUpdateState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)player:(id)arg1 queueDidChange:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)notifyObservers;
- (unsigned long long)preferredToggleMode;
@property(readonly, nonatomic) long long numberOfUserQueuedTracks;
@property(readonly, nonatomic) _Bool disallowOpeningQueue;
@property(readonly, nonatomic) _Bool disallowViewingQueue;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 productState:(id)arg2 queueService:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
