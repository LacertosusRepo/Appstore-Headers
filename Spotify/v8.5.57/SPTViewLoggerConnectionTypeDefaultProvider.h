//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLoggerConnectionTypeProvider-Protocol.h"

@class NSString;
@protocol SPTNetworkConnectivityController;

@interface SPTViewLoggerConnectionTypeDefaultProvider : NSObject <SPTViewLoggerConnectionTypeProvider>
{
    id <SPTNetworkConnectivityController> _networkConnectivityController;
}

@property(readonly, nonatomic) __weak id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentConnectionType;
- (id)initWithNetworkConnectivityController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
