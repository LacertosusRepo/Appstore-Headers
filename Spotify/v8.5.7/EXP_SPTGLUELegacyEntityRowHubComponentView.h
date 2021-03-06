//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"
#import "EXP_HUGSSelectableComponentView-Protocol.h"
#import "EXP_SPTHubSwipeableTableViewCellComponentView-Protocol.h"

@class NSString, SPTGLUELegacyCalendarView, SPTSwipeableTableViewCell, SPTTableViewCell, UIGestureRecognizer, UILabel, UIView;
@protocol EXP_HUBComponentEventHandler, EXP_HUGSStyleOverrider;

@interface EXP_SPTGLUELegacyEntityRowHubComponentView : EXP_HUGSThemableComponentView <EXP_SPTHubSwipeableTableViewCellComponentView, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUGSSelectableComponentView>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    UILabel *_prefixLabel;
    SPTGLUELegacyCalendarView *_calendarView;
    UIGestureRecognizer *_selectionGestureRecognizer;
    SPTTableViewCell *_cell;
    id <EXP_HUGSStyleOverrider> _styleOverrider;
}

@property(readonly, nonatomic) id <EXP_HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
@property(readonly, nonatomic) SPTTableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)configureSubtitleAccessoryViewForCell:(id)arg1 model:(id)arg2;
- (struct CGSize)imageSize;
- (long long)accessoryLabelTypeForLabelText:(id)arg1 subtitle:(id)arg2;
- (void)handleContextMenuButtonTap:(id)arg1;
- (void)sendSelectionEvent;
- (void)selectionGestureRecognizerChangedState:(id)arg1;
- (id)styleForModel:(id)arg1;
- (void)applyThemeLayout;
@property(readonly, nonatomic) SPTGLUELegacyCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(readonly, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(readonly, nonatomic) UIView *selectionView;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;
@property(readonly, nonatomic) SPTSwipeableTableViewCell *tableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

