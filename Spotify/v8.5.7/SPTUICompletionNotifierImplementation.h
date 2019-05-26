//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerObserver-Protocol.h"
#import "SPTUICompletionNotifier-Protocol.h"

@class NSMutableArray, NSString, SPTObserverManager;

@interface SPTUICompletionNotifierImplementation : NSObject <SPTMetaViewControllerObserver, SPTUICompletionNotifier>
{
    _Bool _loadingUIComplete;
    NSMutableArray *_deferredBlocks;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic, getter=isLoadingUIComplete) _Bool loadingUIComplete; // @synthesize loadingUIComplete=_loadingUIComplete;
@property(retain, nonatomic) NSMutableArray *deferredBlocks; // @synthesize deferredBlocks=_deferredBlocks;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)sendInitialValueToObserver:(id)arg1;
- (void)addObserver:(id)arg1 sendInitial:(_Bool)arg2;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (void)performBlockWhenLoggedInUIIsLoaded:(CDUnknownBlockType)arg1;
- (id)initWithMetaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
