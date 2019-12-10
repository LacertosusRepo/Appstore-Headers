//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSString;
@protocol OS_dispatch_queue;

@interface FMDatabaseQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
}

+ (id)databaseQueueWithPath:(id)arg1;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
