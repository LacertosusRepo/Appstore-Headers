//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAsyncScheduler;

@interface SPTPlayerProxyContextPlayer : NSObject
{
    id <SPTAsyncScheduler> _scheduler;
    weak_ptr_20886a9c _proxyContextPlayer;
}

@property(nonatomic) weak_ptr_20886a9c proxyContextPlayer; // @synthesize proxyContextPlayer=_proxyContextPlayer;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLocalPlaybackEnabled) _Bool localPlaybackEnabled;
- (id)initWithProxyContextPlayer:(shared_ptr_fa30f844)arg1 scheduler:(id)arg2;

@end

