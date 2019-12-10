//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface IMHomeBackgroundView : UIView
{
    UIImageView *imageView;
    UIColor *overlayTintColor;
    double overlayAlpha;
}

@property(nonatomic) double overlayAlpha; // @synthesize overlayAlpha;
@property(retain, nonatomic) UIColor *overlayTintColor; // @synthesize overlayTintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)newOverlayView;
- (id)newOverlayViewWithAlpha:(double)arg1 tintColor:(id)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
