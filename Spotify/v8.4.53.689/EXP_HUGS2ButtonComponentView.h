//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents.h"

@class GLUEButton;

@interface EXP_HUGS2ButtonComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    GLUEButton *_button;
}

+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)buttonTapped:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

