//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class LOTMaskContainer, LOTNumberInterpolator, LOTRenderGroup, LOTTransformInterpolator, NSDictionary, NSNumber, NSString;

@interface LOTLayerContainer : CALayer
{
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    CALayer *DEBUG_Center;
    LOTRenderGroup *_contentsGroup;
    LOTMaskContainer *_maskLayer;
    NSString *_layerName;
    NSNumber *_timeStretchFactor;
    CALayer *_wrapperLayer;
    NSDictionary *_valueInterpolators;
    struct CGRect _viewportBounds;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *valueInterpolators; // @synthesize valueInterpolators=_valueInterpolators;
@property(readonly, nonatomic) CALayer *wrapperLayer; // @synthesize wrapperLayer=_wrapperLayer;
@property(nonatomic) struct CGRect viewportBounds; // @synthesize viewportBounds=_viewportBounds;
@property(readonly, nonatomic) NSNumber *timeStretchFactor; // @synthesize timeStretchFactor=_timeStretchFactor;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
- (void).cxx_destruct;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (void)searchNodesForKeypath:(id)arg1;
- (void)displayWithFrame:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)displayWithFrame:(id)arg1;
- (void)display;
- (id)initWithLayer:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)_setImageForAsset:(id)arg1;
- (void)buildContents:(id)arg1;
- (void)commonInitializeWith:(id)arg1 inLayerGroup:(id)arg2;
- (id)initWithModel:(id)arg1 inLayerGroup:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSNumber *currentFrame; // @dynamic currentFrame;

@end

