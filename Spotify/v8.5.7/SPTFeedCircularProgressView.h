//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSLayoutConstraint, UIColor;

@interface SPTFeedCircularProgressView : UIView
{
    double _progress;
    double _borderWidth;
    UIColor *_borderColor;
    CAShapeLayer *_circleLayer;
    NSLayoutConstraint *_contentViewWidthConstraint;
    struct CGSize _size;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateSpinner;
- (id)initWithFrame:(struct CGRect)arg1;

@end
