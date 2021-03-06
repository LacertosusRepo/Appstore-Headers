//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashReporterURLPosterDelegate-Protocol.h"
#import "SPTCrashSummaryObserver-Protocol.h"

@class NSString, NSURL, SPTRequestAccounting;
@protocol SPTCrashReporterPersistentStore, SPTCrashReporterURLPoster, SPTLogCenter;

@interface SPTWebEndpointCrashStatisticsReporter : NSObject <SPTCrashReporterURLPosterDelegate, SPTCrashSummaryObserver>
{
    NSString *_deviceID;
    _Bool _startedSendingPendingReports;
    id <SPTCrashReporterPersistentStore> _persistentStore;
    id <SPTCrashReporterURLPoster> _urlPoster;
    NSURL *_crashDirectory;
    SPTRequestAccounting *_requestAccounting;
    id <SPTLogCenter> _logCenter;
}

+ (void)load;
@property(nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTRequestAccounting *requestAccounting; // @synthesize requestAccounting=_requestAccounting;
@property(retain, nonatomic) NSURL *crashDirectory; // @synthesize crashDirectory=_crashDirectory;
- (void).cxx_destruct;
- (void)successfulUploadForID:(id)arg1;
- (void)sendPendingCrashReportsInternal;
- (void)clearAllCrashReports;
- (void)rescheduleUpload;
- (void)transmitCrashReport:(id)arg1 timeout:(double)arg2 suffix:(id)arg3;
- (void)transmitCrashReport:(id)arg1 withCrashData:(id)arg2 crashID:(id)arg3 timeout:(double)arg4 suffix:(id)arg5;
- (void)removePersistentCrashReportForID:(id)arg1;
- (void)addPersistentCrashReportForID:(id)arg1;
- (void)removePersistentCrashReportURLString:(id)arg1;
- (void)addPersistentCrashReportURLString:(id)arg1;
- (void)setOldPendingCrashReports:(id)arg1;
- (void)setPendingCrashReports:(id)arg1;
- (id)pendingCrashReports;
- (id)oldPendingCrashReports;
- (id)platformString;
- (unsigned int)revisionFromVersion:(id)arg1;
- (id)dottedVersionFromRevision:(unsigned int)arg1;
- (void)interpretClientVersion:(id)arg1 gettingDottedVersionString:(out id *)arg2 packedVersion:(out unsigned int *)arg3;
- (id)ISODateFromDate:(id)arg1;
- (void)logToWebEndpointWithParameters:(id)arg1 withData:(id)arg2 crashUUID:(id)arg3;
- (void)logToWebEndpointInnerWithClientVersion:(id)arg1 OSVersion:(id)arg2 date:(id)arg3 userName:(id)arg4 UUID:(id)arg5 detectorIdentifier:(id)arg6 crashData:(id)arg7;
- (void)sendPendingCrashReports;
- (void)logCrashWithClientVersion:(id)arg1 OSVersion:(id)arg2 date:(id)arg3 userName:(id)arg4 UUID:(id)arg5 detectorIdentifier:(id)arg6 crashData:(id)arg7;
- (void)removeAndAccountForFileWithUUID:(id)arg1;
- (id)createFileFromData:(id)arg1 withUUID:(id)arg2;
- (_Bool)canHandleUserName;
- (id)initWithDeviceID:(id)arg1 persistentStore:(id)arg2 urlPoster:(id)arg3 requestAccounting:(id)arg4 logCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

