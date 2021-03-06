//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppProtocolAuthenticatorDelegate-Protocol.h"

@class NSArray, NSString, SPTAppProtocolConnectionHandler;
@protocol SPTAppProtocolAuthenticator, SPTAppProtocolSessionHandler;

@interface SPTAppProtocolSessionMessageHandler : NSObject <SPTAppProtocolAuthenticatorDelegate>
{
    SPTAppProtocolConnectionHandler *_connectionHandler;
    NSArray *_authenticators;
    id <SPTAppProtocolSessionHandler> _sessionHandler;
    id <SPTAppProtocolAuthenticator> _activeAuthenticator;
}

@property(nonatomic) __weak id <SPTAppProtocolAuthenticator> activeAuthenticator; // @synthesize activeAuthenticator=_activeAuthenticator;
@property(readonly, nonatomic) __weak id <SPTAppProtocolSessionHandler> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(readonly, nonatomic) NSArray *authenticators; // @synthesize authenticators=_authenticators;
@property(retain, nonatomic) SPTAppProtocolConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
- (void).cxx_destruct;
- (void)authenticator:(id)arg1 didFailWithReason:(id)arg2 description:(id)arg3 andReply:(CDUnknownBlockType)arg4;
- (void)authenticationDidSucceedWithAuthenticator:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)startSessionAndReply:(CDUnknownBlockType)arg1;
- (void)handleReply:(CDUnknownBlockType)arg1;
- (id)authenticatorForAuthMethods:(id)arg1;
- (void)handleHelloMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)handleAuthenticateMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (id)initWithConnectionHandler:(id)arg1 sessionHandler:(id)arg2 authenticators:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

