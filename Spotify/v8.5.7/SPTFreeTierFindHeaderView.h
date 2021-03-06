//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientView, NSLayoutConstraint, SPTFreeTierFindLogger, UIButton;
@protocol GLUETheme, SPTFreeTierFindHeaderViewDelegate;

@interface SPTFreeTierFindHeaderView : UIView
{
    id <SPTFreeTierFindHeaderViewDelegate> _delegate;
    UIView *_backgroundView;
    id <GLUETheme> _theme;
    SPTFreeTierFindLogger *_logger;
    UIButton *_findHeaderButton;
    UIButton *_microphoneButton;
    GLUEGradientView *_backgroundGradientView;
    GLUEGradientView *_backgroundOverlayView;
    NSLayoutConstraint *_topMicrophoneConstraint;
    NSLayoutConstraint *_searchBarRightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *searchBarRightConstraint; // @synthesize searchBarRightConstraint=_searchBarRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topMicrophoneConstraint; // @synthesize topMicrophoneConstraint=_topMicrophoneConstraint;
@property(retain, nonatomic) GLUEGradientView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) UIButton *findHeaderButton; // @synthesize findHeaderButton=_findHeaderButton;
@property(readonly, nonatomic) SPTFreeTierFindLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <SPTFreeTierFindHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parentContentOffsetDidChange:(struct CGPoint)arg1;
- (void)didTapMicrophoneButton;
- (void)didTapSearchButton;
- (void)updateButtonWithTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)addFindHeaderButton;
- (void)addMicrophoneButton;
- (void)setupBackgroundView;
- (void)setupConstraints;
- (void)showMicrophoneButton;
- (id)initWithTheme:(id)arg1 logger:(id)arg2;

@end

