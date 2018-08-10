//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InAppPurchaseController.h"
#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "SPTDataLoaderDelegate.h"
#import "SPTProductStateObserver.h"

@class InAppPurchaseModel, NSMutableArray, NSString, NSTimer, SKProductsRequest, SPSession, SPTDataLoader, SPTHermesController, SPTIAPControllerLogging;

@interface InAppPurchaseControllerImplementation : NSObject <SKPaymentTransactionObserver, SKProductsRequestDelegate, SPTProductStateObserver, SPTDataLoaderDelegate, InAppPurchaseController>
{
    _Bool _verifyingReceipt;
    _Bool _displayedVerificationError;
    InAppPurchaseModel *_model;
    SKProductsRequest *_productsRequest;
    SPSession *_session;
    SPTHermesController *_hermes;
    id <SPTLocalSettings> _localSettings;
    id <SPTProductState> _productState;
    SPTDataLoader *_dataLoader;
    SPTIAPControllerLogging *_logger;
    id <SPTAlertController> _alertController;
    CDUnknownBlockType _purchaseCallback;
    NSMutableArray *_storeProductsCallbacks;
    NSTimer *_verifyRetryTimer;
    NSString *_clientLoggingSource;
}

@property(readonly, copy, nonatomic) NSString *clientLoggingSource; // @synthesize clientLoggingSource=_clientLoggingSource;
@property(nonatomic) _Bool displayedVerificationError; // @synthesize displayedVerificationError=_displayedVerificationError;
@property(nonatomic, getter=isVerifyingReceipt) _Bool verifyingReceipt; // @synthesize verifyingReceipt=_verifyingReceipt;
@property(retain, nonatomic) NSTimer *verifyRetryTimer; // @synthesize verifyRetryTimer=_verifyRetryTimer;
@property(retain, nonatomic) NSMutableArray *storeProductsCallbacks; // @synthesize storeProductsCallbacks=_storeProductsCallbacks;
@property(copy, nonatomic) CDUnknownBlockType purchaseCallback; // @synthesize purchaseCallback=_purchaseCallback;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTIAPControllerLogging *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTHermesController *hermes; // @synthesize hermes=_hermes;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SKProductsRequest *productsRequest; // @synthesize productsRequest=_productsRequest;
@property(retain, nonatomic) InAppPurchaseModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentTransport;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)logEvent:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
- (void)handleProductAvailability:(_Bool)arg1;
- (void)cleanUpAfterPurchase;
- (void)transactionFailed:(id)arg1;
- (id)reasonFromError:(id)arg1;
- (void)handlePaymentVerification:(id)arg1 error:(id)arg2;
- (void)verifyTransactionReceipt:(id)arg1;
- (void)verifyStoredTransactionReceipt;
- (void)startRetryVerifyReceiptTimer;
- (void)transactionPurchased:(id)arg1;
- (void)handleAvailableProductsResponse:(id)arg1 error:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)attemptPurchaseWithProduct:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)fetchInAppPurchaseProductInformationWithCallback:(CDUnknownBlockType)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)purchasePremiumProductWithCallback:(CDUnknownBlockType)arg1;
- (void)purchasePremiumProduct;
- (void)loadAvailableProductsWithCallback:(CDUnknownBlockType)arg1;
- (void)handleAvailabilityCheckResponseWithCallback:(CDUnknownBlockType)arg1;
- (void)checkPremiumProductAvailabilityWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)availablePremiumProductIncludes30DayTrial;
- (_Bool)isPremiumProductAvailable;
@property(readonly, nonatomic, getter=isPremiumUser) _Bool premiumUser;
- (id)localizedPremiumProductPrice;
- (void)clearSettings;
- (void)dealloc;
- (id)initWithSession:(id)arg1 hermes:(id)arg2 localSettings:(id)arg3 productState:(id)arg4 logCenter:(id)arg5 dataLoader:(id)arg6 alertController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

