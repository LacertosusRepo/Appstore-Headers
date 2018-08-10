//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTBarButtonItemManagerObserver.h"
#import "SPTContextMenuViewControllerDelegate.h"
#import "SPTEntityHeaderBarButtonItemsProtocol.h"
#import "SPTEntityTableHeaderViewDelegate.h"
#import "SPTExplicitContentEnabledStateObserver.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTInstrumentationInteractionMediatorColleague.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTOfflineSwitchDelegate.h"
#import "SPTOnDemandUpsellProtocol.h"
#import "SPTPageController.h"
#import "SPTPlayerObserver.h"
#import "SPTPlaylistActionDelegate.h"
#import "SPTPlaylistAdditionalSectionDelegate.h"
#import "SPTPlaylistInfoViewContainerDelegate.h"
#import "SPTPlaylistMetadataViewDelegate.h"
#import "SPTPlaylistTrackCellConfiguratorDelegate.h"
#import "SPTPlaylistViewModelDelegate.h"
#import "SPTProductStateObserver.h"
#import "SPTShareScreenshotObserverManagerDataSource.h"
#import "SPTShareableContext.h"
#import "SPTThemableViewLayoutDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class GLUEButton, NSDictionary, NSLayoutConstraint, NSString, NSURL, SPTEntityTableHeaderView, SPTLayoutConstraintBuilder, SPTNetworkConnectivityController, SPTPlayInsteadViewModel, SPTPlayerState, SPTPlaylistHeaderActionBarView, SPTPlaylistLogger, SPTPlaylistMetadataViewImplementation, SPTPlaylistSortMenuButton, SPTPlaylistTestManager, SPTPlaylistTrackCellConfigurator, SPTProgressView, SPTSearchBar, SPTShareScreenshotObserverManager, SPTTableViewOfflineSwitchCell, UIAlertAction, UIAlertController, UIBarButtonItem, UIButton, UILabel, UIView, UIView<SPTPlaylistInfoViewProtocol>;

@interface PlaylistViewController : SPTableViewController <UISearchBarDelegate, UITextFieldDelegate, SPContentInsetViewController, SPTPlaylistMetadataViewDelegate, SPTNavigationControllerNavigationBarState, SPTPlaylistActionDelegate, SPTPlaylistAdditionalSectionDelegate, SPTImageLoaderDelegate, SPTThemableViewLayoutDelegate, SPTEntityTableHeaderViewDelegate, SPTContextMenuViewControllerDelegate, SPTOfflineModeStateObserver, SPTProductStateObserver, SPTOfflineSwitchDelegate, SPTOnDemandUpsellProtocol, SPTBarButtonItemManagerObserver, SPTPlaylistInfoViewContainerDelegate, SPTEntityHeaderBarButtonItemsProtocol, SPTPlayerObserver, SPTInstrumentationInteractionMediatorColleague, SPTShareScreenshotObserverManagerDataSource, SPTShareableContext, SPTExplicitContentEnabledStateObserver, SPTPlaylistViewModelDelegate, SPTPageController, SPTPlaylistTrackCellConfiguratorDelegate>
{
    _Bool _hasSetupContentOffset;
    _Bool _viewLoaderDidLoadEvent;
    _Bool _ignoreNextContextTracksUpdate;
    _Bool _cachedOfflineState;
    _Bool _tableViewNeedsReload;
    _Bool _viewDidAppear;
    _Bool _showsAvailableOfflineRow;
    _Bool _lastShuffleMode;
    _Bool _entityHeaderScrollUpdatesEnabled;
    _Bool _filterActive;
    _Bool _waitingForAnimationToEnd;
    _Bool _viewDidLayoutSubviews;
    _Bool _allowsScreenshots;
    _Bool _filterBarActive;
    id <SPTPlaylistViewModel> _viewModel;
    SPTPlayInsteadViewModel *_playInsteadViewModel;
    SPTPlaylistTestManager *_testManager;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTUpsellManager> _upsellManager;
    id <SPTOnDemandUpsell> _onDemandUpsell;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    SPTEntityTableHeaderView *_entityHeaderView;
    SPTPlaylistHeaderActionBarView *_headerActionBar;
    GLUEButton *_followButton;
    UIBarButtonItem *_likeBarButtonItem;
    SPTSearchBar *_filterField;
    UIView *_filterAndSortContainer;
    SPTPlaylistSortMenuButton *_sortContextMenuButton;
    UIButton *_filterCancelButton;
    SPTProgressView *_progressView;
    UIView<SPTPlaylistInfoViewProtocol> *_infoView;
    SPTPlaylistMetadataViewImplementation *_metadataView;
    UILabel *_playlistOwnerLabel;
    SPTLayoutConstraintBuilder *_filterAndSortLayout;
    NSLayoutConstraint *_filterAndSortContainerWidthContraint;
    id <SPTImageLoader> _imageLoader;
    SPTPlaylistLogger *_playlistLogger;
    id <SPTPlaylistAdditionalSection> _additionalSection;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuOptions> _contextMenuOptions;
    UIAlertController *_playlistRenameAlertController;
    UIAlertAction *_renameAction;
    id <SPTProductState> _productState;
    double _tableViewRowHeight;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTPlayer> _player;
    id <SPTSponsoredContextViewModel> _sponsoredContextProtocol;
    id <SPTAdsManager> _adsManager;
    SPTNetworkConnectivityController *_networkConnectivityController;
    NSURL *_currentPlaylistImageURL;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <PlaylistFeature> _playlistFeature;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <SPTSpotlightIndex> _spotlightIndexRegistry;
    id <SPTCollectionLogger> _logger;
    NSDictionary *_expectedSectionCounts;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTInstrumentationMapper> _intentMapper;
    NSURL *_autotrialTrackURL;
    SPTPlayerState *_previousState;
    id <SPTShareFeature> _shareFeature;
    SPTShareScreenshotObserverManager *_screenshotShareObserverManager;
    id <SPTModalPresentationController> _modalPresentationController;
    CDUnknownBlockType _whenViewModelLoaded;
    id <SPTViewLogger> _viewLogger;
    id <GLUETheme> _theme;
    SPTPlaylistTrackCellConfigurator *_cellConfigurator;
    id <SPTShelves> _shelves;
}

@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(retain, nonatomic) SPTPlaylistTrackCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(nonatomic) _Bool filterBarActive; // @synthesize filterBarActive=_filterBarActive;
@property(copy, nonatomic) CDUnknownBlockType whenViewModelLoaded; // @synthesize whenViewModelLoaded=_whenViewModelLoaded;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) _Bool allowsScreenshots; // @synthesize allowsScreenshots=_allowsScreenshots;
@property(retain, nonatomic) SPTShareScreenshotObserverManager *screenshotShareObserverManager; // @synthesize screenshotShareObserverManager=_screenshotShareObserverManager;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) _Bool viewDidLayoutSubviews; // @synthesize viewDidLayoutSubviews=_viewDidLayoutSubviews;
@property(nonatomic, getter=isWaitingForAnimationToEnd) _Bool waitingForAnimationToEnd; // @synthesize waitingForAnimationToEnd=_waitingForAnimationToEnd;
@property(retain, nonatomic) SPTPlayerState *previousState; // @synthesize previousState=_previousState;
@property(retain, nonatomic) NSURL *autotrialTrackURL; // @synthesize autotrialTrackURL=_autotrialTrackURL;
@property(retain, nonatomic) id <SPTInstrumentationMapper> intentMapper; // @synthesize intentMapper=_intentMapper;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) NSDictionary *expectedSectionCounts; // @synthesize expectedSectionCounts=_expectedSectionCounts;
@property(nonatomic, getter=isFilterActive) _Bool filterActive; // @synthesize filterActive=_filterActive;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSpotlightIndex> spotlightIndexRegistry; // @synthesize spotlightIndexRegistry=_spotlightIndexRegistry;
@property(readonly, nonatomic) __weak id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(nonatomic) __weak id <PlaylistFeature> playlistFeature; // @synthesize playlistFeature=_playlistFeature;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) _Bool entityHeaderScrollUpdatesEnabled; // @synthesize entityHeaderScrollUpdatesEnabled=_entityHeaderScrollUpdatesEnabled;
@property(retain, nonatomic) NSURL *currentPlaylistImageURL; // @synthesize currentPlaylistImageURL=_currentPlaylistImageURL;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <SPTSponsoredContextViewModel> sponsoredContextProtocol; // @synthesize sponsoredContextProtocol=_sponsoredContextProtocol;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(readonly, nonatomic) double tableViewRowHeight; // @synthesize tableViewRowHeight=_tableViewRowHeight;
@property(nonatomic) _Bool lastShuffleMode; // @synthesize lastShuffleMode=_lastShuffleMode;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) UIAlertAction *renameAction; // @synthesize renameAction=_renameAction;
@property(retain, nonatomic) UIAlertController *playlistRenameAlertController; // @synthesize playlistRenameAlertController=_playlistRenameAlertController;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(nonatomic) _Bool showsAvailableOfflineRow; // @synthesize showsAvailableOfflineRow=_showsAvailableOfflineRow;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) _Bool tableViewNeedsReload; // @synthesize tableViewNeedsReload=_tableViewNeedsReload;
@property(nonatomic) _Bool cachedOfflineState; // @synthesize cachedOfflineState=_cachedOfflineState;
@property(retain, nonatomic) id <SPTPlaylistAdditionalSection> additionalSection; // @synthesize additionalSection=_additionalSection;
@property(retain, nonatomic) SPTPlaylistLogger *playlistLogger; // @synthesize playlistLogger=_playlistLogger;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool ignoreNextContextTracksUpdate; // @synthesize ignoreNextContextTracksUpdate=_ignoreNextContextTracksUpdate;
@property(retain, nonatomic) NSLayoutConstraint *filterAndSortContainerWidthContraint; // @synthesize filterAndSortContainerWidthContraint=_filterAndSortContainerWidthContraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *filterAndSortLayout; // @synthesize filterAndSortLayout=_filterAndSortLayout;
@property(nonatomic) _Bool viewLoaderDidLoadEvent; // @synthesize viewLoaderDidLoadEvent=_viewLoaderDidLoadEvent;
@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) UILabel *playlistOwnerLabel; // @synthesize playlistOwnerLabel=_playlistOwnerLabel;
@property(retain, nonatomic) SPTPlaylistMetadataViewImplementation *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) UIView<SPTPlaylistInfoViewProtocol> *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *filterCancelButton; // @synthesize filterCancelButton=_filterCancelButton;
@property(retain, nonatomic) SPTPlaylistSortMenuButton *sortContextMenuButton; // @synthesize sortContextMenuButton=_sortContextMenuButton;
@property(retain, nonatomic) UIView *filterAndSortContainer; // @synthesize filterAndSortContainer=_filterAndSortContainer;
@property(retain, nonatomic) SPTSearchBar *filterField; // @synthesize filterField=_filterField;
@property(retain, nonatomic) UIBarButtonItem *likeBarButtonItem; // @synthesize likeBarButtonItem=_likeBarButtonItem;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SPTPlaylistHeaderActionBarView *headerActionBar; // @synthesize headerActionBar=_headerActionBar;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTOnDemandUpsell> onDemandUpsell; // @synthesize onDemandUpsell=_onDemandUpsell;
@property(retain, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) SPTPlaylistTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTPlayInsteadViewModel *playInsteadViewModel; // @synthesize playInsteadViewModel=_playInsteadViewModel;
@property(retain, nonatomic) id <SPTPlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)provideContextMenuOptions;
- (void)cellConfiguratorTableViewNeedsReload;
- (void)cellConfiguratorTrailingAccessoryButtonTapped:(id)arg1 inCell:(id)arg2;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)doWhenViewModelLoaded:(CDUnknownBlockType)arg1;
- (void)mediator:(id)arg1 requiresDataForBuilder:(id)arg2 forInteractionInformation:(id)arg3;
- (_Bool)shouldShowScreenshotBannerWithObserverManager:(id)arg1;
- (id)shareDataForScreenshotObserverManager:(id)arg1 image:(id)arg2;
- (void)updateUserActivityState:(id)arg1 withThumbnailImage:(id)arg2;
- (void)updateUserActivityState:(id)arg1;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)additionalSectionIndex;
- (_Bool)isAdditionalSection:(long long)arg1;
- (_Bool)isAdditionalCellProviderSection:(long long)arg1;
- (unsigned long long)numberOfSectionsBeforeDefaultTrackSection;
- (unsigned long long)numberOfDefaultSections;
- (void)additionaSection:(id)arg1 reloadCell:(id)arg2 animated:(_Bool)arg3;
- (struct CGRect)boundsForAdditionalSection:(id)arg1;
- (id)visibleCellsInSection:(id)arg1 andIndexes:(id *)arg2;
- (void)scrollIntoAdditionalSection:(id)arg1 withVerticalOffset:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollIntoAdditionalSection:(id)arg1;
- (struct CGRect)rectForAdditionalSection;
- (void)playlistAdditionalSectionDidUpdate:(id)arg1;
- (void)playlistAdditionalSectionWillMoveItemToMainSectionFromIndex:(long long)arg1;
- (_Bool)playlistAdditionalSectionCanMoveItemToMainSectionFromIndex:(long long)arg1;
- (_Bool)isAdditionalSectionActive;
- (id)playlistAdditionalSectionContainingTableView;
- (void)endTableUpdates;
- (void)beginTableUpdates;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)contextMenuViewControllerDidDismiss:(id)arg1;
- (void)entityTableHeaderView:(id)arg1 didScrollToPageNumber:(long long)arg2;
- (void)entityTableHeaderViewImageViewDidReceiveTap:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)freezeTableLayoutWithSectionDeltas:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)cellItemForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)allTracksLoaded;
- (id)URL;
- (id)URI;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showPlaylistStateActionProgressViewWithCustomIcon:(long long)arg1 title:(id)arg2;
- (void)togglePublicPlaylistStateWithAction:(id)arg1;
- (void)toggleCollaborativeStateWithAction:(id)arg1;
- (void)removePlaylist;
- (void)removePlaylistWithAction:(id)arg1;
- (void)addPlaylistToQueue;
- (void)playlistActionWasTriggered:(id)arg1;
- (void)playlistMetadataView:(id)arg1 ownerViewTapped:(id)arg2 isOwnerName:(_Bool)arg3;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)preferredNavigationBarState;
- (void)updateNavigationBarState;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)playTrackOnDemandFromAutoTrial;
- (id)currentContextURI;
- (void)defaultShuffleBounceFromOnDemand;
- (void)triggerAutoTrialOverlayFromOnDemand;
- (void)shufflePlayAndUpsellFromOnDemand;
- (void)shufflePlayFromOnDemand;
- (id)cellItemStateForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)displayLoadingHeaderForSection:(long long)arg1;
- (_Bool)isMainSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (_Bool)showHeaderForSection:(long long)arg1;
- (_Bool)showIncludesMFTHeaderForSection:(long long)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (_Bool)isPlayInsteadHeaderVisible;
- (_Bool)shouldShowPlayInsteadHeaderButton;
- (_Bool)shouldCollapseHeaderAutomatically;
- (_Bool)shouldAddRadioContextAction;
- (id)radioActionFromContextMenuFactory:(id)arg1 logContext:(id)arg2;
- (void)configureRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)setupEntityHeaderViewMetadataText;
- (void)setupEntityHeaderViewSubviews;
- (void)resetEntityHeaderViewWithSize:(long long)arg1;
- (id)setupEntityHeaderViewWithSize:(long long)arg1;
- (void)resetEntityHeaderTopView;
- (void)reloadTableViewIfNeeded;
- (void)setTableViewNeedsReload;
- (void)dismissFilterInterfaceForced:(_Bool)arg1;
- (void)dismissFilterInterface;
- (void)forcedDismissFilterInterface;
- (id)playlistOwnerName;
- (id)createPlaylistOwnerLabel;
- (void)hideInfoView;
- (void)showInfoView;
- (void)updateInfoViewWithLoadingError;
- (void)updateInfoView;
- (_Bool)doesAdditionalSectionSupportInfoView;
- (void)updateOfflineInfoView;
- (void)unfollowAndPopViewController;
- (void)editDoneButtonTapped;
- (void)mainContextMenuButtonTapped:(id)arg1;
- (void)sortContextButtonTapped:(id)arg1;
- (_Bool)shouldUpdateTopMostNavigationItem;
- (void)configureEditButtonAnimated:(_Bool)arg1;
- (void)updateEditBarButtonAnimated:(_Bool)arg1;
- (void)playButtonTapped;
- (void)toggleFollowingView:(_Bool)arg1;
- (void)togglePlaylistFollowState:(_Bool)arg1 forFollowButton:(id)arg2;
- (void)followButtonTapped:(id)arg1;
- (void)updateCellTitleColors;
- (id)createFilterField;
- (void)addFilterAndSortConstraints;
- (id)createFilterAndSortBarWithFrame:(struct CGRect)arg1;
- (_Bool)swipeGestureIsActive;
- (void)makeOfflineSectionVisible;
- (_Bool)filterWithCancelButtonIsActive;
- (void)updateMetaDataViewProfilePicture;
- (void)setupRightBarButtonItems;
- (void)configureIntentMapper:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)showFilterViewSearchBar:(id)arg1 theme:(id)arg2 frame:(struct CGRect)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)playlistViewModelError:(id)arg1;
- (void)playlistViewModelDidRemovePlaylist;
- (void)playlistViewModel:(id)arg1 followStateDidChange:(_Bool)arg2;
- (void)playlistViewModel:(id)arg1 availableOfflineChanged:(_Bool)arg2;
- (void)playlistViewModelSponsorshipDidChange:(id)arg1;
- (void)playlistViewModelMetadataDidChange:(id)arg1;
- (void)playlistViewModelNowPlayingTrackDidChange:(id)arg1;
- (void)updateTracksRelatedViewsExceptTableView;
- (void)updateViewsExceptTableView;
- (void)playlistViewModelTracksDidChange:(id)arg1;
- (void)playlistViewModelContextDidLoad:(id)arg1;
- (void)updatePlaylistImageWithForcedUpdate:(_Bool)arg1;
- (double)bottomInsetAdjustedForBottomBarAndFewTracks;
- (void)sp_updateContentInsets;
- (void)applyThemeLayout;
- (void)updateViewConstraints;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)refreshCollapsedState;
- (void)refreshShuffleMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlaylistViewModel:(id)arg1 playerQueue:(id)arg2 player:(id)arg3 contextMenuFeature:(id)arg4 navigationRouter:(id)arg5 imageLoader:(id)arg6 playlistLogger:(id)arg7 offlineNotifier:(id)arg8 productState:(id)arg9 bannerPresentationManager:(id)arg10 adsManager:(id)arg11 networkConnectivityController:(id)arg12 upsellManager:(id)arg13 abbaFeatureFlags:(id)arg14 additionalSection:(id)arg15 onDemandUpsell:(id)arg16 barButtonItemManager:(id)arg17 spotlightIndexRegistry:(id)arg18 logger:(id)arg19 testManager:(id)arg20 browseRedirectButtonProvider:(id)arg21 collectionTestManager:(id)arg22 intentMapper:(id)arg23 shareFeature:(id)arg24 modalPresentationController:(id)arg25 shelves:(id)arg26 explicitContentAccessManager:(id)arg27 viewLogger:(id)arg28 theme:(id)arg29;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

