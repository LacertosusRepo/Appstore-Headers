//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTYourLibraryMusicSearchViewControllerDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsHeaderViewModelDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GLUEButton, NSString, SPTEntityHeaderViewController, SPTTableView, SPTYourLibraryMusicGLUETheme, SPTYourLibraryMusicSearchViewController, SPTYourLibraryMusicSongsHeaderContentView;
@protocol SPTSortingFilteringUIFactory, SPTYourLibraryMusicSongsHeaderViewModel;

@interface SPTYourLibraryMusicSongsHeaderViewController : UIViewController <UITextFieldDelegate, SPTYourLibraryMusicSearchViewControllerDelegate, UIGestureRecognizerDelegate, SPTEntityHeaderContentController, SPTYourLibraryMusicSongsHeaderViewModelDelegate>
{
    id <SPTYourLibraryMusicSongsHeaderViewModel> _headerViewModel;
    SPTYourLibraryMusicGLUETheme *_theme;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    SPTYourLibraryMusicSongsHeaderContentView *_headerView;
    GLUEButton *_playButton;
    double _playButtonPadding;
    double _headerHeight;
    SPTYourLibraryMusicSearchViewController *_searchViewController;
    SPTEntityHeaderViewController *_entityHeaderViewController;
    UIViewController *_targetViewController;
    SPTTableView *_tableView;
}

@property(nonatomic) __weak SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) __weak SPTEntityHeaderViewController *entityHeaderViewController; // @synthesize entityHeaderViewController=_entityHeaderViewController;
@property(retain, nonatomic) SPTYourLibraryMusicSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double playButtonPadding; // @synthesize playButtonPadding=_playButtonPadding;
@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SPTYourLibraryMusicSongsHeaderContentView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) SPTYourLibraryMusicGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTYourLibraryMusicSongsHeaderViewModel> headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;
- (void)searchViewController:(id)arg1 removedFilterAtIndex:(long long)arg2;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)searchViewController:(id)arg1 textDidChange:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)applyThemeLayout;
- (void)songsHeaderViewModelUpdated:(id)arg1;
- (void)snapTableViewToFilterBarAtTop:(id)arg1;
- (void)scrollToShowHeader;
- (void)didTapSortButton:(id)arg1;
- (void)endSearching;
- (void)startSearching;
- (void)updateFilterAndSortingVisibility;
- (void)updateBottomInsetsForShortListsIfNeeded;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (void)playAction:(id)arg1;
- (void)updatePlayButtonVisibility;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithHeaderViewModel:(id)arg1 theme:(id)arg2 sortingFilteringUIFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

