//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTObserverNotifierProxy.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface SPTObserverNotifierProxyOnQueue : SPTObserverNotifierProxy
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithObservers:(id)arg1 protocol:(id)arg2 onQueue:(id)arg3;

@end

