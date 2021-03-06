//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithChildren.h"
#import "EXP_HUBComponentViewWithImageHandling.h"

@class CCColorCube, GLUEGradientView, NSArray, UIStackView;

@interface SPTFreeTierUIServiceOnDemandContainerComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithChildren, EXP_HUBComponentViewWithImageHandling>
{
    id <EXP_HUBComponentViewChildDelegate> childDelegate;
    UIStackView *_stackView;
    NSArray *_childComponentViews;
    GLUEGradientView *_backgroundGradientView;
    CCColorCube *_colorCube;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) CCColorCube *colorCube; // @synthesize colorCube=_colorCube;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) NSArray *childComponentViews; // @synthesize childComponentViews=_childComponentViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (id)createBackgroundGradientView;
- (void)removeChildComponentView:(id)arg1;
- (void)addChildComponentView:(id)arg1;
- (id)createStackView;
- (void)setupChildComponentsForModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

