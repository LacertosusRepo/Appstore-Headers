//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"

@class GLUEGradientView, GLUELabel, UIView;
@protocol EXP_HUBComponentEventHandler, GLUETheme;

@interface SPTPremiumDestinationPlanComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> eventHandler;
    id <GLUETheme> _theme;
    UIView *_contentView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUEGradientView *_gradientView;
}

+ (id)gradientStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (id)buttonStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (id)subtitleLabelStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (id)titleLabelStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (double)buttonHeightForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3 style:(id)arg4;
+ (double)subtitleLabelHeightForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3 style:(id)arg4;
+ (double)titleLabelHeightForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3 style:(id)arg4;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)configureSubtitleWithModel:(id)arg1 labelStyle:(id)arg2;
- (void)configureTitleWithModel:(id)arg1 labelStyle:(id)arg2;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

