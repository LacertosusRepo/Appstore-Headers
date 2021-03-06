//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithChildren.h"

@class GLUELabel, SPTLayoutConstraintBuilder, UIView;

@interface SPTFreeTierUIServiceBeforeOnboardingWelcomeHeaderComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithChildren>
{
    id <EXP_HUBComponentViewChildDelegate> childDelegate;
    id <GLUETheme> _theme;
    UIView *_textContainer;
    GLUELabel *_title;
    GLUELabel *_subtitle;
    EXP_HUBComponentView *_primaryActionComponentView;
    EXP_HUBComponentView *_secondaryActionComponentView;
    SPTLayoutConstraintBuilder *_layoutBuilder;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutBuilder; // @synthesize layoutBuilder=_layoutBuilder;
@property(retain, nonatomic) EXP_HUBComponentView *secondaryActionComponentView; // @synthesize secondaryActionComponentView=_secondaryActionComponentView;
@property(retain, nonatomic) EXP_HUBComponentView *primaryActionComponentView; // @synthesize primaryActionComponentView=_primaryActionComponentView;
@property(retain, nonatomic) GLUELabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) GLUELabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)setupComponentView:(id)arg1 withModel:(id)arg2 relativeToView:(id)arg3 constraint:(double)arg4;
- (void)setupChildComponentsForModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)createSubtitle;
- (id)createTitle;
- (void)setupSubtitle:(_Bool)arg1;
- (void)setupTitle:(_Bool)arg1;
- (void)setupTextContainer;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

