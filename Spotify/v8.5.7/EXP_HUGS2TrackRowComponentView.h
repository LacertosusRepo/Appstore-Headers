//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"
#import "EXP_SPTHubSwipeableTableViewCellComponentView-Protocol.h"

@class GLUETrackRowTableViewCell, NSString, SPTSwipeableTableViewCell;
@protocol EXP_HUBComponentEventHandler;

@interface EXP_HUGS2TrackRowComponentView : EXP_HUGSThemableComponentView <EXP_SPTHubSwipeableTableViewCellComponentView, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    GLUETrackRowTableViewCell *_trackCell;
}

+ (long long)accessoryRightIconForComponentModel:(id)arg1;
+ (_Bool)trailingButtonForComponentModel:(id)arg1;
+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUETrackRowTableViewCell *trackCell; // @synthesize trackCell=_trackCell;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)configureSubtitleAccessoryViewWithModel:(id)arg1;
- (void)configureTrailingViewWithModel:(id)arg1;
- (void)configureLeadingViewWithModel:(id)arg1;
- (long long)accessoryLabelTypeForLabel:(id)arg1;
- (id)mainImageStyleForComponentModel:(id)arg1;
- (void)handleAccessoryButtonTap:(id)arg1;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic) SPTSwipeableTableViewCell *tableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

