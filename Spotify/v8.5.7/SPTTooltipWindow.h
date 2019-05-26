//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "SPTThemableView-Protocol.h"

@class NSString, SPTTheme, SPTTooltipView, SPTTooltipWindowBackgroundView, UIView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTTooltipWindow : UIWindow <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTTooltipWindowBackgroundView *_backgroundView;
    SPTTheme *_theme;
    SPTTooltipView *_trackedView;
    UIView *_anchorView;
    UIView *_touchView;
}

@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(retain, nonatomic) SPTTooltipView *trackedView; // @synthesize trackedView=_trackedView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTTooltipWindowBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)sendEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 dimmedWithInteractiveMask:(id)arg3 trackedView:(id)arg4 anchorView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

