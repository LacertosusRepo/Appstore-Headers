//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityAsyncScheduler-Protocol.h"

@protocol OS_dispatch_queue;

@interface SPTConnectivityAsyncCustomQueueScheduler : NSObject <SPTConnectivityAsyncScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)postBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOnSameThread;
- (id)init;

@end
