//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJAdjustFactory : NSObject
{
}

+ (void)teardown;
+ (void)setMaxDelayStart:(double)arg1;
+ (void)setTesting:(_Bool)arg1;
+ (void)setSdkClickHandlerBackoffStrategy:(id)arg1;
+ (void)setPackageHandlerBackoffStrategy:(id)arg1;
+ (void)setSdkClickHandler:(id)arg1;
+ (void)setAttributionHandler:(id)arg1;
+ (void)setTimerStart:(double)arg1;
+ (void)setTimerInterval:(double)arg1;
+ (void)setSubsessionInterval:(double)arg1;
+ (void)setSessionInterval:(double)arg1;
+ (void)setLogger:(id)arg1;
+ (void)setActivityHandler:(id)arg1;
+ (void)setRequestHandler:(id)arg1;
+ (void)setPackageHandler:(id)arg1;
+ (double)maxDelayStart;
+ (_Bool)testing;
+ (id)sdkClickHandlerForActivityHandler:(id)arg1 startsSending:(_Bool)arg2;
+ (id)attributionHandlerForActivityHandler:(id)arg1 withAttributionPackage:(id)arg2 startsSending:(_Bool)arg3;
+ (id)sdkClickHandlerBackoffStrategy;
+ (id)packageHandlerBackoffStrategy;
+ (double)timerStart;
+ (double)timerInterval;
+ (double)subsessionInterval;
+ (double)sessionInterval;
+ (id)logger;
+ (id)activityHandlerWithConfig:(id)arg1 savedPreLaunch:(id)arg2;
+ (id)requestHandlerForPackageHandler:(id)arg1;
+ (id)packageHandlerForActivityHandler:(id)arg1 startsSending:(_Bool)arg2;

@end

