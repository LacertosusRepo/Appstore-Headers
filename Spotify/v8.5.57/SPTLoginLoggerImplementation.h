//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginLogger-Protocol.h"

@class NSString;
@protocol SPTAdjustUserTrackerProtocol;

@interface SPTLoginLoggerImplementation : NSObject <SPTLoginLogger>
{
    id <SPTAdjustUserTrackerProtocol> _adjustUserTracker;
}

@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustUserTracker; // @synthesize adjustUserTracker=_adjustUserTracker;
- (void).cxx_destruct;
- (id)timestamp;
- (void)userDidCompleteRequestWithType:(id)arg1 error:(id)arg2 attemptId:(id)arg3 result:(id)arg4;
- (void)userDidCompleteRequestWithType:(id)arg1 error:(id)arg2 attemptId:(id)arg3;
- (id)userDidStartRequestWithType:(id)arg1;
- (void)trackGuestAccountCreationFailedWithError:(long long)arg1;
- (void)trackGuestAccountCreated;
- (void)trackForcedLogoutWithError:(long long)arg1;
- (void)trackExplicitLogout;
- (void)userDidAttemptLoginWithSuccess:(_Bool)arg1 usingEmail:(_Bool)arg2 credentialsIdentifier:(long long)arg3;
- (void)userIsAboutToSeeLoginFlow;
- (void)userInteractedWithField:(id)arg1 onScreen:(id)arg2 inDialog:(id)arg3;
- (void)userInteractedWithField:(id)arg1 onScreen:(id)arg2;
- (void)userExperiencedError:(id)arg1 withCode:(long long)arg2 onField:(id)arg3 onScreen:(id)arg4;
- (void)userExperiencedError:(id)arg1 withCode:(long long)arg2 onScreen:(id)arg3;
- (void)userDidSeeDialog:(id)arg1 onScreen:(id)arg2 withOptionalError:(id)arg3;
- (void)userDidSeeDialog:(id)arg1 onScreen:(id)arg2 withError:(long long)arg3;
- (void)userDidSeeDialog:(id)arg1 onScreen:(id)arg2;
- (void)userDidSeeScreen:(id)arg1;
- (void)userDidRegister;
- (void)userDidAuthenticateFromScreen:(id)arg1;
- (void)userClickedButton:(id)arg1 onScreen:(id)arg2 inDialog:(id)arg3;
- (void)userClickedButton:(id)arg1 onScreen:(id)arg2;
- (void)userAccountRecoveryCompleted:(_Bool)arg1;
- (void)trackKeychainEventWithIdentifier:(id)arg1;
- (void)trackGenericEventWithName:(id)arg1 parameters:(id)arg2;
- (void)trackGenericEventWithName:(id)arg1;
- (void)loginLayoutReceived:(id)arg1 layout:(id)arg2;
- (void)operationWithIdentifier:(id)arg1 didFinishWithDuration:(double)arg2;
- (void)accountRecoveryLinkParsed;
- (id)initWithAdjustUserTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

