//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAsyncScheduler-Protocol.h"

@class NSRunLoop, NSThread, NSTimer;

@interface SPTCoreSchedulerThread : NSObject <SPTAsyncScheduler>
{
    struct unique_ptr<spotify::async::TimerManager, std::__1::default_delete<spotify::async::TimerManager>> _cppScheduler;
    NSThread *_coreThread;
    NSTimer *_coreTimer;
    NSRunLoop *_coreRunLoop;
}

@property(retain, nonatomic) NSRunLoop *coreRunLoop; // @synthesize coreRunLoop=_coreRunLoop;
@property(retain, nonatomic) NSTimer *coreTimer; // @synthesize coreTimer=_coreTimer;
@property(retain, nonatomic) NSThread *coreThread; // @synthesize coreThread=_coreThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)coreTimerFunc:(id)arg1;
- (void)coreTimerNotify;
- (int)runCoreDispatch;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)postBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOnSameThread;
- (void)performBlock:(CDUnknownBlockType)arg1 withSelector:(SEL)arg2 synchronous:(_Bool)arg3;
- (void)executeBlockRunner:(id)arg1;
- (void)coreThreadFunc;
- (void)coreSchedulingSetup;
- (struct TimerManager *)cppScheduler;
- (void)interruptAndThen:(CDUnknownBlockType)arg1;
- (void)interrupt;
- (id)init;

@end

