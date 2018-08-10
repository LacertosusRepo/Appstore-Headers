//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTPageController.h"

@class GLUEEmptyStateView, NSString, NSURL, SPTTrackCreditsDataLoader, SPTTrackCreditsViewModel;

@interface SPTTrackCreditsViewController : SPTableViewController <SPTPageController>
{
    id <GLUETheme> _theme;
    NSString *_UID;
    SPTTrackCreditsDataLoader *_dataLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTTrackCreditsViewModel *_viewModel;
    GLUEEmptyStateView *_emptyStateView;
}

@property(retain, nonatomic) GLUEEmptyStateView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) SPTTrackCreditsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTTrackCreditsDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)handleAPIErrorResponse:(id)arg1;
- (void)handleAPISuccessResponse:(id)arg1;
- (void)fetchTrackCredits;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithUID:(id)arg1 dataLoader:(id)arg2 linkDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

