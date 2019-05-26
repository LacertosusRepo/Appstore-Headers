//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, SKPaymentTransaction, SKProduct, SPTIAPSimulationSettings;

@protocol SPTIAPController <NSObject>
@property(readonly, nonatomic) SPTIAPSimulationSettings *simulationSettings;
@property(readonly, copy, nonatomic) NSArray *unresolvedTransactions;
@property(readonly, nonatomic) _Bool canMakePurchases;
@property(readonly, copy, nonatomic) NSArray *availableProducts;
- (NSError *)errorForUnresolvedTransaction:(SKPaymentTransaction *)arg1;
- (void)removeObserver:(id <SPTIAPControllerObserver>)arg1;
- (void)addObserver:(id <SPTIAPControllerObserver>)arg1;
- (_Bool)purchaseProduct:(SKProduct *)arg1;
- (void)updateAvailableProducts;
- (_Bool)productIncludes30DayTrialPeriod:(SKProduct *)arg1;
@end
