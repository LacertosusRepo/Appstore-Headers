//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTIAPControllerLogging : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)willRetryActivationAtDate:(id)arg1;
- (void)transactionRemoved;
- (void)clientHasLegacyControllerReceiptStored;
- (void)ignoreFailedTransactionWithError:(id)arg1;
- (void)resumedInterruptedTransaction:(id)arg1;
- (void)errorPurchasingProduct:(id)arg1;
- (void)cancelPurchasingProduct;
- (void)donePurchasingProduct;
- (void)startActivatingProduct;
- (void)startPurchasingProduct;
- (void)errorLoadingProducts:(id)arg1;
- (void)doneLoadingProducts;
- (void)startLoadingProducts;
- (id)jsonFromError:(id)arg1;
- (void)logEvent:(id)arg1 domain:(id)arg2 json:(id)arg3;
- (void)logEvent:(id)arg1 domain:(id)arg2 json:(id)arg3 legacyContext:(id)arg4;
- (void)console:(SEL)arg1 obj:(id)arg2;
- (void)console:(SEL)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

