//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTDrivingModeHomeFeedPageScrollerDelegate-Protocol.h"
#import "SPTDrivingModeHomeFeedShelfViewControllerDelegate-Protocol.h"
#import "SPTDrivingModeHomeFeedViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSelfPresentingViewController-Protocol.h"

@class NSString, NSURL, SPTDrivingModeHomeFeedPageScroller, SPTDrivingModeHomeFeedTitleView, SPTDrivingModeHomeFeedViewModel, SPTDrivingModeLogger, SPTTheme, UIImpactFeedbackGenerator;
@protocol GLUEImageLoader, SPTModalPresentationController, SPTNowPlayingDurationUnitViewModel, SPTPageContainer;

@interface SPTDrivingModeHomeFeedViewController : UIViewController <SPTDrivingModeHomeFeedViewModelDelegate, SPTDrivingModeHomeFeedPageScrollerDelegate, SPTDrivingModeHomeFeedShelfViewControllerDelegate, SPTPageController, SPTSelfPresentingViewController>
{
    SPTDrivingModeHomeFeedViewModel *_viewModel;
    id <SPTNowPlayingDurationUnitViewModel> _durationViewModel;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTTheme *_theme;
    SPTDrivingModeLogger *_logger;
    id <GLUEImageLoader> _imageLoader;
    SPTDrivingModeHomeFeedTitleView *_drivingModeTitleView;
    SPTDrivingModeHomeFeedPageScroller *_pageScroller;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    unsigned long long _selectedIndex;
}

@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) SPTDrivingModeHomeFeedPageScroller *pageScroller; // @synthesize pageScroller=_pageScroller;
@property(retain, nonatomic) SPTDrivingModeHomeFeedTitleView *drivingModeTitleView; // @synthesize drivingModeTitleView=_drivingModeTitleView;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> durationViewModel; // @synthesize durationViewModel=_durationViewModel;
@property(readonly, nonatomic) SPTDrivingModeHomeFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)scrollViewHapticUpdate:(long long)arg1;
- (void)updateShelfTitleForPageIndex:(int)arg1;
- (void)loadShelfWithIndex:(int)arg1;
- (void)updatePageScrollerAtIndex:(int)arg1;
- (id)controllerForShelf:(id)arg1;
- (void)shelfItemWasTapped:(id)arg1;
- (void)viewModelDidChangeShouldShowAd:(id)arg1;
- (void)viewModelDidReload:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)onCloseButtonTap;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupPageScroller;
- (void)setupSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 durationViewModel:(id)arg2 modalPresentationController:(id)arg3 theme:(id)arg4 logger:(id)arg5 imageLoader:(id)arg6 pageScroller:(id)arg7;
- (id)initWithViewModel:(id)arg1 durationViewModel:(id)arg2 modalPresentationController:(id)arg3 theme:(id)arg4 logger:(id)arg5 imageLoader:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

