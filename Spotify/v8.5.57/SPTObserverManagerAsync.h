//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTObserverManager.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface SPTObserverManagerAsync : SPTObserverManager
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)notifierProxy;
- (id)initWithProtocol:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 forProtocol:(id)arg2;

@end

