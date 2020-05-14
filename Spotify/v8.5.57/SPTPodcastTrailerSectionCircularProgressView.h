//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, SPTTheme, UIImageView;

@interface SPTPodcastTrailerSectionCircularProgressView : UIView
{
    double _progress;
    SPTTheme *_catTheme;
    CAShapeLayer *_circleLayer;
    UIImageView *_pauseIconImageView;
}

@property(retain, nonatomic) UIImageView *pauseIconImageView; // @synthesize pauseIconImageView=_pauseIconImageView;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)configureLayout;
- (void)configureAppearance;
- (id)initWithTheme:(id)arg1;

@end

