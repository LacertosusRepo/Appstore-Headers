//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerPresenter-Protocol.h"

@class NSString, SPTBannerView;
@protocol SPTMetaViewController;

@interface SPTBannerMenuControllerPresenter : NSObject <SPTBannerPresenter>
{
    id <SPTMetaViewController> _metaViewController;
}

@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (void)dismissBannerViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBannerView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithMetaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

