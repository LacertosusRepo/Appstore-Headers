//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

@class GLUELabel;

@interface EXP_HUGS2TextComponentView : EXP_HUGSThemableComponentView
{
    GLUELabel *_labelView;
}

+ (unsigned long long)numberOfLinesForModel:(id)arg1;
+ (id)textStyleForModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUELabel *labelView; // @synthesize labelView=_labelView;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

