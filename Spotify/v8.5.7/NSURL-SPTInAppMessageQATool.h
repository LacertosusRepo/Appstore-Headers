//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (SPTInAppMessageQATool)
+ (id)spt_qaToolURL;
+ (id)spt_fetchUploadFormForRejectedCreative;
+ (id)spt_rejectCreativeWithID:(id)arg1 usingDevEnabled:(_Bool)arg2;
+ (id)spt_approveCreativeWithID:(id)arg1 usingDevEnabled:(_Bool)arg2;
+ (id)spt_urlForFetchingLocales:(_Bool)arg1;
+ (id)spt_urlForFetchingCreativesUsingDevEnabled:(_Bool)arg1 withCampaignID:(id)arg2 status:(long long)arg3 type:(id)arg4 andLocale:(id)arg5;
@end

