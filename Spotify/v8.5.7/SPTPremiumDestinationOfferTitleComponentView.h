//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationGLUETheme, SPTPremiumDestinationOfferTitleStyle;

@interface SPTPremiumDestinationOfferTitleComponentView : EXP_HUBComponentView
{
    SPTPremiumDestinationGLUETheme *_theme;
    SPTPremiumDestinationOfferTitleStyle *_style;
    GLUELabel *_label;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUELabel *label; // @synthesize label=_label;
@property(retain, nonatomic) SPTPremiumDestinationOfferTitleStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

