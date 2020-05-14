//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTEntityHeaderViewController.h"

@class CAGradientLayer, CALayer, UIScrollView, UIViewController;
@protocol SPTEntityHeaderContentController;

@interface SPTEntityHeaderViewControllerSiblingViewImpl : SPTEntityHeaderViewController
{
    _Bool _atMinimumHeight;
    _Bool _drawDropShadow;
    _Bool _drawBottomLineLayer;
    UIViewController<SPTEntityHeaderContentController> *_contentViewController;
    UIScrollView *_parentScrollView;
    CAGradientLayer *_shadowLayer;
    double _entityHeaderBottomGradientHeight;
    double _entityHeaderScrollIndicatorInsetAdjustmentMetric;
    CALayer *_bottomLineLayer;
    struct CGRect _visibleRect;
    struct UIEdgeInsets _bounceOffsets;
}

@property(retain, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(nonatomic) double entityHeaderScrollIndicatorInsetAdjustmentMetric; // @synthesize entityHeaderScrollIndicatorInsetAdjustmentMetric=_entityHeaderScrollIndicatorInsetAdjustmentMetric;
@property(nonatomic) double entityHeaderBottomGradientHeight; // @synthesize entityHeaderBottomGradientHeight=_entityHeaderBottomGradientHeight;
@property(readonly, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIScrollView *parentScrollView; // @synthesize parentScrollView=_parentScrollView;
- (_Bool)drawBottomLineLayer;
- (_Bool)drawDropShadow;
- (id)contentViewController;
@property(nonatomic) struct UIEdgeInsets bounceOffsets; // @synthesize bounceOffsets=_bounceOffsets;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic, getter=isAtMinimumHeight) _Bool atMinimumHeight; // @synthesize atMinimumHeight=_atMinimumHeight;
- (void).cxx_destruct;
- (id)supplementaryView;
- (struct CGRect)bottomLineLayerFrame;
- (struct CGRect)dropShadowFrame;
- (void)repositionViewForceUpdate:(_Bool)arg1;
- (void)parentScrollViewDidChangeContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardownObservations;
- (void)setupObservations;
- (void)viewDidLayoutSubviews;
- (double)dropShadowHeight;
- (void)attachToScrollView:(id)arg1 inViewController:(id)arg2;
- (struct CGRect)boundsIncludingEdgeInsets;
- (struct CGRect)boundsExcludingEdgeInsets;
- (struct CGRect)frameIncludingEdgeInsets;
- (struct CGRect)frameExcludingEdgeInsets;
- (struct UIEdgeInsets)edgeInsets;
- (void)atMinimumHeightDidUpdate:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)updateVisibleRect:(_Bool)arg1;
- (void)updateBounceOffsets:(_Bool)arg1;
- (void)forceLayoutUpdate;
- (double)minimumHeight;
- (void)setDrawBottomLineLayer:(_Bool)arg1;
- (void)setDrawDropShadow:(_Bool)arg1;
- (void)removeFromParentViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applyThemeLayout;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1;

@end

