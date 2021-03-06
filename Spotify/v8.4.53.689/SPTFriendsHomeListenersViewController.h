//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTPageController.h"

@class NSString, NSURL, SPTFriendsHomeListenersViewModel, SPTLayoutConstraintBuilder, UITableView;

@interface SPTFriendsHomeListenersViewController : UIViewController <SPTPageController, SPContentInsetViewController>
{
    SPTFriendsHomeListenersViewModel *_viewModel;
    UITableView *_tableView;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTFriendsHomeListenersViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)buildConstraints;
- (void)buildTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

