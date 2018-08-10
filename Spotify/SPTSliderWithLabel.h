//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSlider.h"

@class NSString, SPTSliderLabelView, UIView;

@interface SPTSliderWithLabel : SPTSlider
{
    UIView *_animationView;
    SPTSliderLabelView *_labelView;
    NSString *_valueFormat;
    CDUnknownBlockType _valueFormatter;
    _Bool _labelHidden;
}

@property(nonatomic) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)layoutSubviews;
- (void)touchUp;
- (void)valueChanged;
- (void)touchDown;
@property(copy, nonatomic) CDUnknownBlockType valueFormatter;
@property(retain, nonatomic) NSString *valueFormat;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 animationView:(id)arg2;
- (void)commonSetup;

@end

