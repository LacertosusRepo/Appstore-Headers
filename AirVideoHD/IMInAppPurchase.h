//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class NSMutableSet, NSString, SKProduct, SKProductsRequest;

@interface IMInAppPurchase : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableSet *purchased;
    SKProductsRequest *productsRequest;
    SKProduct *unlockEverythingProduct;
    SKProduct *earlyAccessProduct;
    _Bool restoring;
    _Bool restored;
    CDUnknownBlockType callback;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)restorePurchases:(CDUnknownBlockType)arg1;
- (void)purchaseProduct:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)isProductPurchased:(id)arg1;
- (void)provideContentForProductIdentifier:(id)arg1 restore:(_Bool)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (id)titleForProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)init;
- (id)hashIdentifier:(id)arg1;
- (id)allIdentifiers;
- (id)earlyAccessIdentifier;
- (id)unlockEverythingIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

