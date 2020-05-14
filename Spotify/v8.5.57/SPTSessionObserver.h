//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTIncognitoModeHandlerObserver-Protocol.h"

@class NSString, SPCore, SPSession, SPTIncognitoModeHandler, SPTRequestLifetime;
@protocol SPTAlertInterface, SPTLogCenter, SPTNetworkConnectivityController;

@interface SPTSessionObserver : NSObject <SPSessionObserver, SPTIncognitoModeHandlerObserver>
{
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPCore *_core;
    SPSession *_session;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    id <SPTLogCenter> _logCenter;
    id <SPTAlertInterface> _alertInterface;
    SPTRequestLifetime *_offlineErrorSubscription;
}

@property(retain, nonatomic) SPTRequestLifetime *offlineErrorSubscription; // @synthesize offlineErrorSubscription=_offlineErrorSubscription;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)showDialogWithTitle:(id)arg1 message:(id)arg2;
- (void)showDialogOfflineLicenseLost;
- (void)showDialogOfflineModeExpired;
- (void)syncErrorNotEnoughSpaceOnDevice;
- (void)logOfflineErrorAlertUIImpressionWithTargetUri:(id)arg1 impressionType:(id)arg2;
- (void)session:(id)arg1 offlineSyncError:(id)arg2;
- (void)session:(id)arg1 autoUpdateWithURL:(id)arg2;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)tryToDisableOfflineMode;
- (void)onOfflineError:(long long)arg1;
- (void)subscribeToOfflineErrors;
- (void)applicationStateChanged:(id)arg1;
- (void)updateApplicationState;
- (void)dealloc;
- (id)initWithCore:(id)arg1 session:(id)arg2 incognitoModeHandler:(id)arg3 logCenter:(id)arg4 networkConnectivityController:(id)arg5 alertInterface:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

