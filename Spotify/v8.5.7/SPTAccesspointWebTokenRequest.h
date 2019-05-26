//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAccesspointRequest.h"

@class NSString, NSURL;
@protocol SPTAsyncScheduler;

@interface SPTAccesspointWebTokenRequest : SPTAccesspointRequest
{
    struct shared_ptr<void *> _shutdown_sentinel;
    NSString *_type;
    NSURL *_url;
    id <SPTAsyncScheduler> _scheduler;
    id _sentinel;
    struct ApHandler *_accesspointHandler;
}

@property(nonatomic) struct ApHandler *accesspointHandler; // @synthesize accesspointHandler=_accesspointHandler;
@property(nonatomic) id sentinel; // @synthesize sentinel=_sentinel;
@property(nonatomic) id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startInternal;
- (void)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 scheduler:(id)arg2 sentinel:(id)arg3 accesspoint:(struct ApHandler *)arg4;
- (id)init;

@end

