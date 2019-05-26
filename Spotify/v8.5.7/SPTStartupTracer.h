//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTColdStartObserver-Protocol.h"
#import "SPTViewLoggerObserver-Protocol.h"

@class NSMutableDictionary, NSString, SPTStartupDurationTracker;
@protocol SPTLogCenter, SPTPerformanceLoggingApplicationStateProvider;

@interface SPTStartupTracer : NSObject <SPTColdStartObserver, SPTViewLoggerObserver>
{
    _Bool _offlineState;
    _Bool _viewLoadingStarted;
    NSString *_connectionType;
    id <SPTLogCenter> _logCenter;
    NSMutableDictionary *_steps;
    NSMutableDictionary *_metadata;
    NSString *_initialApplicationState;
    id <SPTPerformanceLoggingApplicationStateProvider> _applicationStateProvider;
    SPTStartupDurationTracker *_durationTracker;
    CDUnknownBlockType _terminalStateCallback;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType terminalStateCallback; // @synthesize terminalStateCallback=_terminalStateCallback;
@property(readonly, nonatomic) SPTStartupDurationTracker *durationTracker; // @synthesize durationTracker=_durationTracker;
@property(readonly, nonatomic) id <SPTPerformanceLoggingApplicationStateProvider> applicationStateProvider; // @synthesize applicationStateProvider=_applicationStateProvider;
@property(readonly, copy, nonatomic) NSString *initialApplicationState; // @synthesize initialApplicationState=_initialApplicationState;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSMutableDictionary *steps; // @synthesize steps=_steps;
@property _Bool viewLoadingStarted; // @synthesize viewLoadingStarted=_viewLoadingStarted;
@property(nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) _Bool offlineState; // @synthesize offlineState=_offlineState;
@property(copy, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
- (void).cxx_destruct;
- (id)serviceDurations;
- (id)deferredBlockDurations;
- (id)scopeDurations;
- (id)rootUIDurations;
- (id)metadataWithDurations;
- (void)viewLogger:(id)arg1 didTransitionToState:(long long)arg2 after:(double)arg3;
- (void)logFinishedDeferredBlockForScope:(id)arg1 identifier:(id)arg2;
- (void)logStartDeferredBlockForScope:(id)arg1 identifier:(id)arg2;
- (void)logFinishedSetupRootUIForURI:(id)arg1;
- (void)logStartSetupRootUIForURI:(id)arg1;
- (void)logFinishedLoadingService:(id)arg1 inBackground:(_Bool)arg2;
- (void)logStartLoadingService:(id)arg1 inBackground:(_Bool)arg2;
- (void)logFinishedLoadingScope:(id)arg1;
- (void)logStartLoadingScope:(id)arg1;
- (_Bool)hasViewLoadingStarted;
- (_Bool)hasReachedTerminalState;
- (void)reset;
- (void)sendColdStartupSequenceWithTerminalState:(id)arg1;
- (void)logAppStartupWithStepName:(id)arg1 timeSinceStart:(double)arg2 isTerminalStep:(_Bool)arg3;
- (void)logAppStartupWithStepName:(id)arg1 isTerminalStep:(_Bool)arg2;
- (void)logAppStartupWithStepName:(id)arg1;
- (void)logAppStartupWithStepName:(id)arg1 categories:(id)arg2 eventType:(long long)arg3 level:(long long)arg4;
- (void)logNavigatedAway;
- (void)logBridgeViewStart;
- (void)logApplicationShutDown;
- (void)logUsableState;
- (void)logViewError;
- (void)logViewCancel;
- (void)logViewLoadingStarted;
- (void)logKeymasterTokenLoaded;
- (void)logVisibleState;
- (void)logManualLogin;
- (void)logFinishedStateRestore;
- (void)logBeginStateRestore;
- (void)logFeaturesDidLoad;
- (void)logCoreLogin;
- (void)logApplicationInitDidFinish;
- (void)logApplicationInitDidStart;
- (_Bool)isStartupTracingEnabled;
- (id)initWithLogCenter:(id)arg1 applicationStateProvider:(id)arg2 terminalStateCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

