//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAccountEligibilityRequestDelegate;

@protocol SPTAccountEligibilityRequest <NSObject>
@property(nonatomic) __weak id <SPTAccountEligibilityRequestDelegate> delegate;
- (void)cancel;
- (void)start;
@end

