//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CrashlyticsDelegate.h"
#import "SPTCrashDetector.h"

@class NSMutableDictionary, NSString;

@interface SPTCrashlyticsCrashDetector : NSObject <CrashlyticsDelegate, SPTCrashDetector>
{
    _Bool _terminated;
    id <SPTCrashDetectorDelegate> _delegate;
    NSString *_coreVersionString;
    NSString *_clientVersionString;
    NSMutableDictionary *_stateKeys;
    NSString *_appState;
}

@property(retain, nonatomic) NSString *appState; // @synthesize appState=_appState;
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) NSMutableDictionary *stateKeys; // @synthesize stateKeys=_stateKeys;
@property(readonly, copy, nonatomic) NSString *clientVersionString; // @synthesize clientVersionString=_clientVersionString;
@property(readonly, copy, nonatomic) NSString *coreVersionString; // @synthesize coreVersionString=_coreVersionString;
@property(nonatomic) __weak id <SPTCrashDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)provideProductionAssertionHandler;
- (void)recordNonFatalError:(id)arg1;
- (void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 callStack:(id)arg3;
- (id)crashReportURLForUUID:(id)arg1;
- (void)setValue:(id)arg1 forStateKey:(id)arg2;
- (void)leaveBreadcrumb:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)appOperational;
- (void)appShutdown;
- (void)userDidEnterAuthenticationFlow;
- (void)userDidLogIn:(id)arg1;
- (void)start;
@property(readonly, nonatomic) NSString *detectorIdentifier;
- (id)initWithCoreVersionString:(id)arg1 clientVersionString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

