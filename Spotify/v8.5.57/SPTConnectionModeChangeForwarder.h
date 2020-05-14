//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMConnectionModeObservable-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSHashTable, NSString;
@protocol SPTNetworkConnectivityController;

@interface SPTConnectionModeChangeForwarder : NSObject <SPTNetworkConnectivityControllerObserver, BMConnectionModeObservable>
{
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long connectionMode;
- (void)dealloc;
- (id)initWithNetworkConnectivityController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
