//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAccountProductInformationController;

@protocol SPTAccountProductInformationObserver <NSObject>

@optional
- (void)premiumTrialEligibilityDidArriveForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)premiumTrialEligibilityIsSetForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)availableProductDidChangeForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)currentProductDidChangeForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
@end

