//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTUIModeSwitchManager : NSObject <SPTFeatureFlagSignalObserver>
{
    id <SPTFeatureFlagSignal> _theNewExperienceEnabledSignal;
    long long _currentState;
    id <SPTLoginStateController> _loginStateController;
    id <SPTStateController> _stateController;
    id <SPTMetaViewController> _metaViewController;
    id <SPTSessionServicesLoader> _sessionServicesLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
    id <SPTUIModeTransitionCoordinator> _transitionCoordinator;
    id <SPTCrashReporter> _crashReporter;
}

@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTSessionServicesLoader> sessionServicesLoader; // @synthesize sessionServicesLoader=_sessionServicesLoader;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTStateController> stateController; // @synthesize stateController=_stateController;
@property(nonatomic) __weak id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <SPTFeatureFlagSignal> theNewExperienceEnabledSignal; // @synthesize theNewExperienceEnabledSignal=_theNewExperienceEnabledSignal;
- (void).cxx_destruct;
- (void)completeUIModeSwitching;
- (void)relogin;
- (void)performUIModeSwitch;
- (void)theNewExperienceStateChanged;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)initWithCurrentState:(long long)arg1 theNewExperienceEnabledSignal:(id)arg2 loginStateController:(id)arg3 stateController:(id)arg4 metaViewController:(id)arg5 sessionServicesLoader:(id)arg6 linkDispatcher:(id)arg7 alertController:(id)arg8 transitionCoordinator:(id)arg9 crashReporter:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
