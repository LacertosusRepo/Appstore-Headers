//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "SPTHubSwipeableTableViewCellComponentView-Protocol.h"

@class MISSING_TYPE, NSString, SPTSwipeableTableViewCell, SPTTingSwipeableTrackRow;
@protocol HUBComponentEventHandler;

@interface SPTTingTrackRowComponentView : HUGSThemableComponentView <SPTHubSwipeableTableViewCellComponentView>
{
    MISSING_TYPE *trackRowView;
    MISSING_TYPE *control;
    MISSING_TYPE *eventHandler;
}

- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
@property(nonatomic, retain) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;
@property(nonatomic, readonly) SPTTingSwipeableTrackRow *trackRowView; // @synthesize trackRowView;
@property(readonly, nonatomic) SPTSwipeableTableViewCell *tableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

