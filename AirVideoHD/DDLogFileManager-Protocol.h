//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol DDLogFileManager <NSObject>
@property unsigned long long maximumNumberOfLogFiles;
- (NSString *)createNewLogFile;
- (NSArray *)sortedLogFileInfos;
- (NSArray *)sortedLogFileNames;
- (NSArray *)sortedLogFilePaths;
- (NSArray *)unsortedLogFileInfos;
- (NSArray *)unsortedLogFileNames;
- (NSArray *)unsortedLogFilePaths;
- (NSString *)logsDirectory;

@optional
- (void)didRollAndArchiveLogFile:(NSString *)arg1;
- (void)didArchiveLogFile:(NSString *)arg1;
@end
