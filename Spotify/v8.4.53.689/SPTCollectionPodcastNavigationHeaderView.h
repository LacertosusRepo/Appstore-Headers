//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTCollectionPodcastOverviewNavigationViewModel, UITableView;

@interface SPTCollectionPodcastNavigationHeaderView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    SPTCollectionPodcastOverviewNavigationViewModel *_viewModel;
    id <SPTCollectionLogger> _logger;
    id <SPTLinkDispatcher> _linkDispatcher;
    UITableView *_tableView;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTCollectionPodcastOverviewNavigationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)URI;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)heightForHeaderView;
- (double)cellHeight;
- (struct CGSize)intrinsicContentSize;
- (void)setupTableView;
- (id)initWithOverViewNavigationViewModel:(id)arg1 logger:(id)arg2 linkDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

