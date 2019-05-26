//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTBannerView, SPTStatusBarManager;
@protocol SPTBannerWindowRootViewControllerDelegate;

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
