//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (SPTUpsellService)
+ (id)spt_trialStartedUpsellURL;
+ (id)spt_showcaseURLWithDeviceIdentifier:(id)arg1 localization:(id)arg2 eligibleForOptinTrial:(_Bool)arg3 endpointVersion:(id)arg4;
+ (id)spt_upsellServiceConfigurationsURLForReasons:(id)arg1 deviceIdentifier:(id)arg2 localization:(id)arg3 eligibleForOptinTrial:(_Bool)arg4 endpointVersion:(id)arg5;
+ (id)spt_upsellServiceBaseURLComponents:(id)arg1;
- (_Bool)spt_isTrialStartedUpsellMessageURL;
@end

