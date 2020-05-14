//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class CAShapeLayer, NSString, SPTEqualizerColumnView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTEqualizerColumnKnobView : UIView <SPTThemableView>
{
    SPTEqualizerColumnView *_delegate;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    CAShapeLayer *_circleLayer;
}

+ (id)equalizerColumnKnobView;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak SPTEqualizerColumnView *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

