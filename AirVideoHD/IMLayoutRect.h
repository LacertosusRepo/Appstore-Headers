//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMLayoutState, UIView;

@interface IMLayoutRect : NSObject
{
    UIView *view;
    IMLayoutState *state;
    double top;
    double left;
    double right;
    double bottom;
    double width;
    double height;
    double centerX;
    double centerY;
    double preferredMaxLayoutWidth;
    double preferredMaxLayoutHeight;
    int lastSetHorizontalAttribute;
    int previouslySetHorizontalAttribute;
    int lastSetVerticalAttribute;
    int previouslySetVerticalAttribute;
    struct CGSize cachedContentSize;
}

- (void).cxx_destruct;
- (id)description;
- (double)valueForAttribute:(int)arg1;
- (void)setValue:(double)arg1 forAttribute:(int)arg2;
- (struct CGRect)buildAlignmentRect;
- (_Bool)valid;
- (double)round:(double)arg1;
@property(nonatomic) double baseline;
- (double)baselineOffset;
- (void)assign:(id)arg1;
- (void)setToViewFrame:(id)arg1;
- (void)moveBy:(struct CGPoint)arg1;
- (void)adjustOffsetBy:(struct CGPoint)arg1;
@property(nonatomic) double preferredMaxLayoutHeight;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(nonatomic) double height;
@property(nonatomic) double width;
- (double)getHeightWithoutFallbackToIntrinsic;
- (double)getWidthWithoutFallbackToIntrinsic;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double left;
@property(nonatomic) double top;
- (struct CGSize)getViewIntrinsicContentSize;
- (void)willSetVerticalAttribute:(int)arg1 toValue:(double)arg2;
- (void)willSetHorizontalAttribute:(int)arg1 toValue:(double)arg2;
- (void)resetAttribute:(int)arg1;
- (id)initWithView:(id)arg1 state:(id)arg2;

@end
