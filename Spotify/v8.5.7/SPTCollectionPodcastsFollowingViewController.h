//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTCollectionPodcastInfoViewProvider, SPTCollectionPodcastViewModel, SPTCollectionTableViewController, SPTInfoView, UITableView;
@protocol GLUETheme, SPTCollectionLogger, SPTLinkDispatcher, SPTPageContainer, SPTPodcastTestManager;

@interface SPTCollectionPodcastsFollowingViewController : UIViewController <SPContentInsetViewController, SPTCollectionEntityListObserver, SPTPageController>
{
    SPTCollectionTableViewController *_rootViewController;
    SPTCollectionPodcastInfoViewProvider *_infoViewProvider;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPodcastTestManager> _podcastTestManager;
    SPTCollectionPodcastViewModel *_viewModel;
    UITableView *_tableView;
    SPTInfoView *_infoView;
    id <SPTCollectionLogger> _logger;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTCollectionPodcastViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTCollectionPodcastInfoViewProvider *infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(retain, nonatomic) SPTCollectionTableViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
- (id)URI;
- (void)removeEmptyStateInfoView;
- (void)handleEmptyStateInfoView;
- (void)entityListDidReload:(id)arg1;
- (double)cellHeight;
- (void)sp_updateContentInsets;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1 viewModel:(id)arg2 infoViewProvider:(id)arg3 logger:(id)arg4 linkDispatcher:(id)arg5 podcastTestManager:(id)arg6;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
