//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTBannerItem;
@protocol SPTBannerPresentationManagerTicket, SPTBannerPresentationObserver;

@protocol SPTBannerPresentationManager <NSObject>
@property(readonly, nonatomic) _Bool hasQueuedBanner;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)removeObserver:(id <SPTBannerPresentationObserver>)arg1;
- (void)addObserver:(id <SPTBannerPresentationObserver>)arg1;
- (void)resume;
- (void)suspend;
- (void)suspendAndHideCurrentlyPresentedBanner:(_Bool)arg1;
- (void)dismissOrUnqueueBannerItemForTicket:(id <SPTBannerPresentationManagerTicket>)arg1 animated:(_Bool)arg2;
- (void)dismissOrUnqueueBannerItemForTicket:(id <SPTBannerPresentationManagerTicket>)arg1;
- (id <SPTBannerPresentationManagerTicket>)queueBannerItemForPresentation:(SPTBannerItem *)arg1 statusChangeBlock:(void (^)(id <SPTBannerPresentationManagerTicket>, long long))arg2;
@end
