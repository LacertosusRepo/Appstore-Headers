//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPIDDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class NSFileHandle, NSObject, NSString, RAPIDDLogFileInfo;
@protocol DDLogFileManager, DDLogFormatter, OS_dispatch_queue, OS_dispatch_source;

@interface RAPIDDFileLogger : RAPIDDAbstractLogger <DDLogger>
{
    id <DDLogFileManager> _logFileManager;
    RAPIDDLogFileInfo *_currentLogFileInfo;
    NSFileHandle *_currentLogFileHandle;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    NSObject<OS_dispatch_source> *_rollingTimer;
    unsigned long long _maximumFileSize;
    double _rollingFrequency;
    _Bool _doNotReuseLogFiles;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
    id <DDLogFileManager> logFileManager;
}

@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
@property _Bool doNotReuseLogFiles; // @synthesize doNotReuseLogFiles=_doNotReuseLogFiles;
@property(readonly, nonatomic) id <DDLogFileManager> logFileManager; // @synthesize logFileManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)willRemoveLogger;
- (void)logMessage:(id)arg1;
- (id)currentLogFileHandle;
- (id)currentLogFileInfo;
- (void)maybeRollLogFileDueToSize;
- (void)maybeRollLogFileDueToAge;
- (void)rollLogFileNow;
- (void)rollLogFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rollLogFile;
- (void)scheduleTimerToRollLogFileDueToAge;
@property double rollingFrequency;
@property unsigned long long maximumFileSize;
- (void)dealloc;
- (id)initWithLogFileManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

