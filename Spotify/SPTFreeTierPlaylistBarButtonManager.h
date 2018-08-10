//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBarButtonItemManagerObserver.h"

@class NSString, SPTFreeTierPlaylistLogger, UIViewController<SPTPageController>;

@interface SPTFreeTierPlaylistBarButtonManager : NSObject <SPTBarButtonItemManagerObserver>
{
    _Bool _suspended;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTAlertController> _alertController;
    id <SPTFreeTierCreatePlaylistTestManager> _createPlaylistTestManager;
    SPTFreeTierPlaylistLogger *_logger;
    UIViewController<SPTPageController> *_viewController;
    id <SPTFreeTierPlaylistViewModel> _viewModel;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

+ (id)fixedSpaceItem;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIViewController<SPTPageController> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistTestManager> createPlaylistTestManager; // @synthesize createPlaylistTestManager=_createPlaylistTestManager;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
- (void).cxx_destruct;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)addActionWithIdentifier:(id)arg1 toActions:(id)arg2;
- (void)setupNavigationBarButtons:(_Bool)arg1;
- (void)resume;
- (void)suspend;
- (void)update;
- (void)configureWithViewController:(id)arg1 withViewModel:(id)arg2;
- (id)initWithBarButtonItemManager:(id)arg1 collectionConfiguration:(id)arg2 contextMenuService:(id)arg3 alertController:(id)arg4 createPlaylistTestManager:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

