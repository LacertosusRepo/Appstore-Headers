//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCRpcErrorHandler.h"

@class GSCQueueScheduler, NSDictionary, NSString;

@interface GSCGlobalRpcErrorHandler : NSObject <GSCRpcErrorHandler>
{
    NSDictionary *_reasonStrToHandlerMap;
    id <GSCRpcErrorHandler> _defaultErrorHandler;
    GSCQueueScheduler *_scheduler;
}

+ (id)createReasonsStrToHandlerMap:(id)arg1;
+ (id)reasonFromError:(id)arg1;
+ (id)reasonFromPb:(id)arg1;
+ (_Bool)isInvalidGrantError:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)handleError:(id)arg1 forRequest:(id)arg2;
- (id)init;
- (id)initWithHandlers:(id)arg1 withDefaultHandler:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
