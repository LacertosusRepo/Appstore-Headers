//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString;

@interface SPTPartnerBannerProgressView : UIView <CAAnimationDelegate>
{
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_backgroundStrokeShapeLayer;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CAShapeLayer *backgroundStrokeShapeLayer; // @synthesize backgroundStrokeShapeLayer=_backgroundStrokeShapeLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginAnimatingWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setupLayers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

