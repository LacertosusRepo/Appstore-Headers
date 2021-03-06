//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SPTThemableView.h"

@class GLUEPressedViewAnimator, NSMutableDictionary, NSString;

@interface SPTPlaylistExtenderRefreshButton : UIButton <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSMutableDictionary *_iconStates;
    NSMutableDictionary *_backgroundColorStates;
    GLUEPressedViewAnimator *_pressedAnimator;
}

@property(retain, nonatomic) GLUEPressedViewAnimator *pressedAnimator; // @synthesize pressedAnimator=_pressedAnimator;
@property(retain, nonatomic) NSMutableDictionary *backgroundColorStates; // @synthesize backgroundColorStates=_backgroundColorStates;
@property(retain, nonatomic) NSMutableDictionary *iconStates; // @synthesize iconStates=_iconStates;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)applySize;
- (void)applyInsets;
- (void)applyStyle;
- (void)stopSyncAnimation;
- (void)startSyncAnimation;
- (void)bounce;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setIcon:(long long)arg1 title:(id)arg2 forState:(unsigned long long)arg3;
- (void)setIcon:(long long)arg1 forState:(unsigned long long)arg2;
- (long long)iconForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

