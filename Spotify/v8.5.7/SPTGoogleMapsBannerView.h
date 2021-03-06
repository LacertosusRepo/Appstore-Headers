//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerView.h"

@class NSArray, SPTTheme, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface SPTGoogleMapsBannerView : SPTBannerView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_overlayView;
    UIImageView *_imageView;
    UILabel *_mapsTitleLabel;
    UILabel *_mapsSubLabel;
    UIButton *_mapsCloseButton;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
}

@property(readonly, copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIButton *mapsCloseButton; // @synthesize mapsCloseButton=_mapsCloseButton;
@property(readonly, nonatomic) UILabel *mapsSubLabel; // @synthesize mapsSubLabel=_mapsSubLabel;
@property(readonly, nonatomic) UILabel *mapsTitleLabel; // @synthesize mapsTitleLabel=_mapsTitleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void).cxx_destruct;
- (void)viewTapped;
- (void)closeButtonAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addPulseAnimation;
- (void)setupCloseButton;
- (void)setupOverlayView;
- (void)setupIconImage;
- (void)setupLabels;
- (void)removeUnusedSubviews;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)applyThemeLayout;
- (id)initWithTheme:(id)arg1;

@end

