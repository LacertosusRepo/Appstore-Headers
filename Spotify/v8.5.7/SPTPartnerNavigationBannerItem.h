//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTPartnerNavigationBannerView;
@protocol SPTBannerViewDelegate;

@interface SPTPartnerNavigationBannerItem : SPTBannerItem <SPTBannerItemCustomView>
{
    SPTPartnerNavigationBannerView *_bannerView;
    id <SPTBannerViewDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTPartnerNavigationBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (double)presentationDuration;
- (id)initWithBannerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

