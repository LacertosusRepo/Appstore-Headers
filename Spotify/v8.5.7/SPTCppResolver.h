//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTResolver-Protocol.h"

@class NSString;

@interface SPTCppResolver : NSObject <SPTResolver>
{
    struct Resolve _resolve;
    function_b41bc498 _schedule;
    struct shared_ptr<void> _resolver_lifetime;
    function_b41bc498 _dispatch;
    struct vector<(anonymous namespace)::LifetimeStorageEntry, std::__1::allocator<(anonymous namespace)::LifetimeStorageEntry>> _lifetimes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resolve:(id)arg1 onValue:(CDUnknownBlockType)arg2 onClose:(CDUnknownBlockType)arg3;
- (void)scheduleCleanup;
- (void)cleanup;
- (void)invalidate;
- (id)initWithResolve:(const struct Resolve *)arg1 schedule:(const function_b41bc498 *)arg2 dispatch:(const function_b41bc498 *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
