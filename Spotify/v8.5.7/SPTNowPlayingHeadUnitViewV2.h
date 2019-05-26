//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SPTNowPlayingButton, SPTTheme, UIButton, UILabel;
@protocol SPTNowPlayingPlayButton;

@interface SPTNowPlayingHeadUnitViewV2 : UIView
{
    SPTNowPlayingButton<SPTNowPlayingPlayButton> *_playPauseButton;
    UIButton *_leftSecondaryButton;
    UIButton *_rightSecondaryButton;
    UIButton *_leftTertiaryButton;
    UIButton *_rightTertiaryButton;
    UILabel *_leftAccessoryIndicator;
    UILabel *_rightAccessoryIndicator;
    SPTTheme *_theme;
    NSMutableArray *_layoutConstraints;
}

@property(retain, nonatomic) NSMutableArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *rightAccessoryIndicator; // @synthesize rightAccessoryIndicator=_rightAccessoryIndicator;
@property(retain, nonatomic) UILabel *leftAccessoryIndicator; // @synthesize leftAccessoryIndicator=_leftAccessoryIndicator;
@property(retain, nonatomic) UIButton *rightTertiaryButton; // @synthesize rightTertiaryButton=_rightTertiaryButton;
@property(retain, nonatomic) UIButton *leftTertiaryButton; // @synthesize leftTertiaryButton=_leftTertiaryButton;
@property(retain, nonatomic) UIButton *rightSecondaryButton; // @synthesize rightSecondaryButton=_rightSecondaryButton;
@property(retain, nonatomic) UIButton *leftSecondaryButton; // @synthesize leftSecondaryButton=_leftSecondaryButton;
@property(retain, nonatomic) SPTNowPlayingButton<SPTNowPlayingPlayButton> *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void).cxx_destruct;
- (void)forceUpdateConstraints;
- (void)updateConstraints;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithTheme:(id)arg1;

@end

