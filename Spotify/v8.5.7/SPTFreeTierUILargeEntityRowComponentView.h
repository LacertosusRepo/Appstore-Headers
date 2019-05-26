//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEEntityRowStyle, HUGSCustomViewControl;
@protocol EXP_HUBComponentEventHandler, EXP_HUGSStyleOverrider, GLUETheme;

@interface SPTFreeTierUILargeEntityRowComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithEvents, EXP_HUBComponentViewWithImageHandling>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    HUGSCustomViewControl *_rowViewControl;
    id <EXP_HUGSStyleOverrider> _styleOverrider;
    GLUEEntityRowStyle *_style;
}

@property(retain, nonatomic) GLUEEntityRowStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <EXP_HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
@property(readonly, nonatomic) HUGSCustomViewControl *rowViewControl; // @synthesize rowViewControl=_rowViewControl;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didPress;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureLabelForStyle:(id)arg1 forState:(unsigned long long)arg2;
- (id)styleForModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (struct CGSize)imageSize;
- (void)setupConstraints;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;

@end
