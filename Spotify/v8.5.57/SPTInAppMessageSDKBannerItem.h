//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTBannerView, UIView;

@interface SPTInAppMessageSDKBannerItem : SPTBannerItem <SPTBannerItemCustomView>
{
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

