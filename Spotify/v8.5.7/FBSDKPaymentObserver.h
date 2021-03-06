//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSString;

@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver>
{
    _Bool _observingTransactions;
}

+ (id)singleton;
+ (void)stopObservingTransactions;
+ (void)startObservingTransactions;
- (void)handleTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)stopObservingTransactions;
- (void)startObservingTransactions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

