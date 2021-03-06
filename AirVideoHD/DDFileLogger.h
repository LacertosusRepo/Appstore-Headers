//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class DDLogFileInfo, NSFileHandle, NSObject, NSString;
@protocol DDLogFileManager, OS_dispatch_source;

@interface DDFileLogger : DDAbstractLogger <DDLogger>
{
    id <DDLogFileManager> logFileManager;
    DDLogFileInfo *currentLogFileInfo;
    NSFileHandle *currentLogFileHandle;
    NSObject<OS_dispatch_source> *rollingTimer;
    unsigned long long maximumFileSize;
    double rollingFrequency;
}

@property(readonly, nonatomic) id <DDLogFileManager> logFileManager; // @synthesize logFileManager;
- (void).cxx_destruct;
- (id)loggerName;
- (void)willRemoveLogger;
- (void)logMessage:(id)arg1;
- (id)currentLogFileHandle;
- (id)currentLogFileInfo;
- (void)maybeRollLogFileDueToSize;
- (void)maybeRollLogFileDueToAge;
- (void)rollLogFileNow;
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
@property(readonly) Class superclass;

@end

