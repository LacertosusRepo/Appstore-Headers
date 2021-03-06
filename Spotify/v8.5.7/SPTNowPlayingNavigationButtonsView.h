//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SPTTheme, UIButton;

@interface SPTNowPlayingNavigationButtonsView : UIView
{
    NSArray *_leftBarButtons;
    UIButton *_rightBarButton;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) NSArray *leftBarButtons; // @synthesize leftBarButtons=_leftBarButtons;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupConstraints;
- (void)forceUpdateConstraints;
- (void)updateConstraints;
@property(readonly, nonatomic) UIButton *leftBarButton;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

