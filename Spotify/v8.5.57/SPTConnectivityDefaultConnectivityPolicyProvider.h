//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityConnectivityPolicyProvider-Protocol.h"

@class NSString;

@interface SPTConnectivityDefaultConnectivityPolicyProvider : NSObject <SPTConnectivityConnectivityPolicyProvider>
{
    struct unique_ptr<spotify::connectivity::ConnectivityPolicyProvider, std::__1::default_delete<spotify::connectivity::ConnectivityPolicyProvider>> _cpp;
    struct map<__weak id<SPTConnectivityConnectivityPolicyProviderObserver>, spotify::signals::scoped_connection, std::__1::less<__weak id<SPTConnectivityConnectivityPolicyProviderObserver>>, std::__1::allocator<std::__1::pair<const __weak id<SPTConnectivityConnectivityPolicyProviderObserver>, spotify::signals::scoped_connection>>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long connectivityPolicy;
- (id)initWithConnectionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
