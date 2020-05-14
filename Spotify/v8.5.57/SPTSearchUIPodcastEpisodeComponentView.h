//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class HUGSCustomViewControl, SPTSearchUIEpisodeViewStyle;
@protocol HUBComponentEventHandler;

@interface SPTSearchUIPodcastEpisodeComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    HUGSCustomViewControl *_control;
    SPTSearchUIEpisodeViewStyle *_episodeViewStyle;
}

+ (id)styleForModel:(id)arg1 theme:(id)arg2;
+ (id)accessoryIconImageForTheme:(id)arg1;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(copy, nonatomic) SPTSearchUIEpisodeViewStyle *episodeViewStyle; // @synthesize episodeViewStyle=_episodeViewStyle;
@property(readonly, nonatomic) HUGSCustomViewControl *control; // @synthesize control=_control;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)updateAlpha;
- (void)sendSelectionEvent;
- (id)episodeView;
- (void)setUpConstraints;
- (void)setUpViews;
- (void)setUpViewHierarchy;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)applyThemeLayout;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

