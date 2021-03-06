//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface SPTActivityIndicatorView : UIView
{
    _Bool _animating;
    UIColor *_color;
    NSArray *_dotViews;
}

+ (id)activityIndicatorView;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)stopAnimating;
- (void)animateDots;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

