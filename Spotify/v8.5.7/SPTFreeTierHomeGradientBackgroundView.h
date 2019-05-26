//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTFreeTierHomeGradientBackgroundViewGeneratorDelegate-Protocol.h"

@class GLUEGradientView, GLUEHeaderBackgroundView, NSString, SPTFreeTierHomeGradientBackgroundViewGenerator;
@protocol GLUETheme;

@interface SPTFreeTierHomeGradientBackgroundView : UIView <SPTFreeTierHomeGradientBackgroundViewGeneratorDelegate>
{
    GLUEGradientView *_backgroundGradientView;
    GLUEHeaderBackgroundView *_backgroundOverlayView;
    id <GLUETheme> _theme;
    SPTFreeTierHomeGradientBackgroundViewGenerator *_homeGradientBackgroundViewGenerator;
}

@property(retain, nonatomic) SPTFreeTierHomeGradientBackgroundViewGenerator *homeGradientBackgroundViewGenerator; // @synthesize homeGradientBackgroundViewGenerator=_homeGradientBackgroundViewGenerator;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUEHeaderBackgroundView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
- (void).cxx_destruct;
- (void)homeGradientBackgroundViewGenerator:(id)arg1 didFindGradientColor:(id)arg2;
- (id)primaryColor;
- (void)updateHomeBackgroundgradientWithViewModel:(id)arg1;
- (void)configureConstraints;
- (void)setup;
- (id)initWithTheme:(id)arg1 imageLoaderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
