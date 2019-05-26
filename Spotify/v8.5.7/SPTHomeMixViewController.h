//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTBarButtonItemManagerObserver-Protocol.h"
#import "SPTHomeMixTrackCellDelegate-Protocol.h"
#import "SPTHomeMixViewModelDelegate-Protocol.h"
#import "SPTHomeMixWelcomeViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class GLUELabel, NSArray, NSLayoutConstraint, NSString, NSURL, SPTEntityHeaderViewController, SPTHomeMixGlueTheme, SPTHomeMixHeaderActionButton, SPTHomeMixHeaderContentViewController, SPTHomeMixHeaderViewModel, SPTHomeMixTrackCellConfigurator, SPTHomeMixViewModel, UIBarButtonItem, UICollectionView, UILayoutGuide;
@protocol GLUEImageLoader, SPTBarButtonItemManager, SPTContextMenuActionsProvider, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTFreeTierTooltipConditionalPresenter, SPTPageContainer, SPTSlateBuilderProvider, SPTSlateManager, SPTSnackbarConditionalPresenter;

@interface SPTHomeMixViewController : UIViewController <SPTHomeMixTrackCellDelegate, SPContentInsetViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTNavigationControllerNavigationBarState, SPTBarButtonItemManagerObserver, SPTHomeMixWelcomeViewControllerDelegate, SPTPageController, SPTHomeMixViewModelDelegate>
{
    _Bool _showWelcomeTooltipOnNextViewDidAppear;
    SPTHomeMixViewModel *_viewModel;
    SPTHomeMixGlueTheme *_theme;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _contextMenuActionsProvider;
    id <SPTSnackbarConditionalPresenter> _snackBarPresenter;
    id <SPTFreeTierTooltipConditionalPresenter> _toolTipPresenter;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    UILayoutGuide *_mainContentLayoutGuide;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    NSArray *_globalRightNavigationBarButtonItems;
    NSArray *_localRightNavigationBarButtonItems;
    SPTHomeMixHeaderActionButton *_heartButton;
    UICollectionView *_tracklistCollectionView;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    SPTHomeMixTrackCellConfigurator *_trackCellConfigurator;
    SPTHomeMixHeaderViewModel *_headerViewModel;
    SPTHomeMixHeaderContentViewController *_headerContentViewController;
    SPTEntityHeaderViewController *_entityHeaderViewController;
    GLUELabel *_emptyTracklistLabel;
    UIBarButtonItem *_contextMenuBarButton;
}

@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButton; // @synthesize contextMenuBarButton=_contextMenuBarButton;
@property(retain, nonatomic) GLUELabel *emptyTracklistLabel; // @synthesize emptyTracklistLabel=_emptyTracklistLabel;
@property(nonatomic, getter=shouldShowWelcomeTooltipOnNextViewDidAppear) _Bool showWelcomeTooltipOnNextViewDidAppear; // @synthesize showWelcomeTooltipOnNextViewDidAppear=_showWelcomeTooltipOnNextViewDidAppear;
@property(nonatomic) __weak SPTEntityHeaderViewController *entityHeaderViewController; // @synthesize entityHeaderViewController=_entityHeaderViewController;
@property(retain, nonatomic) SPTHomeMixHeaderContentViewController *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(retain, nonatomic) SPTHomeMixHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) SPTHomeMixTrackCellConfigurator *trackCellConfigurator; // @synthesize trackCellConfigurator=_trackCellConfigurator;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint; // @synthesize collectionViewBottomConstraint=_collectionViewBottomConstraint;
@property(readonly, nonatomic) __weak UICollectionView *tracklistCollectionView; // @synthesize tracklistCollectionView=_tracklistCollectionView;
@property(retain, nonatomic) SPTHomeMixHeaderActionButton *heartButton; // @synthesize heartButton=_heartButton;
@property(copy, nonatomic) NSArray *localRightNavigationBarButtonItems; // @synthesize localRightNavigationBarButtonItems=_localRightNavigationBarButtonItems;
@property(copy, nonatomic) NSArray *globalRightNavigationBarButtonItems; // @synthesize globalRightNavigationBarButtonItems=_globalRightNavigationBarButtonItems;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) UILayoutGuide *mainContentLayoutGuide; // @synthesize mainContentLayoutGuide=_mainContentLayoutGuide;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> toolTipPresenter; // @synthesize toolTipPresenter=_toolTipPresenter;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackBarPresenter; // @synthesize snackBarPresenter=_snackBarPresenter;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionsProvider; // @synthesize contextMenuActionsProvider=_contextMenuActionsProvider;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTHomeMixViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)homeMixTrackCellFacePileTapped:(id)arg1 fromView:(id)arg2;
- (void)homeMixTrackCellContextMenuTapped:(id)arg1 fromView:(id)arg2;
- (void)updateContentInsetForShortPlaylists;
- (void)homeMixViewModel:(id)arg1 didRequireWelcome:(id)arg2;
- (void)homeMixViewModel:(id)arg1 didUpdateLikeStatus:(_Bool)arg2;
- (void)homeMixViewModelUpdateTrackDisplay:(id)arg1;
- (void)homeMixViewModel:(id)arg1 didLoadHeaderData:(id)arg2;
- (void)homeMixViewModel:(id)arg1 didUpdateTracks:(id)arg2;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (void)presentExplicitOptOutChange:(_Bool)arg1;
- (void)presentHomeMixMembershipChange:(_Bool)arg1;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (void)mergeNavigationBarItems;
- (void)setupNavigationItemsIfNeeded;
- (id)userToggleAction;
- (id)genresPageAction;
- (id)homeMixOptOutContextMenuAction;
- (id)explicitOptOutContextMenuAction;
- (void)handleContextMenuButtonTapped:(id)arg1;
- (void)handleHeartButtonTapped:(id)arg1;
- (id)safeAreaLayoutGuide;
- (void)attachHeader;
- (void)setupHeader;
- (void)setupEmptyTracklistLabel;
- (void)setupCollectionView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)showTooltipForContextMenu;
- (void)showFacepileDetailForTrackModel:(id)arg1;
- (void)showUserTogglePageWithModel:(id)arg1;
- (void)didShowWelcomePage:(id)arg1;
- (void)showWelcomScreenWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 glueImageLoader:(id)arg3 contextMenuOptionsFactory:(id)arg4 contextMenuPresenterFactory:(id)arg5 contextMenuActionsProvider:(id)arg6 barButtonItemManager:(id)arg7 snackBarPresenter:(id)arg8 toolTipPresenter:(id)arg9 slateManager:(id)arg10 slateBuilderProvider:(id)arg11 mainContentLayoutGuide:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
