//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, SPTInAppMessageNetworkClient;

@protocol SPTInAppMessageNetworkClientObserver <NSObject>

@optional
- (void)networkClient:(SPTInAppMessageNetworkClient *)arg1 didFetchMessage:(NSData *)arg2 triggers:(NSArray *)arg3 triggerType:(NSString *)arg4;
- (void)networkClient:(SPTInAppMessageNetworkClient *)arg1 didFetchTriggers:(NSData *)arg2;
@end
