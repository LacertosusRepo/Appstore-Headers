//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMLayout, IMLinearGradientView, UIColor;

@interface IMCellProgressGradientView : UIView
{
    UIView *progressTop;
    IMLinearGradientView *progressGradient;
    UIView *progressRest;
    IMLayout *layout;
    double progress;
    float lastVisibleProgress;
}

@property(nonatomic) double progress; // @synthesize progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *progressEndColor;
@property(retain, nonatomic) UIColor *progressStartColor;
- (id)layout;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

