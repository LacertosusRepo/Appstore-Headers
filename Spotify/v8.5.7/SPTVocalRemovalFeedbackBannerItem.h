//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"
#import "SPTBannerViewDelegate-Protocol.h"

@class NSString, SPTBannerView, SPTVocalRemovalFeedbackBannerViewStyle;

@interface SPTVocalRemovalFeedbackBannerItem : SPTBannerItem <SPTBannerViewDelegate, SPTBannerItemCustomView>
{
    SPTBannerView *_bannerView;
    SPTVocalRemovalFeedbackBannerViewStyle *_bannerViewStyle;
}

@property(retain, nonatomic) SPTVocalRemovalFeedbackBannerViewStyle *bannerViewStyle; // @synthesize bannerViewStyle=_bannerViewStyle;
@property(retain, nonatomic) SPTBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (id)createFeedbackBannerView;
- (id)initWithDelegate:(id)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

