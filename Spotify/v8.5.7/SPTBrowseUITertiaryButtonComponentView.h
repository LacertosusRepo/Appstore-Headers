//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"

@class GLUEButton;
@protocol EXP_HUBComponentEventHandler;

@interface SPTBrowseUITertiaryButtonComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    GLUEButton *_button;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
@property(readonly, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)applyThemeLayout;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

