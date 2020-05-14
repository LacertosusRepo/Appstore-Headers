//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol BMCache <NSObject>
- (void)pruneWithCompletion:(void (^)(_Bool))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (_Bool)loadDataForKey:(NSString *)arg1 completion:(void (^)(_Bool, NSData *))arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (_Bool)storeData:(NSData *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool))arg3 onQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end
