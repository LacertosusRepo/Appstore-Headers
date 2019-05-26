//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SPTNowPlayingMarqueeLabel, SPTTheme, UIButton;

@interface SPTNowPlayingNavigationBarViewV2 : UIView
{
    SPTNowPlayingMarqueeLabel *_titleLabel;
    SPTNowPlayingMarqueeLabel *_subtitleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    SPTTheme *_theme;
    NSLayoutConstraint *_titleCenterConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleCenterConstraint; // @synthesize titleCenterConstraint=_titleCenterConstraint;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraintsForSubtitle:(_Bool)arg1;
- (void)setupRightButtonConstraints;
- (void)setupLeftButtonConstraints;
- (void)setupSubtitleLabelConstraints;
- (void)setupTitleLabelConstraints;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (id)initWithTheme:(id)arg1;

@end
