//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPartnerNavigationBannerViewModel;
@protocol SPTPartnerNavigationIntegration;

@protocol SPTPartnerNavigationBannerViewModelActionHandler <NSObject>
- (void)selectIntegration:(id <SPTPartnerNavigationIntegration>)arg1 forViewModel:(SPTPartnerNavigationBannerViewModel *)arg2;
- (void)selectMoreOptionsForViewModel:(SPTPartnerNavigationBannerViewModel *)arg1;
- (void)dismissBannerForViewModel:(SPTPartnerNavigationBannerViewModel *)arg1;
@end

