//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseDataAccess.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface IMSharedDataStore : IMBaseDataAccess
{
    NSObject<OS_dispatch_queue> *dispatchQueue;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)asyncExecuteInTransaction:(CDUnknownBlockType)arg1;
- (void)executeInTransaction:(CDUnknownBlockType)arg1;
- (void)migrateSchemaFromVersion:(int)arg1 toVersion:(int)arg2 withDatabase:(id)arg3;
- (void)createMaxTimestampTable:(id)arg1;
- (void)initSchemaWithDatabase:(id)arg1;
- (id)init;

@end

