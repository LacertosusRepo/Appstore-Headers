//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTBrowseUIPlayableHeroCardStyle, UIImage, UIImageView;

@interface SPTBrowseUIPlayableHeroCardView : UIView <GLUEStyleable>
{
    _Bool _playing;
    NSString *_details;
    GLUEButton *_playPauseButton;
    GLUEGradientView *_gradientView;
    UIView *_cardView;
    UIImageView *_imageView;
    UIView *_detailsView;
    UIImageView *_accessoryImageView;
    GLUELabel *_detailsLabel;
    NSLayoutConstraint *_gradientTopConstraint;
    NSLayoutConstraint *_cardTopConstraint;
    NSLayoutConstraint *_cardBottomConstraint;
    NSLayoutConstraint *_cardLeadingConstraint;
    NSLayoutConstraint *_cardHeightConstraint;
    NSLayoutConstraint *_accessoryImageTopConstraint;
    NSLayoutConstraint *_accessoryImageRightConstraint;
    NSLayoutConstraint *_detailsLabelLeftConstraint;
    NSLayoutConstraint *_detailsLabelRightConstraint;
    NSLayoutConstraint *_detailsLabelTopConstraint;
    NSLayoutConstraint *_detailsLabelBottomConstraint;
    NSLayoutConstraint *_playPauseButtonWidthConstraint;
    NSLayoutConstraint *_playPauseButtonHeightConstraint;
    NSLayoutConstraint *_playPauseButtonTopConstraint;
    SPTBrowseUIPlayableHeroCardStyle *_style;
}

@property(copy, nonatomic) SPTBrowseUIPlayableHeroCardStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSLayoutConstraint *playPauseButtonTopConstraint; // @synthesize playPauseButtonTopConstraint=_playPauseButtonTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *playPauseButtonHeightConstraint; // @synthesize playPauseButtonHeightConstraint=_playPauseButtonHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *playPauseButtonWidthConstraint; // @synthesize playPauseButtonWidthConstraint=_playPauseButtonWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsLabelBottomConstraint; // @synthesize detailsLabelBottomConstraint=_detailsLabelBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsLabelTopConstraint; // @synthesize detailsLabelTopConstraint=_detailsLabelTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsLabelRightConstraint; // @synthesize detailsLabelRightConstraint=_detailsLabelRightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsLabelLeftConstraint; // @synthesize detailsLabelLeftConstraint=_detailsLabelLeftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *accessoryImageRightConstraint; // @synthesize accessoryImageRightConstraint=_accessoryImageRightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *accessoryImageTopConstraint; // @synthesize accessoryImageTopConstraint=_accessoryImageTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *cardHeightConstraint; // @synthesize cardHeightConstraint=_cardHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *cardLeadingConstraint; // @synthesize cardLeadingConstraint=_cardLeadingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *cardBottomConstraint; // @synthesize cardBottomConstraint=_cardBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *cardTopConstraint; // @synthesize cardTopConstraint=_cardTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *gradientTopConstraint; // @synthesize gradientTopConstraint=_gradientTopConstraint;
@property(readonly, nonatomic) GLUELabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) GLUEButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(copy, nonatomic) NSString *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *accessibilityText;
@property(retain, nonatomic) UIImage *accessoryImage;
- (void)glue_applyStyle:(id)arg1;
- (void)updatePlayPauseButton;
- (void)addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

