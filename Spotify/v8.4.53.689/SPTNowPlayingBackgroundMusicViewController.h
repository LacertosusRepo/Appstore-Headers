//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, SPTCarouselBackgroundBlurController, SPTCarouselBlurBackgroundView, SPTLayoutConstraintBuilder, SPTNowPlayingBackgroundCornersView, SPTNowPlayingBackgroundGradientView, SPTNowPlayingContentUnitProvider, SPTTheme;

@interface SPTNowPlayingBackgroundMusicViewController : UIViewController
{
    SPTNowPlayingContentUnitProvider *_contentUnitProvider;
    SPTTheme *_theme;
    SPTCarouselBlurBackgroundView *_backgroundView;
    SPTCarouselBackgroundBlurController *_blurController;
    SPTNowPlayingBackgroundGradientView *_backgroundGradientView;
    SPTNowPlayingBackgroundCornersView *_backgroundCornersView;
    SPTLayoutConstraintBuilder *_layout;
    NSArray *_extraLayoutConstraints;
}

@property(retain, nonatomic) NSArray *extraLayoutConstraints; // @synthesize extraLayoutConstraints=_extraLayoutConstraints;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTNowPlayingBackgroundCornersView *backgroundCornersView; // @synthesize backgroundCornersView=_backgroundCornersView;
@property(retain, nonatomic) SPTNowPlayingBackgroundGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) SPTCarouselBackgroundBlurController *blurController; // @synthesize blurController=_blurController;
@property(retain, nonatomic) SPTCarouselBlurBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingContentUnitProvider *contentUnitProvider; // @synthesize contentUnitProvider=_contentUnitProvider;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithContentUnitProvider:(id)arg1 theme:(id)arg2;

@end

