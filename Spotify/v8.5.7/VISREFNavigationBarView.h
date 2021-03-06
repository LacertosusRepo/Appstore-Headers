//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderViewAnimationProgress-Protocol.h"

@class NSString, TKNLabel, VISREFGradientView;
@protocol VISREFHeaderViewAnimationProgress;

@interface VISREFNavigationBarView : UIView <VISREFHeaderViewAnimationProgress>
{
    double _normalizedFadeStartPosition;
    double _normalizedFadeTime;
    UIView<VISREFHeaderViewAnimationProgress> *_backButton;
    TKNLabel *_titleLabel;
    VISREFGradientView *_overlayGradient;
}

@property(retain, nonatomic) VISREFGradientView *overlayGradient; // @synthesize overlayGradient=_overlayGradient;
@property(retain, nonatomic) TKNLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView<VISREFHeaderViewAnimationProgress> *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) double normalizedFadeTime; // @synthesize normalizedFadeTime=_normalizedFadeTime;
@property(nonatomic) double normalizedFadeStartPosition; // @synthesize normalizedFadeStartPosition=_normalizedFadeStartPosition;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)fullHeaderViewNormalizedProgressUpdate:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setAssociatedColor:(id)arg1;
@property(nonatomic, getter=isVisible) _Bool visibility;
- (void)setupLayout;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

