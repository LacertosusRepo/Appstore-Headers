//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSString, SKPayment, SKPaymentQueue, SKPaymentTransaction;
@protocol SPTIAPTransactionRequestDelegate;

@interface SPTIAPTransactionRequest : NSObject <SKPaymentTransactionObserver>
{
    id <SPTIAPTransactionRequestDelegate> _delegate;
    SKPaymentTransaction *_transaction;
    SKPayment *_payment;
    SKPaymentQueue *_paymentQueue;
    long long _lastTransactionState;
}

@property(nonatomic) long long lastTransactionState; // @synthesize lastTransactionState=_lastTransactionState;
@property(retain, nonatomic) SKPaymentQueue *paymentQueue; // @synthesize paymentQueue=_paymentQueue;
@property(retain, nonatomic) SKPayment *payment; // @synthesize payment=_payment;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <SPTIAPTransactionRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)transactionDidUpdate:(id)arg1;
- (void)finishTransaction;
- (void)resumeWithTransaction:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithPaymentQueue:(id)arg1 payment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
