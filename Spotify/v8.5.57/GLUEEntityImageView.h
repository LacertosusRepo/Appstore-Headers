//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEEntityImageStyle, GLUEImageView, NSLayoutConstraint, NSString, UIImageView;

@interface GLUEEntityImageView : UIView <GLUEStyleable>
{
    GLUEEntityImageStyle *_style;
    GLUEImageView *_imageView;
    UIView *_badgeView;
    UIImageView *_iconImageView;
    long long _icon;
    NSLayoutConstraint *_badgeWidthConstraint;
    NSLayoutConstraint *_badgeHeightConstraint;
    NSLayoutConstraint *_iconImageWidthConstraint;
    NSLayoutConstraint *_iconImageHeightConstraint;
    NSLayoutConstraint *_iconImageLeftOffsetConstraint;
    NSLayoutConstraint *_iconImageTopOffsetConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *iconImageTopOffsetConstraint; // @synthesize iconImageTopOffsetConstraint=_iconImageTopOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconImageLeftOffsetConstraint; // @synthesize iconImageLeftOffsetConstraint=_iconImageLeftOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconImageHeightConstraint; // @synthesize iconImageHeightConstraint=_iconImageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconImageWidthConstraint; // @synthesize iconImageWidthConstraint=_iconImageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeHeightConstraint; // @synthesize badgeHeightConstraint=_badgeHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeWidthConstraint; // @synthesize badgeWidthConstraint=_badgeWidthConstraint;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) GLUEEntityImageStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateBadgeViewWithIcon:(long long)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateBadgeView;
- (struct CGPoint)iconOffset;
- (struct CGSize)iconSize;
- (double)badgeRadius;
- (_Bool)shouldDisplayBadge;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

