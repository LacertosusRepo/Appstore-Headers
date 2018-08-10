//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class MDCInkTouchController, NSString, UIImageView, UITapGestureRecognizer, YTLabel;

@interface YTExpansionView : UIView <YTPageStyling>
{
    UIView *_separator;
    UIImageView *_expandArrow;
    YTLabel *_expansionTextLabel;
    UITapGestureRecognizer *_expansionTapRecognizer;
    MDCInkTouchController *_expansionInkTouchController;
}

- (void).cxx_destruct;
- (void)sizeViewsWithWidth:(double)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)removeDidPressTarget;
- (void)setDidPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setLabelText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

