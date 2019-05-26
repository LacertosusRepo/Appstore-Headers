//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackEventNotifierProxyHolder-Protocol.h"

@class NSMutableArray, NSString, SPTVideoObserverManager;
@protocol OS_dispatch_queue;

@interface SPTVideoPlaybackEventObserverManager : NSObject <SPTVideoPlaybackEventNotifierProxyHolder>
{
    NSMutableArray *_observers;
    SPTVideoObserverManager *_internalObserverManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) SPTVideoObserverManager *internalObserverManager; // @synthesize internalObserverManager=_internalObserverManager;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)createNotifierProxy;
- (void)addObserver:(id)arg1;
- (id)initWithFactories:(id)arg1 playbackIdentity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
