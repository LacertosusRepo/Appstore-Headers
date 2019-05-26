//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTAdOverlayContentUnitView-Protocol.h"

@class GLUEGradientView, NSString, SPTAdOverlayActionButton, SPTTheme, UIImageView;

@interface SPTAdOverlayBaseContentView : UIView <SPTAdOverlayContentUnitView>
{
    SPTTheme *_theme;
    SPTAdOverlayActionButton *_actionButton;
    UIImageView *_backgroundImageView;
    GLUEGradientView *_gradientOverlayView;
}

@property(readonly, nonatomic) GLUEGradientView *gradientOverlayView; // @synthesize gradientOverlayView=_gradientOverlayView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) SPTAdOverlayActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)addConstraints;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
