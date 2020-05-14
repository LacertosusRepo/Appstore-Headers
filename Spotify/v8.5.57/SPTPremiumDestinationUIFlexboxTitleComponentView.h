//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationUIGLUETheme;

@interface SPTPremiumDestinationUIFlexboxTitleComponentView : HUBComponentView
{
    GLUELabel *_titleLabel;
    SPTPremiumDestinationUIGLUETheme *_theme;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
