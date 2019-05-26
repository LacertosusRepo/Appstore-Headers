//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class CAGradientLayer, NSString;

@interface GLUEGradientView : UIView <GLUEStyleable>
{
}

+ (Class)layerClass;
- (void)glue_applyStyle:(id)arg1;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;
- (void)commonSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

