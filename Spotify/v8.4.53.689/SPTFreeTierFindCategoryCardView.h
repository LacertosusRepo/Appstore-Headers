//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents.h"
#import "EXP_HUBComponentViewWithImageHandling.h"
#import "GLUEThemeObserver.h"

@class GLUEImageView, GLUELabel;

@interface SPTFreeTierFindCategoryCardView : EXP_HUBComponentView <GLUEThemeObserver, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    GLUEImageView *_backgroundView;
    GLUELabel *_titleLabel;
}

@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)didTapView;
- (void)setupView;
- (void)setupGestureRecognizer;
- (void)setupViewConstraints;
- (void)setupTitleLabel;
- (void)setupBackgroundView;
- (void)configureWithModel:(id)arg1;
- (void)themeUpdated:(id)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

