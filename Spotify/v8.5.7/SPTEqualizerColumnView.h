//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "SPTThemableView-Protocol.h"

@class CAGradientLayer, CAShapeLayer, NSArray, NSString, UIPanGestureRecognizer;
@protocol SPTEqualizerColumnViewDataSource, SPTThemableViewLayoutDelegate;

@interface SPTEqualizerColumnView : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSArray *_values;
    id <SPTEqualizerColumnViewDataSource> _dataSource;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    CAShapeLayer *_greenLineLayer;
    NSArray *_knobs;
    NSArray *_labels;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

+ (id)equalizerColumnViewWithValues:(id)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *knobs; // @synthesize knobs=_knobs;
@property(retain, nonatomic) CAShapeLayer *greenLineLayer; // @synthesize greenLineLayer=_greenLineLayer;
@property(retain, nonatomic) CAShapeLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak id <SPTEqualizerColumnViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (int)accessibilityValueFromEQValue:(id)arg1;
- (id)eqValueFromAccessibilityValue:(int)arg1;
- (void)incrementKnobView:(id)arg1 byAmount:(int)arg2;
- (void)panGestureRecognizerChanged:(id)arg1;
- (void)applyThemeLayout;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 values:(id)arg2;
- (id)gradientMaskPath;
- (id)greenLinePath;
- (void)reloadData;
- (id)valueFromYCoordinate:(double)arg1;
- (double)yCoordinateFromValue:(id)arg1;
- (double)normaliseModifier;
- (void)redrawValuesWithOldCount:(long long)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

