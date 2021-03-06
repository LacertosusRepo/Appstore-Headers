//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CADisplayLink, CAShapeLayer, NSString, SPTTheme;

@interface SPTCircularProgressView : UIView <CAAnimationDelegate>
{
    _Bool _displayLinkWasPaused;
    id <SPTCircularProgressViewDataSource> _dataSource;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_backgroundStrokeShapeLayer;
    CADisplayLink *_displayLink;
    SPTTheme *_theme;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool displayLinkWasPaused; // @synthesize displayLinkWasPaused=_displayLinkWasPaused;
@property(nonatomic) __weak SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAShapeLayer *backgroundStrokeShapeLayer; // @synthesize backgroundStrokeShapeLayer=_backgroundStrokeShapeLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) __weak id <SPTCircularProgressViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)pause;
- (void)animateFrom:(float)arg1 to:(float)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refresh;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)applyTheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

