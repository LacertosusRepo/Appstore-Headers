//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (SPTInAppMessageService)
+ (void)createQueryParameterWithTriggerPatterns:(id)arg1 withTriggerURI:(id)arg2 triggerType:(id)arg3 forUrlString:(id)arg4;
+ (id)spt_inAppMessageFeatureFetchBannerMessagesURLForTriggerPatterns:(id)arg1 withTriggerURI:(id)arg2 triggerType:(id)arg3 usingDevEnabled:(_Bool)arg4;
+ (id)spt_inAppMessageFeatureFetchCardMessagesURLForTriggerPatterns:(id)arg1 withTriggerURI:(id)arg2 triggerType:(id)arg3 usingDevEnabled:(_Bool)arg4;
+ (id)spt_inAppMessageFeatureFetchTriggersURLUsingDevEnabled:(_Bool)arg1;
+ (id)spt_inAppMessageFeatureBaseURLComponentsUsingDevEnabled:(_Bool)arg1;
@end

