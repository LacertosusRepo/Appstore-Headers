//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PendingRequest : NSObject
{
    _Bool _active;
    int _logSource;
    NSString *_logPath;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(readonly, nonatomic) int logSource; // @synthesize logSource=_logSource;
- (void).cxx_destruct;
- (void)deleteLogFile;
- (id)initWithLogSource:(int)arg1 logPath:(id)arg2;

@end

