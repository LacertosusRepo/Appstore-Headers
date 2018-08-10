//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuContentViewControllerDelegate.h"
#import "SPTContextMenuTaskActionDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTThemableViewLayoutDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, NSArray, NSString, NSURL, SPTTableView, UIImage, UIView, UIView<SPTContextMenuHeader>;

@interface SPTContextMenuViewControllerIPad : UIViewController <SPTImageLoaderDelegate, UITableViewDataSource, UITableViewDelegate, SPTThemableViewLayoutDelegate, SPTNavigationControllerNavigationBarState, SPTContextMenuContentViewControllerDelegate, SPTContextMenuTaskActionDelegate, SPTPageController>
{
    id <SPTContextMenuViewControllerIPadDelegate> _delegate;
    long long _contextMenuSubtitleStyle;
    UIView *_containerView;
    SPTTableView *_tableView;
    NSURL *_contextMenuHeaderImageURL;
    UIImage *_contextMenuHeaderImagePlaceholder;
    NSString *_contextMenuTitle;
    NSString *_contextMenuSubtitle;
    NSString *_contextMenuMetadataTitle;
    NSArray *_contextMenuActions;
    NSArray *_validContextMenuActions;
    UIView<SPTContextMenuHeader> *_headerView;
    CALayer *_horizontalBar;
    id <SPTImageLoader> _imageLoader;
    NSURL *_entityURL;
    NSURL *_trackURL;
}

@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(retain, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) CALayer *horizontalBar; // @synthesize horizontalBar=_horizontalBar;
@property(retain, nonatomic) UIView<SPTContextMenuHeader> *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) NSArray *validContextMenuActions; // @synthesize validContextMenuActions=_validContextMenuActions;
@property(readonly, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(copy, nonatomic) NSString *contextMenuMetadataTitle; // @synthesize contextMenuMetadataTitle=_contextMenuMetadataTitle;
@property(copy, nonatomic) NSString *contextMenuSubtitle; // @synthesize contextMenuSubtitle=_contextMenuSubtitle;
@property(copy, nonatomic) NSString *contextMenuTitle; // @synthesize contextMenuTitle=_contextMenuTitle;
@property(retain, nonatomic) UIImage *contextMenuHeaderImagePlaceholder; // @synthesize contextMenuHeaderImagePlaceholder=_contextMenuHeaderImagePlaceholder;
@property(retain, nonatomic) NSURL *contextMenuHeaderImageURL; // @synthesize contextMenuHeaderImageURL=_contextMenuHeaderImageURL;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long contextMenuSubtitleStyle; // @synthesize contextMenuSubtitleStyle=_contextMenuSubtitleStyle;
@property(nonatomic) __weak id <SPTContextMenuViewControllerIPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)updateValidActionsAndReloadViewIfNeeded;
- (void)contextMenuTaskActionDidUpdate:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)themableViewDidUpdateLayout:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)contentViewControllerDidComplete:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)actionForRow:(unsigned long long)arg1;
- (unsigned long long)numberOfActions;
- (_Bool)updateValidContextMenuActions;
- (void)configureContextMenuActions:(id)arg1;
- (double)preferredContainerViewHeight;
- (void)updateSeparatorInsetForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 actions:(id)arg6 entityURL:(id)arg7 trackURL:(id)arg8 imageLoader:(id)arg9 senderView:(id)arg10;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 tasks:(id)arg6 entityURL:(id)arg7 trackURL:(id)arg8 imageLoader:(id)arg9 senderView:(id)arg10;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 entityURL:(id)arg6 trackURL:(id)arg7 imageLoader:(id)arg8 senderView:(id)arg9;
- (id)initWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

