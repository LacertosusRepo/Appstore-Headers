//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPTTheme, UIButton, UILabel, UISlider;

@interface SPTNowPlayingTrackModulesMiniPlayerView : UIView
{
    UISlider *_durationSlider;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) UISlider *durationSlider; // @synthesize durationSlider=_durationSlider;
- (void).cxx_destruct;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

