//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAdFeatureFlagChecks;

@protocol SPTAdFeatureFlagChecksObserver <NSObject>
- (void)adsFeatureFlagsDidChange:(SPTAdFeatureFlagChecks *)arg1;

@optional
- (void)adsFeatureFlagsDidLoad:(SPTAdFeatureFlagChecks *)arg1;
@end
