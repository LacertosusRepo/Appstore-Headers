//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMHomeBackgroundView, UIImageView;

@interface IMHomeBackgroundOverlayView : UIView
{
    IMHomeBackgroundView *backgroundView;
    UIImageView *imageView;
    UIView *colorOverlayView;
    _Bool registeredForLayoutUpdates;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithBackgroundView:(id)arg1 alpha:(double)arg2 tintColor:(id)arg3;

@end

