//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSArray, NSString, NSURL, SPTCollectionPodcastInfoViewProvider, SPTCollectionPodcastOverviewNavigationViewModel, SPTCollectionPodcastViewModel, SPTCollectionTableViewController, SPTInfoView, UITableView, UIView;
@protocol GLUETheme, SPTPageContainer, SPTPodcastTestManager;

@interface SPTCollectionPodcastOverviewViewController : UIViewController <SPContentInsetViewController, SPTCollectionEntityListObserver, SPTPageController>
{
    SPTCollectionPodcastOverviewNavigationViewModel *_viewModel;
    SPTCollectionTableViewController *_rootViewController;
    SPTCollectionPodcastViewModel *_collectionPodcastViewModel;
    SPTCollectionPodcastInfoViewProvider *_infoViewProvider;
    id <SPTPodcastTestManager> _podcastTestManager;
    NSArray *_layoutConstraints;
    UITableView *_tableView;
    SPTInfoView *_infoView;
    id <GLUETheme> _theme;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) SPTCollectionPodcastInfoViewProvider *infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(nonatomic) __weak SPTCollectionPodcastViewModel *collectionPodcastViewModel; // @synthesize collectionPodcastViewModel=_collectionPodcastViewModel;
@property(retain, nonatomic) SPTCollectionTableViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) SPTCollectionPodcastOverviewNavigationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
- (void)removeEmptyStateInfoView;
- (void)handleEmptyStateInfoView;
- (void)entityListDidReload:(id)arg1;
- (id)URI;
- (void)sp_updateContentInsets;
- (void)dealloc;
- (id)createLayoutConstraints;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOverViewNavigationHeaderViewFactory:(id)arg1 collectionPodcastViewModel:(id)arg2 rootViewController:(id)arg3 infoViewProvider:(id)arg4 podcastTestManager:(id)arg5;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
