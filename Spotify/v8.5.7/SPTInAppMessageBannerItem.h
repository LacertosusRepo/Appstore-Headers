//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTBannerView, SPTInAppMessageBannerMessageViewModel;

@interface SPTInAppMessageBannerItem : SPTBannerItem <SPTBannerItemCustomView>
{
    SPTInAppMessageBannerMessageViewModel *_bannerViewModel;
}

@property(retain, nonatomic) SPTInAppMessageBannerMessageViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithBannerViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

