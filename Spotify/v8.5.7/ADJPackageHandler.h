//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADJPackageHandler-Protocol.h"

@class ADJBackoffStrategy, NSMutableArray;
@protocol ADJActivityHandler, ADJLogger, ADJRequestHandler, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ADJPackageHandler : NSObject <ADJPackageHandler>
{
    _Bool _paused;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_semaphore> *_sendingSemaphore;
    id <ADJRequestHandler> _requestHandler;
    NSMutableArray *_packageQueue;
    ADJBackoffStrategy *_backoffStrategy;
    id <ADJActivityHandler> _activityHandler;
    id <ADJLogger> _logger;
}

+ (id)handlerWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) ADJBackoffStrategy *backoffStrategy; // @synthesize backoffStrategy=_backoffStrategy;
@property(retain, nonatomic) NSMutableArray *packageQueue; // @synthesize packageQueue=_packageQueue;
@property(retain, nonatomic) id <ADJRequestHandler> requestHandler; // @synthesize requestHandler=_requestHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sendingSemaphore; // @synthesize sendingSemaphore=_sendingSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)teardownPackageQueueS:(_Bool)arg1;
- (void)writePackageQueueS:(id)arg1;
- (void)readPackageQueueI:(id)arg1;
- (void)updatePackagesI:(id)arg1 sessionParameters:(id)arg2;
- (void)sendNextI:(id)arg1;
- (void)sendFirstI:(id)arg1;
- (void)addI:(id)arg1 package:(id)arg2;
- (void)initI:(id)arg1 activityHandler:(id)arg2 startsSending:(_Bool)arg3;
- (void)teardown:(_Bool)arg1;
- (void)updatePackages:(id)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (void)closeFirstPackage:(id)arg1 activityPackage:(id)arg2;
- (void)sendNextPackage:(id)arg1;
- (void)sendFirstPackage;
- (void)addPackage:(id)arg1;
- (id)initWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;

@end

