//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSSet, UIView;

@interface HUGSTextComponent : HUGSThemableComponent <HUBComponent>
{
    _Bool _useSmallText;
    UIView *_view;
    double _layoutMargin;
    GLUELabel *_labelView;
    NSLayoutConstraint *_labelTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *labelTopConstraint; // @synthesize labelTopConstraint=_labelTopConstraint;
@property(retain, nonatomic) GLUELabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) _Bool useSmallText; // @synthesize useSmallText=_useSmallText;
@property(readonly, nonatomic) double layoutMargin; // @synthesize layoutMargin=_layoutMargin;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)textStyleUseSmallText:(_Bool)arg1;
- (_Bool)useSmallTextForModel:(id)arg1;
- (id)textStyleForModel:(id)arg1;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (double)extraPaddingWithModel:(id)arg1;
- (_Bool)shouldAddExtraAccessoryButtonPadding:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

@end
