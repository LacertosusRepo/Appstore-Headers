//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, SPTIAPControllerRetryManager;

@protocol SPTIAPControllerRetryManagerDelegate <NSObject>
- (void)retryManagerWantsYouToRetry:(SPTIAPControllerRetryManager *)arg1;

@optional
- (void)retryManager:(SPTIAPControllerRetryManager *)arg1 willRetryAtDate:(NSDate *)arg2;
@end
