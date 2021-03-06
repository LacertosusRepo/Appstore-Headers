//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewContentOffsetObserver-Protocol.h"
#import "EXP_HUBComponentViewWithChildren-Protocol.h"
#import "EXP_HUBComponentViewWithEvents-Protocol.h"

@class SPTBrowseUIHeaderView, UIColor;
@protocol EXP_HUBComponentEventHandler, EXP_HUBComponentViewChildDelegate;

@interface SPTBrowseUIHeaderComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewContentOffsetObserver, EXP_HUBComponentViewWithChildren, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentViewChildDelegate> _childDelegate;
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTBrowseUIHeaderView *_headerView;
    UIColor *_gradientBackgroundColor;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
+ (double)preferredViewHeightForDisplayingModel:(id)arg1 theme:(id)arg2;
+ (id)buttonModelFromModel:(id)arg1;
+ (id)defaultHeaderStyleForModel:(id)arg1 theme:(id)arg2;
@property(copy, nonatomic) UIColor *gradientBackgroundColor; // @synthesize gradientBackgroundColor=_gradientBackgroundColor;
@property(readonly, nonatomic) SPTBrowseUIHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)headerButtonTapped;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

