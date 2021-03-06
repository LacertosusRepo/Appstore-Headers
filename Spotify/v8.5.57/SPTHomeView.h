//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEInteractiveAnimation, HUBContainerView, HUBView, NSLayoutConstraint, SPTHomeGradientBackgroundView;
@protocol GLUETheme, HUBImageLoaderFactory, HUBOverlayViewComponentDelegate;

@interface SPTHomeView : UIView
{
    GLUEInteractiveAnimation *_headerAlphaAnimation;
    id <GLUETheme> _theme;
    id <HUBImageLoaderFactory> _imageLoaderFactory;
    HUBContainerView *_containerView;
    NSLayoutConstraint *_heightConstraint;
    SPTHomeGradientBackgroundView *_gradientBackgroundView;
}

@property(retain, nonatomic) SPTHomeGradientBackgroundView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) HUBContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) id <HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUEInteractiveAnimation *headerAlphaAnimation; // @synthesize headerAlphaAnimation=_headerAlphaAnimation;
- (void).cxx_destruct;
- (void)configureHubViewInset;
- (void)configureContainerViewConstraints;
- (void)configureHeaderConstraints;
- (void)setupHeaderAnimation;
- (void)setupHeaderView;
- (void)createDefaultHeader;
- (void)scrollToTop;
@property(nonatomic) __weak id <HUBOverlayViewComponentDelegate> overlayComponentDelegate;
@property(readonly, nonatomic) HUBView *hubView;
- (void)loadViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 imageLoaderFactory:(id)arg3 componentLayoutManager:(id)arg4 componentRegistry:(id)arg5 componentEventHandler:(id)arg6;

@end

