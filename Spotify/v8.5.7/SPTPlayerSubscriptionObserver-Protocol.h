//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerSubscription, SPTResponse;

@protocol SPTPlayerSubscriptionObserver <NSObject>
- (id)globalPlayerSubscription:(SPTPlayerSubscription *)arg1 parseStateUpdate:(SPTResponse *)arg2;
- (void)globalPlayerSubscription:(SPTPlayerSubscription *)arg1 gotStateUpdate:(id)arg2;
@end

