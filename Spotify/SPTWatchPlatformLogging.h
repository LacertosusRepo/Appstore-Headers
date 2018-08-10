//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchConnectivitySessionObserver.h"

@class NSString, SPTAccessory, SPTWatchConnectivitySession;

@interface SPTWatchPlatformLogging : NSObject <SPTWatchConnectivitySessionObserver>
{
    _Bool _loggingEnabled;
    SPTWatchConnectivitySession *_session;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    SPTAccessory *_accessory;
}

@property(retain, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(nonatomic) __weak id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(nonatomic) __weak SPTWatchConnectivitySession *session; // @synthesize session=_session;
@property(nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
- (void).cxx_destruct;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (id)generateAccessoryForSession;
- (void)logUserHasWatch:(_Bool)arg1;
- (void)checkWatchStateWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 accessoryStateManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

