//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationQueueController-Protocol.h"
#import "SPTPlayerQueueObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTExternalIntegrationDebugLog, SPTPlayer;

@interface SPTExternalIntegrationQueueControllerImplementation : NSObject <SPTPlayerQueueObserver, SPTExternalIntegrationQueueController>
{
    id <SPTPlayer> _player;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)player:(id)arg1 queueDidChange:(id)arg2;
- (void)getPlayQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 debugLog:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

