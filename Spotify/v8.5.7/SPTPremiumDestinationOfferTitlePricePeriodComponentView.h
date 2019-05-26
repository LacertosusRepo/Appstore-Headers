//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationGLUETheme, SPTPremiumDestinationOfferTitlePricePeriodStyle, UILayoutGuide;

@interface SPTPremiumDestinationOfferTitlePricePeriodComponentView : EXP_HUBComponentView
{
    SPTPremiumDestinationGLUETheme *_theme;
    SPTPremiumDestinationOfferTitlePricePeriodStyle *_style;
    UILayoutGuide *_layoutGuide;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_accessoryLabel;
}

+ (struct CGSize)labelSizeForContainerViewSize:(struct CGSize)arg1 labelStyle:(id)arg2 text:(id)arg3;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUELabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) SPTPremiumDestinationOfferTitlePricePeriodStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
