//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SPTAccesspointRequest <NSObject>
@property(retain) NSObject<OS_dispatch_queue> *completionQueue;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
- (void)cancel;
@end

