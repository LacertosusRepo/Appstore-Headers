//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSAttributedString, NSLayoutConstraint, NSString, SPTHomeUILabel, UIView;

@interface SPTHomeUILargeRowView : GLUEStatefulView <GLUEStyleable>
{
    NSString *_title;
    GLUEImageView *_imageView;
    UIView *_contentView;
    GLUELabel *_titleLabel;
    SPTHomeUILabel *_subtitleLabel;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_contentBottomConstraint;
    NSLayoutConstraint *_contentLeftConstraint;
    NSLayoutConstraint *_contentRightConstraint;
    NSLayoutConstraint *_imageMaxWidthConstraint;
    NSLayoutConstraint *_imageToContentConstraint;
    NSLayoutConstraint *_subtitleToTitleConstraint;
    NSLayoutConstraint *_titleToContentBottomConstraint;
    NSLayoutConstraint *_subtitleToContentBottomConstraint;
}

+ (double)heightForRowWithTitle:(id)arg1 attributedSubtitle:(id)arg2 containerWidth:(double)arg3 style:(id)arg4;
+ (id)makeLabelStyleWithGLUELabelStyle:(id)arg1;
@property(readonly, nonatomic) NSLayoutConstraint *subtitleToContentBottomConstraint; // @synthesize subtitleToContentBottomConstraint=_subtitleToContentBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *titleToContentBottomConstraint; // @synthesize titleToContentBottomConstraint=_titleToContentBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *subtitleToTitleConstraint; // @synthesize subtitleToTitleConstraint=_subtitleToTitleConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *imageToContentConstraint; // @synthesize imageToContentConstraint=_imageToContentConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *imageMaxWidthConstraint; // @synthesize imageMaxWidthConstraint=_imageMaxWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentRightConstraint; // @synthesize contentRightConstraint=_contentRightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentLeftConstraint; // @synthesize contentLeftConstraint=_contentLeftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentBottomConstraint; // @synthesize contentBottomConstraint=_contentBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property(readonly, nonatomic) SPTHomeUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @dynamic attributedSubtitle;
- (void)prepareForReuse;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

