//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTBannerView;
@protocol SPTBannerViewDelegate;

@interface SPTWazeConnectBannerItem : SPTBannerItem <SPTBannerItemCustomView>
{
    id <SPTBannerViewDelegate> _bannerViewDelegate;
}

@property(readonly, nonatomic) __weak id <SPTBannerViewDelegate> bannerViewDelegate; // @synthesize bannerViewDelegate=_bannerViewDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithBannerViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

