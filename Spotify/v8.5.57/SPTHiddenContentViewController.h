//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTHiddenContentArtistCellDelegate-Protocol.h"
#import "SPTHiddenContentTrackCellDelegate-Protocol.h"
#import "SPTHiddenContentViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEmptyStateView, GLUELabel, NSString, NSURL, SPTHiddenContentArtistCellConfigurator, SPTHiddenContentCountedLabel, SPTHiddenContentTrackCellConfigurator, SPTSegmentedControl, UITableView;
@protocol GLUETheme, SPTHiddenContentViewModel, SPTPageContainer;

@interface SPTHiddenContentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController, SPTHiddenContentTrackCellDelegate, SPTHiddenContentArtistCellDelegate, SPTPageController, SPTHiddenContentViewModelDelegate>
{
    id <SPTHiddenContentViewModel> _viewModel;
    id <GLUETheme> _theme;
    SPTSegmentedControl *_tabControl;
    SPTHiddenContentCountedLabel *_tracksCountedLabel;
    SPTHiddenContentCountedLabel *_artistsCountedLabel;
    UITableView *_tableView;
    GLUEEmptyStateView *_emptyView;
    GLUELabel *_emptyTextLabel;
    SPTHiddenContentTrackCellConfigurator *_trackCellConfigurator;
    SPTHiddenContentArtistCellConfigurator *_artistCellConfigurator;
}

@property(retain, nonatomic) SPTHiddenContentArtistCellConfigurator *artistCellConfigurator; // @synthesize artistCellConfigurator=_artistCellConfigurator;
@property(retain, nonatomic) SPTHiddenContentTrackCellConfigurator *trackCellConfigurator; // @synthesize trackCellConfigurator=_trackCellConfigurator;
@property(retain, nonatomic) GLUELabel *emptyTextLabel; // @synthesize emptyTextLabel=_emptyTextLabel;
@property(retain, nonatomic) GLUEEmptyStateView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTHiddenContentCountedLabel *artistsCountedLabel; // @synthesize artistsCountedLabel=_artistsCountedLabel;
@property(retain, nonatomic) SPTHiddenContentCountedLabel *tracksCountedLabel; // @synthesize tracksCountedLabel=_tracksCountedLabel;
@property(retain, nonatomic) SPTSegmentedControl *tabControl; // @synthesize tabControl=_tabControl;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHiddenContentViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)errorEmptyStateViewStyle;
- (id)noResultsEmptyStateViewStyle;
- (id)provideEmptyViewForCurrentlySelectedTab;
- (void)handleViewModelUpdate;
- (void)refreshArtistsIfVisible;
- (void)viewModelDidFailToRefreshArtists:(id)arg1;
- (void)viewModelDidRefreshArtists:(id)arg1;
- (void)refreshTracksIfVisible;
- (void)viewModelDidFailToRefreshTracks:(id)arg1;
- (void)viewModelDidRefreshTracks:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)hiddenContentArtistCellContextMenuTapped:(id)arg1 tappedArtistViewModel:(id)arg2;
- (void)hiddenContentTrackCellContextMenuTapped:(id)arg1 tappedTrackViewModel:(id)arg2;
- (void)hiddenContentTrackCellPreviewTapped:(id)arg1;
- (void)selectTabAtIndex:(long long)arg1 userInitiated:(_Bool)arg2;
- (void)tabControlChanged:(id)arg1;
- (void)addConstraints;
- (void)initializeInterface;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3 audioPreviewModelFactory:(id)arg4 audioPreviewUIFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

