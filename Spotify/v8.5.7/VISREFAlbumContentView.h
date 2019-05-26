//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VISREFTopAndBodyContentView.h"

#import "VISREFHeaderComponent-Protocol.h"

@class NSLayoutConstraint, NSString, TKNLabel, UIButton, UIImage, UIImageView, UILayoutGuide, UIStackView, UIView;

@interface VISREFAlbumContentView : VISREFTopAndBodyContentView <VISREFHeaderComponent>
{
    UILayoutGuide *_titlePositionLayoutGuide;
    TKNLabel *_titleLabel;
    TKNLabel *_metadataLabel;
    UIButton *_contextButton;
    UIButton *_heartBanButton;
    UIImageView *_imageView;
    UIView *_imageShadowView;
    UIStackView *_buttonsStackView;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_imageTopConstraint;
    NSLayoutConstraint *_imageBottomConstraint;
    NSLayoutConstraint *_noTitleConstraint;
    double _imageTopMargin;
    CDStruct_5a28e70a _imageAlphaProgressRange;
    CDStruct_5a28e70a _titleLabelAlphaProgressRange;
}

@property(nonatomic) CDStruct_5a28e70a titleLabelAlphaProgressRange; // @synthesize titleLabelAlphaProgressRange=_titleLabelAlphaProgressRange;
@property(nonatomic) CDStruct_5a28e70a imageAlphaProgressRange; // @synthesize imageAlphaProgressRange=_imageAlphaProgressRange;
@property(nonatomic) double imageTopMargin; // @synthesize imageTopMargin=_imageTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *noTitleConstraint; // @synthesize noTitleConstraint=_noTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageBottomConstraint; // @synthesize imageBottomConstraint=_imageBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageTopConstraint; // @synthesize imageTopConstraint=_imageTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) UIView *imageShadowView; // @synthesize imageShadowView=_imageShadowView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *heartBanButton; // @synthesize heartBanButton=_heartBanButton;
@property(retain, nonatomic) UIButton *contextButton; // @synthesize contextButton=_contextButton;
@property(retain, nonatomic) TKNLabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) TKNLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILayoutGuide *titlePositionLayoutGuide; // @synthesize titlePositionLayoutGuide=_titlePositionLayoutGuide;
- (void).cxx_destruct;
- (void)updateAccessibilityLabels;
- (void)layoutSubviews;
- (void)updateActionRow;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setMetadata:(id)arg1;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)headerViewDidRemountHeaderComponents:(id)arg1;
- (void)fullHeaderViewNormalizedProgressUpdate:(double)arg1;
- (void)headerViewNormalizedProgressUpdate:(double)arg1;
- (void)updateProgressPositions;
- (void)updateTitleConstraint;
- (void)setupLayout;
- (void)setup;
- (id)initWithNaturalHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

