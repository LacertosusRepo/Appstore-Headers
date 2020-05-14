//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GLUEImageView, GLUELabel, HUBComponentEvent, NSString, UITapGestureRecognizer;
@protocol GLUETheme, HUBComponentEventHandler;

@interface SPTFreeTierUIServiceVoiceComponentView : HUBComponentView <UIGestureRecognizerDelegate, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> eventHandler;
    id <GLUETheme> _theme;
    GLUEImageView *_iconView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    HUBComponentEvent *_tapEvent;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)subtitleLabelStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (id)titleLabelStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (double)labelHeightForContainerViewSize:(struct CGSize)arg1 labelContent:(id)arg2 labelStyle:(id)arg3 theme:(id)arg4;
+ (double)heightForViewFromContainerViewSize:(struct CGSize)arg1 labelHeight:(double)arg2 theme:(id)arg3;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) HUBComponentEvent *tapEvent; // @synthesize tapEvent=_tapEvent;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void).cxx_destruct;
- (void)sendTapEvent;
- (void)setupGestureRecognizers;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)configureSubtitleLabelWithModel:(id)arg1 subtitleLabelStyle:(id)arg2;
- (void)configureTitleLabelWithModel:(id)arg1 titleLabelStyle:(id)arg2;
- (void)configureWithModel:(id)arg1;
- (void)setUpConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

