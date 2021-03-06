//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchConnectivitySessionObserver.h"

@class NSString, SPTWatchConnectivityMessageDispatcher, SPTWatchConnectivitySession;

@interface SPTWatchConnectivityManager : NSObject <SPTWatchConnectivitySessionObserver>
{
    SPTWatchConnectivitySession *_currentSession;
    SPTWatchConnectivityMessageDispatcher *_messageDispatcher;
}

+ (id)sharedManager;
@property(readonly, nonatomic) SPTWatchConnectivityMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) SPTWatchConnectivitySession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (id)provideMessageHandlerRegistry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

