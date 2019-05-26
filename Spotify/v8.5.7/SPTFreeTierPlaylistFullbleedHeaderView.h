//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, GLUELabelStyle, NSArray, NSLayoutConstraint, NSString, SPTFreeTierPlaylistFullbleedTextView, UIImageView;

@interface SPTFreeTierPlaylistFullbleedHeaderView : UIView <GLUEStyleable>
{
    _Bool _didSetupConstraints;
    UIImageView *_imageView;
    UIView *_labelContainerView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_infoLabel;
    GLUELabel *_navigationBarLabel;
    GLUEButton *_followButton;
    NSArray *_rightBarButtonItems;
    NSLayoutConstraint *_contentViewTopLayoutConstraint;
    NSLayoutConstraint *_contentViewHeightLayoutConstraint;
    NSLayoutConstraint *_imageViewHeightLayoutConstraint;
    NSLayoutConstraint *_gradientViewHeightLayoutConstraint;
    NSLayoutConstraint *_labelContainerCenterLayoutConstraint;
    NSLayoutConstraint *_navigationBarLabelTopLayoutConstraint;
    UIView *_contentView;
    GLUEGradientView *_gradientView;
    GLUELabelStyle *_descriptionStyle;
    SPTFreeTierPlaylistFullbleedTextView *_descriptionTextView;
    NSArray *_currentRightBarButtonLayoutConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSArray *currentRightBarButtonLayoutConstraints; // @synthesize currentRightBarButtonLayoutConstraints=_currentRightBarButtonLayoutConstraints;
@property(readonly, nonatomic) SPTFreeTierPlaylistFullbleedTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) GLUELabelStyle *descriptionStyle; // @synthesize descriptionStyle=_descriptionStyle;
@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSLayoutConstraint *navigationBarLabelTopLayoutConstraint; // @synthesize navigationBarLabelTopLayoutConstraint=_navigationBarLabelTopLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelContainerCenterLayoutConstraint; // @synthesize labelContainerCenterLayoutConstraint=_labelContainerCenterLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *gradientViewHeightLayoutConstraint; // @synthesize gradientViewHeightLayoutConstraint=_gradientViewHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightLayoutConstraint; // @synthesize imageViewHeightLayoutConstraint=_imageViewHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightLayoutConstraint; // @synthesize contentViewHeightLayoutConstraint=_contentViewHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTopLayoutConstraint; // @synthesize contentViewTopLayoutConstraint=_contentViewTopLayoutConstraint;
@property(copy, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(readonly, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(readonly, nonatomic) GLUELabel *navigationBarLabel; // @synthesize navigationBarLabel=_navigationBarLabel;
@property(readonly, nonatomic) GLUELabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)applyDescriptionStyle;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)layoutRightBarButtonItems;
@property(copy, nonatomic) NSString *descriptionText;
- (id)initWithFrame:(struct CGRect)arg1 collectionConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

