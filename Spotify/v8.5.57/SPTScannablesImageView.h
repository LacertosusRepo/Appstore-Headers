//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTUIBlurView, UIButton;
@protocol SPTAlertController, SPTImageLoader, SPTScannablesOnboardingPresenter;

@interface SPTScannablesImageView : UIImageView <SPTImageLoaderDelegate>
{
    NSURL *_entityURL;
    NSURL *_imageURL;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    SPTScannablesDependencies *_dependencies;
    SPTUIBlurView *_overlayView;
    UIImageView *_overlayImageView;
    UIButton *_saveToCameraRollButton;
    id <SPTAlertController> _alertController;
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) UIButton *saveToCameraRollButton; // @synthesize saveToCameraRollButton=_saveToCameraRollButton;
@property(retain, nonatomic) UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) SPTUIBlurView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) __weak id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)didTapSaveToCameraRollButton;
- (void)overlayViewDismissedWithRecognizer:(id)arg1;
- (void)didTapScannable;
- (void)requestScannableIfNeeded;
- (void)layoutSubviews;
- (void)setupImageView;
- (id)initWithEntityURL:(id)arg1 imageURL:(id)arg2 onboardingPresenter:(id)arg3 authorizationRequester:(id)arg4 dependencies:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

