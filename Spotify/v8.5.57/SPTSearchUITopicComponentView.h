//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUEEntityRowStyle, GLUEEntityRowView, SPTSearchUITopicImageStyle;
@protocol HUBComponentEventHandler;

@interface SPTSearchUITopicComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUEEntityRowView *_entityRowView;
    GLUEEntityRowStyle *_rowStyle;
    SPTSearchUITopicImageStyle *_topicImageStyle;
}

+ (struct CGSize)preferredViewSizeForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
+ (id)styleForTheme:(id)arg1;
@property(copy, nonatomic) SPTSearchUITopicImageStyle *topicImageStyle; // @synthesize topicImageStyle=_topicImageStyle;
@property(copy, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(readonly, nonatomic) GLUEEntityRowView *entityRowView; // @synthesize entityRowView=_entityRowView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)configureRow;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (id)defaultImage;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

