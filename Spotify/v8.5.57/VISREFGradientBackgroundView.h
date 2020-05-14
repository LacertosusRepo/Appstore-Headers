//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderComponent-Protocol.h"

@class NSLayoutConstraint, NSString, VISREFGradientView;

@interface VISREFGradientBackgroundView : UIView <VISREFHeaderComponent>
{
    VISREFGradientView *_gradientView;
    double _height;
    NSLayoutConstraint *_heightConstraint;
    CDStruct_5a28e70a _normalizedFadeRange;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) CDStruct_5a28e70a normalizedFadeRange; // @synthesize normalizedFadeRange=_normalizedFadeRange;
@property(retain, nonatomic) VISREFGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void).cxx_destruct;
- (void)updateHeaderHeight:(double)arg1;
- (void)setAssociatedColor:(id)arg1 adjustBrightness:(_Bool)arg2;
- (void)headerViewNormalizedProgressUpdate:(double)arg1;
- (void)setupLayout;
- (void)setup;
- (id)initWithHeaderHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
