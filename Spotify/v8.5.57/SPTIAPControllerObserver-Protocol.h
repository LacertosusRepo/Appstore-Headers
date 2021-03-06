//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTIAPController;

@protocol SPTIAPControllerObserver <NSObject>

@optional
- (void)controller:(id <SPTIAPController>)arg1 didFailPurchaseWithError:(NSError *)arg2;
- (void)controllerDidFinishPurchase:(id <SPTIAPController>)arg1;
- (void)controllerDidStartActivation:(id <SPTIAPController>)arg1;
- (void)controllerDidResumePurchase:(id <SPTIAPController>)arg1;
- (void)controllerDidStartPurchase:(id <SPTIAPController>)arg1;
- (void)controller:(id <SPTIAPController>)arg1 didFailUpdatingProductsWithError:(NSError *)arg2;
- (void)controllerDidFinishUpdatingProducts:(id <SPTIAPController>)arg1;
- (void)controllerDidStartUpdatingProducts:(id <SPTIAPController>)arg1;
@end

