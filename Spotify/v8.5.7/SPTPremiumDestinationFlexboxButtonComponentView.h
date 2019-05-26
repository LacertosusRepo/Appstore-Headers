//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"

@class GLUEButton, SPTPremiumDestinationFlexboxButtonStyle, SPTPremiumDestinationGLUETheme;
@protocol EXP_HUBComponentEventHandler;

@interface SPTPremiumDestinationFlexboxButtonComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTPremiumDestinationGLUETheme *_theme;
    SPTPremiumDestinationFlexboxButtonStyle *_style;
    GLUEButton *_button;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SPTPremiumDestinationFlexboxButtonStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

