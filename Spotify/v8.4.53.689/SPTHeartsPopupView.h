//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class CALayer, CAShapeLayer, GLUEButton, NSDictionary, NSString, UILabel, UIStackView;

@interface SPTHeartsPopupView : UIView <GLUEStyleable>
{
    GLUEButton *_undoButton;
    id <SPTHeartsPopupStyle> _style;
    id <SPTHeartsRecommendationStyle> _elementStyle;
    id <GLUEImageLoader> _glueImageLoader;
    NSDictionary *_contentConstraints;
    UIView *_containerView;
    UIStackView *_contentView;
    UIStackView *_artistsView;
    UILabel *_titleLabel;
    CAShapeLayer *_arrowLayer;
    CALayer *_topBorderLayer;
    CALayer *_maskLayer;
    double _arrowXPosition;
}

@property(nonatomic) double arrowXPosition; // @synthesize arrowXPosition=_arrowXPosition;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *topBorderLayer; // @synthesize topBorderLayer=_topBorderLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *artistsView; // @synthesize artistsView=_artistsView;
@property(retain, nonatomic) UIStackView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTHeartsRecommendationStyle> elementStyle; // @synthesize elementStyle=_elementStyle;
@property(retain, nonatomic) id <SPTHeartsPopupStyle> style; // @synthesize style=_style;
@property(retain, nonatomic) GLUEButton *undoButton; // @synthesize undoButton=_undoButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateLayers;
- (void)updateConstraintsValues;
- (void)addLayoutConstraints;
- (void)applyStyle;
- (void)setupLayers;
- (void)setupViewsWithUndoText:(id)arg1;
- (void)updateArrowCenter:(double)arg1;
- (void)updateContentWithTitle:(id)arg1 recommendations:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(id)arg1 recommendationElementStyle:(id)arg2 imageLoader:(id)arg3 title:(id)arg4 recommendations:(id)arg5 undoText:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

