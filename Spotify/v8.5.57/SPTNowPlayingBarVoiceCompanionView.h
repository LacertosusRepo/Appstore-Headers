//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTTheme;
@protocol GLUEAnimationLoading><GLUEAnimationControlling;

@interface SPTNowPlayingBarVoiceCompanionView : UIView
{
    UIView *_circleView;
    struct UIView *_animationView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView<GLUEAnimationLoading><GLUEAnimationControlling> *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithTheme:(id)arg1;

@end

