//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SPTBannerView, SPTStatusBarManager;

@interface SPTBannerWindowRootViewController : UIViewController
{
    SPTBannerView *_bannerView;
    id <SPTBannerWindowRootViewControllerDelegate> _delegate;
    SPTStatusBarManager *_statusBarManager;
}

@property(readonly, nonatomic) __weak SPTStatusBarManager *statusBarManager; // @synthesize statusBarManager=_statusBarManager;
@property(nonatomic) __weak id <SPTBannerWindowRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (double)intrinsicBannerViewHeight;
- (double)bannerTopOffset;
- (void)viewDidLayoutSubviews;
- (void)updateBannerViewFrame;
- (void)viewDidLoad;
- (id)initWithStatusBarManager:(id)arg1;

@end
