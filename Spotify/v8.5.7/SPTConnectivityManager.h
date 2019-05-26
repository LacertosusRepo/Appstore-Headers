//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityManager-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SPTAsyncScheduler;

@interface SPTConnectivityManager : NSObject <SPTConnectivityManager>
{
    struct ConnectivityManager *_connectivityManager;
    struct TimerManager *_timerManager;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct mutex _mutex;
    unsigned long long _nextCallbackTimerId;
    struct unordered_map<unsigned long long, std::__1::shared_ptr<spotify::async::Timer>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<spotify::async::Timer>>>> _callbackTimers;
    id <SPTAsyncScheduler> _scheduler;
}

+ (void)deferCallback:(CDUnknownBlockType)arg1 forConnectivityManager:(id)arg2 callbackQueue:(id)arg3;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool keepAliveAPNetwork;
- (void)setKeepAliveAPNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setAllowNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowNetwork;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowSyncOver3G;
- (void)setConnectionType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
@property long long connectionType;
- (void)addDeferedCallback:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)invalidate;
- (id)initWithCoreConnectivityManager:(struct ConnectivityManager *)arg1 scheduler:(id)arg2 timerManager:(struct TimerManager *)arg3 callbackQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
