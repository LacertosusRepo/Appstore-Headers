//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController;

@interface SPTDataLoaderFactoryManager : NSObject <SPTNetworkConnectivityControllerObserver>
{
    SPTDataLoaderFactory *_factory;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

+ (id)dataLoaderFactoryManagerWithFactory:(id)arg1 networkConnectivityController:(id)arg2;
@property(nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTDataLoaderFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (id)initWithFactory:(id)arg1 networkConnectivityController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

