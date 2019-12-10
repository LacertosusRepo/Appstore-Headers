//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMMiniPlayerAwareViewController.h"

#import "IMDownloadManagerDelegate-Protocol.h"
#import "IMManagerStateDelegate-Protocol.h"
#import "IMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class IMConversionState, IMLayout, IMLayoutGuide, IMTableView, IMTableViewWrapper, NSString, UIButton, UIView;

@interface IMConversionQueueController : IMMiniPlayerAwareViewController <IMManagerStateDelegate, UITableViewDataSource, IMTableViewDelegate, IMDownloadManagerDelegate>
{
    IMTableView *tableView;
    UIView *toolbar;
    IMLayoutGuide *bottomLayoutGuide;
    UIButton *showConversionFolderButton;
    IMLayout *layout;
    IMTableViewWrapper *tableViewWrapper;
    NSString *selectedItemId;
    double toolbarHeight;
    double toolbarRightMargin;
    double sectionHeaderHeight;
    double sectionHeaderSideMargin;
    double itemCellHeight;
    double noConversionCellHeight;
    double disconnectedFromServerCellHeight;
    IMConversionState *_conversionState;
}

@property(readonly, nonatomic) IMConversionState *conversionState; // @synthesize conversionState=_conversionState;
@property(nonatomic) double disconnectedFromServerCellHeight; // @synthesize disconnectedFromServerCellHeight;
@property(nonatomic) double noConversionCellHeight; // @synthesize noConversionCellHeight;
@property(nonatomic) double itemCellHeight; // @synthesize itemCellHeight;
@property(nonatomic) double sectionHeaderSideMargin; // @synthesize sectionHeaderSideMargin;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight;
@property(nonatomic) double toolbarRightMargin; // @synthesize toolbarRightMargin;
@property(nonatomic) double toolbarHeight; // @synthesize toolbarHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imDownloadManagerDownloadProgressDidChange:(id)arg1;
- (void)imDownloadManagerItemsDidChange:(id)arg1;
- (void)setValue:(_Bool)arg1 forCell:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)detailTextForItem:(id)arg1;
- (void)addUtilityViewsForCell:(id)arg1 isCurrentCell:(_Bool)arg2 willBeDownloaded:(_Bool)arg3;
- (id)disconnectedFromServerCell;
- (id)noConversionCell;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)deleteSection:(int)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)currentConversionHeaderTitle;
- (void)imManagerState:(id)arg1 didChangeValuesForKeys:(id)arg2;
- (void)imManagerStateDidDisconnect:(id)arg1;
- (void)imManagerStateDidConnect:(id)arg1;
- (id)currentConversionCell;
- (void)cancelCurrentTapped:(id)arg1 onButton:(id)arg2;
- (void)cancelTapped:(id)arg1;
- (void)stopConversion:(id)arg1 keep:(_Bool)arg2;
- (void)downloadChanged:(_Bool)arg1 forCell:(id)arg2;
- (void)update:(_Bool)arg1;
- (void)updateCurrentItemCell:(id)arg1 animated:(_Bool)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)cellForTargetItemId:(id)arg1;
- (void)viewConvertedFiles:(id)arg1;
- (id)downloadManager;
- (void)didEndDisappearanceTransition:(id)arg1;
- (void)didEndAppearanceTransition:(id)arg1;
- (void)unregister;
- (void)willBeginAppearanceTransition:(id)arg1;
- (id)alternativeBottomLayoutGuide;
- (void)layoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

