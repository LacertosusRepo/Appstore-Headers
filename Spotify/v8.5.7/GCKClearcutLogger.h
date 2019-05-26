//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKNHTTPRequestDelegate-Protocol.h"

@class GCKNHTTPClient, GCKNHTTPRequest, GCKSenderInfo, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface GCKClearcutLogger : NSObject <GCKNHTTPRequestDelegate>
{
    NSString *_logDirectory;
    unsigned long long _maxLogFiles;
    unsigned long long _maxRequestSize;
    NSMutableArray *_pendingRequests;
    NSMutableDictionary *_logWriters;
    unsigned long long _uploadTaskID;
    NSTimer *_uploadTimer;
    double _uploadDelay;
    _Bool _inBackground;
    _Bool _uploadScheduled;
    GCKNHTTPClient *_httpClient;
    GCKNHTTPRequest *_httpRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_serverURL;
    NSDateFormatter *_dateFormatter;
    GCKSenderInfo *_senderInfo;
    NSString *_osMajorVersion;
    NSString *_applicationVersion;
    NSString *_installIdentifier;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *installIdentifier; // @synthesize installIdentifier=_installIdentifier;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2;
- (void)uploadTimerDidFire:(id)arg1;
- (long long)currentTimeMillis;
- (void)closeLogWriters;
- (void)endBackgroundTask;
- (void)startBackgroundTask;
- (id)buildLogRequestForLogSource:(int)arg1 logFile:(id)arg2;
- (void)processNextRequest;
- (void)scheduleNextUpload;
- (void)flushLogs;
- (void)uploadLogs;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)scanLogCache;
- (void)clearLogCache;
- (void)logEvent:(id)arg1 fromSource:(int)arg2;
- (void)logEventWithExtension:(id)arg1 eventCode:(int)arg2 fromSource:(int)arg3;
- (void)logEventWithExtension:(id)arg1 fromSource:(int)arg2;
- (void)dealloc;
- (id)initWithMaxLogFiles:(unsigned long long)arg1 maxRequestSize:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

