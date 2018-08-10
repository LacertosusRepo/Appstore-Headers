//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTUserDefaultsObserver.h"

@class NSMutableArray, NSString, YTAutonavHeaderView, YTIShelfRenderer, YTShelfCell;

@interface YTShelfSectionController : YTInnerTubeSectionController <YTUserDefaultsObserver>
{
    YTShelfCell *_shelfCell;
    YTAutonavHeaderView *_autonavHeaderView;
    NSMutableArray *_thumbnailControllers;
    _Bool _removingSpacerCell;
    NSMutableArray *_spacerCellEntries;
    _Bool _forceExpand;
    id <YTServices> _services;
    id <MDXServices> _mdxServices;
    NSString *_expandedText;
    NSString *_collapsedText;
    long long _numberOfColumnsHorizontal;
    _Bool _visibilityUpdated;
    _Bool _expanded;
    YTIShelfRenderer *_shelfRenderer;
}

@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) YTIShelfRenderer *shelfRenderer; // @synthesize shelfRenderer=_shelfRenderer;
@property(readonly, nonatomic) _Bool visibilityUpdated; // @synthesize visibilityUpdated=_visibilityUpdated;
- (void).cxx_destruct;
- (void)didToggleAutoplay;
- (unsigned long long)maxItemCount;
- (void)expand;
- (_Bool)shouldDisplayShowAllButton;
- (_Bool)shouldDisplayMoreButton;
- (_Bool)isExpandable;
- (_Bool)hasElementRenderer;
- (CDUnknownBlockType)nodeBlockForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)loadThumbnails;
- (_Bool)hasOverflowButton;
- (id)autonavHeaderView;
- (id)shelfHeaderView;
- (long long)numberOfColumnsMaxHorizontal;
- (void)clearSpacerCells;
- (void)setupSpacerCells;
- (long long)numberOfColumnsHorizontal;
- (id)expandCell;
- (_Bool)handleRemoveEntryEvent:(id)arg1;
- (void)showOverflowMenu:(id)arg1;
- (void)navigateToShowAllEndpoint;
- (void)navigateToShelfEndpoint;
- (void)valueDidChangeForKey:(id)arg1;
- (CDStruct_90e057aa)constrainedSizeForNodeAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)updateHeader:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (struct UIEdgeInsets)insetWithInset:(struct UIEdgeInsets)arg1;
- (struct CGSize)sizeForCellController:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)restoreWithSelf:(id)arg1;
- (_Bool)shouldReloadOnBoundsChange;
- (void)didRemoveEntriesAtIndices:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (id)model;
- (id)paramsForSectionRenderer;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (int)numberOfGridColumns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

