//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView.h"
#import "SPTBannerViewDelegate.h"

@class NSString, SPTBannerView, UIImage;

@interface SPTShareScreenshotBannerItem : SPTBannerItem <SPTBannerViewDelegate, SPTBannerItemCustomView>
{
    SPTBannerView *_bannerView;
    UIImage *_screenshotImage;
    id <SPTShareTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;
@property(retain, nonatomic) SPTBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (id)createShareScreenshotBannerView;
- (id)initWithDelegate:(id)arg1 screenshotImage:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
