//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaymentFailureService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPaymentFailureNotificationController, SPTResubModalController;
@protocol CosmosFeature, SPTAccountService, SPTBannerFeature, SPTContainerService, SPTFeatureFlaggingService, SPTSessionService, SPTUIPresentationService;

@interface SPTPaymentFailureServiceImplementation : NSObject <SPTPaymentFailureService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTAccountService> _accountService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTContainerService> _containerService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTUIPresentationService> _presentationService;
    SPTPaymentFailureNotificationController *_paymentFailureController;
    SPTResubModalController *_resubModalController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTResubModalController *resubModalController; // @synthesize resubModalController=_resubModalController;
@property(retain, nonatomic) SPTPaymentFailureNotificationController *paymentFailureController; // @synthesize paymentFailureController=_paymentFailureController;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTAccountService> accountService; // @synthesize accountService=_accountService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)unloadResubModalController;
- (void)loadResubModalController;
- (void)unloadPaymentFailureNotification;
- (void)loadPaymentFailureNotifications;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

