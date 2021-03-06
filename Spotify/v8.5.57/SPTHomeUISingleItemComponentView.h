//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTHomeUISingleItemView, UITapGestureRecognizer;
@protocol GLUETheme, HUBComponentEventHandler, SPTPlayer;

@interface SPTHomeUISingleItemComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    id <SPTPlayer> _player;
    SPTHomeUISingleItemView *_singleItemView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) SPTHomeUISingleItemView *singleItemView; // @synthesize singleItemView=_singleItemView;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (id)theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 player:(id)arg3;

@end

