//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTAutonavPermittingPresentedViewController.h"
#import "YTNGWatchFlowViewDelegate.h"
#import "YTPageStyleProvider.h"
#import "YTResponder.h"

@class GIMMe, NSString, UIViewController<YTResponder>, YTNGWatchCollectionViewController, YTNGWatchFlowView, YTNGWatchTabletHeaderView, YTPageStyleController;

@interface YTNGWatchFlowViewController : UIViewController <YTNGWatchFlowViewDelegate, YTPageStyleProvider, YTAutonavPermittingPresentedViewController, YTResponder>
{
    YTPageStyleController *_pageStyleController;
    long long _lastPageStyle;
    YTNGWatchFlowView *_watchFlowView;
    YTNGWatchTabletHeaderView *_headerView;
    _Bool _supportLandscapeOrientation;
    _Bool _MDXEnabled;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTNGWatchFlowViewControllerDelegate> _delegate;
    UIViewController<YTResponder> *_presenter;
    YTNGWatchCollectionViewController *_collectionViewController;
}

@property(readonly, nonatomic) __weak YTNGWatchCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(readonly, nonatomic) __weak UIViewController<YTResponder> *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) _Bool MDXEnabled; // @synthesize MDXEnabled=_MDXEnabled;
@property(nonatomic) _Bool supportLandscapeOrientation; // @synthesize supportLandscapeOrientation=_supportLandscapeOrientation;
@property(nonatomic) __weak id <YTNGWatchFlowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations_iPad;
- (unsigned long long)supportedInterfaceOrientations_iPhone;
- (_Bool)isIPadVideoFlowEnabled;
@property(readonly, nonatomic) long long pageStyle;
- (double)watchFlowStatusBarHeight;
- (void)didTapMinimizeButton;
- (void)didTapMDXFauxMiniBar;
- (void)setStatusBarBackgroundVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)MDXPlaylistChangedToCurrentIndex:(unsigned long long)arg1 totalVideos:(unsigned long long)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithWatchFlowPresenter:(id)arg1 collectionViewController:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

