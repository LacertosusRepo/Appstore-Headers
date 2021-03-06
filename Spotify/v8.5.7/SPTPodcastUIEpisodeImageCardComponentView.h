//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTPodcastUIEpisodeImageCardView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol EXP_HUBComponentEventHandler;

@interface SPTPodcastUIEpisodeImageCardComponentView : EXP_HUGSThemableComponentView <UIGestureRecognizerDelegate, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTPodcastUIEpisodeImageCardView *_imageCardView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) SPTPodcastUIEpisodeImageCardView *imageCardView; // @synthesize imageCardView=_imageCardView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (void)sendSelectionEvent;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (void)setMetadataWithModel:(id)arg1;
- (void)setDescriptionWithModel:(id)arg1;
- (void)setTitleWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 style:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

