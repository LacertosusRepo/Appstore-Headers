//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeViewControllerCache-Protocol.h"

@class NSString, UIViewController;
@protocol SPTDrivingModeViewControllerFactory, SPTNowPlayingContainedViewController;

@interface SPTDrivingModeViewControllerCacheImplementation : NSObject <SPTDrivingModeViewControllerCache>
{
    id <SPTDrivingModeViewControllerFactory> _factory;
    UIViewController<SPTNowPlayingContainedViewController> *_navigationBarUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_informationUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_durationUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_defaultHeadUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_podcastHeadUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_feedbackHeadUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_footerUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_queueHeadUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_adsHeadUnitViewController;
}

@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *adsHeadUnitViewController; // @synthesize adsHeadUnitViewController=_adsHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *queueHeadUnitViewController; // @synthesize queueHeadUnitViewController=_queueHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *footerUnitViewController; // @synthesize footerUnitViewController=_footerUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *feedbackHeadUnitViewController; // @synthesize feedbackHeadUnitViewController=_feedbackHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *podcastHeadUnitViewController; // @synthesize podcastHeadUnitViewController=_podcastHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *defaultHeadUnitViewController; // @synthesize defaultHeadUnitViewController=_defaultHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *durationUnitViewController; // @synthesize durationUnitViewController=_durationUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *informationUnitViewController; // @synthesize informationUnitViewController=_informationUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *navigationBarUnitViewController; // @synthesize navigationBarUnitViewController=_navigationBarUnitViewController;
@property(readonly, nonatomic) __weak id <SPTDrivingModeViewControllerFactory> factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)clearCache;
- (id)provideAdsHeadUnitViewController;
- (id)provideQueueHeadUnitViewController;
- (id)provideFooterUnitViewController;
- (id)provideFeedbackHeadUnitViewController;
- (id)providePodcastHeadUnitViewController;
- (id)provideDefaultHeadUnitViewController;
- (id)provideDurationUnitViewController;
- (id)provideInformationUnitViewController;
- (id)provideNavigationBarUnitViewController;
- (id)initWithViewControllerFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
