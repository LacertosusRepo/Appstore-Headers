//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivitySessionObserver-Protocol.h"

@class NSString, SPTWatchConnectivityMessageDispatcher, SPTWatchConnectivityPubSubManager, SPTWatchConnectivitySession;

@interface SPTWatchConnectivityManager : NSObject <SPTWatchConnectivitySessionObserver>
{
    SPTWatchConnectivitySession *_currentSession;
    SPTWatchConnectivityMessageDispatcher *_messageDispatcher;
    SPTWatchConnectivityPubSubManager *_pubSubManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) SPTWatchConnectivityPubSubManager *pubSubManager; // @synthesize pubSubManager=_pubSubManager;
@property(readonly, nonatomic) SPTWatchConnectivityMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) SPTWatchConnectivitySession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (id)providePubSub;
- (id)provideMessageHandlerRegistry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

