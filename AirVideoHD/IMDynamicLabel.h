//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMDynamicView.h"

@class UILabel;

@interface IMDynamicLabel : IMDynamicView
{
    UILabel *label;
    struct UIEdgeInsets insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets;
- (void).cxx_destruct;
- (double)preferredMaxLayoutWidth;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)performLayoutForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label;
- (id)initWithFrame:(struct CGRect)arg1;

@end
