//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSRecursiveLock;
@protocol SPTResolver;

@interface SPTPlayerSubscription : NSObject
{
    id <SPTResolver> _resolver;
    NSHashTable *_observers;
    id _lastState;
    NSRecursiveLock *_observersLock;
}

+ (id)stateRequest;
+ (id)requestHeaders;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)gotStateUpdate:(id)arg1;
- (void)makeObservationRequest;
- (void)accessObservers:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(id)arg1;

@end

