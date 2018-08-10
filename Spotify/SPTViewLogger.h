//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTViewLogger.h"

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SPTViewLogger : NSObject <SPTViewLogger>
{
    long long _state;
    id <SPTViewLoggerTransport> _transport;
    NSURL *_viewURI;
    NSString *_pageId;
    struct __CFRunLoopObserver *_observer;
    NSMutableDictionary *_steps;
    NSNumber *_viewStartedLoadingAt;
}

@property(retain, nonatomic) NSNumber *viewStartedLoadingAt; // @synthesize viewStartedLoadingAt=_viewStartedLoadingAt;
@property(retain, nonatomic) NSMutableDictionary *steps; // @synthesize steps=_steps;
@property(nonatomic) struct __CFRunLoopObserver *observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <SPTViewLoggerTransport> transport; // @synthesize transport=_transport;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)logViewLoadingRendered;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDataDidFailToLoadWithError:(id)arg1 pageIdentifier:(id)arg2;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (void)logViewLoadWithStepName:(id)arg1 timeSinceStart:(double)arg2 isTerminalStep:(_Bool)arg3;
- (double)durationSinceStart:(id)arg1;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 viewURI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

