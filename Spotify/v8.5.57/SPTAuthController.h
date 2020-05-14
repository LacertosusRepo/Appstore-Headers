//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthLoginTaskDelegate-Protocol.h"

@class NSMapTable, NSString, SPTAuthLoginController;
@protocol SPTConnectivityAsyncScheduler;

@interface SPTAuthController : NSObject <SPTAuthLoginTaskDelegate>
{
    SPTAuthLoginController *_controller;
    id <SPTConnectivityAsyncScheduler> _scheduler;
    NSMapTable *_taskMap;
}

@property(retain, nonatomic) NSMapTable *taskMap; // @synthesize taskMap=_taskMap;
@property(nonatomic) __weak id <SPTConnectivityAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak SPTAuthLoginController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)loginTask:(id)arg1 didRequireSignup:(id)arg2;
- (void)loginTask:(id)arg1 didRequireCode:(id)arg2;
- (void)loginTask:(id)arg1 didRequireBootstrapUsingWebgateSession:(id)arg2 completionCallback:(CDUnknownBlockType)arg3;
- (void)loginTask:(id)arg1 didFinishWithSession:(id)arg2;
- (void)loginTask:(id)arg1 didFailWithError:(id)arg2;
- (void)loginTask:(id)arg1 didFinishWithWebgateSession:(id)arg2;
- (CDUnknownBlockType)completionForTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authWithOneTimeTokenCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authWithCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLoginController:(id)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

