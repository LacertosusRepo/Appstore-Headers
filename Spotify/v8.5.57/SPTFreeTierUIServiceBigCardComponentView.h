//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GLUEEntityCardView, GLUELabel, HUBComponentEvent, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol GLUETheme, HUBComponentEventHandler;

@interface SPTFreeTierUIServiceBigCardComponentView : HUBComponentView <UIGestureRecognizerDelegate, HUBComponentViewWithEvents, HUBComponentViewWithImageHandling>
{
    id <HUBComponentEventHandler> eventHandler;
    id <GLUETheme> _theme;
    GLUEEntityCardView *_cardView;
    GLUELabel *_titleLabel;
    HUBComponentEvent *_tapEvent;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    UITapGestureRecognizer *_selectionGestureRecognizer;
}

+ (id)labelStyleForComponentModel:(id)arg1 theme:(id)arg2;
+ (double)labelHeightForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3 style:(id)arg4;
+ (struct CGSize)imageSizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
+ (double)heightForViewFromImageHeight:(double)arg1 labelHeight:(double)arg2;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3 style:(id)arg4;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
+ (id)attributedTitleFromModel:(id)arg1 withStyle:(id)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) HUBComponentEvent *tapEvent; // @synthesize tapEvent=_tapEvent;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEEntityCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void).cxx_destruct;
- (void)sendTapEvent;
- (void)setupGestureRecognizers;
- (void)setUpConstraints;
- (struct CGSize)preferredSizeForImagePlaceholder;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

