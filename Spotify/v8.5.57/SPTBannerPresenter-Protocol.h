//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTBannerView;

@protocol SPTBannerPresenter <NSObject>
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (void)dismissBannerViewAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentBannerView:(SPTBannerView *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end
