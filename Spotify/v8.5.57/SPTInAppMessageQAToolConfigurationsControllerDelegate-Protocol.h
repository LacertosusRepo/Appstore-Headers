//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SPTDataLoaderResponse, SPTInAppMessageQAToolConfigurationsController;

@protocol SPTInAppMessageQAToolConfigurationsControllerDelegate <NSObject>
- (void)qaToolConfigurationsController:(SPTInAppMessageQAToolConfigurationsController *)arg1 didFetchLocalesData:(NSData *)arg2;
- (void)qaToolConfigurationsController:(SPTInAppMessageQAToolConfigurationsController *)arg1 returnedEmptyListWithResponse:(SPTDataLoaderResponse *)arg2;
- (void)qaToolConfigurationsController:(SPTInAppMessageQAToolConfigurationsController *)arg1 failedtoFetchDataWithResponse:(SPTDataLoaderResponse *)arg2;
- (void)qaToolConfigurationsController:(SPTInAppMessageQAToolConfigurationsController *)arg1 didFetchMessageCreativesData:(NSData *)arg2 ofType:(long long)arg3;
@end

