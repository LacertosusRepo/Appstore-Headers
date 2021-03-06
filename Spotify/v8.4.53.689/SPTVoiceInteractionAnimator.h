//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALayerDelegate.h"

@class CAGradientLayer, NSDictionary, NSString, SPTVoiceListeningRadialGradientLayer, UIView;

@interface SPTVoiceInteractionAnimator : NSObject <CALayerDelegate>
{
    UIView *_referenceView;
    CAGradientLayer *_backgroundGradientLayer;
    CAGradientLayer *_shadeOverlayLayer;
    SPTVoiceListeningRadialGradientLayer *_radialOverlayLayer;
    NSDictionary *_behaviors;
}

@property(retain, nonatomic) NSDictionary *behaviors; // @synthesize behaviors=_behaviors;
@property(retain, nonatomic) SPTVoiceListeningRadialGradientLayer *radialOverlayLayer; // @synthesize radialOverlayLayer=_radialOverlayLayer;
@property(retain, nonatomic) CAGradientLayer *shadeOverlayLayer; // @synthesize shadeOverlayLayer=_shadeOverlayLayer;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;
- (id)interactionBehaviorWithGradientRadius:(double)arg1 backgroundGradientLocations:(id)arg2 shadeGradientLocations:(id)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)animateToInteractionMode:(unsigned long long)arg1;
- (void)layoutGradients;
- (void)setupBackgroundGradients;
- (void)setupBehaviorsIfneeded;
- (id)initWithReferenceView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

