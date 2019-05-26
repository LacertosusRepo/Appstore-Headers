//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTAdsMarqueeContentView, SPTTheme;
@protocol SPTAdsMarqueContentViewControllerDelegate;

@interface SPTAdsMarqueContentViewController : UIViewController
{
    id <SPTAdsMarqueContentViewControllerDelegate> _delegate;
    SPTAdsMarqueeContentView *_marqueeContentView;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdsMarqueeContentView *marqueeContentView; // @synthesize marqueeContentView=_marqueeContentView;
@property(nonatomic) __weak id <SPTAdsMarqueContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)didTapInformationTextSuffixWithGestureRecognizer:(id)arg1;
- (void)didTapInformationText:(id)arg1;
- (void)navigateToAlbum:(id)arg1;
- (void)addConstraints;
- (id)initWithTheme:(id)arg1 marqueeEntity:(id)arg2 imageLoader:(id)arg3 featureFlags:(id)arg4 previewData:(id)arg5;

@end

