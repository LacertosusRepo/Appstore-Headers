//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, SPTBrowseUIPromoBackgroundView, SPTBrowseUIPromoImageWithShadowContainer, SPTBrowseUIPromoStyle, UIImage, UIStackView;
@protocol GLUETheme;

@interface SPTBrowseUIPromoView : UIView <GLUEStyleable>
{
    long long _imageDisplayState;
    id <GLUETheme> _theme;
    SPTBrowseUIPromoStyle *_style;
    SPTBrowseUIPromoBackgroundView *_backgroundView;
    UIStackView *_stackView;
    GLUELabel *_backgroundLabel;
    UIView *_spacerView;
    GLUEImageView *_logoImageView;
    SPTBrowseUIPromoImageWithShadowContainer *_mainImageContainer;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_descriptionLabel;
    NSLayoutConstraint *_mainImageHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *mainImageHeightConstraint; // @synthesize mainImageHeightConstraint=_mainImageHeightConstraint;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTBrowseUIPromoImageWithShadowContainer *mainImageContainer; // @synthesize mainImageContainer=_mainImageContainer;
@property(retain, nonatomic) GLUEImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(readonly, nonatomic) GLUELabel *backgroundLabel; // @synthesize backgroundLabel=_backgroundLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SPTBrowseUIPromoBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) SPTBrowseUIPromoStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) long long imageDisplayState; // @synthesize imageDisplayState=_imageDisplayState;
- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *backgroundText;
- (void)setBackgroundImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)setMainImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *mainImage;
- (void)setLogoImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *logoImage;
- (void)glue_applyStyle:(id)arg1;
- (void)prepareForReuse;
- (void)updateLogoImageViewConstraintsForImage:(id)arg1 style:(id)arg2;
- (void)setUpSubviews;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

