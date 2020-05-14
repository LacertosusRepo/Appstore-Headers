//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTNetworkConnectivityController;

@interface SPTPremiumDestinationCachedUIOfflineDetectionContentOperation : NSObject <SPTNetworkConnectivityControllerObserver, HUBContentOperation>
{
    _Bool _observing;
    id <HUBContentOperationDelegate> _delegate;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
}

@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithNetworkConnectivityController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

