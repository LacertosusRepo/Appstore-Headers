//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEGradientStyle, GLUEGradientView, GLUEImageView, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTLanguageOnboardingGridCell : UICollectionViewCell <GLUEStyleable>
{
    _Bool _picked;
    GLUEImageView *_coverImageView;
    GLUELabel *_languageNameLabel;
    GLUEImageView *_badgeImageView;
    GLUEGradientView *_overlayGradientView;
    GLUEGradientStyle *_overlayGradientViewStyle;
    GLUEGradientStyle *_pickedOverlayGradientViewStyle;
    NSLayoutConstraint *_badgeImageViewTopMarginConstraint;
    NSLayoutConstraint *_badgeImageViewTrailingMarginConstraint;
    NSLayoutConstraint *_languageNameLabelTopMarginConstraint;
    NSLayoutConstraint *_languageNameLabelLeadingMarginConstraint;
    NSLayoutConstraint *_languageNameLabelTrailingMarginConstraint;
    NSLayoutConstraint *_badgeImageViewWidthConstraint;
    NSLayoutConstraint *_badgeImageViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *badgeImageViewHeightConstraint; // @synthesize badgeImageViewHeightConstraint=_badgeImageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeImageViewWidthConstraint; // @synthesize badgeImageViewWidthConstraint=_badgeImageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *languageNameLabelTrailingMarginConstraint; // @synthesize languageNameLabelTrailingMarginConstraint=_languageNameLabelTrailingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *languageNameLabelLeadingMarginConstraint; // @synthesize languageNameLabelLeadingMarginConstraint=_languageNameLabelLeadingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *languageNameLabelTopMarginConstraint; // @synthesize languageNameLabelTopMarginConstraint=_languageNameLabelTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeImageViewTrailingMarginConstraint; // @synthesize badgeImageViewTrailingMarginConstraint=_badgeImageViewTrailingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeImageViewTopMarginConstraint; // @synthesize badgeImageViewTopMarginConstraint=_badgeImageViewTopMarginConstraint;
@property(retain, nonatomic) GLUEGradientStyle *pickedOverlayGradientViewStyle; // @synthesize pickedOverlayGradientViewStyle=_pickedOverlayGradientViewStyle;
@property(retain, nonatomic) GLUEGradientStyle *overlayGradientViewStyle; // @synthesize overlayGradientViewStyle=_overlayGradientViewStyle;
@property(readonly, nonatomic) GLUEGradientView *overlayGradientView; // @synthesize overlayGradientView=_overlayGradientView;
@property(readonly, nonatomic) GLUEImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(nonatomic, getter=isPicked) _Bool picked; // @synthesize picked=_picked;
@property(readonly, nonatomic) GLUELabel *languageNameLabel; // @synthesize languageNameLabel=_languageNameLabel;
@property(readonly, nonatomic) GLUEImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (id)badgeImageWithStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updatePicked;
- (void)setUpConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

