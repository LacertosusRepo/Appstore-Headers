//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithChildren-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEGradientView, NSArray, UIStackView;
@protocol EXP_HUBComponentViewChildDelegate, GLUETheme;

@interface SPTFreeTierUIServiceOnDemandContainerComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithChildren, EXP_HUBComponentViewWithImageHandling>
{
    id <EXP_HUBComponentViewChildDelegate> childDelegate;
    UIStackView *_stackView;
    NSArray *_childComponentViews;
    GLUEGradientView *_backgroundGradientView;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
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

