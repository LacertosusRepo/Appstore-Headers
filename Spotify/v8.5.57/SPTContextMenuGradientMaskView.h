//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer;

@interface SPTContextMenuGradientMaskView : UIView
{
    CALayer *_maskLayer;
    CALayer *_contentMaskLayer;
    CAGradientLayer *_bottomMaskLayer;
}

@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) CALayer *contentMaskLayer; // @synthesize contentMaskLayer=_contentMaskLayer;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

