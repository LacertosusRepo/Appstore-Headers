//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;

@interface IDZKLog : NSObject
{
    unsigned long long _minimumLevel;
    int _pid;
    NSDateFormatter *_dateFormatter;
    NSString *_logFilePath;
    struct __sFILE *_logFilePointer;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property struct __sFILE *logFilePointer; // @synthesize logFilePointer=_logFilePointer;
@property(copy) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property int pid; // @synthesize pid=_pid;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)levelToLabel:(unsigned long long)arg1;
@property unsigned long long minimumLevel; // @dynamic minimumLevel;
- (void)logFile:(char *)arg1 lineNumber:(unsigned long long)arg2 level:(unsigned long long)arg3 format:(id)arg4;

@end
