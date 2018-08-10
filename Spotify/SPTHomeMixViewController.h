//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTHomeMixTrackCellDelegate.h"
#import "SPTHomeMixViewModelDelegate.h"
#import "SPTPageController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, NSURL, SPTHomeMixTrackCellConfigurator, UICollectionView;

@interface SPTHomeMixViewController : UIViewController <SPTHomeMixTrackCellDelegate, SPContentInsetViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTPageController, SPTHomeMixViewModelDelegate>
{
    id <SPTHomeMixViewModel> _viewModel;
    id <GLUETheme> _theme;
    id <GLUEImageLoader> _glueImageLoader;
    UICollectionView *_tracklistCollectionView;
    SPTHomeMixTrackCellConfigurator *_trackCellConfigurator;
}

@property(retain, nonatomic) SPTHomeMixTrackCellConfigurator *trackCellConfigurator; // @synthesize trackCellConfigurator=_trackCellConfigurator;
@property(readonly, nonatomic) __weak UICollectionView *tracklistCollectionView; // @synthesize tracklistCollectionView=_tracklistCollectionView;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHomeMixViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)homeMixViewModel:(id)arg1 didUpdateTracks:(id)arg2;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)setupCollectionView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 glueImageLoader:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
