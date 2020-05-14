//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTColdStartObserver <NSObject>
- (void)logFinishedLoadingCoreFeature:(NSString *)arg1 duration:(double)arg2;
- (void)logAppStartupWithStepName:(NSString *)arg1 categories:(NSString *)arg2 eventType:(long long)arg3 level:(long long)arg4;

@optional
- (void)logAppStartupWithStepName:(NSString *)arg1;
@end

