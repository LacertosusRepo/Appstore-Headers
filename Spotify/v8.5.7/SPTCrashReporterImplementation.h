//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashDetectorDelegate-Protocol.h"
#import "SPTCrashReporter-Protocol.h"

@class NSData, NSMutableArray, NSString;
@protocol SPTCrashDetector, SPTCrashReporterPersistentStore><SPTCrashReporterURLPoster><SPTCrashReporterBackgroundUploader;

@interface SPTCrashReporterImplementation : NSObject <SPTCrashDetectorDelegate, SPTCrashReporter>
{
    _Bool _haveSentSummaryReports;
    _Bool _echoBreadcrumbsToLog;
    id <SPTCrashDetector> _crashDetector;
    NSMutableArray *_crashSummaryObservers;
    NSString *_userName;
    NSData *_crashData;
    id <SPTCrashReporterPersistentStore><SPTCrashReporterURLPoster><SPTCrashReporterBackgroundUploader> _provider;
}

@property(retain, nonatomic) id <SPTCrashReporterPersistentStore><SPTCrashReporterURLPoster><SPTCrashReporterBackgroundUploader> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSData *crashData; // @synthesize crashData=_crashData;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool echoBreadcrumbsToLog; // @synthesize echoBreadcrumbsToLog=_echoBreadcrumbsToLog;
@property(nonatomic) _Bool haveSentSummaryReports; // @synthesize haveSentSummaryReports=_haveSentSummaryReports;
@property(readonly, nonatomic) NSMutableArray *crashSummaryObservers; // @synthesize crashSummaryObservers=_crashSummaryObservers;
@property(retain, nonatomic) id <SPTCrashDetector> crashDetector; // @synthesize crashDetector=_crashDetector;
- (void).cxx_destruct;
- (void)crashDetector:(id)arg1 detectedCrashAtDate:(id)arg2 clientVersion:(id)arg3 OSVersion:(id)arg4 userName:(id)arg5 UUID:(id)arg6;
- (id)saveCrashData:(id)arg1 crashFile:(id)arg2;
- (id)preprocessCrashlyticsDataAtPath:(id)arg1;
- (id)crashUploader;
- (void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 callStack:(id)arg3;
- (id)lastCrashURL;
- (id)lastCrashIdentifier;
- (void)tellObserversToSendPendingCrashReports;
- (void)setValue:(id)arg1 forStateKey:(id)arg2;
- (void)leaveBreadcrumb:(id)arg1 withArguments:(char *)arg2;
- (void)leaveBreadcrumb:(id)arg1;
- (void)recordNonFatalError:(id)arg1;
- (void)appOperational;
- (void)appShutdown;
- (void)userDidEnterAuthenticationFlow;
- (void)setUserIdentifier:(id)arg1;
- (void)userDidLogIn:(id)arg1;
- (void)unregisterForNavigationNotifications;
- (void)registerForNavigationNotifications;
- (void)didReceiveNavigationNotification:(id)arg1;
- (void)dealloc;
- (id)initWithCrashDetector:(id)arg1 coreLoginController:(id)arg2 deviceID:(id)arg3 cachePath:(id)arg4 requestAccounting:(id)arg5 logCenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

